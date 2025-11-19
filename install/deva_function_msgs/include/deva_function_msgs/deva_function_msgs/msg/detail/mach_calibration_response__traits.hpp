// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_calibration_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachCalibrationResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: calibration_response
  {
    out << "calibration_response: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_response, out);
    out << ", ";
  }

  // member: calibration_reason
  {
    out << "calibration_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_reason, out);
    out << ", ";
  }

  // member: calibration_type
  {
    out << "calibration_type: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_type, out);
    out << ", ";
  }

  // member: sensor_type
  {
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
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
  const MachCalibrationResponse & msg,
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

  // member: calibration_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_response: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_response, out);
    out << "\n";
  }

  // member: calibration_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_reason, out);
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

  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
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

inline std::string to_yaml(const MachCalibrationResponse & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachCalibrationResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachCalibrationResponse & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachCalibrationResponse>()
{
  return "deva_function_msgs::msg::MachCalibrationResponse";
}

template<>
inline const char * name<deva_function_msgs::msg::MachCalibrationResponse>()
{
  return "deva_function_msgs/msg/MachCalibrationResponse";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachCalibrationResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachCalibrationResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_function_msgs::msg::MachCalibrationResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__TRAITS_HPP_
