// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/ReroutingInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/rerouting_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_ReroutingInfo_obstacle_edges
{
public:
  Init_ReroutingInfo_obstacle_edges()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_planning_msgs2::msg::ReroutingInfo obstacle_edges(::deva_planning_msgs2::msg::ReroutingInfo::_obstacle_edges_type arg)
  {
    msg_.obstacle_edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::ReroutingInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::ReroutingInfo>()
{
  return deva_planning_msgs2::msg::builder::Init_ReroutingInfo_obstacle_edges();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__BUILDER_HPP_
