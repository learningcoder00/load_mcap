// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/ForkPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/fork_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fork_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ForkPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: fork_property_type
  {
    out << "fork_property_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_property_type, out);
    out << ", ";
  }

  // member: fork_id
  {
    out << "fork_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_id, out);
    out << ", ";
  }

  // member: lane_ids
  {
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []";
    } else {
      out << "lane_ids: [";
      size_t pending_items = msg.lane_ids.size();
      for (auto item : msg.lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fork_point
  {
    out << "fork_point: ";
    to_flow_style_yaml(msg.fork_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForkPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fork_property_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fork_property_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_property_type, out);
    out << "\n";
  }

  // member: fork_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fork_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_id, out);
    out << "\n";
  }

  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fork_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fork_point:\n";
    to_block_style_yaml(msg.fork_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForkPoint & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::ForkPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::ForkPoint & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::ForkPoint>()
{
  return "deva_perception_msgs::msg::ForkPoint";
}

template<>
inline const char * name<deva_perception_msgs::msg::ForkPoint>()
{
  return "deva_perception_msgs/msg/ForkPoint";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::ForkPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::ForkPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::ForkPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__TRAITS_HPP_
