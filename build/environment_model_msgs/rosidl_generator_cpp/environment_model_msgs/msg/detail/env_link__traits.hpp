// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvLink & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: parent_link_id
  {
    out << "parent_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_link_id, out);
    out << ", ";
  }

  // member: angle_with_parent
  {
    out << "angle_with_parent: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_with_parent, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: is_on_routing
  {
    out << "is_on_routing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_routing, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: sub_link_num
  {
    out << "sub_link_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_link_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: parent_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_link_id, out);
    out << "\n";
  }

  // member: angle_with_parent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_with_parent: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_with_parent, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: is_on_routing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_routing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_routing, out);
    out << "\n";
  }

  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: sub_link_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_link_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_link_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvLink & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::EnvLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvLink & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvLink>()
{
  return "environment_model_msgs::msg::EnvLink";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvLink>()
{
  return "environment_model_msgs/msg/EnvLink";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvLink>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvLink>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::EnvLink>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINK__TRAITS_HPP_
