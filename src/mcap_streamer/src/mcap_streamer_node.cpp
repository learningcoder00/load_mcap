#include <rclcpp/rclcpp.hpp>
#include <rosbag2_cpp/reader.hpp>
#include <rosbag2_cpp/readers/sequential_reader.hpp>
#include <rosbag2_cpp/converter_options.hpp>
#include <rosbag2_storage/storage_options.hpp>
#include <rosbag2_storage/storage_filter.hpp>
#include <rclcpp/serialization.hpp>
#include <rclcpp/serialized_message.hpp>
#include <rcutils/allocator.h>
#include <rcutils/types/uint8_array.h>
#include <cstring>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <filesystem>
#include <chrono>
#include <thread>
#include <fstream>
#include <iomanip>
#include "mcap_streamer/s3_downloader.hpp"

using namespace std::chrono_literals;

class McapStreamerNode : public rclcpp::Node
{
private:
  std::unique_ptr<mcap_streamer::S3Downloader> s3_downloader_;
  std::unique_ptr<rosbag2_cpp::readers::SequentialReader> reader_;
  std::map<std::string, rclcpp::GenericPublisher::SharedPtr> publishers_;
  std::map<std::string, std::string> topic_types_;
  std::thread playback_thread_;
  double playback_rate_;
  bool loop_;
  std::string storage_id_;
  std::vector<std::string> bag_file_paths_; 

public:
  McapStreamerNode() : Node("mcap_streamer_node")
  {
    const std::string CONFIG_NOT_SET_MARKER = "__CONFIG_NOT_SET__";
    this->declare_parameter<std::string>("s3_url", CONFIG_NOT_SET_MARKER);  
    this->declare_parameter<std::vector<std::string>>("s3_urls", std::vector<std::string>());  
    this->declare_parameter<std::string>("local_cache_path", "/data/output/debug");
    this->declare_parameter<std::string>("aws_access_key_id", "");
    this->declare_parameter<std::string>("aws_secret_access_key", "");
    this->declare_parameter<std::string>("aws_region", "us-east-1");
    this->declare_parameter<std::string>("endpoint_url", "http://oss.i.machdrive.cn");  
    this->declare_parameter<double>("playback_rate", 1.0);
    this->declare_parameter<bool>("loop", false);
    this->declare_parameter<std::string>("storage_id", "mcap");

    // 获取参数
    std::string local_cache_path = this->get_parameter("local_cache_path").as_string();
    std::string aws_access_key_id = this->get_parameter("aws_access_key_id").as_string();
    std::string aws_secret_access_key = this->get_parameter("aws_secret_access_key").as_string();
    std::string aws_region = this->get_parameter("aws_region").as_string();
    std::string endpoint_url = this->get_parameter("endpoint_url").as_string();
    playback_rate_ = this->get_parameter("playback_rate").as_double();
    loop_ = this->get_parameter("loop").as_bool();
    storage_id_ = this->get_parameter("storage_id").as_string();
    
    // 获取URL列表
    std::vector<std::string> s3_urls;
    try 
    {
      if (this->has_parameter("s3_urls")) 
      {
        auto param = this->get_parameter("s3_urls");
        if (param.get_type() != rclcpp::ParameterType::PARAMETER_NOT_SET) 
        {
          try 
          {
            s3_urls = param.as_string_array();
          } 
          catch (const std::exception & e) 
          {
            RCLCPP_DEBUG(this->get_logger(), "无法解析s3_urls参数: %s", e.what());
          }
        }
      }
    } 
    catch (const std::exception & e) 
    {
      RCLCPP_DEBUG(this->get_logger(), "检查s3_urls参数时出错: %s", e.what());
    }
    
    // 如果s3_urls为空，尝试使用单个s3_url
    if (s3_urls.empty()) 
    {
      std::string s3_url = this->get_parameter("s3_url").as_string();
      if (s3_url != CONFIG_NOT_SET_MARKER && !s3_url.empty()) 
      {
        s3_urls.push_back(s3_url);
      }
    }
    
    // 检查是否有有效的URL
    if (s3_urls.empty()) 
    {
      RCLCPP_ERROR(this->get_logger(), "错误: 未找到有效的S3 URL配置。");
      return;
    }
    
    RCLCPP_INFO(this->get_logger(), "配置了 %zu 个MCAP文件", s3_urls.size());

    if (aws_access_key_id.empty() || aws_secret_access_key.empty()) 
    {
      RCLCPP_WARN(this->get_logger(), "警告: AWS 凭证未在配置文件中设置，下载可能失败。");
    }
    

    // 创建本地路径
    std::filesystem::path cache_dir(local_cache_path);
    std::filesystem::create_directories(cache_dir);

    // 创建S3下载器
    s3_downloader_ = std::make_unique<mcap_streamer::S3Downloader>();

    // 处理所有URL，下载文件并保存路径
    bag_file_paths_.clear();
    for (size_t i = 0; i < s3_urls.size(); ++i) 
    {
      const std::string & s3_url = s3_urls[i];
      RCLCPP_INFO(this->get_logger(), "处理文件 %zu/%zu: %s", i + 1, s3_urls.size(), s3_url.c_str());
      
      // 从URL提取文件名
      std::string filename = extractFilename(s3_url);
      std::string local_file_path = (cache_dir / filename).string();

      // 检查本地文件是否已存在
      bool file_exists = std::filesystem::exists(local_file_path);
      bool need_download = true;

      if (file_exists) 
      {
        auto file_size = std::filesystem::file_size(local_file_path);
        RCLCPP_INFO(this->get_logger(),"本地文件已存在: %s (大小: %zu 字节)",local_file_path.c_str(), file_size);
        
        // 如果文件大小大于0，认为文件有效，跳过下载
        if (file_size > 0) 
        {
          RCLCPP_INFO(this->get_logger(), "使用本地缓存文件，跳过下载");
          need_download = false;
        } 
        else 
        {
          RCLCPP_WARN(this->get_logger(), "本地文件大小为0，将重新下载");
          std::filesystem::remove(local_file_path);
        }
      }

      // 如果需要下载，从S3下载文件
      if (need_download) 
      {
        RCLCPP_INFO(this->get_logger(), "开始从S3下载文件: %s", s3_url.c_str());
        if (!endpoint_url.empty()) 
        {
          RCLCPP_INFO(this->get_logger(), "使用自定义端点: %s", endpoint_url.c_str());
        }
        bool download_success = s3_downloader_->downloadFromS3(s3_url, local_file_path, aws_access_key_id, aws_secret_access_key, aws_region, endpoint_url);

        if (!download_success) {
          RCLCPP_ERROR(this->get_logger(), "从S3下载文件失败: %s", s3_url.c_str());
          continue;  
        }

        RCLCPP_INFO(this->get_logger(), "文件下载成功: %s", local_file_path.c_str());
      }

      // 验证文件是否存在且有效
      if (std::filesystem::exists(local_file_path) && std::filesystem::file_size(local_file_path) > 0) 
      {
        bag_file_paths_.push_back(local_file_path);
        RCLCPP_INFO(this->get_logger(), "文件已添加到播放列表: %s", local_file_path.c_str());
      } 
      else 
      {
        RCLCPP_WARN(this->get_logger(), "文件无效，跳过: %s", local_file_path.c_str());
      }
    }

    // 检查是否有有效的文件
    if (bag_file_paths_.empty()) 
    {
      RCLCPP_ERROR(this->get_logger(), "没有有效的MCAP文件可以播放");
      return;
    }

    RCLCPP_INFO(this->get_logger(), "共 %zu 个文件准备播放", bag_file_paths_.size());

    // 读取第一个bag文件并创建发布者
    if (!setupBagReader(bag_file_paths_[0])) 
    {
      RCLCPP_ERROR(this->get_logger(), "设置bag读取器失败");
      return;
    }

    // 启动播放线程
    playback_thread_ = std::thread(&McapStreamerNode::playbackLoop, this);
  }

