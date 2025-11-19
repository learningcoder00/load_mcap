// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__TRAITS_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_localization_msgs/msg/detail/localization_estimate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
// Member 'global_pose'
#include "deva_localization_msgs/msg/detail/pose__traits.hpp"

namespace deva_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalizationEstimate & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: global_pose
  {
    out << "global_pose: ";
    to_flow_style_yaml(msg.global_pose, out);
    out << ", ";
  }

  // member: measurement_time
  {
    out << "measurement_time: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time, out);
    out << ", ";
  }

  // member: state_message
  {
    out << "state_message: ";
    rosidl_generator_traits::value_to_yaml(msg.state_message, out);
    out << ", ";
  }

  // member: global_pose_state_message
  {
    out << "global_pose_state_message: ";
    rosidl_generator_traits::value_to_yaml(msg.global_pose_state_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalizationEstimate & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: global_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_pose:\n";
    to_block_style_yaml(msg.global_pose, out, indentation + 2);
  }

  // member: measurement_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_time: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time, out);
    out << "\n";
  }

  // member: state_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_message: ";
    rosidl_generator_traits::value_to_yaml(msg.state_message, out);
    out << "\n";
  }

  // member: global_pose_state_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_pose_state_message: ";
    rosidl_generator_traits::value_to_yaml(msg.global_pose_state_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalizationEstimate & msg, bool use_flow_style = false)
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
  const deva_localization_msgs::msg::LocalizationEstimate & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_localization_msgs::msg::LocalizationEstimate & msg)
{
  return deva_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_localization_msgs::msg::LocalizationEstimate>()
{
  return "deva_localization_msgs::msg::LocalizationEstimate";
}

template<>
inline const char * name<deva_localization_msgs::msg::LocalizationEstimate>()
{
  return "deva_localization_msgs/msg/LocalizationEstimate";
}

template<>
struct has_fixed_size<deva_localization_msgs::msg::LocalizationEstimate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_localization_msgs::msg::LocalizationEstimate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_localization_msgs::msg::LocalizationEstimate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__TRAITS_HPP_
