// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/LaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneType & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_color
  {
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << ", ";
  }

  // member: s_start
  {
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << ", ";
  }

  // member: s_end
  {
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << "\n";
  }

  // member: s_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << "\n";
  }

  // member: s_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneType & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::LaneType & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::LaneType & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::LaneType>()
{
  return "deva_perception_msgs::msg::LaneType";
}

template<>
inline const char * name<deva_perception_msgs::msg::LaneType>()
{
  return "deva_perception_msgs/msg/LaneType";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::LaneType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::LaneType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::LaneType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__TRAITS_HPP_
