// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkCurvature.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/link_curvature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkCurvature_curvature
{
public:
  explicit Init_LinkCurvature_curvature(::deva_gaode_routing_msgs::msg::LinkCurvature & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LinkCurvature curvature(::deva_gaode_routing_msgs::msg::LinkCurvature::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkCurvature msg_;
};

class Init_LinkCurvature_offset
{
public:
  Init_LinkCurvature_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkCurvature_curvature offset(::deva_gaode_routing_msgs::msg::LinkCurvature::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_LinkCurvature_curvature(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LinkCurvature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LinkCurvature>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LinkCurvature_offset();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__BUILDER_HPP_
