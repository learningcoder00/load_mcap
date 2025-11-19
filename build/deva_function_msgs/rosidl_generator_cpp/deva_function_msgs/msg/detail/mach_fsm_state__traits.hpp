// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachFsmState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_fsm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachFsmState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acc_state
  {
    out << "acc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_state, out);
    out << ", ";
  }

  // member: icc_state
  {
    out << "icc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.icc_state, out);
    out << ", ";
  }

  // member: noa_state
  {
    out << "noa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.noa_state, out);
    out << ", ";
  }

  // member: d2d_state
  {
    out << "d2d_state: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_state, out);
    out << ", ";
  }

  // member: aes_state
  {
    out << "aes_state: ";
    rosidl_generator_traits::value_to_yaml(msg.aes_state, out);
    out << ", ";
  }

  // member: magic_carpet_state
  {
    out << "magic_carpet_state: ";
    rosidl_generator_traits::value_to_yaml(msg.magic_carpet_state, out);
    out << ", ";
  }

  // member: calibration_state
  {
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachFsmState & msg,
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

  // member: acc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_state, out);
    out << "\n";
  }

  // member: icc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.icc_state, out);
    out << "\n";
  }

  // member: noa_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.noa_state, out);
    out << "\n";
  }

  // member: d2d_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d2d_state: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_state, out);
    out << "\n";
  }

  // member: aes_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aes_state: ";
    rosidl_generator_traits::value_to_yaml(msg.aes_state, out);
    out << "\n";
  }

  // member: magic_carpet_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magic_carpet_state: ";
    rosidl_generator_traits::value_to_yaml(msg.magic_carpet_state, out);
    out << "\n";
  }

  // member: calibration_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachFsmState & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachFsmState & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachFsmState & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachFsmState>()
{
  return "deva_function_msgs::msg::MachFsmState";
}

template<>
inline const char * name<deva_function_msgs::msg::MachFsmState>()
{
  return "deva_function_msgs/msg/MachFsmState";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachFsmState>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachFsmState>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachFsmState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__TRAITS_HPP_
