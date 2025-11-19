// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTSListNOA_all_validsize
{
public:
  explicit Init_SFFusionTSListNOA_all_validsize(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::SFFusionTSListNOA all_validsize(::deva_perception_msgs::msg::SFFusionTSListNOA::_all_validsize_type arg)
  {
    msg_.all_validsize = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_trafficsign_all
{
public:
  explicit Init_SFFusionTSListNOA_trafficsign_all(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_all_validsize trafficsign_all(::deva_perception_msgs::msg::SFFusionTSListNOA::_trafficsign_all_type arg)
  {
    msg_.trafficsign_all = std::move(arg);
    return Init_SFFusionTSListNOA_all_validsize(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_validsize
{
public:
  explicit Init_SFFusionTSListNOA_validsize(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_trafficsign_all validsize(::deva_perception_msgs::msg::SFFusionTSListNOA::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return Init_SFFusionTSListNOA_trafficsign_all(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_trafficsign
{
public:
  explicit Init_SFFusionTSListNOA_trafficsign(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_validsize trafficsign(::deva_perception_msgs::msg::SFFusionTSListNOA::_trafficsign_type arg)
  {
    msg_.trafficsign = std::move(arg);
    return Init_SFFusionTSListNOA_validsize(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_reversed
{
public:
  explicit Init_SFFusionTSListNOA_reversed(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_trafficsign reversed(::deva_perception_msgs::msg::SFFusionTSListNOA::_reversed_type arg)
  {
    msg_.reversed = std::move(arg);
    return Init_SFFusionTSListNOA_trafficsign(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_framenum
{
public:
  explicit Init_SFFusionTSListNOA_framenum(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_reversed framenum(::deva_perception_msgs::msg::SFFusionTSListNOA::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionTSListNOA_reversed(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_timestamp
{
public:
  explicit Init_SFFusionTSListNOA_timestamp(::deva_perception_msgs::msg::SFFusionTSListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTSListNOA_framenum timestamp(::deva_perception_msgs::msg::SFFusionTSListNOA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionTSListNOA_framenum(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

class Init_SFFusionTSListNOA_header
{
public:
  Init_SFFusionTSListNOA_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTSListNOA_timestamp header(::deva_perception_msgs::msg::SFFusionTSListNOA::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SFFusionTSListNOA_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTSListNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SFFusionTSListNOA>()
{
  return deva_perception_msgs::msg::builder::Init_SFFusionTSListNOA_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__BUILDER_HPP_
