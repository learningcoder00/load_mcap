// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/CalibrationCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/calibration_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CalibrationCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: calibration_action
  {
    out << "calibration_action: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_action, out);
    out << ", ";
  }

  // member: calibration_type
  {
    out << "calibration_type: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalibrationCtrl & msg,
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

  // member: calibration_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_action: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_action, out);
    out << "\n";
  }

  // member: calibration_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_type: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalibrationCtrl & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::CalibrationCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::CalibrationCtrl & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::CalibrationCtrl>()
{
  return "deva_function_msgs::msg::CalibrationCtrl";
}

template<>
inline const char * name<deva_function_msgs::msg::CalibrationCtrl>()
{
  return "deva_function_msgs/msg/CalibrationCtrl";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::CalibrationCtrl>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::CalibrationCtrl>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::CalibrationCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__TRAITS_HPP_
