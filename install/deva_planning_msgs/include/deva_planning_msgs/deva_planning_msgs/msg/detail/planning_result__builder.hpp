// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/planning_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningResult_status
{
public:
  explicit Init_PlanningResult_status(::deva_planning_msgs::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PlanningResult status(::deva_planning_msgs::msg::PlanningResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningResult msg_;
};

class Init_PlanningResult_trajectories
{
public:
  explicit Init_PlanningResult_trajectories(::deva_planning_msgs::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_status trajectories(::deva_planning_msgs::msg::PlanningResult::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return Init_PlanningResult_status(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningResult msg_;
};

class Init_PlanningResult_sensor_time
{
public:
  explicit Init_PlanningResult_sensor_time(::deva_planning_msgs::msg::PlanningResult & msg)
  : msg_(msg)
  {}
  Init_PlanningResult_trajectories sensor_time(::deva_planning_msgs::msg::PlanningResult::_sensor_time_type arg)
  {
    msg_.sensor_time = std::move(arg);
    return Init_PlanningResult_trajectories(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningResult msg_;
};

class Init_PlanningResult_header
{
public:
  Init_PlanningResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningResult_sensor_time header(::deva_planning_msgs::msg::PlanningResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningResult_sensor_time(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PlanningResult>()
{
  return deva_planning_msgs::msg::builder::Init_PlanningResult_header();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__BUILDER_HPP_
