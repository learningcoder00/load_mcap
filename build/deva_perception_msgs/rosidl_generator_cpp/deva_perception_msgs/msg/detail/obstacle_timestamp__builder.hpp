// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/obstacle_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleTimestamp_loc_timestamp
{
public:
  explicit Init_ObstacleTimestamp_loc_timestamp(::deva_perception_msgs::msg::ObstacleTimestamp & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ObstacleTimestamp loc_timestamp(::deva_perception_msgs::msg::ObstacleTimestamp::_loc_timestamp_type arg)
  {
    msg_.loc_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleTimestamp msg_;
};

class Init_ObstacleTimestamp_lidar_timestamp
{
public:
  explicit Init_ObstacleTimestamp_lidar_timestamp(::deva_perception_msgs::msg::ObstacleTimestamp & msg)
  : msg_(msg)
  {}
  Init_ObstacleTimestamp_loc_timestamp lidar_timestamp(::deva_perception_msgs::msg::ObstacleTimestamp::_lidar_timestamp_type arg)
  {
    msg_.lidar_timestamp = std::move(arg);
    return Init_ObstacleTimestamp_loc_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleTimestamp msg_;
};

class Init_ObstacleTimestamp_camera_timestamps
{
public:
  explicit Init_ObstacleTimestamp_camera_timestamps(::deva_perception_msgs::msg::ObstacleTimestamp & msg)
  : msg_(msg)
  {}
  Init_ObstacleTimestamp_lidar_timestamp camera_timestamps(::deva_perception_msgs::msg::ObstacleTimestamp::_camera_timestamps_type arg)
  {
    msg_.camera_timestamps = std::move(arg);
    return Init_ObstacleTimestamp_lidar_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleTimestamp msg_;
};

class Init_ObstacleTimestamp_radar_timestamps
{
public:
  explicit Init_ObstacleTimestamp_radar_timestamps(::deva_perception_msgs::msg::ObstacleTimestamp & msg)
  : msg_(msg)
  {}
  Init_ObstacleTimestamp_camera_timestamps radar_timestamps(::deva_perception_msgs::msg::ObstacleTimestamp::_radar_timestamps_type arg)
  {
    msg_.radar_timestamps = std::move(arg);
    return Init_ObstacleTimestamp_camera_timestamps(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleTimestamp msg_;
};

class Init_ObstacleTimestamp_header
{
public:
  Init_ObstacleTimestamp_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleTimestamp_radar_timestamps header(::deva_perception_msgs::msg::ObstacleTimestamp::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleTimestamp_radar_timestamps(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleTimestamp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ObstacleTimestamp>()
{
  return deva_perception_msgs::msg::builder::Init_ObstacleTimestamp_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__BUILDER_HPP_
