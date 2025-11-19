// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/virtual_line_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ori_ids'
#include "environment_model_msgs/msg/detail/pair_int__traits.hpp"
// Member 'e2e_pair'
#include "environment_model_msgs/msg/detail/pair_double__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualLineInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: enum_vlane_type
  {
    out << "enum_vlane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_vlane_type, out);
    out << ", ";
  }

  // member: virtual_score
  {
    out << "virtual_score: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_score, out);
    out << ", ";
  }

  // member: ori_ids
  {
    out << "ori_ids: ";
    to_flow_style_yaml(msg.ori_ids, out);
    out << ", ";
  }

  // member: e2e_pair
  {
    out << "e2e_pair: ";
    to_flow_style_yaml(msg.e2e_pair, out);
    out << ", ";
  }

  // member: exit_lane_id
  {
    out << "exit_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_lane_id, out);
    out << ", ";
  }

  // member: exit_seq_id
  {
    out << "exit_seq_id: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_seq_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VirtualLineInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enum_vlane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_vlane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_vlane_type, out);
    out << "\n";
  }

  // member: virtual_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "virtual_score: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_score, out);
    out << "\n";
  }

  // member: ori_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ori_ids:\n";
    to_block_style_yaml(msg.ori_ids, out, indentation + 2);
  }

  // member: e2e_pair
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e2e_pair:\n";
    to_block_style_yaml(msg.e2e_pair, out, indentation + 2);
  }

  // member: exit_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_lane_id, out);
    out << "\n";
  }

  // member: exit_seq_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_seq_id: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_seq_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualLineInfo & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::VirtualLineInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::VirtualLineInfo & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::VirtualLineInfo>()
{
  return "environment_model_msgs::msg::VirtualLineInfo";
}

template<>
inline const char * name<environment_model_msgs::msg::VirtualLineInfo>()
{
  return "environment_model_msgs/msg/VirtualLineInfo";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::VirtualLineInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::VirtualLineInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::VirtualLineInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VIRTUAL_LINE_INFO__TRAITS_HPP_
