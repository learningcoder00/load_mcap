// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/PathDescriptionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/path_description_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathDescriptionInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_type
  {
    out << "path_type: ";
    rosidl_generator_traits::value_to_yaml(msg.path_type, out);
    out << ", ";
  }

  // member: flag1
  {
    out << "flag1: ";
    rosidl_generator_traits::value_to_yaml(msg.flag1, out);
    out << ", ";
  }

  // member: flag2
  {
    out << "flag2: ";
    rosidl_generator_traits::value_to_yaml(msg.flag2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathDescriptionInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_type: ";
    rosidl_generator_traits::value_to_yaml(msg.path_type, out);
    out << "\n";
  }

  // member: flag1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag1: ";
    rosidl_generator_traits::value_to_yaml(msg.flag1, out);
    out << "\n";
  }

  // member: flag2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag2: ";
    rosidl_generator_traits::value_to_yaml(msg.flag2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathDescriptionInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::PathDescriptionInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::PathDescriptionInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::PathDescriptionInfoProto>()
{
  return "deva_navi_msgs::msg::PathDescriptionInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::PathDescriptionInfoProto>()
{
  return "deva_navi_msgs/msg/PathDescriptionInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::PathDescriptionInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::PathDescriptionInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_navi_msgs::msg::PathDescriptionInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__TRAITS_HPP_
