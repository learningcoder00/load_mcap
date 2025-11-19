// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVObstacle_bbox2d
{
public:
  explicit Init_RVObstacle_bbox2d(::deva_perception_msgs::msg::RVObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVObstacle bbox2d(::deva_perception_msgs::msg::RVObstacle::_bbox2d_type arg)
  {
    msg_.bbox2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacle msg_;
};

class Init_RVObstacle_distance
{
public:
  explicit Init_RVObstacle_distance(::deva_perception_msgs::msg::RVObstacle & msg)
  : msg_(msg)
  {}
  Init_RVObstacle_bbox2d distance(::deva_perception_msgs::msg::RVObstacle::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_RVObstacle_bbox2d(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacle msg_;
};

class Init_RVObstacle_score
{
public:
  explicit Init_RVObstacle_score(::deva_perception_msgs::msg::RVObstacle & msg)
  : msg_(msg)
  {}
  Init_RVObstacle_distance score(::deva_perception_msgs::msg::RVObstacle::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_RVObstacle_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacle msg_;
};

class Init_RVObstacle_type
{
public:
  Init_RVObstacle_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVObstacle_score type(::deva_perception_msgs::msg::RVObstacle::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RVObstacle_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_RVObstacle_type();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__BUILDER_HPP_
