// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/IconRoadProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/icon_road_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_IconRoadProto_points
{
public:
  explicit Init_IconRoadProto_points(::deva_navi_msgs::msg::IconRoadProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::IconRoadProto points(::deva_navi_msgs::msg::IconRoadProto::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::IconRoadProto msg_;
};

class Init_IconRoadProto_type
{
public:
  explicit Init_IconRoadProto_type(::deva_navi_msgs::msg::IconRoadProto & msg)
  : msg_(msg)
  {}
  Init_IconRoadProto_points type(::deva_navi_msgs::msg::IconRoadProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_IconRoadProto_points(msg_);
  }

private:
  ::deva_navi_msgs::msg::IconRoadProto msg_;
};

class Init_IconRoadProto_usage
{
public:
  Init_IconRoadProto_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IconRoadProto_type usage(::deva_navi_msgs::msg::IconRoadProto::_usage_type arg)
  {
    msg_.usage = std::move(arg);
    return Init_IconRoadProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::IconRoadProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::IconRoadProto>()
{
  return deva_navi_msgs::msg::builder::Init_IconRoadProto_usage();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__BUILDER_HPP_
