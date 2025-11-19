// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEB.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEB_fusiondiaglist
{
public:
  explicit Init_FusionInfoForAEB_fusiondiaglist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEB fusiondiaglist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusiondiaglist_type arg)
  {
    msg_.fusiondiaglist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusionroadsignlist
{
public:
  explicit Init_FusionInfoForAEB_fusionroadsignlist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusiondiaglist fusionroadsignlist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusionroadsignlist_type arg)
  {
    msg_.fusionroadsignlist = std::move(arg);
    return Init_FusionInfoForAEB_fusiondiaglist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusionobstraclelist
{
public:
  explicit Init_FusionInfoForAEB_fusionobstraclelist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusionroadsignlist fusionobstraclelist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusionobstraclelist_type arg)
  {
    msg_.fusionobstraclelist = std::move(arg);
    return Init_FusionInfoForAEB_fusionroadsignlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusiontfllist
{
public:
  explicit Init_FusionInfoForAEB_fusiontfllist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusionobstraclelist fusiontfllist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusiontfllist_type arg)
  {
    msg_.fusiontfllist = std::move(arg);
    return Init_FusionInfoForAEB_fusionobstraclelist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusiontslist
{
public:
  explicit Init_FusionInfoForAEB_fusiontslist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusiontfllist fusiontslist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusiontslist_type arg)
  {
    msg_.fusiontslist = std::move(arg);
    return Init_FusionInfoForAEB_fusiontfllist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_vehself
{
public:
  explicit Init_FusionInfoForAEB_vehself(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusiontslist vehself(::deva_aeb_msgs::msg::FusionInfoForAEB::_vehself_type arg)
  {
    msg_.vehself = std::move(arg);
    return Init_FusionInfoForAEB_fusiontslist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_roadppty
{
public:
  explicit Init_FusionInfoForAEB_roadppty(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_vehself roadppty(::deva_aeb_msgs::msg::FusionInfoForAEB::_roadppty_type arg)
  {
    msg_.roadppty = std::move(arg);
    return Init_FusionInfoForAEB_vehself(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusionroadedge
{
public:
  explicit Init_FusionInfoForAEB_fusionroadedge(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_roadppty fusionroadedge(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusionroadedge_type arg)
  {
    msg_.fusionroadedge = std::move(arg);
    return Init_FusionInfoForAEB_roadppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusionlanemkrlist
{
public:
  explicit Init_FusionInfoForAEB_fusionlanemkrlist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusionroadedge fusionlanemkrlist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusionlanemkrlist_type arg)
  {
    msg_.fusionlanemkrlist = std::move(arg);
    return Init_FusionInfoForAEB_fusionroadedge(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_fusionobjlist
{
public:
  explicit Init_FusionInfoForAEB_fusionobjlist(::deva_aeb_msgs::msg::FusionInfoForAEB & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEB_fusionlanemkrlist fusionobjlist(::deva_aeb_msgs::msg::FusionInfoForAEB::_fusionobjlist_type arg)
  {
    msg_.fusionobjlist = std::move(arg);
    return Init_FusionInfoForAEB_fusionlanemkrlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

class Init_FusionInfoForAEB_header
{
public:
  Init_FusionInfoForAEB_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEB_fusionobjlist header(::deva_aeb_msgs::msg::FusionInfoForAEB::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FusionInfoForAEB_fusionobjlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEB>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEB_header();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB__BUILDER_HPP_
