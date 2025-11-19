// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/ControlValidLimit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/control_valid_limit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlValidLimit & msg,
  std::ostream & out)
{
  out << "{";
  // member: limit_valid
  {
    out << "limit_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_valid, out);
    out << ", ";
  }

  // member: upper_limit
  {
    out << "upper_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_limit, out);
    out << ", ";
  }

  // member: lower_limit
  {
    out << "lower_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlValidLimit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: limit_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_valid, out);
    out << "\n";
  }

  // member: upper_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_limit, out);
    out << "\n";
  }

  // member: lower_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlValidLimit & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::ControlValidLimit & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::ControlValidLimit & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::ControlValidLimit>()
{
  return "deva_control_msgs::msg::ControlValidLimit";
}

template<>
inline const char * name<deva_control_msgs::msg::ControlValidLimit>()
{
  return "deva_control_msgs/msg/ControlValidLimit";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::ControlValidLimit>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::ControlValidLimit>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_control_msgs::msg::ControlValidLimit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__TRAITS_HPP_
