// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/wheel_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelInfo_is_valid
{
public:
  explicit Init_WheelInfo_is_valid(::deva_function_msgs::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::WheelInfo is_valid(::deva_function_msgs::msg::WheelInfo::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

class Init_WheelInfo_is_brake
{
public:
  explicit Init_WheelInfo_is_brake(::deva_function_msgs::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_is_valid is_brake(::deva_function_msgs::msg::WheelInfo::_is_brake_type arg)
  {
    msg_.is_brake = std::move(arg);
    return Init_WheelInfo_is_valid(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

class Init_WheelInfo_is_slip
{
public:
  explicit Init_WheelInfo_is_slip(::deva_function_msgs::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_is_brake is_slip(::deva_function_msgs::msg::WheelInfo::_is_slip_type arg)
  {
    msg_.is_slip = std::move(arg);
    return Init_WheelInfo_is_brake(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

class Init_WheelInfo_direction
{
public:
  explicit Init_WheelInfo_direction(::deva_function_msgs::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_is_slip direction(::deva_function_msgs::msg::WheelInfo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_WheelInfo_is_slip(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

class Init_WheelInfo_counter
{
public:
  explicit Init_WheelInfo_counter(::deva_function_msgs::msg::WheelInfo & msg)
  : msg_(msg)
  {}
  Init_WheelInfo_direction counter(::deva_function_msgs::msg::WheelInfo::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_WheelInfo_direction(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

class Init_WheelInfo_speed
{
public:
  Init_WheelInfo_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelInfo_counter speed(::deva_function_msgs::msg::WheelInfo::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_WheelInfo_counter(msg_);
  }

private:
  ::deva_function_msgs::msg::WheelInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::WheelInfo>()
{
  return deva_function_msgs::msg::builder::Init_WheelInfo_speed();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__BUILDER_HPP_
