// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFSecLaneNearRampPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFSecLaneNearRampPoint_reserved
{
public:
  explicit Init_SFSecLaneNearRampPoint_reserved(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFSecLaneNearRampPoint reserved(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneNearRampPoint msg_;
};

class Init_SFSecLaneNearRampPoint_type
{
public:
  explicit Init_SFSecLaneNearRampPoint_type(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneNearRampPoint_reserved type(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFSecLaneNearRampPoint_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneNearRampPoint msg_;
};

class Init_SFSecLaneNearRampPoint_posy
{
public:
  explicit Init_SFSecLaneNearRampPoint_posy(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint & msg)
  : msg_(msg)
  {}
  Init_SFSecLaneNearRampPoint_type posy(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint::_posy_type arg)
  {
    msg_.posy = std::move(arg);
    return Init_SFSecLaneNearRampPoint_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneNearRampPoint msg_;
};

class Init_SFSecLaneNearRampPoint_posx
{
public:
  Init_SFSecLaneNearRampPoint_posx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFSecLaneNearRampPoint_posy posx(::deva_aeb_msgs::msg::SFSecLaneNearRampPoint::_posx_type arg)
  {
    msg_.posx = std::move(arg);
    return Init_SFSecLaneNearRampPoint_posy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFSecLaneNearRampPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFSecLaneNearRampPoint>()
{
  return deva_aeb_msgs::msg::builder::Init_SFSecLaneNearRampPoint_posx();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__BUILDER_HPP_
