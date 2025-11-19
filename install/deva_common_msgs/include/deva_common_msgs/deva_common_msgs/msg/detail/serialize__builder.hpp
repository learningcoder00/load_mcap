// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/Serialize.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/serialize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Serialize_data
{
public:
  explicit Init_Serialize_data(::deva_common_msgs::msg::Serialize & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::Serialize data(::deva_common_msgs::msg::Serialize::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::Serialize msg_;
};

class Init_Serialize_header
{
public:
  Init_Serialize_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Serialize_data header(::deva_common_msgs::msg::Serialize::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Serialize_data(msg_);
  }

private:
  ::deva_common_msgs::msg::Serialize msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::Serialize>()
{
  return deva_common_msgs::msg::builder::Init_Serialize_header();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__SERIALIZE__BUILDER_HPP_
