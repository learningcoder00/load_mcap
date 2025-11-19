// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpSubLane_right_lane_ids
{
public:
  explicit Init_AvpSubLane_right_lane_ids(::deva_map_msgs::msg::AvpSubLane & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::AvpSubLane right_lane_ids(::deva_map_msgs::msg::AvpSubLane::_right_lane_ids_type arg)
  {
    msg_.right_lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

class Init_AvpSubLane_left_lane_ids
{
public:
  explicit Init_AvpSubLane_left_lane_ids(::deva_map_msgs::msg::AvpSubLane & msg)
  : msg_(msg)
  {}
  Init_AvpSubLane_right_lane_ids left_lane_ids(::deva_map_msgs::msg::AvpSubLane::_left_lane_ids_type arg)
  {
    msg_.left_lane_ids = std::move(arg);
    return Init_AvpSubLane_right_lane_ids(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

class Init_AvpSubLane_successor_lane_ids
{
public:
  explicit Init_AvpSubLane_successor_lane_ids(::deva_map_msgs::msg::AvpSubLane & msg)
  : msg_(msg)
  {}
  Init_AvpSubLane_left_lane_ids successor_lane_ids(::deva_map_msgs::msg::AvpSubLane::_successor_lane_ids_type arg)
  {
    msg_.successor_lane_ids = std::move(arg);
    return Init_AvpSubLane_left_lane_ids(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

class Init_AvpSubLane_drivable_boundary
{
public:
  explicit Init_AvpSubLane_drivable_boundary(::deva_map_msgs::msg::AvpSubLane & msg)
  : msg_(msg)
  {}
  Init_AvpSubLane_successor_lane_ids drivable_boundary(::deva_map_msgs::msg::AvpSubLane::_drivable_boundary_type arg)
  {
    msg_.drivable_boundary = std::move(arg);
    return Init_AvpSubLane_successor_lane_ids(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

class Init_AvpSubLane_ref_line
{
public:
  explicit Init_AvpSubLane_ref_line(::deva_map_msgs::msg::AvpSubLane & msg)
  : msg_(msg)
  {}
  Init_AvpSubLane_drivable_boundary ref_line(::deva_map_msgs::msg::AvpSubLane::_ref_line_type arg)
  {
    msg_.ref_line = std::move(arg);
    return Init_AvpSubLane_drivable_boundary(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

class Init_AvpSubLane_lane_id
{
public:
  Init_AvpSubLane_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpSubLane_ref_line lane_id(::deva_map_msgs::msg::AvpSubLane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_AvpSubLane_ref_line(msg_);
  }

private:
  ::deva_map_msgs::msg::AvpSubLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::AvpSubLane>()
{
  return deva_map_msgs::msg::builder::Init_AvpSubLane_lane_id();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__BUILDER_HPP_
