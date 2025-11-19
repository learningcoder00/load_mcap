// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
// Member 'pub_stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'frame_id'
#include "deva_common_msgs/msg/detail/string__traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Header & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: pub_stamp
  {
    out << "pub_stamp: ";
    to_flow_style_yaml(msg.pub_stamp, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    to_flow_style_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Header & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: pub_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pub_stamp:\n";
    to_block_style_yaml(msg.pub_stamp, out, indentation + 2);
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id:\n";
    to_block_style_yaml(msg.frame_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Header & msg, bool use_flow_style = false)
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

}  // namespace deva_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_common_msgs::msg::Header & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::Header & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::Header>()
{
  return "deva_common_msgs::msg::Header";
}

template<>
inline const char * name<deva_common_msgs::msg::Header>()
{
  return "deva_common_msgs/msg/Header";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::Header>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<deva_common_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::Header>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<deva_common_msgs::msg::String>::value> {};

template<>
struct is_message<deva_common_msgs::msg::Header>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__TRAITS_HPP_
