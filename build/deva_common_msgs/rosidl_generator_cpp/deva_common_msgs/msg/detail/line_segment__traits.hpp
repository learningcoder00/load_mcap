// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/LineSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/line_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LineSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LineSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LineSegment & msg, bool use_flow_style = false)
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
  const deva_common_msgs::msg::LineSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::LineSegment & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::LineSegment>()
{
  return "deva_common_msgs::msg::LineSegment";
}

template<>
inline const char * name<deva_common_msgs::msg::LineSegment>()
{
  return "deva_common_msgs/msg/LineSegment";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::LineSegment>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::LineSegment>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<deva_common_msgs::msg::LineSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE_SEGMENT__TRAITS_HPP_
