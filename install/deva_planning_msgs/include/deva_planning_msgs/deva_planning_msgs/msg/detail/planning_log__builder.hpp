// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/planning_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningLog_env_info_index
{
public:
  explicit Init_PlanningLog_env_info_index(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PlanningLog env_info_index(::deva_planning_msgs::msg::PlanningLog::_env_info_index_type arg)
  {
    msg_.env_info_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_drive_action
{
public:
  explicit Init_PlanningLog_drive_action(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_env_info_index drive_action(::deva_planning_msgs::msg::PlanningLog::_drive_action_type arg)
  {
    msg_.drive_action = std::move(arg);
    return Init_PlanningLog_env_info_index(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_auto_function
{
public:
  explicit Init_PlanningLog_auto_function(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_drive_action auto_function(::deva_planning_msgs::msg::PlanningLog::_auto_function_type arg)
  {
    msg_.auto_function = std::move(arg);
    return Init_PlanningLog_drive_action(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_drving_state
{
public:
  explicit Init_PlanningLog_drving_state(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_auto_function drving_state(::deva_planning_msgs::msg::PlanningLog::_drving_state_type arg)
  {
    msg_.drving_state = std::move(arg);
    return Init_PlanningLog_auto_function(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_navigator_routing
{
public:
  explicit Init_PlanningLog_navigator_routing(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_drving_state navigator_routing(::deva_planning_msgs::msg::PlanningLog::_navigator_routing_type arg)
  {
    msg_.navigator_routing = std::move(arg);
    return Init_PlanningLog_drving_state(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_planning_log
{
public:
  explicit Init_PlanningLog_planning_log(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_navigator_routing planning_log(::deva_planning_msgs::msg::PlanningLog::_planning_log_type arg)
  {
    msg_.planning_log = std::move(arg);
    return Init_PlanningLog_navigator_routing(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_trajectory_solver_debug_sequence
{
public:
  explicit Init_PlanningLog_trajectory_solver_debug_sequence(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_planning_log trajectory_solver_debug_sequence(::deva_planning_msgs::msg::PlanningLog::_trajectory_solver_debug_sequence_type arg)
  {
    msg_.trajectory_solver_debug_sequence = std::move(arg);
    return Init_PlanningLog_planning_log(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_speed_solver_debug_sequence
{
public:
  explicit Init_PlanningLog_speed_solver_debug_sequence(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_trajectory_solver_debug_sequence speed_solver_debug_sequence(::deva_planning_msgs::msg::PlanningLog::_speed_solver_debug_sequence_type arg)
  {
    msg_.speed_solver_debug_sequence = std::move(arg);
    return Init_PlanningLog_trajectory_solver_debug_sequence(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_target_trajectory
{
public:
  explicit Init_PlanningLog_target_trajectory(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_speed_solver_debug_sequence target_trajectory(::deva_planning_msgs::msg::PlanningLog::_target_trajectory_type arg)
  {
    msg_.target_trajectory = std::move(arg);
    return Init_PlanningLog_speed_solver_debug_sequence(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_state_context
{
public:
  explicit Init_PlanningLog_state_context(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_target_trajectory state_context(::deva_planning_msgs::msg::PlanningLog::_state_context_type arg)
  {
    msg_.state_context = std::move(arg);
    return Init_PlanningLog_target_trajectory(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_megmap_proto
{
public:
  explicit Init_PlanningLog_megmap_proto(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_state_context megmap_proto(::deva_planning_msgs::msg::PlanningLog::_megmap_proto_type arg)
  {
    msg_.megmap_proto = std::move(arg);
    return Init_PlanningLog_state_context(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_prediction
{
public:
  explicit Init_PlanningLog_prediction(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_megmap_proto prediction(::deva_planning_msgs::msg::PlanningLog::_prediction_type arg)
  {
    msg_.prediction = std::move(arg);
    return Init_PlanningLog_megmap_proto(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_apollo_decision
{
public:
  explicit Init_PlanningLog_apollo_decision(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_prediction apollo_decision(::deva_planning_msgs::msg::PlanningLog::_apollo_decision_type arg)
  {
    msg_.apollo_decision = std::move(arg);
    return Init_PlanningLog_prediction(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_traffic_poles
{
public:
  explicit Init_PlanningLog_traffic_poles(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_apollo_decision traffic_poles(::deva_planning_msgs::msg::PlanningLog::_traffic_poles_type arg)
  {
    msg_.traffic_poles = std::move(arg);
    return Init_PlanningLog_apollo_decision(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_pull_over_msg
{
public:
  explicit Init_PlanningLog_pull_over_msg(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_traffic_poles pull_over_msg(::deva_planning_msgs::msg::PlanningLog::_pull_over_msg_type arg)
  {
    msg_.pull_over_msg = std::move(arg);
    return Init_PlanningLog_traffic_poles(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_pad_message
{
public:
  explicit Init_PlanningLog_pad_message(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_pull_over_msg pad_message(::deva_planning_msgs::msg::PlanningLog::_pad_message_type arg)
  {
    msg_.pad_message = std::move(arg);
    return Init_PlanningLog_pull_over_msg(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_chassis
{
public:
  explicit Init_PlanningLog_chassis(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_pad_message chassis(::deva_planning_msgs::msg::PlanningLog::_chassis_type arg)
  {
    msg_.chassis = std::move(arg);
    return Init_PlanningLog_pad_message(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_localization
{
public:
  explicit Init_PlanningLog_localization(::deva_planning_msgs::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_chassis localization(::deva_planning_msgs::msg::PlanningLog::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_PlanningLog_chassis(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

class Init_PlanningLog_header
{
public:
  Init_PlanningLog_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningLog_localization header(::deva_planning_msgs::msg::PlanningLog::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningLog_localization(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PlanningLog>()
{
  return deva_planning_msgs::msg::builder::Init_PlanningLog_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_
