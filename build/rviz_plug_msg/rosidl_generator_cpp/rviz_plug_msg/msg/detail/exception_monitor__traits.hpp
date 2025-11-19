// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__TRAITS_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_plug_msg/msg/detail/exception_monitor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rviz_plug_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExceptionMonitor & msg,
  std::ostream & out)
{
  out << "{";
  // member: exception_content
  {
    if (msg.exception_content.size() == 0) {
      out << "exception_content: []";
    } else {
      out << "exception_content: [";
      size_t pending_items = msg.exception_content.size();
      for (auto item : msg.exception_content) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ExceptionMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exception_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exception_content.size() == 0) {
      out << "exception_content: []\n";
    } else {
      out << "exception_content:\n";
      for (auto item : msg.exception_content) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExceptionMonitor & msg, bool use_flow_style = false)
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
  const rviz_plug_msg::msg::ExceptionMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_plug_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_plug_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_plug_msg::msg::ExceptionMonitor & msg)
{
  return rviz_plug_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_plug_msg::msg::ExceptionMonitor>()
{
  return "rviz_plug_msg::msg::ExceptionMonitor";
}

template<>
inline const char * name<rviz_plug_msg::msg::ExceptionMonitor>()
{
  return "rviz_plug_msg/msg/ExceptionMonitor";
}

template<>
struct has_fixed_size<rviz_plug_msg::msg::ExceptionMonitor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_plug_msg::msg::ExceptionMonitor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_plug_msg::msg::ExceptionMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__TRAITS_HPP_
