// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/LaneFstInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/lane_fst_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneFstInfo_extracurveinfo
{
public:
  explicit Init_LaneFstInfo_extracurveinfo(::deva_aeb_msgs::msg::LaneFstInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::LaneFstInfo extracurveinfo(::deva_aeb_msgs::msg::LaneFstInfo::_extracurveinfo_type arg)
  {
    msg_.extracurveinfo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneFstInfo msg_;
};

class Init_LaneFstInfo_ppty
{
public:
  explicit Init_LaneFstInfo_ppty(::deva_aeb_msgs::msg::LaneFstInfo & msg)
  : msg_(msg)
  {}
  Init_LaneFstInfo_extracurveinfo ppty(::deva_aeb_msgs::msg::LaneFstInfo::_ppty_type arg)
  {
    msg_.ppty = std::move(arg);
    return Init_LaneFstInfo_extracurveinfo(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneFstInfo msg_;
};

class Init_LaneFstInfo_info
{
public:
  explicit Init_LaneFstInfo_info(::deva_aeb_msgs::msg::LaneFstInfo & msg)
  : msg_(msg)
  {}
  Init_LaneFstInfo_ppty info(::deva_aeb_msgs::msg::LaneFstInfo::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LaneFstInfo_ppty(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneFstInfo msg_;
};

class Init_LaneFstInfo_estimn
{
public:
  Init_LaneFstInfo_estimn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneFstInfo_info estimn(::deva_aeb_msgs::msg::LaneFstInfo::_estimn_type arg)
  {
    msg_.estimn = std::move(arg);
    return Init_LaneFstInfo_info(msg_);
  }

private:
  ::deva_aeb_msgs::msg::LaneFstInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::LaneFstInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_LaneFstInfo_estimn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_FST_INFO__BUILDER_HPP_
