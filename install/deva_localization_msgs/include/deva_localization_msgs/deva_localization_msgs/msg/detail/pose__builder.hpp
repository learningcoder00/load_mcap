// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose_euler_angles
{
public:
  explicit Init_Pose_euler_angles(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::Pose euler_angles(::deva_localization_msgs::msg::Pose::_euler_angles_type arg)
  {
    msg_.euler_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_angular_velocity_vrf
{
public:
  explicit Init_Pose_angular_velocity_vrf(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_euler_angles angular_velocity_vrf(::deva_localization_msgs::msg::Pose::_angular_velocity_vrf_type arg)
  {
    msg_.angular_velocity_vrf = std::move(arg);
    return Init_Pose_euler_angles(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_linear_acceleration_vrf
{
public:
  explicit Init_Pose_linear_acceleration_vrf(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity_vrf linear_acceleration_vrf(::deva_localization_msgs::msg::Pose::_linear_acceleration_vrf_type arg)
  {
    msg_.linear_acceleration_vrf = std::move(arg);
    return Init_Pose_angular_velocity_vrf(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_heading
{
public:
  explicit Init_Pose_heading(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_acceleration_vrf heading(::deva_localization_msgs::msg::Pose::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Pose_linear_acceleration_vrf(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_angular_velocity
{
public:
  explicit Init_Pose_angular_velocity(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_heading angular_velocity(::deva_localization_msgs::msg::Pose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Pose_heading(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_linear_acceleration
{
public:
  explicit Init_Pose_linear_acceleration(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_angular_velocity linear_acceleration(::deva_localization_msgs::msg::Pose::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Pose_angular_velocity(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_linear_velocity
{
public:
  explicit Init_Pose_linear_velocity(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_acceleration linear_velocity(::deva_localization_msgs::msg::Pose::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_Pose_linear_acceleration(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_orientation
{
public:
  explicit Init_Pose_orientation(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_linear_velocity orientation(::deva_localization_msgs::msg::Pose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Pose_linear_velocity(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_position
{
public:
  explicit Init_Pose_position(::deva_localization_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  Init_Pose_orientation position(::deva_localization_msgs::msg::Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose_orientation(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

class Init_Pose_utm_id
{
public:
  Init_Pose_utm_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_position utm_id(::deva_localization_msgs::msg::Pose::_utm_id_type arg)
  {
    msg_.utm_id = std::move(arg);
    return Init_Pose_position(msg_);
  }

private:
  ::deva_localization_msgs::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::Pose>()
{
  return deva_localization_msgs::msg::builder::Init_Pose_utm_id();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
