// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraCallbackInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_info'
#include "deva_gaode_routing_msgs/msg/detail/camera_info__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraCallbackInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: inter_remain_distance
  {
    out << "inter_remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_remain_distance, out);
    out << ", ";
  }

  // member: camera_info
  {
    if (msg.camera_info.size() == 0) {
      out << "camera_info: []";
    } else {
      out << "camera_info: [";
      size_t pending_items = msg.camera_info.size();
      for (auto item : msg.camera_info) {
        to_flow_style_yaml(item, out);
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
  const CameraCallbackInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inter_remain_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inter_remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_remain_distance, out);
    out << "\n";
  }

  // member: camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_info.size() == 0) {
      out << "camera_info: []\n";
    } else {
      out << "camera_info:\n";
      for (auto item : msg.camera_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraCallbackInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::CameraCallbackInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::CameraCallbackInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::CameraCallbackInfo>()
{
  return "deva_gaode_routing_msgs::msg::CameraCallbackInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::CameraCallbackInfo>()
{
  return "deva_gaode_routing_msgs/msg/CameraCallbackInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::CameraCallbackInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::CameraCallbackInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::CameraCallbackInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__TRAITS_HPP_
