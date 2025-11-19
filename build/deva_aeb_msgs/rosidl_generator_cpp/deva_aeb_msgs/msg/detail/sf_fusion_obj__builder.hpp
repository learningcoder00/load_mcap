// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObj.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionObj_visinfo
{
public:
  explicit Init_SFFusionObj_visinfo(::deva_aeb_msgs::msg::SFFusionObj & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionObj visinfo(::deva_aeb_msgs::msg::SFFusionObj::_visinfo_type arg)
  {
    msg_.visinfo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObj msg_;
};

class Init_SFFusionObj_ppty
{
public:
  explicit Init_SFFusionObj_ppty(::deva_aeb_msgs::msg::SFFusionObj & msg)
  : msg_(msg)
  {}
  Init_SFFusionObj_visinfo ppty(::deva_aeb_msgs::msg::SFFusionObj::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return Init_SFFusionObj_visinfo(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObj msg_;
};

class Init_SFFusionObj_info
{
public:
  explicit Init_SFFusionObj_info(::deva_aeb_msgs::msg::SFFusionObj & msg)
  : msg_(msg)
  {}
  Init_SFFusionObj_ppty info(::deva_aeb_msgs::msg::SFFusionObj::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SFFusionObj_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObj msg_;
};

class Init_SFFusionObj_estimn
{
public:
  Init_SFFusionObj_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionObj_info estimn(::deva_aeb_msgs::msg::SFFusionObj::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_SFFusionObj_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionObj>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionObj_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ__BUILDER_HPP_
