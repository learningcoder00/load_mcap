// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/TrfcSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_TrfcSign_offset
{
public:
  explicit Init_TrfcSign_offset(::deva_gaode_routing_msgs::msg::TrfcSign & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::TrfcSign offset(::deva_gaode_routing_msgs::msg::TrfcSign::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::TrfcSign msg_;
};

class Init_TrfcSign_speed
{
public:
  explicit Init_TrfcSign_speed(::deva_gaode_routing_msgs::msg::TrfcSign & msg)
  : msg_(msg)
  {}
  Init_TrfcSign_offset speed(::deva_gaode_routing_msgs::msg::TrfcSign::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_TrfcSign_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::TrfcSign msg_;
};

class Init_TrfcSign_speedflag
{
public:
  explicit Init_TrfcSign_speedflag(::deva_gaode_routing_msgs::msg::TrfcSign & msg)
  : msg_(msg)
  {}
  Init_TrfcSign_speed speedflag(::deva_gaode_routing_msgs::msg::TrfcSign::_speedflag_type arg)
  {
    msg_.speedflag = std::move(arg);
    return Init_TrfcSign_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::TrfcSign msg_;
};

class Init_TrfcSign_id
{
public:
  Init_TrfcSign_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrfcSign_speedflag id(::deva_gaode_routing_msgs::msg::TrfcSign::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrfcSign_speedflag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::TrfcSign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::TrfcSign>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_TrfcSign_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TRFC_SIGN__BUILDER_HPP_
