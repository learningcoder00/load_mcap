// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/cone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Cone_right_lane_distance
{
public:
  explicit Init_Cone_right_lane_distance(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Cone right_lane_distance(::deva_perception_msgs::msg::Cone::_right_lane_distance_type arg)
  {
    msg_.right_lane_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_left_lane_distance
{
public:
  explicit Init_Cone_left_lane_distance(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_right_lane_distance left_lane_distance(::deva_perception_msgs::msg::Cone::_left_lane_distance_type arg)
  {
    msg_.left_lane_distance = std::move(arg);
    return Init_Cone_right_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_right_lane_id
{
public:
  explicit Init_Cone_right_lane_id(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_left_lane_distance right_lane_id(::deva_perception_msgs::msg::Cone::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_Cone_left_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_left_lane_id
{
public:
  explicit Init_Cone_left_lane_id(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_right_lane_id left_lane_id(::deva_perception_msgs::msg::Cone::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_Cone_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_vertical_distance
{
public:
  explicit Init_Cone_vertical_distance(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_left_lane_id vertical_distance(::deva_perception_msgs::msg::Cone::_vertical_distance_type arg)
  {
    msg_.vertical_distance = std::move(arg);
    return Init_Cone_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_score
{
public:
  explicit Init_Cone_score(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_vertical_distance score(::deva_perception_msgs::msg::Cone::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Cone_vertical_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_bind_type
{
public:
  explicit Init_Cone_bind_type(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_score bind_type(::deva_perception_msgs::msg::Cone::_bind_type_type arg)
  {
    msg_.bind_type = std::move(arg);
    return Init_Cone_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_dimensions
{
public:
  explicit Init_Cone_dimensions(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_bind_type dimensions(::deva_perception_msgs::msg::Cone::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_Cone_bind_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_pose
{
public:
  explicit Init_Cone_pose(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_dimensions pose(::deva_perception_msgs::msg::Cone::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Cone_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_with_bev_info
{
public:
  explicit Init_Cone_with_bev_info(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_pose with_bev_info(::deva_perception_msgs::msg::Cone::_with_bev_info_type arg)
  {
    msg_.with_bev_info = std::move(arg);
    return Init_Cone_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_bbox2d
{
public:
  explicit Init_Cone_bbox2d(::deva_perception_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_with_bev_info bbox2d(::deva_perception_msgs::msg::Cone::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return Init_Cone_with_bev_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

class Init_Cone_id
{
public:
  Init_Cone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cone_bbox2d id(::deva_perception_msgs::msg::Cone::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Cone_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::Cone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Cone>()
{
  return deva_perception_msgs::msg::builder::Init_Cone_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
