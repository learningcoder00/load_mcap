// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObj8.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_obj8__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEBObj8_reserved
{
public:
  explicit Init_FusionInfoForAEBObj8_reserved(::deva_aeb_msgs::msg::FusionInfoForAEBObj8 & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 reserved(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

class Init_FusionInfoForAEBObj8_validsize
{
public:
  explicit Init_FusionInfoForAEBObj8_validsize(::deva_aeb_msgs::msg::FusionInfoForAEBObj8 & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObj8_reserved validsize(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return Init_FusionInfoForAEBObj8_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

class Init_FusionInfoForAEBObj8_snsrstate
{
public:
  explicit Init_FusionInfoForAEBObj8_snsrstate(::deva_aeb_msgs::msg::FusionInfoForAEBObj8 & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObj8_validsize snsrstate(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_snsrstate_type arg)
  {
    msg_.snsrstate = std::move(arg);
    return Init_FusionInfoForAEBObj8_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

class Init_FusionInfoForAEBObj8_framenum
{
public:
  explicit Init_FusionInfoForAEBObj8_framenum(::deva_aeb_msgs::msg::FusionInfoForAEBObj8 & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObj8_snsrstate framenum(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_FusionInfoForAEBObj8_snsrstate(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

class Init_FusionInfoForAEBObj8_timestamp
{
public:
  explicit Init_FusionInfoForAEBObj8_timestamp(::deva_aeb_msgs::msg::FusionInfoForAEBObj8 & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObj8_framenum timestamp(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FusionInfoForAEBObj8_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

class Init_FusionInfoForAEBObj8_obj
{
public:
  Init_FusionInfoForAEBObj8_obj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEBObj8_timestamp obj(::deva_aeb_msgs::msg::FusionInfoForAEBObj8::_obj_type arg)
  {
    msg_.obj = std::move(arg);
    return Init_FusionInfoForAEBObj8_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObj8 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEBObj8>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEBObj8_obj();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__BUILDER_HPP_
