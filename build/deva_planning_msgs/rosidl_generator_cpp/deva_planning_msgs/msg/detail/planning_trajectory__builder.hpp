// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PlanningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/planning_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningTrajectory_id
{
public:
  explicit Init_PlanningTrajectory_id(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PlanningTrajectory id(::deva_planning_msgs::msg::PlanningTrajectory::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_radius
{
public:
  explicit Init_PlanningTrajectory_radius(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_id radius(::deva_planning_msgs::msg::PlanningTrajectory::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_PlanningTrajectory_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_circle_center
{
public:
  explicit Init_PlanningTrajectory_circle_center(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_radius circle_center(::deva_planning_msgs::msg::PlanningTrajectory::_circle_center_type arg)
  {
    msg_.circle_center = std::move(arg);
    return Init_PlanningTrajectory_radius(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_vehicle_gear
{
public:
  explicit Init_PlanningTrajectory_vehicle_gear(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_circle_center vehicle_gear(::deva_planning_msgs::msg::PlanningTrajectory::_vehicle_gear_type arg)
  {
    msg_.vehicle_gear = std::move(arg);
    return Init_PlanningTrajectory_circle_center(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_emergency_light
{
public:
  explicit Init_PlanningTrajectory_emergency_light(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_vehicle_gear emergency_light(::deva_planning_msgs::msg::PlanningTrajectory::_emergency_light_type arg)
  {
    msg_.emergency_light = std::move(arg);
    return Init_PlanningTrajectory_vehicle_gear(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_horn
{
public:
  explicit Init_PlanningTrajectory_horn(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_emergency_light horn(::deva_planning_msgs::msg::PlanningTrajectory::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_PlanningTrajectory_emergency_light(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_low_beam
{
public:
  explicit Init_PlanningTrajectory_low_beam(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_horn low_beam(::deva_planning_msgs::msg::PlanningTrajectory::_low_beam_type arg)
  {
    msg_.low_beam = std::move(arg);
    return Init_PlanningTrajectory_horn(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_high_beam
{
public:
  explicit Init_PlanningTrajectory_high_beam(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_low_beam high_beam(::deva_planning_msgs::msg::PlanningTrajectory::_high_beam_type arg)
  {
    msg_.high_beam = std::move(arg);
    return Init_PlanningTrajectory_low_beam(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_trace_type
{
public:
  explicit Init_PlanningTrajectory_trace_type(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_high_beam trace_type(::deva_planning_msgs::msg::PlanningTrajectory::_trace_type_type arg)
  {
    msg_.trace_type = std::move(arg);
    return Init_PlanningTrajectory_high_beam(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_car_in_dead_end
{
public:
  explicit Init_PlanningTrajectory_car_in_dead_end(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_trace_type car_in_dead_end(::deva_planning_msgs::msg::PlanningTrajectory::_car_in_dead_end_type arg)
  {
    msg_.car_in_dead_end = std::move(arg);
    return Init_PlanningTrajectory_trace_type(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_replan_reason
{
public:
  explicit Init_PlanningTrajectory_replan_reason(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_car_in_dead_end replan_reason(::deva_planning_msgs::msg::PlanningTrajectory::_replan_reason_type arg)
  {
    msg_.replan_reason = std::move(arg);
    return Init_PlanningTrajectory_car_in_dead_end(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_is_replan
{
public:
  explicit Init_PlanningTrajectory_is_replan(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_replan_reason is_replan(::deva_planning_msgs::msg::PlanningTrajectory::_is_replan_type arg)
  {
    msg_.is_replan = std::move(arg);
    return Init_PlanningTrajectory_replan_reason(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_stop_pose
{
public:
  explicit Init_PlanningTrajectory_stop_pose(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_is_replan stop_pose(::deva_planning_msgs::msg::PlanningTrajectory::_stop_pose_type arg)
  {
    msg_.stop_pose = std::move(arg);
    return Init_PlanningTrajectory_is_replan(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_stop_reason
{
public:
  explicit Init_PlanningTrajectory_stop_reason(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_stop_pose stop_reason(::deva_planning_msgs::msg::PlanningTrajectory::_stop_reason_type arg)
  {
    msg_.stop_reason = std::move(arg);
    return Init_PlanningTrajectory_stop_pose(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_is_stop
{
public:
  explicit Init_PlanningTrajectory_is_stop(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_stop_reason is_stop(::deva_planning_msgs::msg::PlanningTrajectory::_is_stop_type arg)
  {
    msg_.is_stop = std::move(arg);
    return Init_PlanningTrajectory_stop_reason(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_estop_reason
{
public:
  explicit Init_PlanningTrajectory_estop_reason(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_is_stop estop_reason(::deva_planning_msgs::msg::PlanningTrajectory::_estop_reason_type arg)
  {
    msg_.estop_reason = std::move(arg);
    return Init_PlanningTrajectory_is_stop(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_is_estop
{
public:
  explicit Init_PlanningTrajectory_is_estop(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_estop_reason is_estop(::deva_planning_msgs::msg::PlanningTrajectory::_is_estop_type arg)
  {
    msg_.is_estop = std::move(arg);
    return Init_PlanningTrajectory_estop_reason(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_gear
{
public:
  explicit Init_PlanningTrajectory_gear(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_is_estop gear(::deva_planning_msgs::msg::PlanningTrajectory::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_PlanningTrajectory_is_estop(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_total_path_time
{
public:
  explicit Init_PlanningTrajectory_total_path_time(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_gear total_path_time(::deva_planning_msgs::msg::PlanningTrajectory::_total_path_time_type arg)
  {
    msg_.total_path_time = std::move(arg);
    return Init_PlanningTrajectory_gear(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_total_path_length
{
public:
  explicit Init_PlanningTrajectory_total_path_length(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_total_path_time total_path_length(::deva_planning_msgs::msg::PlanningTrajectory::_total_path_length_type arg)
  {
    msg_.total_path_length = std::move(arg);
    return Init_PlanningTrajectory_total_path_time(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_curve
{
public:
  explicit Init_PlanningTrajectory_curve(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_total_path_length curve(::deva_planning_msgs::msg::PlanningTrajectory::_curve_type arg)
  {
    msg_.curve = std::move(arg);
    return Init_PlanningTrajectory_total_path_length(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_trajectory_points
{
public:
  explicit Init_PlanningTrajectory_trajectory_points(::deva_planning_msgs::msg::PlanningTrajectory & msg)
  : msg_(msg)
  {}
  Init_PlanningTrajectory_curve trajectory_points(::deva_planning_msgs::msg::PlanningTrajectory::_trajectory_points_type arg)
  {
    msg_.trajectory_points = std::move(arg);
    return Init_PlanningTrajectory_curve(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

class Init_PlanningTrajectory_path_type
{
public:
  Init_PlanningTrajectory_path_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningTrajectory_trajectory_points path_type(::deva_planning_msgs::msg::PlanningTrajectory::_path_type_type arg)
  {
    msg_.path_type = std::move(arg);
    return Init_PlanningTrajectory_trajectory_points(msg_);
  }

private:
  ::deva_planning_msgs::msg::PlanningTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PlanningTrajectory>()
{
  return deva_planning_msgs::msg::builder::Init_PlanningTrajectory_path_type();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__BUILDER_HPP_
