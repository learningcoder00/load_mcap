// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/obstacle_edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'world_coord_center_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleEdge & msg,
  std::ostream & out)
{
  out << "{";
  // member: world_coord_center_point
  {
    out << "world_coord_center_point: ";
    to_flow_style_yaml(msg.world_coord_center_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: world_coord_center_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_coord_center_point:\n";
    to_block_style_yaml(msg.world_coord_center_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleEdge & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::ObstacleEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ObstacleEdge & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ObstacleEdge>()
{
  return "deva_map_msgs::msg::ObstacleEdge";
}

template<>
inline const char * name<deva_map_msgs::msg::ObstacleEdge>()
{
  return "deva_map_msgs/msg/ObstacleEdge";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ObstacleEdge>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ObstacleEdge>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<deva_map_msgs::msg::ObstacleEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__TRAITS_HPP_
