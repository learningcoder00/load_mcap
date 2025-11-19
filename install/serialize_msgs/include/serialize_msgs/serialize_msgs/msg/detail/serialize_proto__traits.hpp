// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serialize_msgs:msg/SerializeProto.idl
// generated code does not contain a copyright notice

#ifndef SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__TRAITS_HPP_
#define SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serialize_msgs/msg/detail/serialize_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace serialize_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SerializeProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const SerializeProto & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const SerializeProto & msg, bool use_flow_style = false)
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

}  // namespace serialize_msgs

namespace rosidl_generator_traits
{

[[deprecated("use serialize_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serialize_msgs::msg::SerializeProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  serialize_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serialize_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const serialize_msgs::msg::SerializeProto & msg)
{
  return serialize_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serialize_msgs::msg::SerializeProto>()
{
  return "serialize_msgs::msg::SerializeProto";
}

template<>
inline const char * name<serialize_msgs::msg::SerializeProto>()
{
  return "serialize_msgs/msg/SerializeProto";
}

template<>
struct has_fixed_size<serialize_msgs::msg::SerializeProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<serialize_msgs::msg::SerializeProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<serialize_msgs::msg::SerializeProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERIALIZE_MSGS__MSG__DETAIL__SERIALIZE_PROTO__TRAITS_HPP_
