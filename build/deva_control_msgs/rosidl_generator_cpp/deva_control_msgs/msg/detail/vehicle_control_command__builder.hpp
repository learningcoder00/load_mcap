// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/vehicle_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControlCommand_control_mode
{
public:
  explicit Init_VehicleControlCommand_control_mode(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::VehicleControlCommand control_mode(::deva_control_msgs::msg::VehicleControlCommand::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_control_ready_false_reason
{
public:
  explicit Init_VehicleControlCommand_control_ready_false_reason(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_control_mode control_ready_false_reason(::deva_control_msgs::msg::VehicleControlCommand::_control_ready_false_reason_type arg)
  {
    msg_.control_ready_false_reason = std::move(arg);
    return Init_VehicleControlCommand_control_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_ready
{
public:
  explicit Init_VehicleControlCommand_ready(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_control_ready_false_reason ready(::deva_control_msgs::msg::VehicleControlCommand::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_VehicleControlCommand_control_ready_false_reason(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_longit_jerk_limit
{
public:
  explicit Init_VehicleControlCommand_longit_jerk_limit(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_ready longit_jerk_limit(::deva_control_msgs::msg::VehicleControlCommand::_longit_jerk_limit_type arg)
  {
    msg_.longit_jerk_limit = std::move(arg);
    return Init_VehicleControlCommand_ready(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_longit_tq_limit
{
public:
  explicit Init_VehicleControlCommand_longit_tq_limit(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_longit_jerk_limit longit_tq_limit(::deva_control_msgs::msg::VehicleControlCommand::_longit_tq_limit_type arg)
  {
    msg_.longit_tq_limit = std::move(arg);
    return Init_VehicleControlCommand_longit_jerk_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_steer_tq_limit
{
public:
  explicit Init_VehicleControlCommand_steer_tq_limit(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_longit_tq_limit steer_tq_limit(::deva_control_msgs::msg::VehicleControlCommand::_steer_tq_limit_type arg)
  {
    msg_.steer_tq_limit = std::move(arg);
    return Init_VehicleControlCommand_longit_tq_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_steer_angle_rate_limit
{
public:
  explicit Init_VehicleControlCommand_steer_angle_rate_limit(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_steer_tq_limit steer_angle_rate_limit(::deva_control_msgs::msg::VehicleControlCommand::_steer_angle_rate_limit_type arg)
  {
    msg_.steer_angle_rate_limit = std::move(arg);
    return Init_VehicleControlCommand_steer_tq_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_limit_command_enable
{
public:
  explicit Init_VehicleControlCommand_limit_command_enable(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_steer_angle_rate_limit limit_command_enable(::deva_control_msgs::msg::VehicleControlCommand::_limit_command_enable_type arg)
  {
    msg_.limit_command_enable = std::move(arg);
    return Init_VehicleControlCommand_steer_angle_rate_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_brake
{
public:
  explicit Init_VehicleControlCommand_brake(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_limit_command_enable brake(::deva_control_msgs::msg::VehicleControlCommand::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_VehicleControlCommand_limit_command_enable(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_throttle
{
public:
  explicit Init_VehicleControlCommand_throttle(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_brake throttle(::deva_control_msgs::msg::VehicleControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_VehicleControlCommand_brake(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_target_distance
{
public:
  explicit Init_VehicleControlCommand_target_distance(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_throttle target_distance(::deva_control_msgs::msg::VehicleControlCommand::_target_distance_type arg)
  {
    msg_.target_distance = std::move(arg);
    return Init_VehicleControlCommand_throttle(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_longit_torque
{
public:
  explicit Init_VehicleControlCommand_longit_torque(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_target_distance longit_torque(::deva_control_msgs::msg::VehicleControlCommand::_longit_torque_type arg)
  {
    msg_.longit_torque = std::move(arg);
    return Init_VehicleControlCommand_target_distance(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_acceleration
{
public:
  explicit Init_VehicleControlCommand_acceleration(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_longit_torque acceleration(::deva_control_msgs::msg::VehicleControlCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_VehicleControlCommand_longit_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_speed
{
public:
  explicit Init_VehicleControlCommand_speed(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_acceleration speed(::deva_control_msgs::msg::VehicleControlCommand::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_VehicleControlCommand_acceleration(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_long_mode
{
public:
  explicit Init_VehicleControlCommand_long_mode(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_speed long_mode(::deva_control_msgs::msg::VehicleControlCommand::_long_mode_type arg)
  {
    msg_.long_mode = std::move(arg);
    return Init_VehicleControlCommand_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_steering_target
{
public:
  explicit Init_VehicleControlCommand_steering_target(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_long_mode steering_target(::deva_control_msgs::msg::VehicleControlCommand::_steering_target_type arg)
  {
    msg_.steering_target = std::move(arg);
    return Init_VehicleControlCommand_long_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_front_wheel_target
{
public:
  explicit Init_VehicleControlCommand_front_wheel_target(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_steering_target front_wheel_target(::deva_control_msgs::msg::VehicleControlCommand::_front_wheel_target_type arg)
  {
    msg_.front_wheel_target = std::move(arg);
    return Init_VehicleControlCommand_steering_target(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_eps_torque
{
public:
  explicit Init_VehicleControlCommand_eps_torque(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_front_wheel_target eps_torque(::deva_control_msgs::msg::VehicleControlCommand::_eps_torque_type arg)
  {
    msg_.eps_torque = std::move(arg);
    return Init_VehicleControlCommand_front_wheel_target(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_late_mode
{
public:
  explicit Init_VehicleControlCommand_late_mode(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_eps_torque late_mode(::deva_control_msgs::msg::VehicleControlCommand::_late_mode_type arg)
  {
    msg_.late_mode = std::move(arg);
    return Init_VehicleControlCommand_eps_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_protocol_version
{
public:
  explicit Init_VehicleControlCommand_protocol_version(::deva_control_msgs::msg::VehicleControlCommand & msg)
  : msg_(msg)
  {}
  Init_VehicleControlCommand_late_mode protocol_version(::deva_control_msgs::msg::VehicleControlCommand::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_VehicleControlCommand_late_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

class Init_VehicleControlCommand_header
{
public:
  Init_VehicleControlCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControlCommand_protocol_version header(::deva_control_msgs::msg::VehicleControlCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleControlCommand_protocol_version(msg_);
  }

private:
  ::deva_control_msgs::msg::VehicleControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::VehicleControlCommand>()
{
  return deva_control_msgs::msg::builder::Init_VehicleControlCommand_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__BUILDER_HPP_
