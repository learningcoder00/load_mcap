// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_localization_msgs:msg/CorrectedImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__TRAITS_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_localization_msgs/msg/detail/corrected_imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'imu'
#include "deva_localization_msgs/msg/detail/pose__traits.hpp"

namespace deva_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CorrectedImu & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    to_flow_style_yaml(msg.imu, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CorrectedImu & msg,
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

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu:\n";
    to_block_style_yaml(msg.imu, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CorrectedImu & msg, bool use_flow_style = false)
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

}  // namespace deva_localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_localization_msgs::msg::CorrectedImu & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_localization_msgs::msg::CorrectedImu & msg)
{
  return deva_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_localization_msgs::msg::CorrectedImu>()
{
  return "deva_localization_msgs::msg::CorrectedImu";
}

template<>
inline const char * name<deva_localization_msgs::msg::CorrectedImu>()
{
  return "deva_localization_msgs/msg/CorrectedImu";
}

template<>
struct has_fixed_size<deva_localization_msgs::msg::CorrectedImu>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<deva_localization_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<deva_localization_msgs::msg::CorrectedImu>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<deva_localization_msgs::msg::Pose>::value> {};

template<>
struct is_message<deva_localization_msgs::msg::CorrectedImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__TRAITS_HPP_
