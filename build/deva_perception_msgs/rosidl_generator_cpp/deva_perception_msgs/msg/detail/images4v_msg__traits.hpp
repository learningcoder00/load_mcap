// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Images4vMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/images4v_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'right_cam_image'
// Member 'front_cam_image'
// Member 'back_cam_image'
// Member 'left_cam_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Images4vMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: right_cam_image
  {
    out << "right_cam_image: ";
    to_flow_style_yaml(msg.right_cam_image, out);
    out << ", ";
  }

  // member: front_cam_image
  {
    out << "front_cam_image: ";
    to_flow_style_yaml(msg.front_cam_image, out);
    out << ", ";
  }

  // member: back_cam_image
  {
    out << "back_cam_image: ";
    to_flow_style_yaml(msg.back_cam_image, out);
    out << ", ";
  }

  // member: left_cam_image
  {
    out << "left_cam_image: ";
    to_flow_style_yaml(msg.left_cam_image, out);
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
  const Images4vMsg & msg,
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

  // member: right_cam_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_cam_image:\n";
    to_block_style_yaml(msg.right_cam_image, out, indentation + 2);
  }

  // member: front_cam_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_cam_image:\n";
    to_block_style_yaml(msg.front_cam_image, out, indentation + 2);
  }

  // member: back_cam_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_cam_image:\n";
    to_block_style_yaml(msg.back_cam_image, out, indentation + 2);
  }

  // member: left_cam_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_cam_image:\n";
    to_block_style_yaml(msg.left_cam_image, out, indentation + 2);
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

inline std::string to_yaml(const Images4vMsg & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Images4vMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Images4vMsg & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Images4vMsg>()
{
  return "deva_perception_msgs::msg::Images4vMsg";
}

template<>
inline const char * name<deva_perception_msgs::msg::Images4vMsg>()
{
  return "deva_perception_msgs/msg/Images4vMsg";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Images4vMsg>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Images4vMsg>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::Images4vMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__TRAITS_HPP_
