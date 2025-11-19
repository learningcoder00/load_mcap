// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/TurnInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/turn_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnInfoProto_lat
{
public:
  explicit Init_TurnInfoProto_lat(::deva_navi_msgs::msg::TurnInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::TurnInfoProto lat(::deva_navi_msgs::msg::TurnInfoProto::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::TurnInfoProto msg_;
};

class Init_TurnInfoProto_lot
{
public:
  explicit Init_TurnInfoProto_lot(::deva_navi_msgs::msg::TurnInfoProto & msg)
  : msg_(msg)
  {}
  Init_TurnInfoProto_lat lot(::deva_navi_msgs::msg::TurnInfoProto::_lot_type arg)
  {
    msg_.lot = std::move(arg);
    return Init_TurnInfoProto_lat(msg_);
  }

private:
  ::deva_navi_msgs::msg::TurnInfoProto msg_;
};

class Init_TurnInfoProto_type
{
public:
  Init_TurnInfoProto_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnInfoProto_lot type(::deva_navi_msgs::msg::TurnInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TurnInfoProto_lot(msg_);
  }

private:
  ::deva_navi_msgs::msg::TurnInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::TurnInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_TurnInfoProto_type();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__BUILDER_HPP_
