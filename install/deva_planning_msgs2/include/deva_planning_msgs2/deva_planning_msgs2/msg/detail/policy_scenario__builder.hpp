// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PolicyScenario_scalable_multimap
{
public:
  explicit Init_PolicyScenario_scalable_multimap(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PolicyScenario scalable_multimap(::deva_planning_msgs2::msg::PolicyScenario::_scalable_multimap_type arg)
  {
    msg_.scalable_multimap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_scalable_flags
{
public:
  explicit Init_PolicyScenario_scalable_flags(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_scalable_multimap scalable_flags(::deva_planning_msgs2::msg::PolicyScenario::_scalable_flags_type arg)
  {
    msg_.scalable_flags = std::move(arg);
    return Init_PolicyScenario_scalable_multimap(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_tree_output_trajs
{
public:
  explicit Init_PolicyScenario_tree_output_trajs(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_scalable_flags tree_output_trajs(::deva_planning_msgs2::msg::PolicyScenario::_tree_output_trajs_type arg)
  {
    msg_.tree_output_trajs = std::move(arg);
    return Init_PolicyScenario_scalable_flags(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_tree_nodes
{
public:
  explicit Init_PolicyScenario_tree_nodes(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_tree_output_trajs tree_nodes(::deva_planning_msgs2::msg::PolicyScenario::_tree_nodes_type arg)
  {
    msg_.tree_nodes = std::move(arg);
    return Init_PolicyScenario_tree_output_trajs(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_rollout_start_time
{
public:
  explicit Init_PolicyScenario_rollout_start_time(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_tree_nodes rollout_start_time(::deva_planning_msgs2::msg::PolicyScenario::_rollout_start_time_type arg)
  {
    msg_.rollout_start_time = std::move(arg);
    return Init_PolicyScenario_tree_nodes(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_tree_score
{
public:
  explicit Init_PolicyScenario_tree_score(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_rollout_start_time tree_score(::deva_planning_msgs2::msg::PolicyScenario::_tree_score_type arg)
  {
    msg_.tree_score = std::move(arg);
    return Init_PolicyScenario_rollout_start_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_critical_obstacles
{
public:
  explicit Init_PolicyScenario_critical_obstacles(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_tree_score critical_obstacles(::deva_planning_msgs2::msg::PolicyScenario::_critical_obstacles_type arg)
  {
    msg_.critical_obstacles = std::move(arg);
    return Init_PolicyScenario_tree_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_game_obstacles
{
public:
  explicit Init_PolicyScenario_game_obstacles(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_critical_obstacles game_obstacles(::deva_planning_msgs2::msg::PolicyScenario::_game_obstacles_type arg)
  {
    msg_.game_obstacles = std::move(arg);
    return Init_PolicyScenario_critical_obstacles(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_rear_obstacle_id
{
public:
  explicit Init_PolicyScenario_rear_obstacle_id(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_game_obstacles rear_obstacle_id(::deva_planning_msgs2::msg::PolicyScenario::_rear_obstacle_id_type arg)
  {
    msg_.rear_obstacle_id = std::move(arg);
    return Init_PolicyScenario_game_obstacles(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_front_obstacle_id
{
public:
  explicit Init_PolicyScenario_front_obstacle_id(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_rear_obstacle_id front_obstacle_id(::deva_planning_msgs2::msg::PolicyScenario::_front_obstacle_id_type arg)
  {
    msg_.front_obstacle_id = std::move(arg);
    return Init_PolicyScenario_rear_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_is_from_mdriver
{
public:
  explicit Init_PolicyScenario_is_from_mdriver(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_front_obstacle_id is_from_mdriver(::deva_planning_msgs2::msg::PolicyScenario::_is_from_mdriver_type arg)
  {
    msg_.is_from_mdriver = std::move(arg);
    return Init_PolicyScenario_front_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_current_line_id
{
public:
  explicit Init_PolicyScenario_current_line_id(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_is_from_mdriver current_line_id(::deva_planning_msgs2::msg::PolicyScenario::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_PolicyScenario_is_from_mdriver(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_target_line_id
{
public:
  explicit Init_PolicyScenario_target_line_id(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_current_line_id target_line_id(::deva_planning_msgs2::msg::PolicyScenario::_target_line_id_type arg)
  {
    msg_.target_line_id = std::move(arg);
    return Init_PolicyScenario_current_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_behavior_type
{
public:
  explicit Init_PolicyScenario_behavior_type(::deva_planning_msgs2::msg::PolicyScenario & msg)
  : msg_(msg)
  {}
  Init_PolicyScenario_target_line_id behavior_type(::deva_planning_msgs2::msg::PolicyScenario::_behavior_type_type arg)
  {
    msg_.behavior_type = std::move(arg);
    return Init_PolicyScenario_target_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

class Init_PolicyScenario_tree_id
{
public:
  Init_PolicyScenario_tree_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PolicyScenario_behavior_type tree_id(::deva_planning_msgs2::msg::PolicyScenario::_tree_id_type arg)
  {
    msg_.tree_id = std::move(arg);
    return Init_PolicyScenario_behavior_type(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PolicyScenario msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PolicyScenario>()
{
  return deva_planning_msgs2::msg::builder::Init_PolicyScenario_tree_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__BUILDER_HPP_
