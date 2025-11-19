// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverRefLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/mdriver_ref_lines__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MdriverRefLines_ref_lines
{
public:
  explicit Init_MdriverRefLines_ref_lines(::deva_mdriver_msgs::msg::MdriverRefLines & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MdriverRefLines ref_lines(::deva_mdriver_msgs::msg::MdriverRefLines::_ref_lines_type arg)
  {
    msg_.ref_lines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverRefLines msg_;
};

class Init_MdriverRefLines_header
{
public:
  Init_MdriverRefLines_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MdriverRefLines_ref_lines header(::deva_mdriver_msgs::msg::MdriverRefLines::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MdriverRefLines_ref_lines(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MdriverRefLines msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MdriverRefLines>()
{
  return deva_mdriver_msgs::msg::builder::Init_MdriverRefLines_header();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__BUILDER_HPP_
