// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FaultRequest.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fault_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'report_fault_status'
#include "deva_function_msgs/msg/detail/fault_status__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FaultRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: request_type
  {
    out << "request_type: ";
    rosidl_generator_traits::value_to_yaml(msg.request_type, out);
    out << ", ";
  }

  // member: report_fault_status
  {
    out << "report_fault_status: ";
    to_flow_style_yaml(msg.report_fault_status, out);
    out << ", ";
  }

  // member: response_status
  {
    out << "response_status: ";
    rosidl_generator_traits::value_to_yaml(msg.response_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FaultRequest & msg,
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

  // member: request_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_type: ";
    rosidl_generator_traits::value_to_yaml(msg.request_type, out);
    out << "\n";
  }

  // member: report_fault_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "report_fault_status:\n";
    to_block_style_yaml(msg.report_fault_status, out, indentation + 2);
  }

  // member: response_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_status: ";
    rosidl_generator_traits::value_to_yaml(msg.response_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FaultRequest & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FaultRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FaultRequest & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FaultRequest>()
{
  return "deva_function_msgs::msg::FaultRequest";
}

template<>
inline const char * name<deva_function_msgs::msg::FaultRequest>()
{
  return "deva_function_msgs/msg/FaultRequest";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FaultRequest>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<deva_function_msgs::msg::FaultStatus>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FaultRequest>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<deva_function_msgs::msg::FaultStatus>::value> {};

template<>
struct is_message<deva_function_msgs::msg::FaultRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__TRAITS_HPP_
