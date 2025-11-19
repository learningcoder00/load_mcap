// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/vehicle_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: high_beam
  {
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << ", ";
  }

  // member: low_beam
  {
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << ", ";
  }

  // member: horn
  {
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << ", ";
  }

  // member: emergency_light
  {
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
    out << ", ";
  }

  // member: turn_light
  {
    out << "turn_light: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleSignal & msg,
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

  // member: high_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.high_beam, out);
    out << "\n";
  }

  // member: low_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "low_beam: ";
    rosidl_generator_traits::value_to_yaml(msg.low_beam, out);
    out << "\n";
  }

  // member: horn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horn: ";
    rosidl_generator_traits::value_to_yaml(msg.horn, out);
    out << "\n";
  }

  // member: emergency_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_light: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_light, out);
    out << "\n";
  }

  // member: turn_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_light: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_light, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSignal & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::VehicleSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::VehicleSignal & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::VehicleSignal>()
{
  return "deva_planning_msgs::msg::VehicleSignal";
}

template<>
inline const char * name<deva_planning_msgs::msg::VehicleSignal>()
{
  return "deva_planning_msgs/msg/VehicleSignal";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::VehicleSignal>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::VehicleSignal>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_planning_msgs::msg::VehicleSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__TRAITS_HPP_
