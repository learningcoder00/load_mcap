// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/ego_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoTrajectory_right_boundary
{
public:
  explicit Init_EgoTrajectory_right_boundary(::deva_map_msgs::msg::EgoTrajectory & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::EgoTrajectory right_boundary(::deva_map_msgs::msg::EgoTrajectory::_right_boundary_type arg)
  {
    msg_.right_boundary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectory msg_;
};

class Init_EgoTrajectory_left_boundary
{
public:
  explicit Init_EgoTrajectory_left_boundary(::deva_map_msgs::msg::EgoTrajectory & msg)
  : msg_(msg)
  {}
  Init_EgoTrajectory_right_boundary left_boundary(::deva_map_msgs::msg::EgoTrajectory::_left_boundary_type arg)
  {
    msg_.left_boundary = std::move(arg);
    return Init_EgoTrajectory_right_boundary(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectory msg_;
};

class Init_EgoTrajectory_trajectory
{
public:
  Init_EgoTrajectory_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoTrajectory_left_boundary trajectory(::deva_map_msgs::msg::EgoTrajectory::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_EgoTrajectory_left_boundary(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::EgoTrajectory>()
{
  return deva_map_msgs::msg::builder::Init_EgoTrajectory_trajectory();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__BUILDER_HPP_
