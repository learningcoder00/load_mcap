// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/EgoTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/ego_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoTrajectoryPoint_z
{
public:
  explicit Init_EgoTrajectoryPoint_z(::deva_map_msgs::msg::EgoTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::EgoTrajectoryPoint z(::deva_map_msgs::msg::EgoTrajectoryPoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectoryPoint msg_;
};

class Init_EgoTrajectoryPoint_y
{
public:
  explicit Init_EgoTrajectoryPoint_y(::deva_map_msgs::msg::EgoTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_EgoTrajectoryPoint_z y(::deva_map_msgs::msg::EgoTrajectoryPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EgoTrajectoryPoint_z(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectoryPoint msg_;
};

class Init_EgoTrajectoryPoint_x
{
public:
  Init_EgoTrajectoryPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoTrajectoryPoint_y x(::deva_map_msgs::msg::EgoTrajectoryPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EgoTrajectoryPoint_y(msg_);
  }

private:
  ::deva_map_msgs::msg::EgoTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::EgoTrajectoryPoint>()
{
  return deva_map_msgs::msg::builder::Init_EgoTrajectoryPoint_x();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__BUILDER_HPP_
