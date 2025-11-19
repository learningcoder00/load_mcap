// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/planning_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PlanningResult_fail_reason
{
public:
  explicit Init_PlanningResult_fail_reason(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PlanningResult fail_reason(::deva_planning_msgs2::msg::PlanningResult::_fail_reason_type arg)
  {
    msg_.fail_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_function_state_available
{
public:
  explicit Init_PlanningResult_function_state_available(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_fail_reason function_state_available(::deva_planning_msgs2::msg::PlanningResult::_function_state_available_type arg)
  {
    msg_.function_state_available = std::move(arg);
    return Init_PlanningResult_fail_reason(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_planning_work_state
{
public:
  explicit Init_PlanningResult_planning_work_state(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_function_state_available planning_work_state(::deva_planning_msgs2::msg::PlanningResult::_planning_work_state_type arg)
  {
    msg_.planning_work_state = std::move(arg);
    return Init_PlanningResult_function_state_available(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_pilot_planning_state
{
public:
  explicit Init_PlanningResult_pilot_planning_state(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_planning_work_state pilot_planning_state(::deva_planning_msgs2::msg::PlanningResult::_pilot_planning_state_type arg)
  {
    msg_.pilot_planning_state = std::move(arg);
    return Init_PlanningResult_planning_work_state(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_trajectories
{
public:
  explicit Init_PlanningResult_trajectories(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_pilot_planning_state trajectories(::deva_planning_msgs2::msg::PlanningResult::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return Init_PlanningResult_pilot_planning_state(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_sensor_time
{
public:
  explicit Init_PlanningResult_sensor_time(::deva_planning_msgs2::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_trajectories sensor_time(::deva_planning_msgs2::msg::PlanningResult::_sensor_time_type arg)
  {
    msg_.sensor_time = std::move(arg);
    return Init_PlanningResult_trajectories(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

class Init_PlanningResult_header
{
public:
  Init_PlanningResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningResult_sensor_time header(::deva_planning_msgs2::msg::PlanningResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningResult_sensor_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PlanningResult>()
{
  return deva_planning_msgs2::msg::builder::Init_PlanningResult_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_
