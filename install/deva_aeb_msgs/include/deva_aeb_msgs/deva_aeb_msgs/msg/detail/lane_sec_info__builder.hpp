// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/LaneSecInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/lane_sec_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneSecInfo_nearramppoint
{
public:
  explicit Init_LaneSecInfo_nearramppoint(::deva_aeb_msgs::msg::LaneSecInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::LaneSecInfo nearramppoint(::deva_aeb_msgs::msg::LaneSecInfo::_nearramppoint_type arg)
  {
    msg_.nearramppoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneSecInfo msg_;
};

class Init_LaneSecInfo_ppty
{
public:
  explicit Init_LaneSecInfo_ppty(::deva_aeb_msgs::msg::LaneSecInfo & msg)
  : msg_(msg)
  {}
  Init_LaneSecInfo_nearramppoint ppty(::deva_aeb_msgs::msg::LaneSecInfo::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return Init_LaneSecInfo_nearramppoint(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneSecInfo msg_;
};

class Init_LaneSecInfo_info
{
public:
  explicit Init_LaneSecInfo_info(::deva_aeb_msgs::msg::LaneSecInfo & msg)
  : msg_(msg)
  {}
  Init_LaneSecInfo_ppty info(::deva_aeb_msgs::msg::LaneSecInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LaneSecInfo_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneSecInfo msg_;
};

class Init_LaneSecInfo_estimn
{
public:
  Init_LaneSecInfo_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneSecInfo_info estimn(::deva_aeb_msgs::msg::LaneSecInfo::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_LaneSecInfo_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneSecInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::LaneSecInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_LaneSecInfo_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__BUILDER_HPP_
