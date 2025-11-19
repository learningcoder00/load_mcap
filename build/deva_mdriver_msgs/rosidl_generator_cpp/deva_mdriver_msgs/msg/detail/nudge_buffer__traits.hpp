// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/nudge_buffer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle_nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NudgeBuffer & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle_nudge_buffer
  {
    if (msg.obstacle_nudge_buffer.size() == 0) {
      out << "obstacle_nudge_buffer: []";
    } else {
      out << "obstacle_nudge_buffer: [";
      size_t pending_items = msg.obstacle_nudge_buffer.size();
      for (auto item : msg.obstacle_nudge_buffer) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NudgeBuffer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle_nudge_buffer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_nudge_buffer.size() == 0) {
      out << "obstacle_nudge_buffer: []\n";
    } else {
      out << "obstacle_nudge_buffer:\n";
      for (auto item : msg.obstacle_nudge_buffer) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NudgeBuffer & msg, bool use_flow_style = false)
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

}  // namespace deva_mdriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_mdriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_mdriver_msgs::msg::NudgeBuffer & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::NudgeBuffer & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::NudgeBuffer>()
{
  return "deva_mdriver_msgs::msg::NudgeBuffer";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::NudgeBuffer>()
{
  return "deva_mdriver_msgs/msg/NudgeBuffer";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::NudgeBuffer>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::NudgeBuffer>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::NudgeBuffer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__TRAITS_HPP_
