// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PlanningState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/planning_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningState_fail_reason
{
public:
  explicit Init_PlanningState_fail_reason(::deva_planning_msgs::msg::PlanningState & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PlanningState fail_reason(::deva_planning_msgs::msg::PlanningState::_fail_reason_type arg)
  {
    msg_.fail_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningState msg_;
};

class Init_PlanningState_navi_state
{
public:
  explicit Init_PlanningState_navi_state(::deva_planning_msgs::msg::PlanningState & msg)
  : msg_(msg)
  {}
  Init_PlanningState_fail_reason navi_state(::deva_planning_msgs::msg::PlanningState::_navi_state_type arg)
  {
    msg_.navi_state = std::move(arg);
    return Init_PlanningState_fail_reason(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningState msg_;
};

class Init_PlanningState_pilot_planning_state
{
public:
  explicit Init_PlanningState_pilot_planning_state(::deva_planning_msgs::msg::PlanningState & msg)
  : msg_(msg)
  {}
  Init_PlanningState_navi_state pilot_planning_state(::deva_planning_msgs::msg::PlanningState::_pilot_planning_state_type arg)
  {
    msg_.pilot_planning_state = std::move(arg);
    return Init_PlanningState_navi_state(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningState msg_;
};

class Init_PlanningState_header
{
public:
  Init_PlanningState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningState_pilot_planning_state header(::deva_planning_msgs::msg::PlanningState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningState_pilot_planning_state(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PlanningState>()
{
  return deva_planning_msgs::msg::builder::Init_PlanningState_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__BUILDER_HPP_
