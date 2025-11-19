// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/ControlResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/control_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlResult_steering_rate
{
public:
  explicit Init_ControlResult_steering_rate(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::ControlResult steering_rate(::deva_control_msgs::msg::ControlResult::_steering_rate_type arg)
  {
    msg_.steering_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_longitudinal_en
{
public:
  explicit Init_ControlResult_longitudinal_en(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_steering_rate longitudinal_en(::deva_control_msgs::msg::ControlResult::_longitudinal_en_type arg)
  {
    msg_.longitudinal_en = std::move(arg);
    return Init_ControlResult_steering_rate(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_lateral_en
{
public:
  explicit Init_ControlResult_lateral_en(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_longitudinal_en lateral_en(::deva_control_msgs::msg::ControlResult::_lateral_en_type arg)
  {
    msg_.lateral_en = std::move(arg);
    return Init_ControlResult_longitudinal_en(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_gear_cmd_val
{
public:
  explicit Init_ControlResult_gear_cmd_val(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_lateral_en gear_cmd_val(::deva_control_msgs::msg::ControlResult::_gear_cmd_val_type arg)
  {
    msg_.gear_cmd_val = std::move(arg);
    return Init_ControlResult_lateral_en(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_gear_en
{
public:
  explicit Init_ControlResult_gear_en(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_gear_cmd_val gear_en(::deva_control_msgs::msg::ControlResult::_gear_en_type arg)
  {
    msg_.gear_en = std::move(arg);
    return Init_ControlResult_gear_cmd_val(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_control_mode
{
public:
  explicit Init_ControlResult_control_mode(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_gear_en control_mode(::deva_control_msgs::msg::ControlResult::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_ControlResult_gear_en(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_ready
{
public:
  explicit Init_ControlResult_ready(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_control_mode ready(::deva_control_msgs::msg::ControlResult::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_ControlResult_control_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_control_ready_false_reason
{
public:
  explicit Init_ControlResult_control_ready_false_reason(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_ready control_ready_false_reason(::deva_control_msgs::msg::ControlResult::_control_ready_false_reason_type arg)
  {
    msg_.control_ready_false_reason = std::move(arg);
    return Init_ControlResult_ready(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_longit_jerk_limit
{
public:
  explicit Init_ControlResult_longit_jerk_limit(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_control_ready_false_reason longit_jerk_limit(::deva_control_msgs::msg::ControlResult::_longit_jerk_limit_type arg)
  {
    msg_.longit_jerk_limit = std::move(arg);
    return Init_ControlResult_control_ready_false_reason(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_longit_tq_limit
{
public:
  explicit Init_ControlResult_longit_tq_limit(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_longit_jerk_limit longit_tq_limit(::deva_control_msgs::msg::ControlResult::_longit_tq_limit_type arg)
  {
    msg_.longit_tq_limit = std::move(arg);
    return Init_ControlResult_longit_jerk_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_steer_tq_limit
{
public:
  explicit Init_ControlResult_steer_tq_limit(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_longit_tq_limit steer_tq_limit(::deva_control_msgs::msg::ControlResult::_steer_tq_limit_type arg)
  {
    msg_.steer_tq_limit = std::move(arg);
    return Init_ControlResult_longit_tq_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_steer_angle_rate_limit
{
public:
  explicit Init_ControlResult_steer_angle_rate_limit(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_steer_tq_limit steer_angle_rate_limit(::deva_control_msgs::msg::ControlResult::_steer_angle_rate_limit_type arg)
  {
    msg_.steer_angle_rate_limit = std::move(arg);
    return Init_ControlResult_steer_tq_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_limit_command_enable
{
public:
  explicit Init_ControlResult_limit_command_enable(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_steer_angle_rate_limit limit_command_enable(::deva_control_msgs::msg::ControlResult::_limit_command_enable_type arg)
  {
    msg_.limit_command_enable = std::move(arg);
    return Init_ControlResult_steer_angle_rate_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_brake
{
public:
  explicit Init_ControlResult_brake(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_limit_command_enable brake(::deva_control_msgs::msg::ControlResult::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_ControlResult_limit_command_enable(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_throttle
{
public:
  explicit Init_ControlResult_throttle(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_brake throttle(::deva_control_msgs::msg::ControlResult::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_ControlResult_brake(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_target_distance
{
public:
  explicit Init_ControlResult_target_distance(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_throttle target_distance(::deva_control_msgs::msg::ControlResult::_target_distance_type arg)
  {
    msg_.target_distance = std::move(arg);
    return Init_ControlResult_throttle(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_longit_torque
{
public:
  explicit Init_ControlResult_longit_torque(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_target_distance longit_torque(::deva_control_msgs::msg::ControlResult::_longit_torque_type arg)
  {
    msg_.longit_torque = std::move(arg);
    return Init_ControlResult_target_distance(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_acceleration
{
public:
  explicit Init_ControlResult_acceleration(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_longit_torque acceleration(::deva_control_msgs::msg::ControlResult::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_ControlResult_longit_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_speed
{
public:
  explicit Init_ControlResult_speed(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_acceleration speed(::deva_control_msgs::msg::ControlResult::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ControlResult_acceleration(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_long_mode
{
public:
  explicit Init_ControlResult_long_mode(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_speed long_mode(::deva_control_msgs::msg::ControlResult::_long_mode_type arg)
  {
    msg_.long_mode = std::move(arg);
    return Init_ControlResult_speed(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_steering_target
{
public:
  explicit Init_ControlResult_steering_target(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_long_mode steering_target(::deva_control_msgs::msg::ControlResult::_steering_target_type arg)
  {
    msg_.steering_target = std::move(arg);
    return Init_ControlResult_long_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_front_wheel_target
{
public:
  explicit Init_ControlResult_front_wheel_target(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_steering_target front_wheel_target(::deva_control_msgs::msg::ControlResult::_front_wheel_target_type arg)
  {
    msg_.front_wheel_target = std::move(arg);
    return Init_ControlResult_steering_target(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_eps_torque
{
public:
  explicit Init_ControlResult_eps_torque(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_front_wheel_target eps_torque(::deva_control_msgs::msg::ControlResult::_eps_torque_type arg)
  {
    msg_.eps_torque = std::move(arg);
    return Init_ControlResult_front_wheel_target(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_late_mode
{
public:
  explicit Init_ControlResult_late_mode(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_eps_torque late_mode(::deva_control_msgs::msg::ControlResult::_late_mode_type arg)
  {
    msg_.late_mode = std::move(arg);
    return Init_ControlResult_eps_torque(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_protocol_version
{
public:
  explicit Init_ControlResult_protocol_version(::deva_control_msgs::msg::ControlResult & msg)
  : msg_(msg)
  {}
  Init_ControlResult_late_mode protocol_version(::deva_control_msgs::msg::ControlResult::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_ControlResult_late_mode(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

class Init_ControlResult_header
{
public:
  Init_ControlResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlResult_protocol_version header(::deva_control_msgs::msg::ControlResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlResult_protocol_version(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::ControlResult>()
{
  return deva_control_msgs::msg::builder::Init_ControlResult_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__BUILDER_HPP_
