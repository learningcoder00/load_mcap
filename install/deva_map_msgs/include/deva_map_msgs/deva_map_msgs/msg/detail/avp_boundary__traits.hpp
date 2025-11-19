// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/avp_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: left_x
  {
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << ", ";
  }

  // member: left_y
  {
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << ", ";
  }

  // member: left_z
  {
    out << "left_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_z, out);
    out << ", ";
  }

  // member: left_region_width
  {
    out << "left_region_width: ";
    rosidl_generator_traits::value_to_yaml(msg.left_region_width, out);
    out << ", ";
  }

  // member: right_x
  {
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << ", ";
  }

  // member: right_y
  {
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << ", ";
  }

  // member: right_z
  {
    out << "right_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_z, out);
    out << ", ";
  }

  // member: right_region_width
  {
    out << "right_region_width: ";
    rosidl_generator_traits::value_to_yaml(msg.right_region_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: left_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << "\n";
  }

  // member: left_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << "\n";
  }

  // member: left_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_z, out);
    out << "\n";
  }

  // member: left_region_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_region_width: ";
    rosidl_generator_traits::value_to_yaml(msg.left_region_width, out);
    out << "\n";
  }

  // member: right_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << "\n";
  }

  // member: right_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << "\n";
  }

  // member: right_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_z, out);
    out << "\n";
  }

  // member: right_region_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_region_width: ";
    rosidl_generator_traits::value_to_yaml(msg.right_region_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpBoundary & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::AvpBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::AvpBoundary & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::AvpBoundary>()
{
  return "deva_map_msgs::msg::AvpBoundary";
}

template<>
inline const char * name<deva_map_msgs::msg::AvpBoundary>()
{
  return "deva_map_msgs/msg/AvpBoundary";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::AvpBoundary>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::AvpBoundary>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_map_msgs::msg::AvpBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__TRAITS_HPP_
