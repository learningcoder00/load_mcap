// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_plug_msg:msg/ErrorEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__TRAITS_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_plug_msg/msg/detail/error_enum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rviz_plug_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ErrorEnum & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ErrorEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ErrorEnum & msg, bool use_flow_style = false)
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
  const rviz_plug_msg::msg::ErrorEnum & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_plug_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_plug_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_plug_msg::msg::ErrorEnum & msg)
{
  return rviz_plug_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_plug_msg::msg::ErrorEnum>()
{
  return "rviz_plug_msg::msg::ErrorEnum";
}

template<>
inline const char * name<rviz_plug_msg::msg::ErrorEnum>()
{
  return "rviz_plug_msg/msg/ErrorEnum";
}

template<>
struct has_fixed_size<rviz_plug_msg::msg::ErrorEnum>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rviz_plug_msg::msg::ErrorEnum>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rviz_plug_msg::msg::ErrorEnum>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__TRAITS_HPP_
