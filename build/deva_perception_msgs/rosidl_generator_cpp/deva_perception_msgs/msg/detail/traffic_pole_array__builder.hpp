// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficPoleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_pole_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficPoleArray_traffic_poles
{
public:
  explicit Init_TrafficPoleArray_traffic_poles(::deva_perception_msgs::msg::TrafficPoleArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficPoleArray traffic_poles(::deva_perception_msgs::msg::TrafficPoleArray::_traffic_poles_type arg)
  {
    msg_.traffic_poles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficPoleArray msg_;
};

class Init_TrafficPoleArray_header
{
public:
  Init_TrafficPoleArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficPoleArray_traffic_poles header(::deva_perception_msgs::msg::TrafficPoleArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficPoleArray_traffic_poles(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficPoleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficPoleArray>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficPoleArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__BUILDER_HPP_
