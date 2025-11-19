// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/control_monitor_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'openloop_trajectory'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlMonitorMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: in_auto_drive
  {
    out << "in_auto_drive: ";
    rosidl_generator_traits::value_to_yaml(msg.in_auto_drive, out);
    out << ", ";
  }

  // member: chs_yaw_rate
  {
    out << "chs_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_yaw_rate, out);
    out << ", ";
  }

  // member: chs_speed
  {
    out << "chs_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_speed, out);
    out << ", ";
  }

  // member: chs_steer
  {
    out << "chs_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_steer, out);
    out << ", ";
  }

  // member: chs_longit_acc
  {
    out << "chs_longit_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_longit_acc, out);
    out << ", ";
  }

  // member: chs_longit_torque
  {
    out << "chs_longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_longit_torque, out);
    out << ", ";
  }

  // member: chs_gear
  {
    out << "chs_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_gear, out);
    out << ", ";
  }

  // member: loc_x
  {
    out << "loc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_x, out);
    out << ", ";
  }

  // member: loc_y
  {
    out << "loc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_y, out);
    out << ", ";
  }

  // member: loc_z
  {
    out << "loc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_z, out);
    out << ", ";
  }

  // member: loc_speed
  {
    out << "loc_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_speed, out);
    out << ", ";
  }

  // member: loc_acc
  {
    out << "loc_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_acc, out);
    out << ", ";
  }

  // member: loc_heading
  {
    out << "loc_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_heading, out);
    out << ", ";
  }

  // member: loc_pitch
  {
    out << "loc_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_pitch, out);
    out << ", ";
  }

  // member: preview_path_x
  {
    out << "preview_path_x: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_x, out);
    out << ", ";
  }

  // member: preview_path_y
  {
    out << "preview_path_y: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_y, out);
    out << ", ";
  }

  // member: preview_path_theta
  {
    out << "preview_path_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_theta, out);
    out << ", ";
  }

  // member: matched_path_x
  {
    out << "matched_path_x: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_x, out);
    out << ", ";
  }

  // member: matched_path_y
  {
    out << "matched_path_y: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_y, out);
    out << ", ";
  }

  // member: matched_path_theta
  {
    out << "matched_path_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_theta, out);
    out << ", ";
  }

  // member: matched_path_kappa
  {
    out << "matched_path_kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_kappa, out);
    out << ", ";
  }

  // member: matched_path_s
  {
    out << "matched_path_s: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_s, out);
    out << ", ";
  }

  // member: matched_path_v
  {
    out << "matched_path_v: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_v, out);
    out << ", ";
  }

  // member: matched_path_a
  {
    out << "matched_path_a: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_a, out);
    out << ", ";
  }

  // member: current_station
  {
    out << "current_station: ";
    rosidl_generator_traits::value_to_yaml(msg.current_station, out);
    out << ", ";
  }

  // member: station_ref
  {
    out << "station_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.station_ref, out);
    out << ", ";
  }

  // member: station_error
  {
    out << "station_error: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error, out);
    out << ", ";
  }

  // member: current_speed
  {
    out << "current_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.current_speed, out);
    out << ", ";
  }

  // member: speed_ref
  {
    out << "speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ref, out);
    out << ", ";
  }

  // member: preview_speed_ref
  {
    out << "preview_speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_speed_ref, out);
    out << ", ";
  }

  // member: speed_error
  {
    out << "speed_error: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error, out);
    out << ", ";
  }

  // member: acc_ref
  {
    out << "acc_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_ref, out);
    out << ", ";
  }

  // member: preview_acc_ref
  {
    out << "preview_acc_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_acc_ref, out);
    out << ", ";
  }

  // member: actual_acc
  {
    out << "actual_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_acc, out);
    out << ", ";
  }

  // member: lat_d
  {
    out << "lat_d: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_d, out);
    out << ", ";
  }

  // member: lat_d_rate
  {
    out << "lat_d_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_d_rate, out);
    out << ", ";
  }

  // member: heading_d_rate
  {
    out << "heading_d_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_d_rate, out);
    out << ", ";
  }

  // member: heading_d
  {
    out << "heading_d: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_d, out);
    out << ", ";
  }

  // member: pre_lat_d
  {
    out << "pre_lat_d: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_lat_d, out);
    out << ", ";
  }

  // member: pre_lat_theta
  {
    out << "pre_lat_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_lat_theta, out);
    out << ", ";
  }

  // member: cmd_steer
  {
    out << "cmd_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_steer, out);
    out << ", ";
  }

  // member: cmd_acc
  {
    out << "cmd_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_acc, out);
    out << ", ";
  }

  // member: control_computation_time
  {
    out << "control_computation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.control_computation_time, out);
    out << ", ";
  }

  // member: loc_header_time
  {
    out << "loc_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_header_time, out);
    out << ", ";
  }

  // member: chas_header_time
  {
    out << "chas_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.chas_header_time, out);
    out << ", ";
  }

  // member: planning_header_time
  {
    out << "planning_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_header_time, out);
    out << ", ";
  }

  // member: openloop_trajectory
  {
    out << "openloop_trajectory: ";
    to_flow_style_yaml(msg.openloop_trajectory, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlMonitorMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: in_auto_drive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_auto_drive: ";
    rosidl_generator_traits::value_to_yaml(msg.in_auto_drive, out);
    out << "\n";
  }

  // member: chs_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_yaw_rate, out);
    out << "\n";
  }

  // member: chs_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_speed, out);
    out << "\n";
  }

  // member: chs_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_steer, out);
    out << "\n";
  }

  // member: chs_longit_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_longit_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_longit_acc, out);
    out << "\n";
  }

  // member: chs_longit_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_longit_torque, out);
    out << "\n";
  }

  // member: chs_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chs_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.chs_gear, out);
    out << "\n";
  }

  // member: loc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_x, out);
    out << "\n";
  }

  // member: loc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_y, out);
    out << "\n";
  }

  // member: loc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_z, out);
    out << "\n";
  }

  // member: loc_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_speed, out);
    out << "\n";
  }

  // member: loc_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_acc, out);
    out << "\n";
  }

  // member: loc_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_heading, out);
    out << "\n";
  }

  // member: loc_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_pitch, out);
    out << "\n";
  }

  // member: preview_path_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_path_x: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_x, out);
    out << "\n";
  }

  // member: preview_path_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_path_y: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_y, out);
    out << "\n";
  }

  // member: preview_path_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_path_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_path_theta, out);
    out << "\n";
  }

  // member: matched_path_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_x: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_x, out);
    out << "\n";
  }

  // member: matched_path_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_y: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_y, out);
    out << "\n";
  }

  // member: matched_path_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_theta, out);
    out << "\n";
  }

  // member: matched_path_kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_kappa, out);
    out << "\n";
  }

  // member: matched_path_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_s: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_s, out);
    out << "\n";
  }

  // member: matched_path_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_v: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_v, out);
    out << "\n";
  }

  // member: matched_path_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_path_a: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_path_a, out);
    out << "\n";
  }

  // member: current_station
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_station: ";
    rosidl_generator_traits::value_to_yaml(msg.current_station, out);
    out << "\n";
  }

  // member: station_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.station_ref, out);
    out << "\n";
  }

  // member: station_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station_error: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error, out);
    out << "\n";
  }

  // member: current_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.current_speed, out);
    out << "\n";
  }

  // member: speed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ref, out);
    out << "\n";
  }

  // member: preview_speed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_speed_ref, out);
    out << "\n";
  }

  // member: speed_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_error: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error, out);
    out << "\n";
  }

  // member: acc_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_ref, out);
    out << "\n";
  }

  // member: preview_acc_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_acc_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_acc_ref, out);
    out << "\n";
  }

  // member: actual_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_acc, out);
    out << "\n";
  }

  // member: lat_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_d: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_d, out);
    out << "\n";
  }

  // member: lat_d_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_d_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_d_rate, out);
    out << "\n";
  }

  // member: heading_d_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_d_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_d_rate, out);
    out << "\n";
  }

  // member: heading_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_d: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_d, out);
    out << "\n";
  }

  // member: pre_lat_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_lat_d: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_lat_d, out);
    out << "\n";
  }

  // member: pre_lat_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_lat_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_lat_theta, out);
    out << "\n";
  }

  // member: cmd_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_steer, out);
    out << "\n";
  }

  // member: cmd_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_acc, out);
    out << "\n";
  }

  // member: control_computation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_computation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.control_computation_time, out);
    out << "\n";
  }

  // member: loc_header_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_header_time, out);
    out << "\n";
  }

  // member: chas_header_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chas_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.chas_header_time, out);
    out << "\n";
  }

  // member: planning_header_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_header_time: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_header_time, out);
    out << "\n";
  }

  // member: openloop_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "openloop_trajectory:\n";
    to_block_style_yaml(msg.openloop_trajectory, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlMonitorMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_control_msgs::msg::ControlMonitorMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::ControlMonitorMsg & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::ControlMonitorMsg>()
{
  return "deva_control_msgs::msg::ControlMonitorMsg";
}

template<>
inline const char * name<deva_control_msgs::msg::ControlMonitorMsg>()
{
  return "deva_control_msgs/msg/ControlMonitorMsg";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::ControlMonitorMsg>
  : std::integral_constant<bool, has_fixed_size<deva_planning_msgs2::msg::PlanningTrajectory>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::ControlMonitorMsg>
  : std::integral_constant<bool, has_bounded_size<deva_planning_msgs2::msg::PlanningTrajectory>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_control_msgs::msg::ControlMonitorMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__TRAITS_HPP_
