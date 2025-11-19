// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFRearLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_rear_line_ppty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFRearLinePpty_reserved
{
public:
  explicit Init_SFRearLinePpty_reserved(::deva_aeb_msgs::msg::SFRearLinePpty & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFRearLinePpty reserved(::deva_aeb_msgs::msg::SFRearLinePpty::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRearLinePpty msg_;
};

class Init_SFRearLinePpty_clisnsideradarctrlqly
{
public:
  Init_SFRearLinePpty_clisnsideradarctrlqly()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFRearLinePpty_reserved clisnsideradarctrlqly(::deva_aeb_msgs::msg::SFRearLinePpty::_clisnsideradarctrlqly_type arg)
  {
    msg_.clisnsideradarctrlqly = std::move(arg);
    return Init_SFRearLinePpty_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFRearLinePpty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFRearLinePpty>()
{
  return deva_aeb_msgs::msg::builder::Init_SFRearLinePpty_clisnsideradarctrlqly();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_REAR_LINE_PPTY__BUILDER_HPP_
