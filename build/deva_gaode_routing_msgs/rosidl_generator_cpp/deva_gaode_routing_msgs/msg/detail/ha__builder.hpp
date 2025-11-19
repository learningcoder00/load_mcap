// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/HA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/ha__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_HA_lane
{
public:
  explicit Init_HA_lane(::deva_gaode_routing_msgs::msg::HA & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::HA lane(::deva_gaode_routing_msgs::msg::HA::_lane_type arg)
  {
    msg_.lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::HA msg_;
};

class Init_HA_feature_point
{
public:
  Init_HA_feature_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HA_lane feature_point(::deva_gaode_routing_msgs::msg::HA::_feature_point_type arg)
  {
    msg_.feature_point = std::move(arg);
    return Init_HA_lane(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::HA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::HA>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_HA_feature_point();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__BUILDER_HPP_
