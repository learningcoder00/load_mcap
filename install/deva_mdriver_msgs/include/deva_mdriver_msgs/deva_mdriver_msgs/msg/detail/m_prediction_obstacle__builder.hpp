// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MPredictionObstacle_prediction_debug_info
{
public:
  explicit Init_MPredictionObstacle_prediction_debug_info(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MPredictionObstacle prediction_debug_info(::deva_mdriver_msgs::msg::MPredictionObstacle::_prediction_debug_info_type arg)
  {
    msg_.prediction_debug_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_acc_heading_steering_stats
{
public:
  explicit Init_MPredictionObstacle_acc_heading_steering_stats(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_prediction_debug_info acc_heading_steering_stats(::deva_mdriver_msgs::msg::MPredictionObstacle::_acc_heading_steering_stats_type arg)
  {
    msg_.acc_heading_steering_stats = std::move(arg);
    return Init_MPredictionObstacle_prediction_debug_info(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_is_static
{
public:
  explicit Init_MPredictionObstacle_is_static(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_acc_heading_steering_stats is_static(::deva_mdriver_msgs::msg::MPredictionObstacle::_is_static_type arg)
  {
    msg_.is_static = std::move(arg);
    return Init_MPredictionObstacle_acc_heading_steering_stats(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_cov
{
public:
  explicit Init_MPredictionObstacle_cov(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_is_static cov(::deva_mdriver_msgs::msg::MPredictionObstacle::_cov_type arg)
  {
    msg_.cov = std::move(arg);
    return Init_MPredictionObstacle_is_static(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_score
{
public:
  explicit Init_MPredictionObstacle_score(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_cov score(::deva_mdriver_msgs::msg::MPredictionObstacle::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_MPredictionObstacle_cov(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_obs_id
{
public:
  explicit Init_MPredictionObstacle_obs_id(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_score obs_id(::deva_mdriver_msgs::msg::MPredictionObstacle::_obs_id_type arg)
  {
    msg_.obs_id = std::move(arg);
    return Init_MPredictionObstacle_score(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_decision
{
public:
  explicit Init_MPredictionObstacle_decision(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_obs_id decision(::deva_mdriver_msgs::msg::MPredictionObstacle::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return Init_MPredictionObstacle_obs_id(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_trajectory
{
public:
  explicit Init_MPredictionObstacle_trajectory(::deva_mdriver_msgs::msg::MPredictionObstacle & msg)
  : msg_(msg)
  {}
  Init_MPredictionObstacle_decision trajectory(::deva_mdriver_msgs::msg::MPredictionObstacle::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_MPredictionObstacle_decision(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

class Init_MPredictionObstacle_perception_obstacle
{
public:
  Init_MPredictionObstacle_perception_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MPredictionObstacle_trajectory perception_obstacle(::deva_mdriver_msgs::msg::MPredictionObstacle::_perception_obstacle_type arg)
  {
    msg_.perception_obstacle = std::move(arg);
    return Init_MPredictionObstacle_trajectory(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MPredictionObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MPredictionObstacle>()
{
  return deva_mdriver_msgs::msg::builder::Init_MPredictionObstacle_perception_obstacle();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__BUILDER_HPP_
