// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObstracleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBSTRACLE_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBSTRACLE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_obstracle_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_FusionInfoForAEBObstracleList_reserved
{
public:
  explicit Init_FusionInfoForAEBObstracleList_reserved(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList reserved(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList msg_;
};

class Init_FusionInfoForAEBObstracleList_validsize
{
public:
  explicit Init_FusionInfoForAEBObstracleList_validsize(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObstracleList_reserved validsize(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return Init_FusionInfoForAEBObstracleList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList msg_;
};

class Init_FusionInfoForAEBObstracleList_framenum
{
public:
  explicit Init_FusionInfoForAEBObstracleList_framenum(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObstracleList_validsize framenum(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_FusionInfoForAEBObstracleList_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList msg_;
};

class Init_FusionInfoForAEBObstracleList_timestamp
{
public:
  explicit Init_FusionInfoForAEBObstracleList_timestamp(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList & msg)
  : msg_(msg)
  {}
  Init_FusionInfoForAEBObstracleList_framenum timestamp(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FusionInfoForAEBObstracleList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList msg_;
};

class Init_FusionInfoForAEBObstracleList_obslist
{
public:
  Init_FusionInfoForAEBObstracleList_obslist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusionInfoForAEBObstracleList_timestamp obslist(::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList::_obslist_type arg)
  {
    msg_.obslist = std::move(arg);
    return Init_FusionInfoForAEBObstracleList_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::FusionInfoForAEBObstracleList>()
{
  return deva_aeb_msgs::msg::builder::Init_FusionInfoForAEBObstracleList_obslist();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBSTRACLE_LIST__BUILDER_HPP_
