// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneTrafficInfo_arrow
{
public:
  explicit Init_LaneTrafficInfo_arrow(::deva_gaode_routing_msgs::msg::LaneTrafficInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneTrafficInfo arrow(::deva_gaode_routing_msgs::msg::LaneTrafficInfo::_arrow_type arg)
  {
    msg_.arrow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTrafficInfo msg_;
};

class Init_LaneTrafficInfo_lane_type
{
public:
  explicit Init_LaneTrafficInfo_lane_type(::deva_gaode_routing_msgs::msg::LaneTrafficInfo & msg)
  : msg_(msg)
  {}
  Init_LaneTrafficInfo_arrow lane_type(::deva_gaode_routing_msgs::msg::LaneTrafficInfo::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneTrafficInfo_arrow(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTrafficInfo msg_;
};

class Init_LaneTrafficInfo_is_bus
{
public:
  Init_LaneTrafficInfo_is_bus()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneTrafficInfo_lane_type is_bus(::deva_gaode_routing_msgs::msg::LaneTrafficInfo::_is_bus_type arg)
  {
    msg_.is_bus = std::move(arg);
    return Init_LaneTrafficInfo_lane_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneTrafficInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneTrafficInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneTrafficInfo_is_bus();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__BUILDER_HPP_
