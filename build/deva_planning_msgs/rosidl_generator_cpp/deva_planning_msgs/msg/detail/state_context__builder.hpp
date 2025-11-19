// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/state_context__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_StateContext_lane_change_task
{
public:
  explicit Init_StateContext_lane_change_task(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::StateContext lane_change_task(::deva_planning_msgs::msg::StateContext::_lane_change_task_type arg)
  {
    msg_.lane_change_task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_cutin_overtake_obstacle_id
{
public:
  explicit Init_StateContext_cutin_overtake_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_lane_change_task cutin_overtake_obstacle_id(::deva_planning_msgs::msg::StateContext::_cutin_overtake_obstacle_id_type arg)
  {
    msg_.cutin_overtake_obstacle_id = std::move(arg);
    return Init_StateContext_lane_change_task(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_cutin_follow_obstacle_id
{
public:
  explicit Init_StateContext_cutin_follow_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_cutin_overtake_obstacle_id cutin_follow_obstacle_id(::deva_planning_msgs::msg::StateContext::_cutin_follow_obstacle_id_type arg)
  {
    msg_.cutin_follow_obstacle_id = std::move(arg);
    return Init_StateContext_cutin_overtake_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_nudge_obstacle_id
{
public:
  explicit Init_StateContext_nudge_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_cutin_follow_obstacle_id nudge_obstacle_id(::deva_planning_msgs::msg::StateContext::_nudge_obstacle_id_type arg)
  {
    msg_.nudge_obstacle_id = std::move(arg);
    return Init_StateContext_cutin_follow_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_cipv_obstacle_id
{
public:
  explicit Init_StateContext_cipv_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_nudge_obstacle_id cipv_obstacle_id(::deva_planning_msgs::msg::StateContext::_cipv_obstacle_id_type arg)
  {
    msg_.cipv_obstacle_id = std::move(arg);
    return Init_StateContext_nudge_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_rear_obstacle_id
{
public:
  explicit Init_StateContext_rear_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_cipv_obstacle_id rear_obstacle_id(::deva_planning_msgs::msg::StateContext::_rear_obstacle_id_type arg)
  {
    msg_.rear_obstacle_id = std::move(arg);
    return Init_StateContext_cipv_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_front_obstacle_id
{
public:
  explicit Init_StateContext_front_obstacle_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_rear_obstacle_id front_obstacle_id(::deva_planning_msgs::msg::StateContext::_front_obstacle_id_type arg)
  {
    msg_.front_obstacle_id = std::move(arg);
    return Init_StateContext_rear_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_future_length
{
public:
  explicit Init_StateContext_future_length(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_front_obstacle_id future_length(::deva_planning_msgs::msg::StateContext::_future_length_type arg)
  {
    msg_.future_length = std::move(arg);
    return Init_StateContext_front_obstacle_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_length
{
public:
  explicit Init_StateContext_length(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_future_length length(::deva_planning_msgs::msg::StateContext::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_StateContext_future_length(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_end_s
{
public:
  explicit Init_StateContext_end_s(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_length end_s(::deva_planning_msgs::msg::StateContext::_end_s_type arg)
  {
    msg_.end_s = std::move(arg);
    return Init_StateContext_length(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_start_s
{
public:
  explicit Init_StateContext_start_s(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_end_s start_s(::deva_planning_msgs::msg::StateContext::_start_s_type arg)
  {
    msg_.start_s = std::move(arg);
    return Init_StateContext_end_s(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_gap_line_id
{
public:
  explicit Init_StateContext_gap_line_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_start_s gap_line_id(::deva_planning_msgs::msg::StateContext::_gap_line_id_type arg)
  {
    msg_.gap_line_id = std::move(arg);
    return Init_StateContext_start_s(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_gap_id
{
public:
  explicit Init_StateContext_gap_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_gap_line_id gap_id(::deva_planning_msgs::msg::StateContext::_gap_id_type arg)
  {
    msg_.gap_id = std::move(arg);
    return Init_StateContext_gap_line_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_current_line_id
{
public:
  explicit Init_StateContext_current_line_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_gap_id current_line_id(::deva_planning_msgs::msg::StateContext::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_StateContext_gap_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_target_line_id
{
public:
  explicit Init_StateContext_target_line_id(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_current_line_id target_line_id(::deva_planning_msgs::msg::StateContext::_target_line_id_type arg)
  {
    msg_.target_line_id = std::move(arg);
    return Init_StateContext_current_line_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_use_mdriver_ego
{
public:
  explicit Init_StateContext_use_mdriver_ego(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_target_line_id use_mdriver_ego(::deva_planning_msgs::msg::StateContext::_use_mdriver_ego_type arg)
  {
    msg_.use_mdriver_ego = std::move(arg);
    return Init_StateContext_target_line_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_score
{
public:
  explicit Init_StateContext_score(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_use_mdriver_ego score(::deva_planning_msgs::msg::StateContext::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_StateContext_use_mdriver_ego(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_state_score
{
public:
  explicit Init_StateContext_state_score(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_score state_score(::deva_planning_msgs::msg::StateContext::_state_score_type arg)
  {
    msg_.state_score = std::move(arg);
    return Init_StateContext_score(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_target_lane_seq_score
{
public:
  explicit Init_StateContext_target_lane_seq_score(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_state_score target_lane_seq_score(::deva_planning_msgs::msg::StateContext::_target_lane_seq_score_type arg)
  {
    msg_.target_lane_seq_score = std::move(arg);
    return Init_StateContext_state_score(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_routing_mode
{
public:
  explicit Init_StateContext_routing_mode(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_target_lane_seq_score routing_mode(::deva_planning_msgs::msg::StateContext::_routing_mode_type arg)
  {
    msg_.routing_mode = std::move(arg);
    return Init_StateContext_target_lane_seq_score(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_navi_map_mode
{
public:
  explicit Init_StateContext_navi_map_mode(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_routing_mode navi_map_mode(::deva_planning_msgs::msg::StateContext::_navi_map_mode_type arg)
  {
    msg_.navi_map_mode = std::move(arg);
    return Init_StateContext_routing_mode(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_behavior_type
{
public:
  explicit Init_StateContext_behavior_type(::deva_planning_msgs::msg::StateContext & msg)
  : msg_(msg)
  {}
  Init_StateContext_navi_map_mode behavior_type(::deva_planning_msgs::msg::StateContext::_behavior_type_type arg)
  {
    msg_.behavior_type = std::move(arg);
    return Init_StateContext_navi_map_mode(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

class Init_StateContext_header
{
public:
  Init_StateContext_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateContext_behavior_type header(::deva_planning_msgs::msg::StateContext::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateContext_behavior_type(msg_);
  }

private:
  ::deva_planning_msgs::msg::StateContext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::StateContext>()
{
  return deva_planning_msgs::msg::builder::Init_StateContext_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__BUILDER_HPP_
