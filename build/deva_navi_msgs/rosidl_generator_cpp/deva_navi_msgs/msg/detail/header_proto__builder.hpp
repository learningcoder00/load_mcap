// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/HeaderProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/header_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_HeaderProto_timestamp
{
public:
  explicit Init_HeaderProto_timestamp(::deva_navi_msgs::msg::HeaderProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::HeaderProto timestamp(::deva_navi_msgs::msg::HeaderProto::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::HeaderProto msg_;
};

class Init_HeaderProto_id
{
public:
  Init_HeaderProto_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HeaderProto_timestamp id(::deva_navi_msgs::msg::HeaderProto::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_HeaderProto_timestamp(msg_);
  }

private:
  ::deva_navi_msgs::msg::HeaderProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::HeaderProto>()
{
  return deva_navi_msgs::msg::builder::Init_HeaderProto_id();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__BUILDER_HPP_
