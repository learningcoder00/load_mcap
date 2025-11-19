// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_arrayv2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneArrayv2_entrance_array
{
public:
  explicit Init_LaneArrayv2_entrance_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LaneArrayv2 entrance_array(::deva_perception_msgs::msg::LaneArrayv2::_entrance_array_type arg)
  {
    msg_.entrance_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_center_line_array
{
public:
  explicit Init_LaneArrayv2_center_line_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_entrance_array center_line_array(::deva_perception_msgs::msg::LaneArrayv2::_center_line_array_type arg)
  {
    msg_.center_line_array = std::move(arg);
    return Init_LaneArrayv2_entrance_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_partition_zone_array
{
public:
  explicit Init_LaneArrayv2_partition_zone_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_center_line_array partition_zone_array(::deva_perception_msgs::msg::LaneArrayv2::_partition_zone_array_type arg)
  {
    msg_.partition_zone_array = std::move(arg);
    return Init_LaneArrayv2_center_line_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_noparking_zone_array
{
public:
  explicit Init_LaneArrayv2_noparking_zone_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_partition_zone_array noparking_zone_array(::deva_perception_msgs::msg::LaneArrayv2::_noparking_zone_array_type arg)
  {
    msg_.noparking_zone_array = std::move(arg);
    return Init_LaneArrayv2_partition_zone_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_steering_arrow_array
{
public:
  explicit Init_LaneArrayv2_steering_arrow_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_noparking_zone_array steering_arrow_array(::deva_perception_msgs::msg::LaneArrayv2::_steering_arrow_array_type arg)
  {
    msg_.steering_arrow_array = std::move(arg);
    return Init_LaneArrayv2_noparking_zone_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_crosswalk_array
{
public:
  explicit Init_LaneArrayv2_crosswalk_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_steering_arrow_array crosswalk_array(::deva_perception_msgs::msg::LaneArrayv2::_crosswalk_array_type arg)
  {
    msg_.crosswalk_array = std::move(arg);
    return Init_LaneArrayv2_steering_arrow_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_lane_array
{
public:
  explicit Init_LaneArrayv2_lane_array(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_crosswalk_array lane_array(::deva_perception_msgs::msg::LaneArrayv2::_lane_array_type arg)
  {
    msg_.lane_array = std::move(arg);
    return Init_LaneArrayv2_crosswalk_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_vehicle_right_lane_id
{
public:
  explicit Init_LaneArrayv2_vehicle_right_lane_id(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_lane_array vehicle_right_lane_id(::deva_perception_msgs::msg::LaneArrayv2::_vehicle_right_lane_id_type arg)
  {
    msg_.vehicle_right_lane_id = std::move(arg);
    return Init_LaneArrayv2_lane_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_vehicle_left_lane_id
{
public:
  explicit Init_LaneArrayv2_vehicle_left_lane_id(::deva_perception_msgs::msg::LaneArrayv2 & msg)
  : msg_(msg)
  {}
  Init_LaneArrayv2_vehicle_right_lane_id vehicle_left_lane_id(::deva_perception_msgs::msg::LaneArrayv2::_vehicle_left_lane_id_type arg)
  {
    msg_.vehicle_left_lane_id = std::move(arg);
    return Init_LaneArrayv2_vehicle_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

class Init_LaneArrayv2_header
{
public:
  Init_LaneArrayv2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneArrayv2_vehicle_left_lane_id header(::deva_perception_msgs::msg::LaneArrayv2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneArrayv2_vehicle_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneArrayv2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LaneArrayv2>()
{
  return deva_perception_msgs::msg::builder::Init_LaneArrayv2_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__BUILDER_HPP_
