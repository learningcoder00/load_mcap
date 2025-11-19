// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/TipInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/tip_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_TipInfoProto_type
{
public:
  explicit Init_TipInfoProto_type(::deva_navi_msgs::msg::TipInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::TipInfoProto type(::deva_navi_msgs::msg::TipInfoProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::TipInfoProto msg_;
};

class Init_TipInfoProto_tip
{
public:
  Init_TipInfoProto_tip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TipInfoProto_type tip(::deva_navi_msgs::msg::TipInfoProto::_tip_type arg)
  {
    msg_.tip = std::move(arg);
    return Init_TipInfoProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::TipInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::TipInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_TipInfoProto_tip();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__BUILDER_HPP_
