// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RvStaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_static_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RvStaticObstacle_right_lane_distance
{
public:
  explicit Init_RvStaticObstacle_right_lane_distance(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RvStaticObstacle right_lane_distance(::deva_perception_msgs::msg::RvStaticObstacle::_right_lane_distance_type arg)
  {
    msg_.right_lane_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_left_lane_distance
{
public:
  explicit Init_RvStaticObstacle_left_lane_distance(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_right_lane_distance left_lane_distance(::deva_perception_msgs::msg::RvStaticObstacle::_left_lane_distance_type arg)
  {
    msg_.left_lane_distance = std::move(arg);
    return Init_RvStaticObstacle_right_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_right_lane_id
{
public:
  explicit Init_RvStaticObstacle_right_lane_id(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_left_lane_distance right_lane_id(::deva_perception_msgs::msg::RvStaticObstacle::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_RvStaticObstacle_left_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_left_lane_id
{
public:
  explicit Init_RvStaticObstacle_left_lane_id(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_right_lane_id left_lane_id(::deva_perception_msgs::msg::RvStaticObstacle::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_RvStaticObstacle_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_horizontal_distance
{
public:
  explicit Init_RvStaticObstacle_horizontal_distance(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_left_lane_id horizontal_distance(::deva_perception_msgs::msg::RvStaticObstacle::_horizontal_distance_type arg)
  {
    msg_.horizontal_distance = std::move(arg);
    return Init_RvStaticObstacle_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_vertical_distance
{
public:
  explicit Init_RvStaticObstacle_vertical_distance(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_horizontal_distance vertical_distance(::deva_perception_msgs::msg::RvStaticObstacle::_vertical_distance_type arg)
  {
    msg_.vertical_distance = std::move(arg);
    return Init_RvStaticObstacle_horizontal_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_score
{
public:
  explicit Init_RvStaticObstacle_score(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_vertical_distance score(::deva_perception_msgs::msg::RvStaticObstacle::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_RvStaticObstacle_vertical_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_bind_type
{
public:
  explicit Init_RvStaticObstacle_bind_type(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_score bind_type(::deva_perception_msgs::msg::RvStaticObstacle::_bind_type_type arg)
  {
    msg_.bind_type = std::move(arg);
    return Init_RvStaticObstacle_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_dimensions
{
public:
  explicit Init_RvStaticObstacle_dimensions(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_bind_type dimensions(::deva_perception_msgs::msg::RvStaticObstacle::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_RvStaticObstacle_bind_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_pose
{
public:
  explicit Init_RvStaticObstacle_pose(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_dimensions pose(::deva_perception_msgs::msg::RvStaticObstacle::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RvStaticObstacle_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_with_bev_info
{
public:
  explicit Init_RvStaticObstacle_with_bev_info(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_pose with_bev_info(::deva_perception_msgs::msg::RvStaticObstacle::_with_bev_info_type arg)
  {
    msg_.with_bev_info = std::move(arg);
    return Init_RvStaticObstacle_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_bbox2d
{
public:
  explicit Init_RvStaticObstacle_bbox2d(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_with_bev_info bbox2d(::deva_perception_msgs::msg::RvStaticObstacle::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_RvStaticObstacle_with_bev_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_type
{
public:
  explicit Init_RvStaticObstacle_type(::deva_perception_msgs::msg::RvStaticObstacle & msg)
  : msg_(msg)
  {}
  Init_RvStaticObstacle_bbox2d type(::deva_perception_msgs::msg::RvStaticObstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RvStaticObstacle_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

class Init_RvStaticObstacle_id
{
public:
  Init_RvStaticObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RvStaticObstacle_type id(::deva_perception_msgs::msg::RvStaticObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RvStaticObstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RvStaticObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RvStaticObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_RvStaticObstacle_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__BUILDER_HPP_
