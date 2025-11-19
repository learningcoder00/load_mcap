// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/AdasV2Proto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/adas_v2_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_AdasV2Proto_data
{
public:
  explicit Init_AdasV2Proto_data(::deva_navi_msgs::msg::AdasV2Proto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::AdasV2Proto data(::deva_navi_msgs::msg::AdasV2Proto::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::AdasV2Proto msg_;
};

class Init_AdasV2Proto_id
{
public:
  Init_AdasV2Proto_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdasV2Proto_data id(::deva_navi_msgs::msg::AdasV2Proto::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AdasV2Proto_data(msg_);
  }

private:
  ::deva_navi_msgs::msg::AdasV2Proto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::AdasV2Proto>()
{
  return deva_navi_msgs::msg::builder::Init_AdasV2Proto_id();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ADAS_V2_PROTO__BUILDER_HPP_
