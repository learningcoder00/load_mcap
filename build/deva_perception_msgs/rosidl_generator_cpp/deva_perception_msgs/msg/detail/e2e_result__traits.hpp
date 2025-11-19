// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'broadcategory'
#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__traits.hpp"
// Member 'turn_around'
// Member 'left'
// Member 'straight'
// Member 'right'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: broadcategory
  {
    out << "broadcategory: ";
    to_flow_style_yaml(msg.broadcategory, out);
    out << ", ";
  }

  // member: turn_around
  {
    out << "turn_around: ";
    to_flow_style_yaml(msg.turn_around, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    to_flow_style_yaml(msg.left, out);
    out << ", ";
  }

  // member: straight
  {
    out << "straight: ";
    to_flow_style_yaml(msg.straight, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    to_flow_style_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: broadcategory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "broadcategory:\n";
    to_block_style_yaml(msg.broadcategory, out, indentation + 2);
  }

  // member: turn_around
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_around:\n";
    to_block_style_yaml(msg.turn_around, out, indentation + 2);
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left:\n";
    to_block_style_yaml(msg.left, out, indentation + 2);
  }

  // member: straight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "straight:\n";
    to_block_style_yaml(msg.straight, out, indentation + 2);
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right:\n";
    to_block_style_yaml(msg.right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eResult & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::E2eResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eResult & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eResult>()
{
  return "deva_perception_msgs::msg::E2eResult";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eResult>()
{
  return "deva_perception_msgs/msg/E2eResult";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eResult>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::E2eDecodeBroadResult>::value && has_fixed_size<deva_perception_msgs::msg::E2eDecodeResult>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eResult>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::E2eDecodeBroadResult>::value && has_bounded_size<deva_perception_msgs::msg::E2eDecodeResult>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__TRAITS_HPP_
