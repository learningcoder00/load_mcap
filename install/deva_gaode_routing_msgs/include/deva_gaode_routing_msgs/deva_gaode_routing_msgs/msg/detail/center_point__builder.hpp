// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/CenterPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/center_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_CenterPoint_point
{
public:
  explicit Init_CenterPoint_point(::deva_gaode_routing_msgs::msg::CenterPoint & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::CenterPoint point(::deva_gaode_routing_msgs::msg::CenterPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CenterPoint msg_;
};

class Init_CenterPoint_offset
{
public:
  Init_CenterPoint_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterPoint_point offset(::deva_gaode_routing_msgs::msg::CenterPoint::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_CenterPoint_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CenterPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::CenterPoint>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_CenterPoint_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CENTER_POINT__BUILDER_HPP_
