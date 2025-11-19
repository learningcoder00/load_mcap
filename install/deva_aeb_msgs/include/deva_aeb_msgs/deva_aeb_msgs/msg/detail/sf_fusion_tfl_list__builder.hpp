// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTFLList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTFLList_validsize
{
public:
  explicit Init_SFFusionTFLList_validsize(::deva_aeb_msgs::msg::SFFusionTFLList & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionTFLList validsize(::deva_aeb_msgs::msg::SFFusionTFLList::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

class Init_SFFusionTFLList_tfllist
{
public:
  explicit Init_SFFusionTFLList_tfllist(::deva_aeb_msgs::msg::SFFusionTFLList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLList_validsize tfllist(::deva_aeb_msgs::msg::SFFusionTFLList::_tfllist_type arg)
  {
    msg_.tfllist = std::move(arg);
    return Init_SFFusionTFLList_validsize(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

class Init_SFFusionTFLList_reserved
{
public:
  explicit Init_SFFusionTFLList_reserved(::deva_aeb_msgs::msg::SFFusionTFLList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLList_tfllist reserved(::deva_aeb_msgs::msg::SFFusionTFLList::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTFLList_tfllist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

class Init_SFFusionTFLList_tflcount
{
public:
  explicit Init_SFFusionTFLList_tflcount(::deva_aeb_msgs::msg::SFFusionTFLList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLList_reserved tflcount(::deva_aeb_msgs::msg::SFFusionTFLList::_tflcount_type arg)
  {
    msg_.tflcount = std::move(arg);
    return Init_SFFusionTFLList_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

class Init_SFFusionTFLList_framenum
{
public:
  explicit Init_SFFusionTFLList_framenum(::deva_aeb_msgs::msg::SFFusionTFLList & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLList_tflcount framenum(::deva_aeb_msgs::msg::SFFusionTFLList::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionTFLList_tflcount(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

class Init_SFFusionTFLList_timestamp
{
public:
  Init_SFFusionTFLList_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTFLList_framenum timestamp(::deva_aeb_msgs::msg::SFFusionTFLList::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionTFLList_framenum(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFLList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionTFLList>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionTFLList_timestamp();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__BUILDER_HPP_
