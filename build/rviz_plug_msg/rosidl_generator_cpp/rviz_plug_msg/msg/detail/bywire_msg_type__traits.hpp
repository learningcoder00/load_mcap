// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_plug_msg:msg/BywireMsgType.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__TRAITS_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rviz_plug_msg/msg/detail/bywire_msg_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rviz_plug_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const BywireMsgType & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BywireMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BywireMsgType & msg, bool use_flow_style = false)
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
  const rviz_plug_msg::msg::BywireMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  rviz_plug_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rviz_plug_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rviz_plug_msg::msg::BywireMsgType & msg)
{
  return rviz_plug_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rviz_plug_msg::msg::BywireMsgType>()
{
  return "rviz_plug_msg::msg::BywireMsgType";
}

template<>
inline const char * name<rviz_plug_msg::msg::BywireMsgType>()
{
  return "rviz_plug_msg/msg/BywireMsgType";
}

template<>
struct has_fixed_size<rviz_plug_msg::msg::BywireMsgType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rviz_plug_msg::msg::BywireMsgType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rviz_plug_msg::msg::BywireMsgType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__TRAITS_HPP_