  ~McapStreamerNode()
  {
    if (playback_thread_.joinable()) 
    {
      playback_thread_.join();
    }
  }

private:
  std::string extractFilename(const std::string & url)
  {
    // 从URL中提取文件名
    size_t last_slash = url.find_last_of('/');
    if (last_slash != std::string::npos) 
    {
      return url.substr(last_slash + 1);
    }
    return "downloaded.mcap";
  }

  bool setupBagReader(const std::string & bag_path)
  {
    try 
    {
      // 配置存储选项
      rosbag2_storage::StorageOptions storage_options;
      storage_options.uri = bag_path;
      
      // 如果storage_id为空，让rosbag2自动检测格式
      // 否则使用指定的格式
      if (!storage_id_.empty()) 
      {
        storage_options.storage_id = storage_id_;
      } 
      else 
      {
        // 根据文件扩展名自动检测
        std::filesystem::path file_path(bag_path);
        std::string extension = file_path.extension().string();
        if (extension == ".mcap") 
        {
          storage_options.storage_id = "mcap";
        } 
        else if (extension == ".db3" || extension == ".db") 
        {
          storage_options.storage_id = "sqlite3";
        }
      }

      // 配置转换器选项（使用默认选项，不进行格式转换）
      rosbag2_cpp::ConverterOptions converter_options;
      converter_options.input_serialization_format = "cdr";
      converter_options.output_serialization_format = "cdr";

      // 创建读取器
      reader_ = std::make_unique<rosbag2_cpp::readers::SequentialReader>();
      reader_->open(storage_options, converter_options);

      // 获取所有话题和类型信息
      auto topics_and_types = reader_->get_all_topics_and_types();

      // 尝试为每个topic创建发布者，同时收集可用和不可用的信息
      std::vector<std::pair<std::string, std::string>> available_topics;  // topic_name, topic_type
      std::vector<std::tuple<std::string, std::string, std::string>> unavailable_topics;  // topic_name, topic_type, error_msg
      
      for (const auto & topic_metadata : topics_and_types) 
      {
        std::string topic_name = topic_metadata.name;
        std::string topic_type = topic_metadata.type;
        try 
        {
          // 尝试创建发布者来测试消息类型是否可用
          auto publisher = this->create_generic_publisher
          (topic_name,topic_type,rclcpp::QoS(10));
          
          // 如果成功，保存发布者
          publishers_[topic_name] = publisher;
          topic_types_[topic_name] = topic_type;
          available_topics.push_back({topic_name, topic_type});
        } 
        catch (const std::exception & e) 
        {
          unavailable_topics.push_back({topic_name, topic_type, e.what()});
        }
      }

      // 输出可用和不可用的topic信息
      RCLCPP_INFO(this->get_logger(), "找到 %zu 个不可用的topic（消息类型不可用）", unavailable_topics.size());
      if (!unavailable_topics.empty()) 
      {
        for (const auto & [topic_name, topic_type, error_msg] : unavailable_topics) 
        {
          RCLCPP_WARN(this->get_logger(), "不可用topic: %s (%s): %s", topic_name.c_str(), topic_type.c_str(), error_msg.c_str());
        }
      }

      return true;
    } 
    catch 
    (
      const std::exception & e) {RCLCPP_ERROR(this->get_logger(), "设置bag读取器时出错: %s", e.what());
      return false;
    }
  }

