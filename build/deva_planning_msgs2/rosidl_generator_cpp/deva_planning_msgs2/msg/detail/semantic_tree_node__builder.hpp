// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_SemanticTreeNode_scalable_multimap
{
public:
  explicit Init_SemanticTreeNode_scalable_multimap(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::SemanticTreeNode scalable_multimap(::deva_planning_msgs2::msg::SemanticTreeNode::_scalable_multimap_type arg)
  {
    msg_.scalable_multimap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_scalable_flags
{
public:
  explicit Init_SemanticTreeNode_scalable_flags(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_scalable_multimap scalable_flags(::deva_planning_msgs2::msg::SemanticTreeNode::_scalable_flags_type arg)
  {
    msg_.scalable_flags = std::move(arg);
    return Init_SemanticTreeNode_scalable_multimap(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_rollout_cost
{
public:
  explicit Init_SemanticTreeNode_rollout_cost(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_scalable_flags rollout_cost(::deva_planning_msgs2::msg::SemanticTreeNode::_rollout_cost_type arg)
  {
    msg_.rollout_cost = std::move(arg);
    return Init_SemanticTreeNode_scalable_flags(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_game_cost
{
public:
  explicit Init_SemanticTreeNode_game_cost(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_rollout_cost game_cost(::deva_planning_msgs2::msg::SemanticTreeNode::_game_cost_type arg)
  {
    msg_.game_cost = std::move(arg);
    return Init_SemanticTreeNode_rollout_cost(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_rollout_score
{
public:
  explicit Init_SemanticTreeNode_rollout_score(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_game_cost rollout_score(::deva_planning_msgs2::msg::SemanticTreeNode::_rollout_score_type arg)
  {
    msg_.rollout_score = std::move(arg);
    return Init_SemanticTreeNode_game_cost(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_game_score
{
public:
  explicit Init_SemanticTreeNode_game_score(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_rollout_score game_score(::deva_planning_msgs2::msg::SemanticTreeNode::_game_score_type arg)
  {
    msg_.game_score = std::move(arg);
    return Init_SemanticTreeNode_rollout_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_total_score
{
public:
  explicit Init_SemanticTreeNode_total_score(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_game_score total_score(::deva_planning_msgs2::msg::SemanticTreeNode::_total_score_type arg)
  {
    msg_.total_score = std::move(arg);
    return Init_SemanticTreeNode_game_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_rollout_start_time
{
public:
  explicit Init_SemanticTreeNode_rollout_start_time(::deva_planning_msgs2::msg::SemanticTreeNode & msg)
  : msg_(msg)
  {}
  Init_SemanticTreeNode_total_score rollout_start_time(::deva_planning_msgs2::msg::SemanticTreeNode::_rollout_start_time_type arg)
  {
    msg_.rollout_start_time = std::move(arg);
    return Init_SemanticTreeNode_total_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

class Init_SemanticTreeNode_node_id
{
public:
  Init_SemanticTreeNode_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SemanticTreeNode_rollout_start_time node_id(::deva_planning_msgs2::msg::SemanticTreeNode::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_SemanticTreeNode_rollout_start_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::SemanticTreeNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::SemanticTreeNode>()
{
  return deva_planning_msgs2::msg::builder::Init_SemanticTreeNode_node_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__BUILDER_HPP_
