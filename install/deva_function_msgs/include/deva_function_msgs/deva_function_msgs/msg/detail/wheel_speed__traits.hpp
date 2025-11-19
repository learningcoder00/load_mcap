// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/wheel_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "deva_function_msgs/msg/detail/wheel_info__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: front_left
  {
    out << "front_left: ";
    to_flow_style_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    to_flow_style_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: rear_left
  {
    out << "rear_left: ";
    to_flow_style_yaml(msg.rear_left, out);
    out << ", ";
  }

  // member: rear_right
  {
    out << "rear_right: ";
    to_flow_style_yaml(msg.rear_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left:\n";
    to_block_style_yaml(msg.front_left, out, indentation + 2);
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right:\n";
    to_block_style_yaml(msg.front_right, out, indentation + 2);
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left:\n";
    to_block_style_yaml(msg.rear_left, out, indentation + 2);
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right:\n";
    to_block_style_yaml(msg.rear_right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelSpeed & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::WheelSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::WheelSpeed & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::WheelSpeed>()
{
  return "deva_function_msgs::msg::WheelSpeed";
}

template<>
inline const char * name<deva_function_msgs::msg::WheelSpeed>()
{
  return "deva_function_msgs/msg/WheelSpeed";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::WheelSpeed>
  : std::integral_constant<bool, has_fixed_size<deva_function_msgs::msg::WheelInfo>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::WheelSpeed>
  : std::integral_constant<bool, has_bounded_size<deva_function_msgs::msg::WheelInfo>::value> {};

template<>
struct is_message<deva_function_msgs::msg::WheelSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_
