// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/aeb_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_AEBObstacle_tail_trunc_score
{
public:
  explicit Init_AEBObstacle_tail_trunc_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::AEBObstacle tail_trunc_score(::deva_perception_msgs::msg::AEBObstacle::_tail_trunc_score_type arg)
  {
    msg_.tail_trunc_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_head_trunc_score
{
public:
  explicit Init_AEBObstacle_head_trunc_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_tail_trunc_score head_trunc_score(::deva_perception_msgs::msg::AEBObstacle::_head_trunc_score_type arg)
  {
    msg_.head_trunc_score = std::move(arg);
    return Init_AEBObstacle_tail_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_full_trunc_score
{
public:
  explicit Init_AEBObstacle_full_trunc_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_head_trunc_score full_trunc_score(::deva_perception_msgs::msg::AEBObstacle::_full_trunc_score_type arg)
  {
    msg_.full_trunc_score = std::move(arg);
    return Init_AEBObstacle_head_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_tail_occ_score
{
public:
  explicit Init_AEBObstacle_tail_occ_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_full_trunc_score tail_occ_score(::deva_perception_msgs::msg::AEBObstacle::_tail_occ_score_type arg)
  {
    msg_.tail_occ_score = std::move(arg);
    return Init_AEBObstacle_full_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_head_occ_score
{
public:
  explicit Init_AEBObstacle_head_occ_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_tail_occ_score head_occ_score(::deva_perception_msgs::msg::AEBObstacle::_head_occ_score_type arg)
  {
    msg_.head_occ_score = std::move(arg);
    return Init_AEBObstacle_tail_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_full_occ_score
{
public:
  explicit Init_AEBObstacle_full_occ_score(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_head_occ_score full_occ_score(::deva_perception_msgs::msg::AEBObstacle::_full_occ_score_type arg)
  {
    msg_.full_occ_score = std::move(arg);
    return Init_AEBObstacle_head_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_ground_points
{
public:
  explicit Init_AEBObstacle_ground_points(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_full_occ_score ground_points(::deva_perception_msgs::msg::AEBObstacle::_ground_points_type arg)
  {
    msg_.ground_points = std::move(arg);
    return Init_AEBObstacle_full_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_tail_bbox
{
public:
  explicit Init_AEBObstacle_tail_bbox(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_ground_points tail_bbox(::deva_perception_msgs::msg::AEBObstacle::_tail_bbox_type arg)
  {
    msg_.tail_bbox = std::move(arg);
    return Init_AEBObstacle_ground_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_head_bbox
{
public:
  explicit Init_AEBObstacle_head_bbox(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_tail_bbox head_bbox(::deva_perception_msgs::msg::AEBObstacle::_head_bbox_type arg)
  {
    msg_.head_bbox = std::move(arg);
    return Init_AEBObstacle_tail_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_obstacle_type
{
public:
  explicit Init_AEBObstacle_obstacle_type(::deva_perception_msgs::msg::AEBObstacle & msg)
  : msg_(msg)
  {}
  Init_AEBObstacle_head_bbox obstacle_type(::deva_perception_msgs::msg::AEBObstacle::_obstacle_type_type arg)
  {
    msg_.obstacle_type = std::move(arg);
    return Init_AEBObstacle_head_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

class Init_AEBObstacle_obstacle
{
public:
  Init_AEBObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AEBObstacle_obstacle_type obstacle(::deva_perception_msgs::msg::AEBObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_AEBObstacle_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::AEBObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::AEBObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_AEBObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__BUILDER_HPP_
