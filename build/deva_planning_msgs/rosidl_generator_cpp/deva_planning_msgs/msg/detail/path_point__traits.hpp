// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: kappa
  {
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: dkappa
  {
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << ", ";
  }

  // member: ddkappa
  {
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: x_derivative
  {
    out << "x_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.x_derivative, out);
    out << ", ";
  }

  // member: y_derivative
  {
    out << "y_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.y_derivative, out);
    out << ", ";
  }

  // member: lane_width
  {
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << ", ";
  }

  // member: is_junction
  {
    out << "is_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_junction, out);
    out << ", ";
  }

  // member: distance2obs
  {
    out << "distance2obs: ";
    rosidl_generator_traits::value_to_yaml(msg.distance2obs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: dkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << "\n";
  }

  // member: ddkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
    out << "\n";
  }

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: x_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.x_derivative, out);
    out << "\n";
  }

  // member: y_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.y_derivative, out);
    out << "\n";
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << "\n";
  }

  // member: is_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_junction, out);
    out << "\n";
  }

  // member: distance2obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance2obs: ";
    rosidl_generator_traits::value_to_yaml(msg.distance2obs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPoint & msg, bool use_flow_style = false)
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
  const deva_planning_msgs::msg::PathPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::PathPoint & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::PathPoint>()
{
  return "deva_planning_msgs::msg::PathPoint";
}

template<>
inline const char * name<deva_planning_msgs::msg::PathPoint>()
{
  return "deva_planning_msgs/msg/PathPoint";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::PathPoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::PathPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__TRAITS_HPP_
