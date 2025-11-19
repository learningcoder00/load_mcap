// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficLightNew.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_light_new__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightNew_color
{
public:
  explicit Init_TrafficLightNew_color(::deva_perception_msgs::msg::TrafficLightNew & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficLightNew color(::deva_perception_msgs::msg::TrafficLightNew::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightNew msg_;
};

class Init_TrafficLightNew_exist
{
public:
  Init_TrafficLightNew_exist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightNew_color exist(::deva_perception_msgs::msg::TrafficLightNew::_exist_type arg)
  {
    msg_.exist = std::move(arg);
    return Init_TrafficLightNew_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightNew msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficLightNew>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficLightNew_exist();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_NEW__BUILDER_HPP_
