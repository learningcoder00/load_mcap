// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/Line2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/line2d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Line2d & msg,
  std::ostream & out)
{
  out << "{";
  // member: fit_property
  {
    out << "fit_property: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_property, out);
    out << ", ";
  }

  // member: c3
  {
    out << "c3: ";
    rosidl_generator_traits::value_to_yaml(msg.c3, out);
    out << ", ";
  }

  // member: c2
  {
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << ", ";
  }

  // member: c1
  {
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << ", ";
  }

  // member: c0
  {
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Line2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fit_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fit_property: ";
    rosidl_generator_traits::value_to_yaml(msg.fit_property, out);
    out << "\n";
  }

  // member: c3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c3: ";
    rosidl_generator_traits::value_to_yaml(msg.c3, out);
    out << "\n";
  }

  // member: c2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << "\n";
  }

  // member: c1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << "\n";
  }

  // member: c0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Line2d & msg, bool use_flow_style = false)
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

}  // namespace deva_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_common_msgs::msg::Line2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::Line2d & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::Line2d>()
{
  return "deva_common_msgs::msg::Line2d";
}

template<>
inline const char * name<deva_common_msgs::msg::Line2d>()
{
  return "deva_common_msgs/msg/Line2d";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::Line2d>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::Line2d>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_common_msgs::msg::Line2d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__LINE2D__TRAITS_HPP_
