// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/DebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugInfo_value
{
public:
  explicit Init_DebugInfo_value(::deva_mdriver_msgs::msg::DebugInfo & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::DebugInfo value(::deva_mdriver_msgs::msg::DebugInfo::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::DebugInfo msg_;
};

class Init_DebugInfo_key
{
public:
  Init_DebugInfo_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugInfo_value key(::deva_mdriver_msgs::msg::DebugInfo::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_DebugInfo_value(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::DebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::DebugInfo>()
{
  return deva_mdriver_msgs::msg::builder::Init_DebugInfo_key();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_
