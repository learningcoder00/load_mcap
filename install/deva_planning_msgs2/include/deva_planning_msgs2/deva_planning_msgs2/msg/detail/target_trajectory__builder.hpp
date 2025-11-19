// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/target_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_TargetTrajectory_trace_type
{
public:
  explicit Init_TargetTrajectory_trace_type(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::TargetTrajectory trace_type(::deva_planning_msgs2::msg::TargetTrajectory::_trace_type_type arg)
  {
    msg_.trace_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_emergency_light
{
public:
  explicit Init_TargetTrajectory_emergency_light(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_trace_type emergency_light(::deva_planning_msgs2::msg::TargetTrajectory::_emergency_light_type arg)
  {
    msg_.emergency_light = std::move(arg);
    return Init_TargetTrajectory_trace_type(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_horn
{
public:
  explicit Init_TargetTrajectory_horn(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_emergency_light horn(::deva_planning_msgs2::msg::TargetTrajectory::_horn_type arg)
  {
    msg_.horn = std::move(arg);
    return Init_TargetTrajectory_emergency_light(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_low_beam
{
public:
  explicit Init_TargetTrajectory_low_beam(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_horn low_beam(::deva_planning_msgs2::msg::TargetTrajectory::_low_beam_type arg)
  {
    msg_.low_beam = std::move(arg);
    return Init_TargetTrajectory_horn(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_high_beam
{
public:
  explicit Init_TargetTrajectory_high_beam(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_low_beam high_beam(::deva_planning_msgs2::msg::TargetTrajectory::_high_beam_type arg)
  {
    msg_.high_beam = std::move(arg);
    return Init_TargetTrajectory_low_beam(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_car_in_dead_end
{
public:
  explicit Init_TargetTrajectory_car_in_dead_end(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_high_beam car_in_dead_end(::deva_planning_msgs2::msg::TargetTrajectory::_car_in_dead_end_type arg)
  {
    msg_.car_in_dead_end = std::move(arg);
    return Init_TargetTrajectory_high_beam(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_replan_reason
{
public:
  explicit Init_TargetTrajectory_replan_reason(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_car_in_dead_end replan_reason(::deva_planning_msgs2::msg::TargetTrajectory::_replan_reason_type arg)
  {
    msg_.replan_reason = std::move(arg);
    return Init_TargetTrajectory_car_in_dead_end(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_is_replan
{
public:
  explicit Init_TargetTrajectory_is_replan(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_replan_reason is_replan(::deva_planning_msgs2::msg::TargetTrajectory::_is_replan_type arg)
  {
    msg_.is_replan = std::move(arg);
    return Init_TargetTrajectory_replan_reason(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_stop_reason
{
public:
  explicit Init_TargetTrajectory_stop_reason(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_is_replan stop_reason(::deva_planning_msgs2::msg::TargetTrajectory::_stop_reason_type arg)
  {
    msg_.stop_reason = std::move(arg);
    return Init_TargetTrajectory_is_replan(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_stop_pose
{
public:
  explicit Init_TargetTrajectory_stop_pose(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_stop_reason stop_pose(::deva_planning_msgs2::msg::TargetTrajectory::_stop_pose_type arg)
  {
    msg_.stop_pose = std::move(arg);
    return Init_TargetTrajectory_stop_reason(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_is_stop
{
public:
  explicit Init_TargetTrajectory_is_stop(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_stop_pose is_stop(::deva_planning_msgs2::msg::TargetTrajectory::_is_stop_type arg)
  {
    msg_.is_stop = std::move(arg);
    return Init_TargetTrajectory_stop_pose(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_estop_reason
{
public:
  explicit Init_TargetTrajectory_estop_reason(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_is_stop estop_reason(::deva_planning_msgs2::msg::TargetTrajectory::_estop_reason_type arg)
  {
    msg_.estop_reason = std::move(arg);
    return Init_TargetTrajectory_is_stop(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_is_estop
{
public:
  explicit Init_TargetTrajectory_is_estop(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_estop_reason is_estop(::deva_planning_msgs2::msg::TargetTrajectory::_is_estop_type arg)
  {
    msg_.is_estop = std::move(arg);
    return Init_TargetTrajectory_estop_reason(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_gear
{
public:
  explicit Init_TargetTrajectory_gear(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_is_estop gear(::deva_planning_msgs2::msg::TargetTrajectory::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_TargetTrajectory_is_estop(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_path_point
{
public:
  explicit Init_TargetTrajectory_path_point(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_gear path_point(::deva_planning_msgs2::msg::TargetTrajectory::_path_point_type arg)
  {
    msg_.path_point = std::move(arg);
    return Init_TargetTrajectory_gear(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_trajectory_point
{
public:
  explicit Init_TargetTrajectory_trajectory_point(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_path_point trajectory_point(::deva_planning_msgs2::msg::TargetTrajectory::_trajectory_point_type arg)
  {
    msg_.trajectory_point = std::move(arg);
    return Init_TargetTrajectory_path_point(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_total_path_time
{
public:
  explicit Init_TargetTrajectory_total_path_time(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_trajectory_point total_path_time(::deva_planning_msgs2::msg::TargetTrajectory::_total_path_time_type arg)
  {
    msg_.total_path_time = std::move(arg);
    return Init_TargetTrajectory_trajectory_point(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_total_path_length
{
public:
  explicit Init_TargetTrajectory_total_path_length(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_total_path_time total_path_length(::deva_planning_msgs2::msg::TargetTrajectory::_total_path_length_type arg)
  {
    msg_.total_path_length = std::move(arg);
    return Init_TargetTrajectory_total_path_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_start_gnss_time
{
public:
  explicit Init_TargetTrajectory_start_gnss_time(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_total_path_length start_gnss_time(::deva_planning_msgs2::msg::TargetTrajectory::_start_gnss_time_type arg)
  {
    msg_.start_gnss_time = std::move(arg);
    return Init_TargetTrajectory_total_path_length(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_sensor_timestamp
{
public:
  explicit Init_TargetTrajectory_sensor_timestamp(::deva_planning_msgs2::msg::TargetTrajectory & msg)
  : msg_(msg)
  {}
  Init_TargetTrajectory_start_gnss_time sensor_timestamp(::deva_planning_msgs2::msg::TargetTrajectory::_sensor_timestamp_type arg)
  {
    msg_.sensor_timestamp = std::move(arg);
    return Init_TargetTrajectory_start_gnss_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

class Init_TargetTrajectory_header
{
public:
  Init_TargetTrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetTrajectory_sensor_timestamp header(::deva_planning_msgs2::msg::TargetTrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetTrajectory_sensor_timestamp(msg_);
  }

private:
  ::deva_planning_msgs2::msg::TargetTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::TargetTrajectory>()
{
  return deva_planning_msgs2::msg::builder::Init_TargetTrajectory_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__BUILDER_HPP_
