// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleEnableCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_enable_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleEnableCommand & msg,
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

  // member: enable_bywire
  {
    out << "enable_bywire: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_bywire, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleEnableCommand & msg,
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

  // member: enable_bywire
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_bywire: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_bywire, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleEnableCommand & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::VehicleEnableCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleEnableCommand & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleEnableCommand>()
{
  return "deva_control_msgs::msg::VehicleEnableCommand";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleEnableCommand>()
{
  return "deva_control_msgs/msg/VehicleEnableCommand";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleEnableCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleEnableCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleEnableCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_ENABLE_COMMAND__TRAITS_HPP_
