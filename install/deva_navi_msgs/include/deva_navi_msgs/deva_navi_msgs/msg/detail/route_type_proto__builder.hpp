// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/RouteTypeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/route_type_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteTypeProto_type
{
public:
  explicit Init_RouteTypeProto_type(::deva_navi_msgs::msg::RouteTypeProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::RouteTypeProto type(::deva_navi_msgs::msg::RouteTypeProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::RouteTypeProto msg_;
};

class Init_RouteTypeProto_header
{
public:
  Init_RouteTypeProto_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteTypeProto_type header(::deva_navi_msgs::msg::RouteTypeProto::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RouteTypeProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::RouteTypeProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::RouteTypeProto>()
{
  return deva_navi_msgs::msg::builder::Init_RouteTypeProto_header();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROUTE_TYPE_PROTO__BUILDER_HPP_
