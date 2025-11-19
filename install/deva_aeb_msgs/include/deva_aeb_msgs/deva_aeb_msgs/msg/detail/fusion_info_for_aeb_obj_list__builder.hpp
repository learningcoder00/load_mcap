// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObjList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_obj_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEBObjList_vehself
{
public:
  explicit Init_FusionInfoForAEBObjList_vehself(::deva_aeb_msgs::msg::FusionInfoForAEBObjList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEBObjList vehself(::deva_aeb_msgs::msg::FusionInfoForAEBObjList::_vehself_type arg)
  {
    msg_.vehself = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObjList msg_;
};

class Init_FusionInfoForAEBObjList_fusionobjlist
{
public:
  explicit Init_FusionInfoForAEBObjList_fusionobjlist(::deva_aeb_msgs::msg::FusionInfoForAEBObjList & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObjList_vehself fusionobjlist(::deva_aeb_msgs::msg::FusionInfoForAEBObjList::_fusionobjlist_type arg)
  {
    msg_.fusionobjlist = std::move(arg);
    return Init_FusionInfoForAEBObjList_vehself(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObjList msg_;
};

class Init_FusionInfoForAEBObjList_header
{
public:
  Init_FusionInfoForAEBObjList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEBObjList_fusionobjlist header(::deva_aeb_msgs::msg::FusionInfoForAEBObjList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FusionInfoForAEBObjList_fusionobjlist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObjList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEBObjList>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEBObjList_header();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ_LIST__BUILDER_HPP_
