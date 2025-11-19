// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficLightArrayNew.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_light_array_new__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightArrayNew_traffic_lights
{
public:
  explicit Init_TrafficLightArrayNew_traffic_lights(::deva_perception_msgs::msg::TrafficLightArrayNew & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficLightArrayNew traffic_lights(::deva_perception_msgs::msg::TrafficLightArrayNew::_traffic_lights_type arg)
  {
    msg_.traffic_lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightArrayNew msg_;
};

class Init_TrafficLightArrayNew_header
{
public:
  Init_TrafficLightArrayNew_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightArrayNew_traffic_lights header(::deva_perception_msgs::msg::TrafficLightArrayNew::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightArrayNew_traffic_lights(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightArrayNew msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficLightArrayNew>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficLightArrayNew_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__BUILDER_HPP_
