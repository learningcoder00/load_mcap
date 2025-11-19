// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/center_lines__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_CenterLines_center_lines
{
public:
  explicit Init_CenterLines_center_lines(::deva_mdriver_msgs::msg::CenterLines & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::CenterLines center_lines(::deva_mdriver_msgs::msg::CenterLines::_center_lines_type arg)
  {
    msg_.center_lines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLines msg_;
};

class Init_CenterLines_header
{
public:
  Init_CenterLines_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CenterLines_center_lines header(::deva_mdriver_msgs::msg::CenterLines::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CenterLines_center_lines(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::CenterLines msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::CenterLines>()
{
  return deva_mdriver_msgs::msg::builder::Init_CenterLines_header();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__BUILDER_HPP_
