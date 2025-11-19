// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleCommon_pixel_points
{
public:
  explicit Init_ObstacleCommon_pixel_points(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ObstacleCommon pixel_points(::deva_perception_msgs::msg::ObstacleCommon::_pixel_points_type arg)
  {
    msg_.pixel_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_extra_infos
{
public:
  explicit Init_ObstacleCommon_extra_infos(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_pixel_points extra_infos(::deva_perception_msgs::msg::ObstacleCommon::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return Init_ObstacleCommon_pixel_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_associated_infos
{
public:
  explicit Init_ObstacleCommon_associated_infos(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_extra_infos associated_infos(::deva_perception_msgs::msg::ObstacleCommon::_associated_infos_type arg)
  {
    msg_.associated_infos = std::move(arg);
    return Init_ObstacleCommon_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_in_parking_slot
{
public:
  explicit Init_ObstacleCommon_in_parking_slot(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_associated_infos in_parking_slot(::deva_perception_msgs::msg::ObstacleCommon::_in_parking_slot_type arg)
  {
    msg_.in_parking_slot = std::move(arg);
    return Init_ObstacleCommon_associated_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_is_stable_tracked
{
public:
  explicit Init_ObstacleCommon_is_stable_tracked(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_in_parking_slot is_stable_tracked(::deva_perception_msgs::msg::ObstacleCommon::_is_stable_tracked_type arg)
  {
    msg_.is_stable_tracked = std::move(arg);
    return Init_ObstacleCommon_in_parking_slot(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_miss_length
{
public:
  explicit Init_ObstacleCommon_miss_length(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_is_stable_tracked miss_length(::deva_perception_msgs::msg::ObstacleCommon::_miss_length_type arg)
  {
    msg_.miss_length = std::move(arg);
    return Init_ObstacleCommon_is_stable_tracked(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_bounding_box
{
public:
  explicit Init_ObstacleCommon_bounding_box(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_miss_length bounding_box(::deva_perception_msgs::msg::ObstacleCommon::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_ObstacleCommon_miss_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_tracking_time
{
public:
  explicit Init_ObstacleCommon_tracking_time(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_bounding_box tracking_time(::deva_perception_msgs::msg::ObstacleCommon::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_ObstacleCommon_bounding_box(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_track_length
{
public:
  explicit Init_ObstacleCommon_track_length(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_tracking_time track_length(::deva_perception_msgs::msg::ObstacleCommon::_track_length_type arg)
  {
    msg_.track_length = std::move(arg);
    return Init_ObstacleCommon_tracking_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_score
{
public:
  explicit Init_ObstacleCommon_score(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_track_length score(::deva_perception_msgs::msg::ObstacleCommon::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_ObstacleCommon_track_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_pose
{
public:
  explicit Init_ObstacleCommon_pose(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_score pose(::deva_perception_msgs::msg::ObstacleCommon::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObstacleCommon_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_dims
{
public:
  explicit Init_ObstacleCommon_dims(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_pose dims(::deva_perception_msgs::msg::ObstacleCommon::_dims_type arg)
  {
    msg_.dims = std::move(arg);
    return Init_ObstacleCommon_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_obs_id
{
public:
  explicit Init_ObstacleCommon_obs_id(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_dims obs_id(::deva_perception_msgs::msg::ObstacleCommon::_obs_id_type arg)
  {
    msg_.obs_id = std::move(arg);
    return Init_ObstacleCommon_dims(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_points
{
public:
  explicit Init_ObstacleCommon_points(::deva_perception_msgs::msg::ObstacleCommon & msg)
  : msg_(msg)
  {}
  Init_ObstacleCommon_obs_id points(::deva_perception_msgs::msg::ObstacleCommon::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_ObstacleCommon_obs_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

class Init_ObstacleCommon_obs_name
{
public:
  Init_ObstacleCommon_obs_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleCommon_points obs_name(::deva_perception_msgs::msg::ObstacleCommon::_obs_name_type arg)
  {
    msg_.obs_name = std::move(arg);
    return Init_ObstacleCommon_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::ObstacleCommon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ObstacleCommon>()
{
  return deva_perception_msgs::msg::builder::Init_ObstacleCommon_obs_name();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__BUILDER_HPP_
