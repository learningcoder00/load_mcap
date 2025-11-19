// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FaultStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fault_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaultStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_status
  {
    out << "error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.error_status, out);
    out << ", ";
  }

  // member: report_time
  {
    out << "report_time: ";
    rosidl_generator_traits::value_to_yaml(msg.report_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaultStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_status: ";
    rosidl_generator_traits::value_to_yaml(msg.error_status, out);
    out << "\n";
  }

  // member: report_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "report_time: ";
    rosidl_generator_traits::value_to_yaml(msg.report_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaultStatus & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FaultStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FaultStatus & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FaultStatus>()
{
  return "deva_function_msgs::msg::FaultStatus";
}

template<>
inline const char * name<deva_function_msgs::msg::FaultStatus>()
{
  return "deva_function_msgs/msg/FaultStatus";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FaultStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FaultStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::FaultStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__TRAITS_HPP_
