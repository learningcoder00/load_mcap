// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_calibration_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachCalibrationResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: calibration_type
  {
    out << "calibration_type: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_type, out);
    out << ", ";
  }

  // member: senor_type
  {
    out << "senor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.senor_type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: res_content
  {
    if (msg.res_content.size() == 0) {
      out << "res_content: []";
    } else {
      out << "res_content: [";
      size_t pending_items = msg.res_content.size();
      for (auto item : msg.res_content) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachCalibrationResult & msg,
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

  // member: calibration_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_type: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_type, out);
    out << "\n";
  }

  // member: senor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "senor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.senor_type, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: res_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.res_content.size() == 0) {
      out << "res_content: []\n";
    } else {
      out << "res_content:\n";
      for (auto item : msg.res_content) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachCalibrationResult & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachCalibrationResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachCalibrationResult & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachCalibrationResult>()
{
  return "deva_function_msgs::msg::MachCalibrationResult";
}

template<>
inline const char * name<deva_function_msgs::msg::MachCalibrationResult>()
{
  return "deva_function_msgs/msg/MachCalibrationResult";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachCalibrationResult>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachCalibrationResult>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachCalibrationResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__TRAITS_HPP_
