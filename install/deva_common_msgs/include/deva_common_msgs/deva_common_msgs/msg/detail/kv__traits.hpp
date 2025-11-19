// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/KV.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__KV__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__KV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/kv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KV & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KV & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KV & msg, bool use_flow_style = false)
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
  const deva_common_msgs::msg::KV & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::KV & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::KV>()
{
  return "deva_common_msgs::msg::KV";
}

template<>
inline const char * name<deva_common_msgs::msg::KV>()
{
  return "deva_common_msgs/msg/KV";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::KV>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::KV>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_common_msgs::msg::KV>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__KV__TRAITS_HPP_
