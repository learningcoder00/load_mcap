// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_ads_msgs:msg/AdsInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__BUILDER_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_ads_msgs/msg/detail/ads_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_ads_msgs
{

namespace msg
{

namespace builder
{

class Init_AdsInfo_value
{
public:
  explicit Init_AdsInfo_value(::deva_ads_msgs::msg::AdsInfo & msg)
  : msg_(msg)
  {}
  ::deva_ads_msgs::msg::AdsInfo value(::deva_ads_msgs::msg::AdsInfo::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsInfo msg_;
};

class Init_AdsInfo_key
{
public:
  Init_AdsInfo_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdsInfo_value key(::deva_ads_msgs::msg::AdsInfo::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_AdsInfo_value(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_ads_msgs::msg::AdsInfo>()
{
  return deva_ads_msgs::msg::builder::Init_AdsInfo_key();
}

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__BUILDER_HPP_
