// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/ResponseProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/response_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_ResponseProto_id
{
public:
  Init_ResponseProto_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_navi_msgs::msg::ResponseProto id(::deva_navi_msgs::msg::ResponseProto::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::ResponseProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::ResponseProto>()
{
  return deva_navi_msgs::msg::builder::Init_ResponseProto_id();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__BUILDER_HPP_
