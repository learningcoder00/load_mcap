// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTSList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTSList_validsize
{
public:
  explicit Init_SFFusionTSList_validsize(::deva_aeb_msgs::msg::SFFusionTSList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionTSList validsize(::deva_aeb_msgs::msg::SFFusionTSList::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTSList msg_;
};

class Init_SFFusionTSList_trafficsign
{
public:
  explicit Init_SFFusionTSList_trafficsign(::deva_aeb_msgs::msg::SFFusionTSList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSList_validsize trafficsign(::deva_aeb_msgs::msg::SFFusionTSList::_trafficsign_type arg)
  {
    msg_.trafficsign = std::move(arg);
    return Init_SFFusionTSList_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTSList msg_;
};

class Init_SFFusionTSList_reversed
{
public:
  explicit Init_SFFusionTSList_reversed(::deva_aeb_msgs::msg::SFFusionTSList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSList_trafficsign reversed(::deva_aeb_msgs::msg::SFFusionTSList::_reversed_type arg)
  {
    msg_.reversed = std::move(arg);
    return Init_SFFusionTSList_trafficsign(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTSList msg_;
};

class Init_SFFusionTSList_framenum
{
public:
  explicit Init_SFFusionTSList_framenum(::deva_aeb_msgs::msg::SFFusionTSList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSList_reversed framenum(::deva_aeb_msgs::msg::SFFusionTSList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionTSList_reversed(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTSList msg_;
};

class Init_SFFusionTSList_timestamp
{
public:
  Init_SFFusionTSList_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTSList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionTSList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionTSList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTSList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionTSList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionTSList_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST__BUILDER_HPP_
