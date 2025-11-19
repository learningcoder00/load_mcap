// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/KV.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__KV__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__KV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/kv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_KV_value
{
public:
  explicit Init_KV_value(::deva_common_msgs::msg::KV & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::KV value(::deva_common_msgs::msg::KV::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::KV msg_;
};

class Init_KV_key
{
public:
  Init_KV_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KV_value key(::deva_common_msgs::msg::KV::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KV_value(msg_);
  }

private:
  ::deva_common_msgs::msg::KV msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::KV>()
{
  return deva_common_msgs::msg::builder::Init_KV_key();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__KV__BUILDER_HPP_
