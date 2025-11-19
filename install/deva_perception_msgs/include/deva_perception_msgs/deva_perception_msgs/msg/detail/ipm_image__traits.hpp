// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/IPMImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/ipm_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ipm_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IPMImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ipm_image
  {
    out << "ipm_image: ";
    to_flow_style_yaml(msg.ipm_image, out);
    out << ", ";
  }

  // member: pubtime
  {
    out << "pubtime: ";
    rosidl_generator_traits::value_to_yaml(msg.pubtime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IPMImage & msg,
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

  // member: ipm_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipm_image:\n";
    to_block_style_yaml(msg.ipm_image, out, indentation + 2);
  }

  // member: pubtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pubtime: ";
    rosidl_generator_traits::value_to_yaml(msg.pubtime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IPMImage & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::IPMImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::IPMImage & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::IPMImage>()
{
  return "deva_perception_msgs::msg::IPMImage";
}

template<>
inline const char * name<deva_perception_msgs::msg::IPMImage>()
{
  return "deva_perception_msgs/msg/IPMImage";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::IPMImage>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::IPMImage>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::IPMImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__TRAITS_HPP_
