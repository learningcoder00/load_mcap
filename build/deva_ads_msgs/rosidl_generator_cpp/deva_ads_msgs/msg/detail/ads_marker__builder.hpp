// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__BUILDER_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_ads_msgs/msg/detail/ads_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_ads_msgs
{

namespace msg
{

namespace builder
{

class Init_AdsMarker_detail
{
public:
  explicit Init_AdsMarker_detail(::deva_ads_msgs::msg::AdsMarker & msg)
  : msg_(msg)
  {}
  ::deva_ads_msgs::msg::AdsMarker detail(::deva_ads_msgs::msg::AdsMarker::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarker msg_;
};

class Init_AdsMarker_clickable
{
public:
  explicit Init_AdsMarker_clickable(::deva_ads_msgs::msg::AdsMarker & msg)
  : msg_(msg)
  {}
  Init_AdsMarker_detail clickable(::deva_ads_msgs::msg::AdsMarker::_clickable_type arg)
  {
    msg_.clickable = std::move(arg);
    return Init_AdsMarker_detail(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarker msg_;
};

class Init_AdsMarker_text
{
public:
  explicit Init_AdsMarker_text(::deva_ads_msgs::msg::AdsMarker & msg)
  : msg_(msg)
  {}
  Init_AdsMarker_clickable text(::deva_ads_msgs::msg::AdsMarker::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_AdsMarker_clickable(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarker msg_;
};

class Init_AdsMarker_points
{
public:
  Init_AdsMarker_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdsMarker_text points(::deva_ads_msgs::msg::AdsMarker::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_AdsMarker_text(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_ads_msgs::msg::AdsMarker>()
{
  return deva_ads_msgs::msg::builder::Init_AdsMarker_points();
}

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__BUILDER_HPP_
