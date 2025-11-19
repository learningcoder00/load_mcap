// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneArray_lanes
{
public:
  explicit Init_LaneArray_lanes(::deva_perception_msgs::msg::LaneArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LaneArray lanes(::deva_perception_msgs::msg::LaneArray::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArray msg_;
};

class Init_LaneArray_vehicle_right_lane_id
{
public:
  explicit Init_LaneArray_vehicle_right_lane_id(::deva_perception_msgs::msg::LaneArray & msg)
  : msg_(msg)
  {}
  Init_LaneArray_lanes vehicle_right_lane_id(::deva_perception_msgs::msg::LaneArray::_vehicle_right_lane_id_type arg)
  {
    msg_.vehicle_right_lane_id = std::move(arg);
    return Init_LaneArray_lanes(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArray msg_;
};

class Init_LaneArray_vehicle_left_lane_id
{
public:
  explicit Init_LaneArray_vehicle_left_lane_id(::deva_perception_msgs::msg::LaneArray & msg)
  : msg_(msg)
  {}
  Init_LaneArray_vehicle_right_lane_id vehicle_left_lane_id(::deva_perception_msgs::msg::LaneArray::_vehicle_left_lane_id_type arg)
  {
    msg_.vehicle_left_lane_id = std::move(arg);
    return Init_LaneArray_vehicle_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArray msg_;
};

class Init_LaneArray_header
{
public:
  Init_LaneArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneArray_vehicle_left_lane_id header(::deva_perception_msgs::msg::LaneArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneArray_vehicle_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LaneArray>()
{
  return deva_perception_msgs::msg::builder::Init_LaneArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_
