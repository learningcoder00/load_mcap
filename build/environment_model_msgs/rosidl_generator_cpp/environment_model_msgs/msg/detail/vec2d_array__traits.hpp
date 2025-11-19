// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/Vec2dArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/vec2d_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vec2d_array'
#include "environment_model_msgs/msg/detail/vec2d__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vec2dArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: vec2d_array
  {
    if (msg.vec2d_array.size() == 0) {
      out << "vec2d_array: []";
    } else {
      out << "vec2d_array: [";
      size_t pending_items = msg.vec2d_array.size();
      for (auto item : msg.vec2d_array) {
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
  const Vec2dArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vec2d_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vec2d_array.size() == 0) {
      out << "vec2d_array: []\n";
    } else {
      out << "vec2d_array:\n";
      for (auto item : msg.vec2d_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vec2dArray & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::Vec2dArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::Vec2dArray & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::Vec2dArray>()
{
  return "environment_model_msgs::msg::Vec2dArray";
}

template<>
inline const char * name<environment_model_msgs::msg::Vec2dArray>()
{
  return "environment_model_msgs/msg/Vec2dArray";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::Vec2dArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::Vec2dArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::Vec2dArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__TRAITS_HPP_
