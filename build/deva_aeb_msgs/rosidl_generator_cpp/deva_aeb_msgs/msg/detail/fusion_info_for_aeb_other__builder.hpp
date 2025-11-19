// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEBOther_fusiondiaglist
{
public:
  explicit Init_FusionInfoForAEBOther_fusiondiaglist(::deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther fusiondiaglist(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_fusiondiaglist_type arg)
  {
    msg_.fusiondiaglist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

class Init_FusionInfoForAEBOther_fusionroadsignlist
{
public:
  explicit Init_FusionInfoForAEBOther_fusionroadsignlist(::deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBOther_fusiondiaglist fusionroadsignlist(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_fusionroadsignlist_type arg)
  {
    msg_.fusionroadsignlist = std::move(arg);
    return Init_FusionInfoForAEBOther_fusiondiaglist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

class Init_FusionInfoForAEBOther_fusiontfllist
{
public:
  explicit Init_FusionInfoForAEBOther_fusiontfllist(::deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBOther_fusionroadsignlist fusiontfllist(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_fusiontfllist_type arg)
  {
    msg_.fusiontfllist = std::move(arg);
    return Init_FusionInfoForAEBOther_fusionroadsignlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

class Init_FusionInfoForAEBOther_fusiontslist
{
public:
  explicit Init_FusionInfoForAEBOther_fusiontslist(::deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBOther_fusiontfllist fusiontslist(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_fusiontslist_type arg)
  {
    msg_.fusiontslist = std::move(arg);
    return Init_FusionInfoForAEBOther_fusiontfllist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

class Init_FusionInfoForAEBOther_vehself
{
public:
  explicit Init_FusionInfoForAEBOther_vehself(::deva_aeb_msgs::msg::FusionInfoForAEBOther & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBOther_fusiontslist vehself(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_vehself_type arg)
  {
    msg_.vehself = std::move(arg);
    return Init_FusionInfoForAEBOther_fusiontslist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

class Init_FusionInfoForAEBOther_roadppty
{
public:
  Init_FusionInfoForAEBOther_roadppty()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEBOther_vehself roadppty(::deva_aeb_msgs::msg::FusionInfoForAEBOther::_roadppty_type arg)
  {
    msg_.roadppty = std::move(arg);
    return Init_FusionInfoForAEBOther_vehself(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBOther msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEBOther>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEBOther_roadppty();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OTHER__BUILDER_HPP_
