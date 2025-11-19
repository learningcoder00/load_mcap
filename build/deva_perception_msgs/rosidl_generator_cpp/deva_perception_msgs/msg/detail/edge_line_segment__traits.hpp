// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/EdgeLineSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/edge_line_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'segment'
#include "deva_common_msgs/msg/detail/line_segment__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeLineSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: segment
  {
    out << "segment: ";
    to_flow_style_yaml(msg.segment, out);
    out << ", ";
  }

  // member: is_blocked
  {
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: blocked_confidence
  {
    out << "blocked_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeLineSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: segment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment:\n";
    to_block_style_yaml(msg.segment, out, indentation + 2);
  }

  // member: is_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: blocked_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocked_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeLineSegment & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::EdgeLineSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::EdgeLineSegment & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::EdgeLineSegment>()
{
  return "deva_perception_msgs::msg::EdgeLineSegment";
}

template<>
inline const char * name<deva_perception_msgs::msg::EdgeLineSegment>()
{
  return "deva_perception_msgs/msg/EdgeLineSegment";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::EdgeLineSegment>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::LineSegment>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::EdgeLineSegment>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::LineSegment>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::EdgeLineSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__TRAITS_HPP_
