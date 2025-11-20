#ifndef MCAP_STREAMER__ROS_MESSAGE_CONVERTER_HPP_
#define MCAP_STREAMER__ROS_MESSAGE_CONVERTER_HPP_

#include <map>
#include <string>
#include <vector>
#include <any>
#include <iostream>
#include <type_traits>
#include <deva_perception_msgs/msg/rv_dyn_obstacle_result.hpp>
#include <deva_perception_msgs/msg/rv_dyn_obstacle_list.hpp>
#include <deva_perception_msgs/msg/rv_dyn_obstacle.hpp>

namespace mcap_streamer
{

// 定义嵌套map类型：使用any来支持递归结构（更灵活但需要类型转换）
using MessageMap = std::map<std::string, std::any>;

// 辅助函数：将基本类型转换为std::any
template<typename T>
std::any to_map_value(const T& value) {
    if constexpr (std::is_same_v<T, bool>) {
        return std::any(value);
    } else if constexpr (std::is_integral_v<T>) {
        if constexpr (sizeof(T) == 1) {
            return std::any(static_cast<int8_t>(value));
        } else if constexpr (sizeof(T) == 2) {
            return std::any(static_cast<int16_t>(value));
        } else if constexpr (sizeof(T) == 4) {
            return std::any(static_cast<int32_t>(value));
        } else {
            return std::any(static_cast<int64_t>(value));
        }
    } else if constexpr (std::is_floating_point_v<T>) {
        if constexpr (std::is_same_v<T, float>) {
            return std::any(value);
        } else {
            return std::any(static_cast<double>(value));
        }
    } else if constexpr (std::is_same_v<T, std::string>) {
        return std::any(value);
    } else {
        // 对于其他类型，尝试转换为字符串
        return std::any(std::string("(unsupported type)"));
    }
}

// 辅助函数：将嵌套消息转换为MessageMap（递归）
// 通用模板声明
template<typename T>
MessageMap message_to_map(const T& msg);

// 辅助函数：转换 RVDynObstacleList
MessageMap rv_dyn_obstacle_list_to_map(const deva_perception_msgs::msg::RVDynObstacleList& msg);

// 辅助函数：转换 RVDynObstacle
MessageMap rv_dyn_obstacle_to_map(const deva_perception_msgs::msg::RVDynObstacle& msg);

// 特化：处理 RVDynObstacleResult 消息
template<>
inline MessageMap message_to_map<deva_perception_msgs::msg::RVDynObstacleResult>(
    const deva_perception_msgs::msg::RVDynObstacleResult& msg) 
{
    MessageMap result;
    
    // 转换 header
    MessageMap header_map;
    header_map["stamp_sec"] = std::any(static_cast<int64_t>(msg.header.stamp.sec));
    header_map["stamp_nanosec"] = std::any(static_cast<uint32_t>(msg.header.stamp.nanosec));
    header_map["pub_stamp_sec"] = std::any(static_cast<int64_t>(msg.header.pub_stamp.sec));
    header_map["pub_stamp_nanosec"] = std::any(static_cast<uint32_t>(msg.header.pub_stamp.nanosec));
    header_map["index"] = std::any(static_cast<uint32_t>(msg.header.index));
    // frame_id 是 deva_common_msgs::msg::String 类型，需要转换为 std::string
    std::string frame_id_str(reinterpret_cast<const char*>(msg.header.frame_id.data.data()), 
                             msg.header.frame_id.size);
    header_map["frame_id"] = std::any(frame_id_str);
    result["header"] = std::any(header_map);
    
    // 转换 translation
    MessageMap translation_map;
    translation_map["x"] = std::any(static_cast<double>(msg.translation.x));
    translation_map["y"] = std::any(static_cast<double>(msg.translation.y));
    translation_map["z"] = std::any(static_cast<double>(msg.translation.z));
    result["translation"] = std::any(translation_map);
    
    // 转换 orientation
    MessageMap orientation_map;
    orientation_map["x"] = std::any(static_cast<double>(msg.orientation.x));
    orientation_map["y"] = std::any(static_cast<double>(msg.orientation.y));
    orientation_map["z"] = std::any(static_cast<double>(msg.orientation.z));
    orientation_map["w"] = std::any(static_cast<double>(msg.orientation.w));
    result["orientation"] = std::any(orientation_map);
    
    // 转换 dynamic_obs_list 数组
    std::vector<std::any> dynamic_obs_list;
    for (const auto& obs_list_item : msg.dynamic_obs_list) {
        // 使用辅助函数展开 RVDynObstacleList 的所有字段
        MessageMap obs_list_map = rv_dyn_obstacle_list_to_map(obs_list_item);
        dynamic_obs_list.push_back(std::any(obs_list_map));
    }
    result["dynamic_obs_list"] = std::any(dynamic_obs_list);
    
    // 转换 extra_infos 数组
    std::vector<std::any> extra_infos;
    for ([[maybe_unused]] const auto& info : msg.extra_infos) {
        MessageMap info_map;
        info_map["_type"] = std::any(std::string("ExtraInfo"));
        // 您可以在这里添加更多字段
        extra_infos.push_back(std::any(info_map));
    }
    result["extra_infos"] = std::any(extra_infos);
    
    return result;
}

// 辅助函数：打印嵌套map（用于调试）
// 参数说明：
//   msg_map: 要打印的嵌套map
//   indent: 当前缩进字符串（保留用于兼容性，实际未使用）
//   depth: 当前嵌套深度（从0开始）
//   max_depth: 最大打印深度（0表示无限制）
//   show_all_array_items: 是否显示数组中的所有元素（false时只显示前3个）
void print_message_map(
    const MessageMap& msg_map, 
    const std::string& indent = "",
    int depth = 0,
    int max_depth = 0,
    bool show_all_array_items = false
);

// 便捷函数：打印嵌套map（简化版本，显示所有层级和数组元素）
inline void print_message_map_full(const MessageMap& msg_map) {
    print_message_map(msg_map, "", 0, 0, true);
}

// 便捷函数：打印嵌套map（限制深度版本）
inline void print_message_map_limited(const MessageMap& msg_map, int max_depth) {
    print_message_map(msg_map, "", 0, max_depth, false);
}

// YAML格式打印函数
// 输出格式类似：
//   key: value
//   nested_key:
//     sub_key: sub_value
//   array_key:
//     - item1
//     - item2
void print_message_map_yaml(
    const MessageMap& msg_map,
    const std::string& indent = "",
    bool is_array_item = false,
    int max_depth = 0,
    int current_depth = 0
);

// 便捷函数：YAML格式打印（完整版本）
inline void print_message_map_yaml_full(const MessageMap& msg_map) {
    print_message_map_yaml(msg_map, "", false, 0, 0);
}

}  // namespace mcap_streamer

#endif  // MCAP_STREAMER__ROS_MESSAGE_CONVERTER_HPP_

