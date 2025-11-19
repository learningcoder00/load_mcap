// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/wheel_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSpeed_rear_right
{
public:
  explicit Init_WheelSpeed_rear_right(::deva_function_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::WheelSpeed rear_right(::deva_function_msgs::msg::WheelSpeed::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_rear_left
{
public:
  explicit Init_WheelSpeed_rear_left(::deva_function_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_rear_right rear_left(::deva_function_msgs::msg::WheelSpeed::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_WheelSpeed_rear_right(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_front_right
{
public:
  explicit Init_WheelSpeed_front_right(::deva_function_msgs::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_rear_left front_right(::deva_function_msgs::msg::WheelSpeed::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_WheelSpeed_rear_left(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_front_left
{
public:
  Init_WheelSpeed_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeed_front_right front_left(::deva_function_msgs::msg::WheelSpeed::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_WheelSpeed_front_right(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::WheelSpeed>()
{
  return deva_function_msgs::msg::builder::Init_WheelSpeed_front_left();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
