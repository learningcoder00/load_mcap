// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_TreeTrajectory_traj_score
{
public:
  explicit Init_TreeTrajectory_traj_score(::deva_planning_msgs2::msg::TreeTrajectory & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::TreeTrajectory traj_score(::deva_planning_msgs2::msg::TreeTrajectory::_traj_score_type arg)
  {
    msg_.traj_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TreeTrajectory msg_;
};

class Init_TreeTrajectory_trajectory_points
{
public:
  explicit Init_TreeTrajectory_trajectory_points(::deva_planning_msgs2::msg::TreeTrajectory & msg)
  : msg_(msg)
  {}
  Init_TreeTrajectory_traj_score trajectory_points(::deva_planning_msgs2::msg::TreeTrajectory::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return Init_TreeTrajectory_traj_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TreeTrajectory msg_;
};

class Init_TreeTrajectory_confidence
{
public:
  explicit Init_TreeTrajectory_confidence(::deva_planning_msgs2::msg::TreeTrajectory & msg)
  : msg_(msg)
  {}
  Init_TreeTrajectory_trajectory_points confidence(::deva_planning_msgs2::msg::TreeTrajectory::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TreeTrajectory_trajectory_points(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TreeTrajectory msg_;
};

class Init_TreeTrajectory_obs_id
{
public:
  Init_TreeTrajectory_obs_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TreeTrajectory_confidence obs_id(::deva_planning_msgs2::msg::TreeTrajectory::_obs_id_type arg)
  {
    msg_.obs_id = std::move(arg);
    return Init_TreeTrajectory_confidence(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TreeTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::TreeTrajectory>()
{
  return deva_planning_msgs2::msg::builder::Init_TreeTrajectory_obs_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__BUILDER_HPP_
