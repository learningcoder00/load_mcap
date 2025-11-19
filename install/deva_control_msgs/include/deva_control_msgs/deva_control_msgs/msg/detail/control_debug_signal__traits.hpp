// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/control_debug_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlDebugSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: c0_val
  {
    out << "c0_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c0_val, out);
    out << ", ";
  }

  // member: c1_val
  {
    out << "c1_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c1_val, out);
    out << ", ";
  }

  // member: c2_val
  {
    out << "c2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c2_val, out);
    out << ", ";
  }

  // member: station_error
  {
    out << "station_error: ";
    rosidl_generator_traits::value_to_yaml(msg.station_error, out);
    out << ", ";
  }

  // member: speed_offset
  {
    out << "speed_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_offset, out);
    out << ", ";
  }

  // member: speed_target
  {
    out << "speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_target, out);
    out << ", ";
  }

  // member: speed_current
  {
    out << "speed_current: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_current, out);
    out << ", ";
  }

  // member: speed_error
  {
    out << "speed_error: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_error, out);
    out << ", ";
  }

  // member: preview_steer_error
  {
    out << "preview_steer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_steer_error, out);
    out << ", ";
  }

  // member: preview_speed_target
  {
    out << "preview_speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_speed_target, out);
    out << ", ";
  }

  // member: distance_error
  {
    out << "distance_error: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_error, out);
    out << ", ";
  }

  // member: angle_error
  {
    out << "angle_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_error, out);
    out << ", ";
  }

  // member: debug_signal_4
  {
    out << "debug_signal_4: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_4, out);
    out << ", ";
  }

  // member: debug_signal_5
  {
    out << "debug_signal_5: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_5, out);
    out << ", ";
  }

  // member: debug_signal_6
  {
    out << "debug_signal_6: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_6, out);
    out << ", ";
  }

  // member: debug_signal_7
  {
    out << "debug_signal_7: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_7, out);
    out << ", ";
  }

  // member: debug_signal_8
  {
    out << "debug_signal_8: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_8, out);
    out << ", ";
  }

  // member: debug_signal_9
  {
    out << "debug_signal_9: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_9, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlDebugSignal & msg,
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

  // member: c0_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c0_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c0_val, out);
    out << "\n";
  }

  // member: c1_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c1_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c1_val, out);
    out << "\n";
  }

  // member: c2_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c2_val: ";
    rosidl_generator_traits::value_to_yaml(msg.c2_val, out);
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

  // member: speed_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_offset, out);
    out << "\n";
  }

  // member: speed_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_target, out);
    out << "\n";
  }

  // member: speed_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_current: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_current, out);
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

  // member: preview_steer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_steer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_steer_error, out);
    out << "\n";
  }

  // member: preview_speed_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preview_speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.preview_speed_target, out);
    out << "\n";
  }

  // member: distance_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_error: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_error, out);
    out << "\n";
  }

  // member: angle_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_error, out);
    out << "\n";
  }

  // member: debug_signal_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_4: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_4, out);
    out << "\n";
  }

  // member: debug_signal_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_5: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_5, out);
    out << "\n";
  }

  // member: debug_signal_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_6: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_6, out);
    out << "\n";
  }

  // member: debug_signal_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_7: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_7, out);
    out << "\n";
  }

  // member: debug_signal_8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_8: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_8, out);
    out << "\n";
  }

  // member: debug_signal_9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_signal_9: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_signal_9, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlDebugSignal & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::ControlDebugSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::ControlDebugSignal & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::ControlDebugSignal>()
{
  return "deva_control_msgs::msg::ControlDebugSignal";
}

template<>
inline const char * name<deva_control_msgs::msg::ControlDebugSignal>()
{
  return "deva_control_msgs/msg/ControlDebugSignal";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::ControlDebugSignal>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::ControlDebugSignal>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_control_msgs::msg::ControlDebugSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__TRAITS_HPP_
