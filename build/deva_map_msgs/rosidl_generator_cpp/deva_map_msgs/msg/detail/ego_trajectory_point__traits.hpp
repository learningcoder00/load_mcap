// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/EgoTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/ego_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EgoTrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EgoTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EgoTrajectoryPoint & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::EgoTrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::EgoTrajectoryPoint & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::EgoTrajectoryPoint>()
{
  return "deva_map_msgs::msg::EgoTrajectoryPoint";
}

template<>
inline const char * name<deva_map_msgs::msg::EgoTrajectoryPoint>()
{
  return "deva_map_msgs/msg/EgoTrajectoryPoint";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::EgoTrajectoryPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::EgoTrajectoryPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_map_msgs::msg::EgoTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY_POINT__TRAITS_HPP_
