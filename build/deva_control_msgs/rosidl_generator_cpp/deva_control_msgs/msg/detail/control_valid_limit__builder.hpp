// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_control_msgs:msg/ControlValidLimit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__BUILDER_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_control_msgs/msg/detail/control_valid_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlValidLimit_lower_limit
{
public:
  explicit Init_ControlValidLimit_lower_limit(::deva_control_msgs::msg::ControlValidLimit & msg)
  : msg_(msg)
  {}
  ::deva_control_msgs::msg::ControlValidLimit lower_limit(::deva_control_msgs::msg::ControlValidLimit::_lower_limit_type arg)
  {
    msg_.lower_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlValidLimit msg_;
};

class Init_ControlValidLimit_upper_limit
{
public:
  explicit Init_ControlValidLimit_upper_limit(::deva_control_msgs::msg::ControlValidLimit & msg)
  : msg_(msg)
  {}
  Init_ControlValidLimit_lower_limit upper_limit(::deva_control_msgs::msg::ControlValidLimit::_upper_limit_type arg)
  {
    msg_.upper_limit = std::move(arg);
    return Init_ControlValidLimit_lower_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlValidLimit msg_;
};

class Init_ControlValidLimit_limit_valid
{
public:
  Init_ControlValidLimit_limit_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlValidLimit_upper_limit limit_valid(::deva_control_msgs::msg::ControlValidLimit::_limit_valid_type arg)
  {
    msg_.limit_valid = std::move(arg);
    return Init_ControlValidLimit_upper_limit(msg_);
  }

private:
  ::deva_control_msgs::msg::ControlValidLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_control_msgs::msg::ControlValidLimit>()
{
  return deva_control_msgs::msg::builder::Init_ControlValidLimit_limit_valid();
}

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__BUILDER_HPP_
