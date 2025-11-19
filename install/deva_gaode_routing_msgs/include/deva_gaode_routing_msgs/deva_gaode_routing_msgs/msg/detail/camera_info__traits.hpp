// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_type
  {
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
    out << ", ";
  }

  // member: limit_speed
  {
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << ", ";
  }

  // member: camera_distance
  {
    out << "camera_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_type: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_type, out);
    out << "\n";
  }

  // member: limit_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_speed, out);
    out << "\n";
  }

  // member: camera_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::CameraInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::CameraInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::CameraInfo>()
{
  return "deva_gaode_routing_msgs::msg::CameraInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::CameraInfo>()
{
  return "deva_gaode_routing_msgs/msg/CameraInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::CameraInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::CameraInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::CameraInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__TRAITS_HPP_
