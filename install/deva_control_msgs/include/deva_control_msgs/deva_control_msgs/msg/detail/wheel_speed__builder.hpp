// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/wheel_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSpeed_wheelspeed_rc
{
public:
  explicit Init_WheelSpeed_wheelspeed_rc(::deva_control_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::WheelSpeed wheelspeed_rc(::deva_control_msgs::msg::WheelSpeed::_wheelspeed_rc_type arg)
  {
    msg_.wheelspeed_rc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_wheelspeed_rc_valid
{
public:
  explicit Init_WheelSpeed_wheelspeed_rc_valid(::deva_control_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_wheelspeed_rc wheelspeed_rc_valid(::deva_control_msgs::msg::WheelSpeed::_wheelspeed_rc_valid_type arg)
  {
    msg_.wheelspeed_rc_valid = std::move(arg);
    return Init_WheelSpeed_wheelspeed_rc(msg_);
  }

private:
  ::deva_control_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_loop_count_end
{
public:
  explicit Init_WheelSpeed_loop_count_end(::deva_control_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_wheelspeed_rc_valid loop_count_end(::deva_control_msgs::msg::WheelSpeed::_loop_count_end_type arg)
  {
    msg_.loop_count_end = std::move(arg);
    return Init_WheelSpeed_wheelspeed_rc_valid(msg_);
  }

private:
  ::deva_control_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_loop_count_start
{
public:
  explicit Init_WheelSpeed_loop_count_start(::deva_control_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_loop_count_end loop_count_start(::deva_control_msgs::msg::WheelSpeed::_loop_count_start_type arg)
  {
    msg_.loop_count_start = std::move(arg);
    return Init_WheelSpeed_loop_count_end(msg_);
  }

private:
  ::deva_control_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_header
{
public:
  Init_WheelSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeed_loop_count_start header(::deva_control_msgs::msg::WheelSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelSpeed_loop_count_start(msg_);
  }

private:
  ::deva_control_msgs::msg::WheelSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::WheelSpeed>()
{
  return deva_control_msgs::msg::builder::Init_WheelSpeed_header();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
