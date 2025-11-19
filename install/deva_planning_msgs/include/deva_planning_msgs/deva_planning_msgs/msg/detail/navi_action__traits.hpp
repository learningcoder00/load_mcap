// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/NaviAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/navi_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: meta_action
  {
    out << "meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_action, out);
    out << ", ";
  }

  // member: current_score
  {
    out << "current_score: ";
    rosidl_generator_traits::value_to_yaml(msg.current_score, out);
    out << ", ";
  }

  // member: left_score
  {
    out << "left_score: ";
    rosidl_generator_traits::value_to_yaml(msg.left_score, out);
    out << ", ";
  }

  // member: right_score
  {
    out << "right_score: ";
    rosidl_generator_traits::value_to_yaml(msg.right_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NaviAction & msg,
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

  // member: meta_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_action, out);
    out << "\n";
  }

  // member: current_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_score: ";
    rosidl_generator_traits::value_to_yaml(msg.current_score, out);
    out << "\n";
  }

  // member: left_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_score: ";
    rosidl_generator_traits::value_to_yaml(msg.left_score, out);
    out << "\n";
  }

  // member: right_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_score: ";
    rosidl_generator_traits::value_to_yaml(msg.right_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NaviAction & msg, bool use_flow_style = false)
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
  const deva_planning_msgs::msg::NaviAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::NaviAction & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::NaviAction>()
{
  return "deva_planning_msgs::msg::NaviAction";
}

template<>
inline const char * name<deva_planning_msgs::msg::NaviAction>()
{
  return "deva_planning_msgs/msg/NaviAction";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::NaviAction>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::NaviAction>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_planning_msgs::msg::NaviAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAVI_ACTION__TRAITS_HPP_
