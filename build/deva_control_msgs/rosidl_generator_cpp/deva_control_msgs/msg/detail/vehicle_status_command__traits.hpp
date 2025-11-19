// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_status_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatusCommand & msg,
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

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: use_gear_cmd
  {
    out << "use_gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gear_cmd, out);
    out << ", ";
  }

  // member: gear_en
  {
    out << "gear_en: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_en, out);
    out << ", ";
  }

  // member: gear_cmd_val
  {
    out << "gear_cmd_val: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd_val, out);
    out << ", ";
  }

  // member: use_epb_cmd
  {
    out << "use_epb_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_epb_cmd, out);
    out << ", ";
  }

  // member: epb_en
  {
    out << "epb_en: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_en, out);
    out << ", ";
  }

  // member: epb_cmd_val
  {
    out << "epb_cmd_val: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_cmd_val, out);
    out << ", ";
  }

  // member: use_turn_light_cmd
  {
    out << "use_turn_light_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_turn_light_cmd, out);
    out << ", ";
  }

  // member: turn_light_en
  {
    out << "turn_light_en: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light_en, out);
    out << ", ";
  }

  // member: turn_light_cmd
  {
    out << "turn_light_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light_cmd, out);
    out << ", ";
  }

  // member: use_wiper_cmd
  {
    out << "use_wiper_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_wiper_cmd, out);
    out << ", ";
  }

  // member: wiper_en
  {
    out << "wiper_en: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_en, out);
    out << ", ";
  }

  // member: wiper_cmd
  {
    out << "wiper_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_cmd, out);
    out << ", ";
  }

  // member: use_bywire_enable_cmd
  {
    out << "use_bywire_enable_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_bywire_enable_cmd, out);
    out << ", ";
  }

  // member: lateral_en
  {
    out << "lateral_en: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_en, out);
    out << ", ";
  }

  // member: longitudinal_en
  {
    out << "longitudinal_en: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_en, out);
    out << ", ";
  }

  // member: use_park_cmd
  {
    out << "use_park_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_park_cmd, out);
    out << ", ";
  }

  // member: park_action
  {
    out << "park_action: ";
    rosidl_generator_traits::value_to_yaml(msg.park_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatusCommand & msg,
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

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: use_gear_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_gear_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gear_cmd, out);
    out << "\n";
  }

  // member: gear_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_en: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_en, out);
    out << "\n";
  }

  // member: gear_cmd_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_cmd_val: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_cmd_val, out);
    out << "\n";
  }

  // member: use_epb_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_epb_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_epb_cmd, out);
    out << "\n";
  }

  // member: epb_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_en: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_en, out);
    out << "\n";
  }

  // member: epb_cmd_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epb_cmd_val: ";
    rosidl_generator_traits::value_to_yaml(msg.epb_cmd_val, out);
    out << "\n";
  }

  // member: use_turn_light_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_turn_light_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_turn_light_cmd, out);
    out << "\n";
  }

  // member: turn_light_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_light_en: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light_en, out);
    out << "\n";
  }

  // member: turn_light_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_light_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light_cmd, out);
    out << "\n";
  }

  // member: use_wiper_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_wiper_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_wiper_cmd, out);
    out << "\n";
  }

  // member: wiper_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper_en: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_en, out);
    out << "\n";
  }

  // member: wiper_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.wiper_cmd, out);
    out << "\n";
  }

  // member: use_bywire_enable_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_bywire_enable_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_bywire_enable_cmd, out);
    out << "\n";
  }

  // member: lateral_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_en: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_en, out);
    out << "\n";
  }

  // member: longitudinal_en
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_en: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_en, out);
    out << "\n";
  }

  // member: use_park_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_park_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.use_park_cmd, out);
    out << "\n";
  }

  // member: park_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_action: ";
    rosidl_generator_traits::value_to_yaml(msg.park_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatusCommand & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::VehicleStatusCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleStatusCommand & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleStatusCommand>()
{
  return "deva_control_msgs::msg::VehicleStatusCommand";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleStatusCommand>()
{
  return "deva_control_msgs/msg/VehicleStatusCommand";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleStatusCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleStatusCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleStatusCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_STATUS_COMMAND__TRAITS_HPP_
