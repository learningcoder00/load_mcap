// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: perception_obstacle
  {
    out << "perception_obstacle: ";
    to_flow_style_yaml(msg.perception_obstacle, out);
    out << ", ";
  }

  // member: color_type
  {
    out << "color_type: ";
    rosidl_generator_traits::value_to_yaml(msg.color_type, out);
    out << ", ";
  }

  // member: shape_type
  {
    out << "shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type, out);
    out << ", ";
  }

  // member: blink
  {
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << ", ";
  }

  // member: remaining_time
  {
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
    out << ", ";
  }

  // member: bind_id
  {
    out << "bind_id: ";
    rosidl_generator_traits::value_to_yaml(msg.bind_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: perception_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_obstacle:\n";
    to_block_style_yaml(msg.perception_obstacle, out, indentation + 2);
  }

  // member: color_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_type: ";
    rosidl_generator_traits::value_to_yaml(msg.color_type, out);
    out << "\n";
  }

  // member: shape_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type, out);
    out << "\n";
  }

  // member: blink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << "\n";
  }

  // member: remaining_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_time, out);
    out << "\n";
  }

  // member: bind_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bind_id: ";
    rosidl_generator_traits::value_to_yaml(msg.bind_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLight & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::TrafficLight & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::TrafficLight>()
{
  return "deva_perception_msgs::msg::TrafficLight";
}

template<>
inline const char * name<deva_perception_msgs::msg::TrafficLight>()
{
  return "deva_perception_msgs/msg/TrafficLight";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
