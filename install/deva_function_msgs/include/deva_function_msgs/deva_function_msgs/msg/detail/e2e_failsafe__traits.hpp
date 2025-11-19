// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/E2eFailsafe.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/e2e_failsafe__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eFailsafe & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eFailsafe & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eFailsafe & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::E2eFailsafe & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::E2eFailsafe & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::E2eFailsafe>()
{
  return "deva_function_msgs::msg::E2eFailsafe";
}

template<>
inline const char * name<deva_function_msgs::msg::E2eFailsafe>()
{
  return "deva_function_msgs/msg/E2eFailsafe";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::E2eFailsafe>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::E2eFailsafe>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::E2eFailsafe>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE__TRAITS_HPP_
