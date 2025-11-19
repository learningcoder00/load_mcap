// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_lane_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'env_lane'
#include "environment_model_msgs/msg/detail/env_lane__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvLaneArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: env_lane
  {
    if (msg.env_lane.size() == 0) {
      out << "env_lane: []";
    } else {
      out << "env_lane: [";
      size_t pending_items = msg.env_lane.size();
      for (auto item : msg.env_lane) {
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
  const EnvLaneArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: env_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_lane.size() == 0) {
      out << "env_lane: []\n";
    } else {
      out << "env_lane:\n";
      for (auto item : msg.env_lane) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvLaneArray & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::EnvLaneArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvLaneArray & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvLaneArray>()
{
  return "environment_model_msgs::msg::EnvLaneArray";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvLaneArray>()
{
  return "environment_model_msgs/msg/EnvLaneArray";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvLaneArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvLaneArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::EnvLaneArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__TRAITS_HPP_
