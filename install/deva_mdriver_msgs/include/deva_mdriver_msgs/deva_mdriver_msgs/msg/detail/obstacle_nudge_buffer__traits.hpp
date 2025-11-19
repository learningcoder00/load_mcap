// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/ObstacleNudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleNudgeBuffer & msg,
  std::ostream & out)
{
  out << "{";
  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleNudgeBuffer & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleNudgeBuffer & msg, bool use_flow_style = false)
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
  const deva_mdriver_msgs::msg::ObstacleNudgeBuffer & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::ObstacleNudgeBuffer & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>()
{
  return "deva_mdriver_msgs::msg::ObstacleNudgeBuffer";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>()
{
  return "deva_mdriver_msgs/msg/ObstacleNudgeBuffer";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__TRAITS_HPP_
