// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_localization_msgs:msg/LocalizationRevise.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__TRAITS_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_localization_msgs/msg/detail/localization_revise__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace deva_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalizationRevise & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: state_message
  {
    out << "state_message: ";
    rosidl_generator_traits::value_to_yaml(msg.state_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalizationRevise & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalizationRevise & msg, bool use_flow_style = false)
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
  const deva_localization_msgs::msg::LocalizationRevise & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_localization_msgs::msg::LocalizationRevise & msg)
{
  return deva_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_localization_msgs::msg::LocalizationRevise>()
{
  return "deva_localization_msgs::msg::LocalizationRevise";
}

template<>
inline const char * name<deva_localization_msgs::msg::LocalizationRevise>()
{
  return "deva_localization_msgs/msg/LocalizationRevise";
}

template<>
struct has_fixed_size<deva_localization_msgs::msg::LocalizationRevise>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<deva_localization_msgs::msg::LocalizationRevise>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<deva_localization_msgs::msg::LocalizationRevise>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__TRAITS_HPP_
