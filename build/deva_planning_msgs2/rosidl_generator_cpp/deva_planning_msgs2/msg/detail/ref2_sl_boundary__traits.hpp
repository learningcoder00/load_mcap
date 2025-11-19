// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/Ref2SLBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/sl_boundary__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ref2SLBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: ref_id
  {
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << ", ";
  }

  // member: sl_boundary
  {
    out << "sl_boundary: ";
    to_flow_style_yaml(msg.sl_boundary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ref2SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ref_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << "\n";
  }

  // member: sl_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sl_boundary:\n";
    to_block_style_yaml(msg.sl_boundary, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ref2SLBoundary & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::Ref2SLBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::Ref2SLBoundary & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::Ref2SLBoundary>()
{
  return "deva_planning_msgs2::msg::Ref2SLBoundary";
}

template<>
inline const char * name<deva_planning_msgs2::msg::Ref2SLBoundary>()
{
  return "deva_planning_msgs2/msg/Ref2SLBoundary";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::Ref2SLBoundary>
  : std::integral_constant<bool, has_fixed_size<deva_planning_msgs2::msg::SLBoundary>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::Ref2SLBoundary>
  : std::integral_constant<bool, has_bounded_size<deva_planning_msgs2::msg::SLBoundary>::value> {};

template<>
struct is_message<deva_planning_msgs2::msg::Ref2SLBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REF2_SL_BOUNDARY__TRAITS_HPP_
