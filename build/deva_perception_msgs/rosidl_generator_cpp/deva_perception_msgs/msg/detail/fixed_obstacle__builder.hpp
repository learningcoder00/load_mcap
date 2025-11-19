// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/FixedObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/fixed_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedObstacle_extra_infos
{
public:
  explicit Init_FixedObstacle_extra_infos(::deva_perception_msgs::msg::FixedObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::FixedObstacle extra_infos(::deva_perception_msgs::msg::FixedObstacle::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

class Init_FixedObstacle_match_indices
{
public:
  explicit Init_FixedObstacle_match_indices(::deva_perception_msgs::msg::FixedObstacle & msg)
  : msg_(msg)
  {}
  Init_FixedObstacle_extra_infos match_indices(::deva_perception_msgs::msg::FixedObstacle::_match_indices_type arg)
  {
    msg_.match_indices = std::move(arg);
    return Init_FixedObstacle_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

class Init_FixedObstacle_source
{
public:
  explicit Init_FixedObstacle_source(::deva_perception_msgs::msg::FixedObstacle & msg)
  : msg_(msg)
  {}
  Init_FixedObstacle_match_indices source(::deva_perception_msgs::msg::FixedObstacle::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_FixedObstacle_match_indices(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

class Init_FixedObstacle_det_score
{
public:
  explicit Init_FixedObstacle_det_score(::deva_perception_msgs::msg::FixedObstacle & msg)
  : msg_(msg)
  {}
  Init_FixedObstacle_source det_score(::deva_perception_msgs::msg::FixedObstacle::_det_score_type arg)
  {
    msg_.det_score = std::move(arg);
    return Init_FixedObstacle_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

class Init_FixedObstacle_fixed_obstacle_type
{
public:
  explicit Init_FixedObstacle_fixed_obstacle_type(::deva_perception_msgs::msg::FixedObstacle & msg)
  : msg_(msg)
  {}
  Init_FixedObstacle_det_score fixed_obstacle_type(::deva_perception_msgs::msg::FixedObstacle::_fixed_obstacle_type_type arg)
  {
    msg_.fixed_obstacle_type = std::move(arg);
    return Init_FixedObstacle_det_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

class Init_FixedObstacle_obstacle
{
public:
  Init_FixedObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedObstacle_fixed_obstacle_type obstacle(::deva_perception_msgs::msg::FixedObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_FixedObstacle_fixed_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::FixedObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::FixedObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_FixedObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__BUILDER_HPP_
