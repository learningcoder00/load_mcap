// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFCurveFunctionExtra & msg,
  std::ostream & out)
{
  out << "{";
  // member: poslgt
  {
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << ", ";
  }

  // member: poslat
  {
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << ", ";
  }

  // member: estimn
  {
    out << "estimn: ";
    to_flow_style_yaml(msg.estimn, out);
    out << ", ";
  }

  // member: extrapointtype
  {
    out << "extrapointtype: ";
    rosidl_generator_traits::value_to_yaml(msg.extrapointtype, out);
    out << ", ";
  }

  // member: lanemkrtype
  {
    out << "lanemkrtype: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemkrtype, out);
    out << ", ";
  }

  // member: confi
  {
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFCurveFunctionExtra & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poslgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << "\n";
  }

  // member: poslat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << "\n";
  }

  // member: estimn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimn:\n";
    to_block_style_yaml(msg.estimn, out, indentation + 2);
  }

  // member: extrapointtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extrapointtype: ";
    rosidl_generator_traits::value_to_yaml(msg.extrapointtype, out);
    out << "\n";
  }

  // member: lanemkrtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemkrtype: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemkrtype, out);
    out << "\n";
  }

  // member: confi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFCurveFunctionExtra & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFCurveFunctionExtra & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFCurveFunctionExtra & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFCurveFunctionExtra>()
{
  return "deva_aeb_msgs::msg::SFCurveFunctionExtra";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFCurveFunctionExtra>()
{
  return "deva_aeb_msgs/msg/SFCurveFunctionExtra";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFCurveFunctionExtra>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFLaneEstimn>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFCurveFunctionExtra>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFLaneEstimn>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFCurveFunctionExtra>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CURVE_FUNCTION_EXTRA__TRAITS_HPP_
