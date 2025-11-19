// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/RearLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/rear_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_RearLaneInfo_ppty
{
public:
  explicit Init_RearLaneInfo_ppty(::deva_aeb_msgs::msg::RearLaneInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::RearLaneInfo ppty(::deva_aeb_msgs::msg::RearLaneInfo::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RearLaneInfo msg_;
};

class Init_RearLaneInfo_info
{
public:
  explicit Init_RearLaneInfo_info(::deva_aeb_msgs::msg::RearLaneInfo & msg)
  : msg_(msg)
  {}
  Init_RearLaneInfo_ppty info(::deva_aeb_msgs::msg::RearLaneInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RearLaneInfo_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RearLaneInfo msg_;
};

class Init_RearLaneInfo_estimn
{
public:
  Init_RearLaneInfo_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RearLaneInfo_info estimn(::deva_aeb_msgs::msg::RearLaneInfo::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_RearLaneInfo_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::RearLaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::RearLaneInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_RearLaneInfo_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__REAR_LANE_INFO__BUILDER_HPP_
