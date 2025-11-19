// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneGroupIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneGroupIDType_lane_group_id
{
public:
  explicit Init_LaneGroupIDType_lane_group_id(::deva_gaode_routing_msgs::msg::LaneGroupIDType & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::LaneGroupIDType lane_group_id(::deva_gaode_routing_msgs::msg::LaneGroupIDType::_lane_group_id_type arg)
  {
    msg_.lane_group_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneGroupIDType msg_;
};

class Init_LaneGroupIDType_tile_id
{
public:
  Init_LaneGroupIDType_tile_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneGroupIDType_lane_group_id tile_id(::deva_gaode_routing_msgs::msg::LaneGroupIDType::_tile_id_type arg)
  {
    msg_.tile_id = std::move(arg);
    return Init_LaneGroupIDType_lane_group_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::LaneGroupIDType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::LaneGroupIDType>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_LaneGroupIDType_tile_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__BUILDER_HPP_
