// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'show'
// Member 'projective'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ViaPointInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: segment_idx
  {
    out << "segment_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_idx, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: show
  {
    out << "show: ";
    to_flow_style_yaml(msg.show, out);
    out << ", ";
  }

  // member: projective
  {
    out << "projective: ";
    to_flow_style_yaml(msg.projective, out);
    out << ", ";
  }

  // member: poi_name
  {
    out << "poi_name: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ViaPointInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: segment_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_idx, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: show
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "show:\n";
    to_block_style_yaml(msg.show, out, indentation + 2);
  }

  // member: projective
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "projective:\n";
    to_block_style_yaml(msg.projective, out, indentation + 2);
  }

  // member: poi_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poi_name: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ViaPointInfoProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::ViaPointInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::ViaPointInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::ViaPointInfoProto>()
{
  return "deva_navi_msgs::msg::ViaPointInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::ViaPointInfoProto>()
{
  return "deva_navi_msgs/msg/ViaPointInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::ViaPointInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::ViaPointInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::ViaPointInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__TRAITS_HPP_
