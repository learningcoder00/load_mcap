// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/NaviScore.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/navi_score__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviScore & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_route_signal
  {
    out << "has_route_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.has_route_signal, out);
    out << ", ";
  }

  // member: static_score
  {
    out << "static_score: ";
    rosidl_generator_traits::value_to_yaml(msg.static_score, out);
    out << ", ";
  }

  // member: is_on_route
  {
    out << "is_on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_route, out);
    out << ", ";
  }

  // member: dis2junction
  {
    out << "dis2junction: ";
    rosidl_generator_traits::value_to_yaml(msg.dis2junction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NaviScore & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_route_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_route_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.has_route_signal, out);
    out << "\n";
  }

  // member: static_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "static_score: ";
    rosidl_generator_traits::value_to_yaml(msg.static_score, out);
    out << "\n";
  }

  // member: is_on_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_route, out);
    out << "\n";
  }

  // member: dis2junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dis2junction: ";
    rosidl_generator_traits::value_to_yaml(msg.dis2junction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NaviScore & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::NaviScore & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::NaviScore & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::NaviScore>()
{
  return "environment_model_msgs::msg::NaviScore";
}

template<>
inline const char * name<environment_model_msgs::msg::NaviScore>()
{
  return "environment_model_msgs/msg/NaviScore";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::NaviScore>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::NaviScore>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::NaviScore>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__TRAITS_HPP_
