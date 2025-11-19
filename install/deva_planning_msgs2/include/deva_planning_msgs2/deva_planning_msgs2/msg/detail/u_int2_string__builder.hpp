// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/UInt2String.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__U_INT2_STRING__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__U_INT2_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_UInt2String_value
{
public:
  explicit Init_UInt2String_value(::deva_planning_msgs2::msg::UInt2String & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::UInt2String value(::deva_planning_msgs2::msg::UInt2String::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::UInt2String msg_;
};

class Init_UInt2String_key
{
public:
  Init_UInt2String_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UInt2String_value key(::deva_planning_msgs2::msg::UInt2String::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_UInt2String_value(msg_);
  }

private:
  ::deva_planning_msgs2::msg::UInt2String msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::UInt2String>()
{
  return deva_planning_msgs2::msg::builder::Init_UInt2String_key();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__U_INT2_STRING__BUILDER_HPP_
