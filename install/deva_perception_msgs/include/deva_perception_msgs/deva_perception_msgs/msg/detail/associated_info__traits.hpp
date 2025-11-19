// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/associated_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssociatedInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: associated_type
  {
    out << "associated_type: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_type, out);
    out << ", ";
  }

  // member: associated_id
  {
    out << "associated_id: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssociatedInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: associated_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_type: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_type, out);
    out << "\n";
  }

  // member: associated_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "associated_id: ";
    rosidl_generator_traits::value_to_yaml(msg.associated_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssociatedInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::AssociatedInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::AssociatedInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::AssociatedInfo>()
{
  return "deva_perception_msgs::msg::AssociatedInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::AssociatedInfo>()
{
  return "deva_perception_msgs/msg/AssociatedInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::AssociatedInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::AssociatedInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::AssociatedInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__TRAITS_HPP_
