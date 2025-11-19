// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObjNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_noa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionObjNOA_visinfo
{
public:
  explicit Init_SFFusionObjNOA_visinfo(::deva_aeb_msgs::msg::SFFusionObjNOA & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionObjNOA visinfo(::deva_aeb_msgs::msg::SFFusionObjNOA::_visinfo_type arg)
  {
    msg_.visinfo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjNOA msg_;
};

class Init_SFFusionObjNOA_ppty
{
public:
  explicit Init_SFFusionObjNOA_ppty(::deva_aeb_msgs::msg::SFFusionObjNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjNOA_visinfo ppty(::deva_aeb_msgs::msg::SFFusionObjNOA::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return Init_SFFusionObjNOA_visinfo(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjNOA msg_;
};

class Init_SFFusionObjNOA_info
{
public:
  explicit Init_SFFusionObjNOA_info(::deva_aeb_msgs::msg::SFFusionObjNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjNOA_ppty info(::deva_aeb_msgs::msg::SFFusionObjNOA::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SFFusionObjNOA_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjNOA msg_;
};

class Init_SFFusionObjNOA_estimn
{
public:
  Init_SFFusionObjNOA_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionObjNOA_info estimn(::deva_aeb_msgs::msg::SFFusionObjNOA::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_SFFusionObjNOA_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionObjNOA>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionObjNOA_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__BUILDER_HPP_
