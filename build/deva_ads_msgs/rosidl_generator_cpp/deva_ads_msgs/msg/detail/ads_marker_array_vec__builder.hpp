// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__BUILDER_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_ads_msgs
{

namespace msg
{

namespace builder
{

class Init_AdsMarkerArrayVec_ads_marker_arrays
{
public:
  explicit Init_AdsMarkerArrayVec_ads_marker_arrays(::deva_ads_msgs::msg::AdsMarkerArrayVec & msg)
  : msg_(msg)
  {}
  ::deva_ads_msgs::msg::AdsMarkerArrayVec ads_marker_arrays(::deva_ads_msgs::msg::AdsMarkerArrayVec::_ads_marker_arrays_type arg)
  {
    msg_.ads_marker_arrays = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArrayVec msg_;
};

class Init_AdsMarkerArrayVec_marker_type
{
public:
  explicit Init_AdsMarkerArrayVec_marker_type(::deva_ads_msgs::msg::AdsMarkerArrayVec & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArrayVec_ads_marker_arrays marker_type(::deva_ads_msgs::msg::AdsMarkerArrayVec::_marker_type_type arg)
  {
    msg_.marker_type = std::move(arg);
    return Init_AdsMarkerArrayVec_ads_marker_arrays(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArrayVec msg_;
};

class Init_AdsMarkerArrayVec_stream
{
public:
  explicit Init_AdsMarkerArrayVec_stream(::deva_ads_msgs::msg::AdsMarkerArrayVec & msg)
  : msg_(msg)
  {}
  Init_AdsMarkerArrayVec_marker_type stream(::deva_ads_msgs::msg::AdsMarkerArrayVec::_stream_type arg)
  {
    msg_.stream = std::move(arg);
    return Init_AdsMarkerArrayVec_marker_type(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArrayVec msg_;
};

class Init_AdsMarkerArrayVec_header
{
public:
  Init_AdsMarkerArrayVec_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdsMarkerArrayVec_stream header(::deva_ads_msgs::msg::AdsMarkerArrayVec::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AdsMarkerArrayVec_stream(msg_);
  }

private:
  ::deva_ads_msgs::msg::AdsMarkerArrayVec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_ads_msgs::msg::AdsMarkerArrayVec>()
{
  return deva_ads_msgs::msg::builder::Init_AdsMarkerArrayVec_header();
}

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__BUILDER_HPP_
