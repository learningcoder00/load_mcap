// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__TRAITS_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fault_diagnosis/msg/detail/diag_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace fault_diagnosis
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fault_name
  {
    out << "fault_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagState & msg,
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

  // member: fault_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_name, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagState & msg, bool use_flow_style = false)
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

}  // namespace fault_diagnosis

namespace rosidl_generator_traits
{

[[deprecated("use fault_diagnosis::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fault_diagnosis::msg::DiagState & msg,
  std::ostream & out, size_t indentation = 0)
{
  fault_diagnosis::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fault_diagnosis::msg::to_yaml() instead")]]
inline std::string to_yaml(const fault_diagnosis::msg::DiagState & msg)
{
  return fault_diagnosis::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fault_diagnosis::msg::DiagState>()
{
  return "fault_diagnosis::msg::DiagState";
}

template<>
inline const char * name<fault_diagnosis::msg::DiagState>()
{
  return "fault_diagnosis/msg/DiagState";
}

template<>
struct has_fixed_size<fault_diagnosis::msg::DiagState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fault_diagnosis::msg::DiagState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fault_diagnosis::msg::DiagState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__TRAITS_HPP_
