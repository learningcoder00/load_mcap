// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SLBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_s
  {
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << ", ";
  }

  // member: end_s
  {
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
    out << ", ";
  }

  // member: start_l
  {
    out << "start_l: ";
    rosidl_generator_traits::value_to_yaml(msg.start_l, out);
    out << ", ";
  }

  // member: end_l
  {
    out << "end_l: ";
    rosidl_generator_traits::value_to_yaml(msg.end_l, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << "\n";
  }

  // member: end_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
    out << "\n";
  }

  // member: start_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_l: ";
    rosidl_generator_traits::value_to_yaml(msg.start_l, out);
    out << "\n";
  }

  // member: end_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_l: ";
    rosidl_generator_traits::value_to_yaml(msg.end_l, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SLBoundary & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::SLBoundary & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::SLBoundary>()
{
  return "deva_planning_msgs2::msg::SLBoundary";
}

template<>
inline const char * name<deva_planning_msgs2::msg::SLBoundary>()
{
  return "deva_planning_msgs2/msg/SLBoundary";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::SLBoundary>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::SLBoundary>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_planning_msgs2::msg::SLBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SL_BOUNDARY__TRAITS_HPP_
