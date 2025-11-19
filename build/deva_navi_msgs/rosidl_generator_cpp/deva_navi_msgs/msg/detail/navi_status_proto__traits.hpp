// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/NaviStatusProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/navi_status_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_navi_msgs/msg/detail/header_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviStatusProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NaviStatusProto & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NaviStatusProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::NaviStatusProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::NaviStatusProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::NaviStatusProto>()
{
  return "deva_navi_msgs::msg::NaviStatusProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::NaviStatusProto>()
{
  return "deva_navi_msgs/msg/NaviStatusProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::NaviStatusProto>
  : std::integral_constant<bool, has_fixed_size<deva_navi_msgs::msg::HeaderProto>::value> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::NaviStatusProto>
  : std::integral_constant<bool, has_bounded_size<deva_navi_msgs::msg::HeaderProto>::value> {};

template<>
struct is_message<deva_navi_msgs::msg::NaviStatusProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__TRAITS_HPP_
