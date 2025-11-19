// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/MapIds.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/map_ids__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapIds & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value1
  {
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << ", ";
  }

  // member: value2
  {
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapIds & msg,
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

  // member: value1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << "\n";
  }

  // member: value2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapIds & msg, bool use_flow_style = false)
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

}  // namespace environment_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use environment_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_model_msgs::msg::MapIds & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::MapIds & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::MapIds>()
{
  return "environment_model_msgs::msg::MapIds";
}

template<>
inline const char * name<environment_model_msgs::msg::MapIds>()
{
  return "environment_model_msgs/msg/MapIds";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::MapIds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::MapIds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::MapIds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__TRAITS_HPP_
