// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_plug_msg:msg/Freq.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__TRAITS_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_plug_msg/msg/detail/freq__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rviz_plug_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Freq & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: freqs
  {
    out << "freqs: ";
    rosidl_generator_traits::value_to_yaml(msg.freqs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Freq & msg,
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

  // member: freqs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freqs: ";
    rosidl_generator_traits::value_to_yaml(msg.freqs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Freq & msg, bool use_flow_style = false)
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

}  // namespace rviz_plug_msg

namespace rosidl_generator_traits
{

[[deprecated("use rviz_plug_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rviz_plug_msg::msg::Freq & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_plug_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_plug_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_plug_msg::msg::Freq & msg)
{
  return rviz_plug_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_plug_msg::msg::Freq>()
{
  return "rviz_plug_msg::msg::Freq";
}

template<>
inline const char * name<rviz_plug_msg::msg::Freq>()
{
  return "rviz_plug_msg/msg/Freq";
}

template<>
struct has_fixed_size<rviz_plug_msg::msg::Freq>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rviz_plug_msg::msg::Freq>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rviz_plug_msg::msg::Freq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ__TRAITS_HPP_
