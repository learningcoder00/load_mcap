// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/e2e_failsafe_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'e2e_failsafe_array'
#include "deva_function_msgs/msg/detail/e2e_failsafe__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eFailsafeArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: e2e_failsafe_array
  {
    if (msg.e2e_failsafe_array.size() == 0) {
      out << "e2e_failsafe_array: []";
    } else {
      out << "e2e_failsafe_array: [";
      size_t pending_items = msg.e2e_failsafe_array.size();
      for (auto item : msg.e2e_failsafe_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sum_result
  {
    out << "sum_result: ";
    rosidl_generator_traits::value_to_yaml(msg.sum_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eFailsafeArray & msg,
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

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: e2e_failsafe_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.e2e_failsafe_array.size() == 0) {
      out << "e2e_failsafe_array: []\n";
    } else {
      out << "e2e_failsafe_array:\n";
      for (auto item : msg.e2e_failsafe_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sum_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum_result: ";
    rosidl_generator_traits::value_to_yaml(msg.sum_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eFailsafeArray & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::E2eFailsafeArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::E2eFailsafeArray & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::E2eFailsafeArray>()
{
  return "deva_function_msgs::msg::E2eFailsafeArray";
}

template<>
inline const char * name<deva_function_msgs::msg::E2eFailsafeArray>()
{
  return "deva_function_msgs/msg/E2eFailsafeArray";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::E2eFailsafeArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::E2eFailsafeArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_function_msgs::msg::E2eFailsafeArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__TRAITS_HPP_
