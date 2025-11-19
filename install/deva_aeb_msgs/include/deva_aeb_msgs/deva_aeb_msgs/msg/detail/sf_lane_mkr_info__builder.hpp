// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneMkrInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_MKR_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_MKR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_lane_mkr_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFLaneMkrInfo_reserved
{
public:
  explicit Init_SFLaneMkrInfo_reserved(::deva_aeb_msgs::msg::SFLaneMkrInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFLaneMkrInfo reserved(::deva_aeb_msgs::msg::SFLaneMkrInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneMkrInfo msg_;
};

class Init_SFLaneMkrInfo_lanemkrtype
{
public:
  explicit Init_SFLaneMkrInfo_lanemkrtype(::deva_aeb_msgs::msg::SFLaneMkrInfo & msg)
  : msg_(msg)
  {}
  Init_SFLaneMkrInfo_reserved lanemkrtype(::deva_aeb_msgs::msg::SFLaneMkrInfo::_lanemkrtype_type arg)
  {
    msg_.lanemkrtype = std::move(arg);
    return Init_SFLaneMkrInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneMkrInfo msg_;
};

class Init_SFLaneMkrInfo_lanecolor
{
public:
  explicit Init_SFLaneMkrInfo_lanecolor(::deva_aeb_msgs::msg::SFLaneMkrInfo & msg)
  : msg_(msg)
  {}
  Init_SFLaneMkrInfo_lanemkrtype lanecolor(::deva_aeb_msgs::msg::SFLaneMkrInfo::_lanecolor_type arg)
  {
    msg_.lanecolor = std::move(arg);
    return Init_SFLaneMkrInfo_lanemkrtype(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneMkrInfo msg_;
};

class Init_SFLaneMkrInfo_width
{
public:
  Init_SFLaneMkrInfo_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFLaneMkrInfo_lanecolor width(::deva_aeb_msgs::msg::SFLaneMkrInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFLaneMkrInfo_lanecolor(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFLaneMkrInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFLaneMkrInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFLaneMkrInfo_width();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_MKR_INFO__BUILDER_HPP_
