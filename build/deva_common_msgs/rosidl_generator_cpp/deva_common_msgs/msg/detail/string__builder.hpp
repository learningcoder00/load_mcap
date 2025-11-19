// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/String.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__STRING__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_String_size
{
public:
  explicit Init_String_size(::deva_common_msgs::msg::String & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::String size(::deva_common_msgs::msg::String::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::String msg_;
};

class Init_String_data
{
public:
  Init_String_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_String_size data(::deva_common_msgs::msg::String::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_String_size(msg_);
  }

private:
  ::deva_common_msgs::msg::String msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::String>()
{
  return deva_common_msgs::msg::builder::Init_String_data();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__STRING__BUILDER_HPP_