  void playbackLoop()
  {
    if (!reader_ || bag_file_paths_.empty()) 
    {
      return;
    }

    do 
    {
      // 遍历所有文件
      for (size_t file_idx = 0; file_idx < bag_file_paths_.size() && rclcpp::ok(); ++file_idx) 
      {
        const std::string & bag_path = bag_file_paths_[file_idx];

        RCLCPP_INFO(this->get_logger(), "目前播放第 %zu 个文件", file_idx + 1);
        // 如果不是第一个文件，需要重新打开读取器
        if (file_idx > 0) 
        {
          if (!setupBagReader(bag_path)) 
          {
            RCLCPP_ERROR(this->get_logger(), "无法打开文件: %s", bag_path.c_str());
            continue;
          }
        }

        reader_->seek(0);  // 重置到开始位置

        auto start_time = std::chrono::steady_clock::now();
        rclcpp::Time bag_start_time;
        bool first_message = true;

        while (reader_->has_next() && rclcpp::ok()) 
        {
          auto bag_message = reader_->read_next();

          if (first_message) 
          {
            bag_start_time = rclcpp::Time(bag_message->time_stamp);
            first_message = false;
          }

          // 计算应该播放的时间
          rclcpp::Time message_time(bag_message->time_stamp);
          rclcpp::Duration time_since_start = message_time - bag_start_time;
          auto target_wall_time = start_time + std::chrono::nanoseconds(
            static_cast<int64_t>(time_since_start.nanoseconds() / playback_rate_));

          // 等待到正确的播放时间
          std::this_thread::sleep_until(target_wall_time);

          // 发布消息
          std::string topic_name = bag_message->topic_name;
          if (publishers_.find(topic_name) != publishers_.end()) 
          {
            if (bag_message->serialized_data) {
              // 创建新的SerializedMessage并复制数据
              rclcpp::SerializedMessage serialized_msg;
              auto & rcl_msg = serialized_msg.get_rcl_serialized_message();
              
              // 使用rcutils分配内存并复制数据
              rcl_msg.buffer_length = bag_message->serialized_data->buffer_length;
              rcl_msg.buffer_capacity = bag_message->serialized_data->buffer_length;
              rcl_msg.allocator = rcutils_get_default_allocator();
              
              // 分配新内存
              rcl_msg.buffer = static_cast<uint8_t *>(
                rcl_msg.allocator.allocate(
                  rcl_msg.buffer_capacity,
                  rcl_msg.allocator.state));
              
              if (rcl_msg.buffer) 
              {
                // 复制数据
                memcpy(
                  rcl_msg.buffer,
                  bag_message->serialized_data->buffer,
                  bag_message->serialized_data->buffer_length);
                
                publishers_[topic_name]->publish(serialized_msg);
              } else {
                RCLCPP_WARN(
                  this->get_logger(),
                  "无法分配内存来复制消息 [%s]",
                  topic_name.c_str());
              }
            }
          }
        }

        RCLCPP_INFO(this->get_logger(), "文件 %zu/%zu 播放完成: %s", 
                   file_idx + 1, bag_file_paths_.size(), bag_path.c_str());
      }

      RCLCPP_INFO(this->get_logger(), "所有文件播放完成");
    } 
    while(loop_ && rclcpp::ok());

    RCLCPP_INFO(this->get_logger(), "播放线程结束");
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<McapStreamerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
