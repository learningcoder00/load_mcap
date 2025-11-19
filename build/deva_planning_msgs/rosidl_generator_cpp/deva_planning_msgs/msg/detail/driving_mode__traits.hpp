// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/DrivingMode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__DRIVING_MODE__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__DRIVING_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/driving_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: driving_mode_select
  {
    out << "driving_mode_select: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode_select, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingMode & msg,
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

  // member: driving_mode_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driving_mode_select: ";
    rosidl_generator_traits::value_to_yaml(msg.driving_mode_select, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingMode & msg, bool use_flow_style = false)
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
  const deva_planning_msgs::msg::DrivingMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::DrivingMode & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::DrivingMode>()
{
  return "deva_planning_msgs::msg::DrivingMode";
}

template<>
inline const char * name<deva_planning_msgs::msg::DrivingMode>()
{
  return "deva_planning_msgs/msg/DrivingMode";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::DrivingMode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::DrivingMode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::DrivingMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__DRIVING_MODE__TRAITS_HPP_
