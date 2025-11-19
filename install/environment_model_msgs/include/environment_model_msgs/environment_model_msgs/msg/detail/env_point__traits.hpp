// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_lan_bound'
// Member 'right_lane_bound'
// Member 'left_road_bound'
// Member 'right_road_bound'
#include "environment_model_msgs/msg/detail/bound_point__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvPoint & msg,
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

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: kappa
  {
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << ", ";
  }

  // member: left_lan_bound
  {
    out << "left_lan_bound: ";
    to_flow_style_yaml(msg.left_lan_bound, out);
    out << ", ";
  }

  // member: right_lane_bound
  {
    out << "right_lane_bound: ";
    to_flow_style_yaml(msg.right_lane_bound, out);
    out << ", ";
  }

  // member: left_road_bound
  {
    out << "left_road_bound: ";
    to_flow_style_yaml(msg.left_road_bound, out);
    out << ", ";
  }

  // member: right_road_bound
  {
    out << "right_road_bound: ";
    to_flow_style_yaml(msg.right_road_bound, out);
    out << ", ";
  }

  // member: speed_limit
  {
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << ", ";
  }

  // member: enum_lane_type
  {
    out << "enum_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_lane_type, out);
    out << ", ";
  }

  // member: enum_road_type
  {
    out << "enum_road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_road_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvPoint & msg,
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

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
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

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: left_lan_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lan_bound:\n";
    to_block_style_yaml(msg.left_lan_bound, out, indentation + 2);
  }

  // member: right_lane_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_bound:\n";
    to_block_style_yaml(msg.right_lane_bound, out, indentation + 2);
  }

  // member: left_road_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_road_bound:\n";
    to_block_style_yaml(msg.left_road_bound, out, indentation + 2);
  }

  // member: right_road_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_road_bound:\n";
    to_block_style_yaml(msg.right_road_bound, out, indentation + 2);
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << "\n";
  }

  // member: enum_lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_lane_type, out);
    out << "\n";
  }

  // member: enum_road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_road_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvPoint & msg, bool use_flow_style = false)
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

}  // namespace environment_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use environment_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_model_msgs::msg::EnvPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvPoint & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvPoint>()
{
  return "environment_model_msgs::msg::EnvPoint";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvPoint>()
{
  return "environment_model_msgs/msg/EnvPoint";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvPoint>
  : std::integral_constant<bool, has_fixed_size<environment_model_msgs::msg::BoundPoint>::value> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvPoint>
  : std::integral_constant<bool, has_bounded_size<environment_model_msgs::msg::BoundPoint>::value> {};

template<>
struct is_message<environment_model_msgs::msg::EnvPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__TRAITS_HPP_
