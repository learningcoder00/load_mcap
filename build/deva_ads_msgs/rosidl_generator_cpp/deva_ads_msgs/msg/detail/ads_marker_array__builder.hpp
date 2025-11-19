// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__BUILDER_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_ads_msgs
{

namespace msg
{

namespace builder
{

class Init_AdsMarkerArray_markers
{
public:
  explicit Init_AdsMarkerArray_markers(::deva_ads_msgs::msg::AdsMarkerArray & msg)
  : msg_(msg)
  {}
  ::deva_ads_msgs::msg::AdsMarkerArray markers(::deva_ads_msgs::msg::AdsMarkerArray::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

class Init_AdsMarkerArray_height
{
public:
  explicit Init_AdsMarkerArray_height(::deva_ads_msgs::msg::AdsMarkerArray & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArray_markers height(::deva_ads_msgs::msg::AdsMarkerArray::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_AdsMarkerArray_markers(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

class Init_AdsMarkerArray_width
{
public:
  explicit Init_AdsMarkerArray_width(::deva_ads_msgs::msg::AdsMarkerArray & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArray_height width(::deva_ads_msgs::msg::AdsMarkerArray::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_AdsMarkerArray_height(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

class Init_AdsMarkerArray_color
{
public:
  explicit Init_AdsMarkerArray_color(::deva_ads_msgs::msg::AdsMarkerArray & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArray_width color(::deva_ads_msgs::msg::AdsMarkerArray::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_AdsMarkerArray_width(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

class Init_AdsMarkerArray_classes
{
public:
  explicit Init_AdsMarkerArray_classes(::deva_ads_msgs::msg::AdsMarkerArray & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArray_color classes(::deva_ads_msgs::msg::AdsMarkerArray::_classes_type arg)
  {
    msg_.classes = std::move(arg);
    return Init_AdsMarkerArray_color(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

class Init_AdsMarkerArray_uuid
{
public:
  Init_AdsMarkerArray_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdsMarkerArray_classes uuid(::deva_ads_msgs::msg::AdsMarkerArray::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_AdsMarkerArray_classes(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_ads_msgs::msg::AdsMarkerArray>()
{
  return deva_ads_msgs::msg::builder::Init_AdsMarkerArray_uuid();
}

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__BUILDER_HPP_
