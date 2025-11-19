#include <rclcpp/rclcpp.hpp>
#include <rclcpp/serialization.hpp>
#include <rclcpp/serialized_message.hpp>
#include <memory>
#include <string>
#include <unordered_map>

// 需要包含你要反序列化的 msg 类型
#include <sensor_msgs/msg/image.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <nav_msgs/msg/odometry.hpp>

class GenericDeserializeNode : public rclcpp::Node
{
public:
  GenericDeserializeNode()
  : Node("generic_deserialize_node")
  {
    // 你要订阅的 topic + type（必须与 MCAP 内一致）
    add_generic_subscriber("/camera/color/image_raw", "sensor_msgs/msg/Image");
    add_generic_subscriber("/odom", "nav_msgs/msg/Odometry");
    add_generic_subscriber("/pose", "geometry_msgs/msg/Pose");
  }

private:

  // 保存 subscription，不然会被析构
  std::vector<rclcpp::GenericSubscription::SharedPtr> subscriptions_;

  void add_generic_subscriber(const std::string & topic, const std::string & type)
  {
    RCLCPP_INFO(this->get_logger(), 
      "Creating generic subscriber: %s (%s)", 
      topic.c_str(), type.c_str()
    );

    auto sub = this->create_generic_subscription(
      topic,
      type,
      rclcpp::QoS(10),
      [this, topic, type](std::shared_ptr<rclcpp::SerializedMessage> serialized_msg)
      {
        RCLCPP_INFO(this->get_logger(), "收到序列化消息: %s (%zu bytes)", 
                    topic.c_str(), serialized_msg->size());

        // 根据类型执行对应反序列化
        if (type == "sensor_msgs/msg/Image") {
          deserialize_and_print<sensor_msgs::msg::Image>(serialized_msg, topic);
        }
        else if (type == "geometry_msgs/msg/Pose") {
          deserialize_and_print<geometry_msgs::msg::Pose>(serialized_msg, topic);
        }
        else if (type == "nav_msgs/msg/Odometry") {
          deserialize_and_print<nav_msgs::msg::Odometry>(serialized_msg, topic);
        }
        else {
          RCLCPP_WARN(this->get_logger(), 
            "未处理的 type: %s ，无法反序列化", type.c_str());
        }
      }
    );

    subscriptions_.push_back(sub);
  }

  template<typename T>
  void deserialize_and_print(std::shared_ptr<rclcpp::SerializedMessage> serialized_msg,
                             const std::string & topic)
  {
    rclcpp::Serialization<T> serializer;
    T msg;

    serializer.deserialize_message(serialized_msg.get(), &msg);

    RCLCPP_INFO(this->get_logger(),
      "成功反序列化 Topic [%s] → 类型 [%s]",
      topic.c_str(),
      rosidl_generator_traits::name<T>()
    );

    // 示例：打印部分字段
    if constexpr (std::is_same_v<T, geometry_msgs::msg::Pose>) {
      RCLCPP_INFO(this->get_logger(),
                  "Pose: position(%.3f, %.3f, %.3f)",
                  msg.position.x, msg.position.y, msg.position.z);
    }

    if constexpr (std::is_same_v<T, nav_msgs::msg::Odometry>) {
      RCLCPP_INFO(this->get_logger(),
                  "Odometry pose.x = %.3f",
                  msg.pose.pose.position.x);
    }

    if constexpr (std::is_same_v<T, sensor_msgs::msg::Image>) {
      RCLCPP_INFO(this->get_logger(),
                  "Image: width=%d, height=%d, encoding=%s",
                  msg.width, msg.height, msg.encoding.c_str());
    }
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GenericDeserializeNode>());
  rclcpp::shutdown();
  return 0;
}
