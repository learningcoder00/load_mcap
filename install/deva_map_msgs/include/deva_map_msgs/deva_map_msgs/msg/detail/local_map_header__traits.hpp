// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/local_map_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'send_localmap_header'
// Member 'received_preseptionmap_header'
// Member 'preseptionmap_header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalMapHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: send_localmap_header
  {
    out << "send_localmap_header: ";
    to_flow_style_yaml(msg.send_localmap_header, out);
    out << ", ";
  }

  // member: received_preseptionmap_header
  {
    out << "received_preseptionmap_header: ";
    to_flow_style_yaml(msg.received_preseptionmap_header, out);
    out << ", ";
  }

  // member: preseptionmap_header
  {
    out << "preseptionmap_header: ";
    to_flow_style_yaml(msg.preseptionmap_header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalMapHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: send_localmap_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_localmap_header:\n";
    to_block_style_yaml(msg.send_localmap_header, out, indentation + 2);
  }

  // member: received_preseptionmap_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "received_preseptionmap_header:\n";
    to_block_style_yaml(msg.received_preseptionmap_header, out, indentation + 2);
  }

  // member: preseptionmap_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preseptionmap_header:\n";
    to_block_style_yaml(msg.preseptionmap_header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalMapHeader & msg, bool use_flow_style = false)
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

}  // namespace deva_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_map_msgs::msg::LocalMapHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::LocalMapHeader & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::LocalMapHeader>()
{
  return "deva_map_msgs::msg::LocalMapHeader";
}

template<>
inline const char * name<deva_map_msgs::msg::LocalMapHeader>()
{
  return "deva_map_msgs/msg/LocalMapHeader";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::LocalMapHeader>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::LocalMapHeader>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_map_msgs::msg::LocalMapHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__TRAITS_HPP_
