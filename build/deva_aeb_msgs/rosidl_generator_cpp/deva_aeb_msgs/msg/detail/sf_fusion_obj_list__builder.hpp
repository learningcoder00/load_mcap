// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObjList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionObjList_validsize
{
public:
  explicit Init_SFFusionObjList_validsize(::deva_aeb_msgs::msg::SFFusionObjList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionObjList validsize(::deva_aeb_msgs::msg::SFFusionObjList::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

class Init_SFFusionObjList_obj
{
public:
  explicit Init_SFFusionObjList_obj(::deva_aeb_msgs::msg::SFFusionObjList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjList_validsize obj(::deva_aeb_msgs::msg::SFFusionObjList::_obj_type arg)
  {
    msg_.obj = std::move(arg);
    return Init_SFFusionObjList_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

class Init_SFFusionObjList_reserved
{
public:
  explicit Init_SFFusionObjList_reserved(::deva_aeb_msgs::msg::SFFusionObjList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjList_obj reserved(::deva_aeb_msgs::msg::SFFusionObjList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionObjList_obj(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

class Init_SFFusionObjList_snsrstate
{
public:
  explicit Init_SFFusionObjList_snsrstate(::deva_aeb_msgs::msg::SFFusionObjList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjList_reserved snsrstate(::deva_aeb_msgs::msg::SFFusionObjList::_snsrstate_type arg)
  {
    msg_.snsrstate = std::move(arg);
    return Init_SFFusionObjList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

class Init_SFFusionObjList_framenum
{
public:
  explicit Init_SFFusionObjList_framenum(::deva_aeb_msgs::msg::SFFusionObjList & msg)
  : msg_(msg)
  {}
  Init_SFFusionObjList_snsrstate framenum(::deva_aeb_msgs::msg::SFFusionObjList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionObjList_snsrstate(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

class Init_SFFusionObjList_timestamp
{
public:
  Init_SFFusionObjList_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionObjList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionObjList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionObjList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionObjList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionObjList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionObjList_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_LIST__BUILDER_HPP_
