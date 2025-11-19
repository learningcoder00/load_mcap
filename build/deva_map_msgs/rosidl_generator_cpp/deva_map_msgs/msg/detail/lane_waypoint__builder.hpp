// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/LaneWaypoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/lane_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneWaypoint_pose
{
public:
  explicit Init_LaneWaypoint_pose(::deva_map_msgs::msg::LaneWaypoint & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::LaneWaypoint pose(::deva_map_msgs::msg::LaneWaypoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::LaneWaypoint msg_;
};

class Init_LaneWaypoint_s
{
public:
  explicit Init_LaneWaypoint_s(::deva_map_msgs::msg::LaneWaypoint & msg)
  : msg_(msg)
  {}
  Init_LaneWaypoint_pose s(::deva_map_msgs::msg::LaneWaypoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_LaneWaypoint_pose(msg_);
  }

private:
  ::deva_map_msgs::msg::LaneWaypoint msg_;
};

class Init_LaneWaypoint_id
{
public:
  Init_LaneWaypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneWaypoint_s id(::deva_map_msgs::msg::LaneWaypoint::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneWaypoint_s(msg_);
  }

private:
  ::deva_map_msgs::msg::LaneWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::LaneWaypoint>()
{
  return deva_map_msgs::msg::builder::Init_LaneWaypoint_id();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LANE_WAYPOINT__BUILDER_HPP_
