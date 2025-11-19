// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_RGAdditionalLaneInfo_active_time
{
public:
  explicit Init_RGAdditionalLaneInfo_active_time(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo active_time(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo::_active_time_type arg)
  {
    msg_.active_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo msg_;
};

class Init_RGAdditionalLaneInfo_rg_add_lane_property
{
public:
  explicit Init_RGAdditionalLaneInfo_rg_add_lane_property(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & msg)
  : msg_(msg)
  {}
  Init_RGAdditionalLaneInfo_active_time rg_add_lane_property(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo::_rg_add_lane_property_type arg)
  {
    msg_.rg_add_lane_property = std::move(arg);
    return Init_RGAdditionalLaneInfo_active_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo msg_;
};

class Init_RGAdditionalLaneInfo_flag
{
public:
  explicit Init_RGAdditionalLaneInfo_flag(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & msg)
  : msg_(msg)
  {}
  Init_RGAdditionalLaneInfo_rg_add_lane_property flag(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_RGAdditionalLaneInfo_rg_add_lane_property(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo msg_;
};

class Init_RGAdditionalLaneInfo_arrow
{
public:
  Init_RGAdditionalLaneInfo_arrow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGAdditionalLaneInfo_flag arrow(::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo::_arrow_type arg)
  {
    msg_.arrow = std::move(arg);
    return Init_RGAdditionalLaneInfo_flag(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_RGAdditionalLaneInfo_arrow();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__BUILDER_HPP_
