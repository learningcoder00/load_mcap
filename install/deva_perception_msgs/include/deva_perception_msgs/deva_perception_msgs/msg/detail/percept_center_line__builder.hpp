// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PerceptCenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/percept_center_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PerceptCenterLine_bev_fork_point
{
public:
  explicit Init_PerceptCenterLine_bev_fork_point(::deva_perception_msgs::msg::PerceptCenterLine & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::PerceptCenterLine bev_fork_point(::deva_perception_msgs::msg::PerceptCenterLine::_bev_fork_point_type arg)
  {
    msg_.bev_fork_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptCenterLine msg_;
};

class Init_PerceptCenterLine_waypoints
{
public:
  explicit Init_PerceptCenterLine_waypoints(::deva_perception_msgs::msg::PerceptCenterLine & msg)
  : msg_(msg)
  {}
  Init_PerceptCenterLine_bev_fork_point waypoints(::deva_perception_msgs::msg::PerceptCenterLine::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_PerceptCenterLine_bev_fork_point(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptCenterLine msg_;
};

class Init_PerceptCenterLine_center_line_property
{
public:
  explicit Init_PerceptCenterLine_center_line_property(::deva_perception_msgs::msg::PerceptCenterLine & msg)
  : msg_(msg)
  {}
  Init_PerceptCenterLine_waypoints center_line_property(::deva_perception_msgs::msg::PerceptCenterLine::_center_line_property_type arg)
  {
    msg_.center_line_property = std::move(arg);
    return Init_PerceptCenterLine_waypoints(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptCenterLine msg_;
};

class Init_PerceptCenterLine_id
{
public:
  Init_PerceptCenterLine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceptCenterLine_center_line_property id(::deva_perception_msgs::msg::PerceptCenterLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PerceptCenterLine_center_line_property(msg_);
  }

private:
  ::deva_perception_msgs::msg::PerceptCenterLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PerceptCenterLine>()
{
  return deva_perception_msgs::msg::builder::Init_PerceptCenterLine_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__BUILDER_HPP_
