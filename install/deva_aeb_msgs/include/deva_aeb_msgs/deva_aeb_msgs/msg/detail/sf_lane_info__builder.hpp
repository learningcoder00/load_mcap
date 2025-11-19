// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFLaneInfo_reserved
{
public:
  explicit Init_SFLaneInfo_reserved(::deva_aeb_msgs::msg::SFLaneInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFLaneInfo reserved(::deva_aeb_msgs::msg::SFLaneInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneInfo msg_;
};

class Init_SFLaneInfo_lanemkrtype
{
public:
  explicit Init_SFLaneInfo_lanemkrtype(::deva_aeb_msgs::msg::SFLaneInfo & msg)
  : msg_(msg)
  {}
  Init_SFLaneInfo_reserved lanemkrtype(::deva_aeb_msgs::msg::SFLaneInfo::_lanemkrtype_type arg)
  {
    msg_.lanemkrtype = std::move(arg);
    return Init_SFLaneInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneInfo msg_;
};

class Init_SFLaneInfo_lanecolor
{
public:
  Init_SFLaneInfo_lanecolor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFLaneInfo_lanemkrtype lanecolor(::deva_aeb_msgs::msg::SFLaneInfo::_lanecolor_type arg)
  {
    msg_.lanecolor = std::move(arg);
    return Init_SFLaneInfo_lanemkrtype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFLaneInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFLaneInfo_lanecolor();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_INFO__BUILDER_HPP_
