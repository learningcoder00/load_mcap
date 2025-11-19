// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/BoundPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/bound_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundPoint & msg,
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

  // member: enum_marking_type
  {
    out << "enum_marking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_marking_type, out);
    out << ", ";
  }

  // member: enum_color
  {
    out << "enum_color: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_color, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundPoint & msg,
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

  // member: enum_marking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_marking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_marking_type, out);
    out << "\n";
  }

  // member: enum_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_color: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_color, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundPoint & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::BoundPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::BoundPoint & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::BoundPoint>()
{
  return "environment_model_msgs::msg::BoundPoint";
}

template<>
inline const char * name<environment_model_msgs::msg::BoundPoint>()
{
  return "environment_model_msgs/msg/BoundPoint";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::BoundPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::BoundPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::BoundPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__TRAITS_HPP_
