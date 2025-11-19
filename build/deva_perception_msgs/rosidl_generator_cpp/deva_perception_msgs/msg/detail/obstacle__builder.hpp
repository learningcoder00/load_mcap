// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_extra_info
{
public:
  explicit Init_Obstacle_extra_info(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Obstacle extra_info(::deva_perception_msgs::msg::Obstacle::_extra_info_type arg)
  {
    msg_.extra_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_bbox2d
{
public:
  explicit Init_Obstacle_bbox2d(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_extra_info bbox2d(::deva_perception_msgs::msg::Obstacle::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_Obstacle_extra_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_type
{
public:
  explicit Init_Obstacle_type(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_bbox2d type(::deva_perception_msgs::msg::Obstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Obstacle_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_is_predict
{
public:
  explicit Init_Obstacle_is_predict(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_type is_predict(::deva_perception_msgs::msg::Obstacle::_is_predict_type arg)
  {
    msg_.is_predict = std::move(arg);
    return Init_Obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_score
{
public:
  explicit Init_Obstacle_score(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_is_predict score(::deva_perception_msgs::msg::Obstacle::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Obstacle_is_predict(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_track_length
{
public:
  explicit Init_Obstacle_track_length(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_score track_length(::deva_perception_msgs::msg::Obstacle::_track_length_type arg)
  {
    msg_.track_length = std::move(arg);
    return Init_Obstacle_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_tracking_time
{
public:
  explicit Init_Obstacle_tracking_time(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_track_length tracking_time(::deva_perception_msgs::msg::Obstacle::_tracking_time_type arg)
  {
    msg_.tracking_time = std::move(arg);
    return Init_Obstacle_track_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration_variance
{
public:
  explicit Init_Obstacle_acceleration_variance(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_tracking_time acceleration_variance(::deva_perception_msgs::msg::Obstacle::_acceleration_variance_type arg)
  {
    msg_.acceleration_variance = std::move(arg);
    return Init_Obstacle_tracking_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_acceleration
{
public:
  explicit Init_Obstacle_acceleration(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration_variance acceleration(::deva_perception_msgs::msg::Obstacle::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_Obstacle_acceleration_variance(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_velocity_variance
{
public:
  explicit Init_Obstacle_velocity_variance(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_acceleration velocity_variance(::deva_perception_msgs::msg::Obstacle::_velocity_variance_type arg)
  {
    msg_.velocity_variance = std::move(arg);
    return Init_Obstacle_acceleration(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_velocity
{
public:
  explicit Init_Obstacle_velocity(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity_variance velocity(::deva_perception_msgs::msg::Obstacle::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Obstacle_velocity_variance(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_detection_velocity
{
public:
  explicit Init_Obstacle_detection_velocity(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_velocity detection_velocity(::deva_perception_msgs::msg::Obstacle::_detection_velocity_type arg)
  {
    msg_.detection_velocity = std::move(arg);
    return Init_Obstacle_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_dimensions
{
public:
  explicit Init_Obstacle_dimensions(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_detection_velocity dimensions(::deva_perception_msgs::msg::Obstacle::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_Obstacle_detection_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_pose
{
public:
  explicit Init_Obstacle_pose(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_dimensions pose(::deva_perception_msgs::msg::Obstacle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Obstacle_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_id
{
public:
  explicit Init_Obstacle_id(::deva_perception_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_pose id(::deva_perception_msgs::msg::Obstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Obstacle_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_header
{
public:
  Init_Obstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_id header(::deva_perception_msgs::msg::Obstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Obstacle_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Obstacle>()
{
  return deva_perception_msgs::msg::builder::Init_Obstacle_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
