// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/LineIconPointProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__LINE_ICON_POINT_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__LINE_ICON_POINT_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/line_icon_point_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_LineIconPointProto_type
{
public:
  explicit Init_LineIconPointProto_type(::deva_navi_msgs::msg::LineIconPointProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::LineIconPointProto type(::deva_navi_msgs::msg::LineIconPointProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::LineIconPointProto msg_;
};

class Init_LineIconPointProto_point
{
public:
  Init_LineIconPointProto_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineIconPointProto_type point(::deva_navi_msgs::msg::LineIconPointProto::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_LineIconPointProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::LineIconPointProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::LineIconPointProto>()
{
  return deva_navi_msgs::msg::builder::Init_LineIconPointProto_point();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__LINE_ICON_POINT_PROTO__BUILDER_HPP_
