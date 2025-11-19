// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/planning_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PlanningLog_scalable_bool
{
public:
  explicit Init_PlanningLog_scalable_bool(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PlanningLog scalable_bool(::deva_planning_msgs2::msg::PlanningLog::_scalable_bool_type arg)
  {
    msg_.scalable_bool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_scalable_double
{
public:
  explicit Init_PlanningLog_scalable_double(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_scalable_bool scalable_double(::deva_planning_msgs2::msg::PlanningLog::_scalable_double_type arg)
  {
    msg_.scalable_double = std::move(arg);
    return Init_PlanningLog_scalable_bool(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_scalable_int
{
public:
  explicit Init_PlanningLog_scalable_int(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_scalable_double scalable_int(::deva_planning_msgs2::msg::PlanningLog::_scalable_int_type arg)
  {
    msg_.scalable_int = std::move(arg);
    return Init_PlanningLog_scalable_double(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_scalable_stream
{
public:
  explicit Init_PlanningLog_scalable_stream(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_scalable_int scalable_stream(::deva_planning_msgs2::msg::PlanningLog::_scalable_stream_type arg)
  {
    msg_.scalable_stream = std::move(arg);
    return Init_PlanningLog_scalable_int(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_navigator_routing
{
public:
  explicit Init_PlanningLog_navigator_routing(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_scalable_stream navigator_routing(::deva_planning_msgs2::msg::PlanningLog::_navigator_routing_type arg)
  {
    msg_.navigator_routing = std::move(arg);
    return Init_PlanningLog_scalable_stream(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_planning_log
{
public:
  explicit Init_PlanningLog_planning_log(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_navigator_routing planning_log(::deva_planning_msgs2::msg::PlanningLog::_planning_log_type arg)
  {
    msg_.planning_log = std::move(arg);
    return Init_PlanningLog_navigator_routing(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_trajectory_solver_debug_sequence
{
public:
  explicit Init_PlanningLog_trajectory_solver_debug_sequence(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_planning_log trajectory_solver_debug_sequence(::deva_planning_msgs2::msg::PlanningLog::_trajectory_solver_debug_sequence_type arg)
  {
    msg_.trajectory_solver_debug_sequence = std::move(arg);
    return Init_PlanningLog_planning_log(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_speed_solver_debug_sequence
{
public:
  explicit Init_PlanningLog_speed_solver_debug_sequence(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_trajectory_solver_debug_sequence speed_solver_debug_sequence(::deva_planning_msgs2::msg::PlanningLog::_speed_solver_debug_sequence_type arg)
  {
    msg_.speed_solver_debug_sequence = std::move(arg);
    return Init_PlanningLog_trajectory_solver_debug_sequence(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_target_trajectory
{
public:
  explicit Init_PlanningLog_target_trajectory(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_speed_solver_debug_sequence target_trajectory(::deva_planning_msgs2::msg::PlanningLog::_target_trajectory_type arg)
  {
    msg_.target_trajectory = std::move(arg);
    return Init_PlanningLog_speed_solver_debug_sequence(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_state_context
{
public:
  explicit Init_PlanningLog_state_context(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_target_trajectory state_context(::deva_planning_msgs2::msg::PlanningLog::_state_context_type arg)
  {
    msg_.state_context = std::move(arg);
    return Init_PlanningLog_target_trajectory(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_megmap_proto
{
public:
  explicit Init_PlanningLog_megmap_proto(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_state_context megmap_proto(::deva_planning_msgs2::msg::PlanningLog::_megmap_proto_type arg)
  {
    msg_.megmap_proto = std::move(arg);
    return Init_PlanningLog_state_context(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_prediction
{
public:
  explicit Init_PlanningLog_prediction(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_megmap_proto prediction(::deva_planning_msgs2::msg::PlanningLog::_prediction_type arg)
  {
    msg_.prediction = std::move(arg);
    return Init_PlanningLog_megmap_proto(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_apollo_decision
{
public:
  explicit Init_PlanningLog_apollo_decision(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_prediction apollo_decision(::deva_planning_msgs2::msg::PlanningLog::_apollo_decision_type arg)
  {
    msg_.apollo_decision = std::move(arg);
    return Init_PlanningLog_prediction(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_traffic_poles
{
public:
  explicit Init_PlanningLog_traffic_poles(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_apollo_decision traffic_poles(::deva_planning_msgs2::msg::PlanningLog::_traffic_poles_type arg)
  {
    msg_.traffic_poles = std::move(arg);
    return Init_PlanningLog_apollo_decision(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_pull_over_msg
{
public:
  explicit Init_PlanningLog_pull_over_msg(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_traffic_poles pull_over_msg(::deva_planning_msgs2::msg::PlanningLog::_pull_over_msg_type arg)
  {
    msg_.pull_over_msg = std::move(arg);
    return Init_PlanningLog_traffic_poles(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_pad_message
{
public:
  explicit Init_PlanningLog_pad_message(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_pull_over_msg pad_message(::deva_planning_msgs2::msg::PlanningLog::_pad_message_type arg)
  {
    msg_.pad_message = std::move(arg);
    return Init_PlanningLog_pull_over_msg(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_chassis
{
public:
  explicit Init_PlanningLog_chassis(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_pad_message chassis(::deva_planning_msgs2::msg::PlanningLog::_chassis_type arg)
  {
    msg_.chassis = std::move(arg);
    return Init_PlanningLog_pad_message(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_localization
{
public:
  explicit Init_PlanningLog_localization(::deva_planning_msgs2::msg::PlanningLog & msg)
  : msg_(msg)
  {}
  Init_PlanningLog_chassis localization(::deva_planning_msgs2::msg::PlanningLog::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_PlanningLog_chassis(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

class Init_PlanningLog_header
{
public:
  Init_PlanningLog_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningLog_localization header(::deva_planning_msgs2::msg::PlanningLog::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningLog_localization(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PlanningLog>()
{
  return deva_planning_msgs2::msg::builder::Init_PlanningLog_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_LOG__BUILDER_HPP_
