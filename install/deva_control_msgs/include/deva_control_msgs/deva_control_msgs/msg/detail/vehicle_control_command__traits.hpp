// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'steer_angle_rate_limit'
// Member 'steer_tq_limit'
// Member 'longit_tq_limit'
// Member 'longit_jerk_limit'
#include "deva_control_msgs/msg/detail/control_valid_limit__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << ", ";
  }

  // member: late_mode
  {
    out << "late_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.late_mode, out);
    out << ", ";
  }

  // member: eps_torque
  {
    out << "eps_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.eps_torque, out);
    out << ", ";
  }

  // member: front_wheel_target
  {
    out << "front_wheel_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_target, out);
    out << ", ";
  }

  // member: steering_target
  {
    out << "steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_target, out);
    out << ", ";
  }

  // member: long_mode
  {
    out << "long_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.long_mode, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: longit_torque
  {
    out << "longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque, out);
    out << ", ";
  }

  // member: target_distance
  {
    out << "target_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: limit_command_enable
  {
    out << "limit_command_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_command_enable, out);
    out << ", ";
  }

  // member: steer_angle_rate_limit
  {
    out << "steer_angle_rate_limit: ";
    to_flow_style_yaml(msg.steer_angle_rate_limit, out);
    out << ", ";
  }

  // member: steer_tq_limit
  {
    out << "steer_tq_limit: ";
    to_flow_style_yaml(msg.steer_tq_limit, out);
    out << ", ";
  }

  // member: longit_tq_limit
  {
    out << "longit_tq_limit: ";
    to_flow_style_yaml(msg.longit_tq_limit, out);
    out << ", ";
  }

  // member: longit_jerk_limit
  {
    out << "longit_jerk_limit: ";
    to_flow_style_yaml(msg.longit_jerk_limit, out);
    out << ", ";
  }

  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: control_ready_false_reason
  {
    out << "control_ready_false_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.control_ready_false_reason, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleControlCommand & msg,
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

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: late_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "late_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.late_mode, out);
    out << "\n";
  }

  // member: eps_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eps_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.eps_torque, out);
    out << "\n";
  }

  // member: front_wheel_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wheel_target: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_target, out);
    out << "\n";
  }

  // member: steering_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_target: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_target, out);
    out << "\n";
  }

  // member: long_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.long_mode, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: longit_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.longit_torque, out);
    out << "\n";
  }

  // member: target_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.target_distance, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: limit_command_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_command_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_command_enable, out);
    out << "\n";
  }

  // member: steer_angle_rate_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_angle_rate_limit:\n";
    to_block_style_yaml(msg.steer_angle_rate_limit, out, indentation + 2);
  }

  // member: steer_tq_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_tq_limit:\n";
    to_block_style_yaml(msg.steer_tq_limit, out, indentation + 2);
  }

  // member: longit_tq_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_tq_limit:\n";
    to_block_style_yaml(msg.longit_tq_limit, out, indentation + 2);
  }

  // member: longit_jerk_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longit_jerk_limit:\n";
    to_block_style_yaml(msg.longit_jerk_limit, out, indentation + 2);
  }

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: control_ready_false_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_ready_false_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.control_ready_false_reason, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleControlCommand & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::VehicleControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleControlCommand & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleControlCommand>()
{
  return "deva_control_msgs::msg::VehicleControlCommand";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleControlCommand>()
{
  return "deva_control_msgs/msg/VehicleControlCommand";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleControlCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_CONTROL_COMMAND__TRAITS_HPP_
