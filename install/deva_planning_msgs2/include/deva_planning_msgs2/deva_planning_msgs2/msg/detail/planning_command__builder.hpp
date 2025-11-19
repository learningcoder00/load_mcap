// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PlanningCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/planning_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PlanningCommand_function
{
public:
  explicit Init_PlanningCommand_function(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PlanningCommand function(::deva_planning_msgs2::msg::PlanningCommand::_function_type arg)
  {
    msg_.function = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_lane_width
{
public:
  explicit Init_PlanningCommand_lane_width(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  Init_PlanningCommand_function lane_width(::deva_planning_msgs2::msg::PlanningCommand::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_PlanningCommand_function(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_park_out_direction
{
public:
  explicit Init_PlanningCommand_park_out_direction(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  Init_PlanningCommand_lane_width park_out_direction(::deva_planning_msgs2::msg::PlanningCommand::_park_out_direction_type arg)
  {
    msg_.park_out_direction = std::move(arg);
    return Init_PlanningCommand_lane_width(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_park_slot_id
{
public:
  explicit Init_PlanningCommand_park_slot_id(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  Init_PlanningCommand_park_out_direction park_slot_id(::deva_planning_msgs2::msg::PlanningCommand::_park_slot_id_type arg)
  {
    msg_.park_slot_id = std::move(arg);
    return Init_PlanningCommand_park_out_direction(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_cruise_speed
{
public:
  explicit Init_PlanningCommand_cruise_speed(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  Init_PlanningCommand_park_slot_id cruise_speed(::deva_planning_msgs2::msg::PlanningCommand::_cruise_speed_type arg)
  {
    msg_.cruise_speed = std::move(arg);
    return Init_PlanningCommand_park_slot_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_action
{
public:
  explicit Init_PlanningCommand_action(::deva_planning_msgs2::msg::PlanningCommand & msg)
  : msg_(msg)
  {}
  Init_PlanningCommand_cruise_speed action(::deva_planning_msgs2::msg::PlanningCommand::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_PlanningCommand_cruise_speed(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

class Init_PlanningCommand_header
{
public:
  Init_PlanningCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningCommand_action header(::deva_planning_msgs2::msg::PlanningCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningCommand_action(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PlanningCommand>()
{
  return deva_planning_msgs2::msg::builder::Init_PlanningCommand_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__BUILDER_HPP_
