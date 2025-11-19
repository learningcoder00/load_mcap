// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/NaviStatusProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/navi_status_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_NaviStatusProto_status
{
public:
  explicit Init_NaviStatusProto_status(::deva_navi_msgs::msg::NaviStatusProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::NaviStatusProto status(::deva_navi_msgs::msg::NaviStatusProto::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviStatusProto msg_;
};

class Init_NaviStatusProto_header
{
public:
  Init_NaviStatusProto_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviStatusProto_status header(::deva_navi_msgs::msg::NaviStatusProto::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NaviStatusProto_status(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviStatusProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::NaviStatusProto>()
{
  return deva_navi_msgs::msg::builder::Init_NaviStatusProto_header();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__BUILDER_HPP_
