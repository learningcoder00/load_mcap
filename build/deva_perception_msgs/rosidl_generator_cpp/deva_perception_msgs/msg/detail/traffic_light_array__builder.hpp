// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficLightArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_light_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightArray_traffic_lights
{
public:
  explicit Init_TrafficLightArray_traffic_lights(::deva_perception_msgs::msg::TrafficLightArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficLightArray traffic_lights(::deva_perception_msgs::msg::TrafficLightArray::_traffic_lights_type arg)
  {
    msg_.traffic_lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightArray msg_;
};

class Init_TrafficLightArray_header
{
public:
  Init_TrafficLightArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightArray_traffic_lights header(::deva_perception_msgs::msg::TrafficLightArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightArray_traffic_lights(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficLightArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficLightArray>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficLightArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_
