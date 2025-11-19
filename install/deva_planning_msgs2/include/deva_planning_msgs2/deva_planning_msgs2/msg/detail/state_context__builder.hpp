// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/state_context__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_StateContext_scalable_stream
{
public:
  explicit Init_StateContext_scalable_stream(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::StateContext scalable_stream(::deva_planning_msgs2::msg::StateContext::_scalable_stream_type arg)
  {
    msg_.scalable_stream = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_scalable_multimap
{
public:
  explicit Init_StateContext_scalable_multimap(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_scalable_stream scalable_multimap(::deva_planning_msgs2::msg::StateContext::_scalable_multimap_type arg)
  {
    msg_.scalable_multimap = std::move(arg);
    return Init_StateContext_scalable_stream(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_scalable_flags
{
public:
  explicit Init_StateContext_scalable_flags(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_scalable_multimap scalable_flags(::deva_planning_msgs2::msg::StateContext::_scalable_flags_type arg)
  {
    msg_.scalable_flags = std::move(arg);
    return Init_StateContext_scalable_multimap(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_lane_change_cancel_reason
{
public:
  explicit Init_StateContext_lane_change_cancel_reason(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_scalable_flags lane_change_cancel_reason(::deva_planning_msgs2::msg::StateContext::_lane_change_cancel_reason_type arg)
  {
    msg_.lane_change_cancel_reason = std::move(arg);
    return Init_StateContext_scalable_flags(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_ego_sl_on_ref_lines
{
public:
  explicit Init_StateContext_ego_sl_on_ref_lines(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_lane_change_cancel_reason ego_sl_on_ref_lines(::deva_planning_msgs2::msg::StateContext::_ego_sl_on_ref_lines_type arg)
  {
    msg_.ego_sl_on_ref_lines = std::move(arg);
    return Init_StateContext_lane_change_cancel_reason(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_lane_bind_infos
{
public:
  explicit Init_StateContext_lane_bind_infos(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_ego_sl_on_ref_lines lane_bind_infos(::deva_planning_msgs2::msg::StateContext::_lane_bind_infos_type arg)
  {
    msg_.lane_bind_infos = std::move(arg);
    return Init_StateContext_ego_sl_on_ref_lines(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_tagged_obstacle
{
public:
  explicit Init_StateContext_tagged_obstacle(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_lane_bind_infos tagged_obstacle(::deva_planning_msgs2::msg::StateContext::_tagged_obstacle_type arg)
  {
    msg_.tagged_obstacle = std::move(arg);
    return Init_StateContext_lane_bind_infos(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_mcts_trees
{
public:
  explicit Init_StateContext_mcts_trees(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_tagged_obstacle mcts_trees(::deva_planning_msgs2::msg::StateContext::_mcts_trees_type arg)
  {
    msg_.mcts_trees = std::move(arg);
    return Init_StateContext_tagged_obstacle(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_best_tree_id
{
public:
  explicit Init_StateContext_best_tree_id(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_mcts_trees best_tree_id(::deva_planning_msgs2::msg::StateContext::_best_tree_id_type arg)
  {
    msg_.best_tree_id = std::move(arg);
    return Init_StateContext_mcts_trees(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_lane_change_task
{
public:
  explicit Init_StateContext_lane_change_task(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_best_tree_id lane_change_task(::deva_planning_msgs2::msg::StateContext::_lane_change_task_type arg)
  {
    msg_.lane_change_task = std::move(arg);
    return Init_StateContext_best_tree_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_rear_obstacle_id
{
public:
  explicit Init_StateContext_rear_obstacle_id(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_lane_change_task rear_obstacle_id(::deva_planning_msgs2::msg::StateContext::_rear_obstacle_id_type arg)
  {
    msg_.rear_obstacle_id = std::move(arg);
    return Init_StateContext_lane_change_task(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_front_obstacle_id
{
public:
  explicit Init_StateContext_front_obstacle_id(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_rear_obstacle_id front_obstacle_id(::deva_planning_msgs2::msg::StateContext::_front_obstacle_id_type arg)
  {
    msg_.front_obstacle_id = std::move(arg);
    return Init_StateContext_rear_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_current_line_id
{
public:
  explicit Init_StateContext_current_line_id(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_front_obstacle_id current_line_id(::deva_planning_msgs2::msg::StateContext::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_StateContext_front_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_target_line_id
{
public:
  explicit Init_StateContext_target_line_id(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_current_line_id target_line_id(::deva_planning_msgs2::msg::StateContext::_target_line_id_type arg)
  {
    msg_.target_line_id = std::move(arg);
    return Init_StateContext_current_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_use_mdriver_ego
{
public:
  explicit Init_StateContext_use_mdriver_ego(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_target_line_id use_mdriver_ego(::deva_planning_msgs2::msg::StateContext::_use_mdriver_ego_type arg)
  {
    msg_.use_mdriver_ego = std::move(arg);
    return Init_StateContext_target_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_current_turn_type
{
public:
  explicit Init_StateContext_current_turn_type(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_use_mdriver_ego current_turn_type(::deva_planning_msgs2::msg::StateContext::_current_turn_type_type arg)
  {
    msg_.current_turn_type = std::move(arg);
    return Init_StateContext_use_mdriver_ego(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_routing_mode
{
public:
  explicit Init_StateContext_routing_mode(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_current_turn_type routing_mode(::deva_planning_msgs2::msg::StateContext::_routing_mode_type arg)
  {
    msg_.routing_mode = std::move(arg);
    return Init_StateContext_current_turn_type(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_behavior_type
{
public:
  explicit Init_StateContext_behavior_type(::deva_planning_msgs2::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_routing_mode behavior_type(::deva_planning_msgs2::msg::StateContext::_behavior_type_type arg)
  {
    msg_.behavior_type = std::move(arg);
    return Init_StateContext_routing_mode(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

class Init_StateContext_header
{
public:
  Init_StateContext_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateContext_behavior_type header(::deva_planning_msgs2::msg::StateContext::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateContext_behavior_type(msg_);
  }

private:
  ::deva_planning_msgs2::msg::StateContext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::StateContext>()
{
  return deva_planning_msgs2::msg::builder::Init_StateContext_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_
