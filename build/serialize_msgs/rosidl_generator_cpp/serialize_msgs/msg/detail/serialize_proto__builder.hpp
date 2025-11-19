// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serialize_msgs:msg/SerializeProto.idl
// generated code does not contain a copyright notice

#ifndef SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__BUILDER_HPP_
#define SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serialize_msgs/msg/detail/serialize_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serialize_msgs
{

namespace msg
{

namespace builder
{

class Init_SerializeProto_data
{
public:
  explicit Init_SerializeProto_data(::serialize_msgs::msg::SerializeProto & msg)
  : msg_(msg)
  {}
  ::serialize_msgs::msg::SerializeProto data(::serialize_msgs::msg::SerializeProto::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serialize_msgs::msg::SerializeProto msg_;
};

class Init_SerializeProto_header
{
public:
  Init_SerializeProto_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerializeProto_data header(::serialize_msgs::msg::SerializeProto::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SerializeProto_data(msg_);
  }

private:
  ::serialize_msgs::msg::SerializeProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serialize_msgs::msg::SerializeProto>()
{
  return serialize_msgs::msg::builder::Init_SerializeProto_header();
}

}  // namespace serialize_msgs

#endif  // SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__BUILDER_HPP_
