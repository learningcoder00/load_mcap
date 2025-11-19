// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox & msg,
  std::ostream & out)
{
  out << "{";
  // member: xmin
  {
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << ", ";
  }

  // member: ymin
  {
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << ", ";
  }

  // member: xmax
  {
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << ", ";
  }

  // member: ymax
  {
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmin: ";
    rosidl_generator_traits::value_to_yaml(msg.xmin, out);
    out << "\n";
  }

  // member: ymin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymin: ";
    rosidl_generator_traits::value_to_yaml(msg.ymin, out);
    out << "\n";
  }

  // member: xmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xmax: ";
    rosidl_generator_traits::value_to_yaml(msg.xmax, out);
    out << "\n";
  }

  // member: ymax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ymax: ";
    rosidl_generator_traits::value_to_yaml(msg.ymax, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox & msg, bool use_flow_style = false)
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
  const deva_common_msgs::msg::BoundingBox & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::BoundingBox & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::BoundingBox>()
{
  return "deva_common_msgs::msg::BoundingBox";
}

template<>
inline const char * name<deva_common_msgs::msg::BoundingBox>()
{
  return "deva_common_msgs/msg/BoundingBox";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::BoundingBox>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::BoundingBox>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_common_msgs::msg::BoundingBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__BOUNDING_BOX__TRAITS_HPP_
