// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path_point'
#include "deva_planning_msgs/msg/detail/path_point__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_point
  {
    out << "path_point: ";
    to_flow_style_yaml(msg.path_point, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: relative_time
  {
    out << "relative_time: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time, out);
    out << ", ";
  }

  // member: da
  {
    out << "da: ";
    rosidl_generator_traits::value_to_yaml(msg.da, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_point:\n";
    to_block_style_yaml(msg.path_point, out, indentation + 2);
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: relative_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_time: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time, out);
    out << "\n";
  }

  // member: da
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "da: ";
    rosidl_generator_traits::value_to_yaml(msg.da, out);
    out << "\n";
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryPoint & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::TrajectoryPoint & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::TrajectoryPoint>()
{
  return "deva_planning_msgs::msg::TrajectoryPoint";
}

template<>
inline const char * name<deva_planning_msgs::msg::TrajectoryPoint>()
{
  return "deva_planning_msgs/msg/TrajectoryPoint";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<deva_planning_msgs::msg::PathPoint>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<deva_planning_msgs::msg::PathPoint>::value> {};

template<>
struct is_message<deva_planning_msgs::msg::TrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
