// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviSubCameraProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: sub_type
  {
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << ", ";
  }

  // member: make_sound
  {
    out << "make_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.make_sound, out);
    out << ", ";
  }

  // member: camera_id
  {
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << ", ";
  }

  // member: busway_time_enable
  {
    out << "busway_time_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.busway_time_enable, out);
    out << ", ";
  }

  // member: penalty
  {
    out << "penalty: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: is_new
  {
    out << "is_new: ";
    rosidl_generator_traits::value_to_yaml(msg.is_new, out);
    out << ", ";
  }

  // member: is_variable_speed
  {
    out << "is_variable_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_variable_speed, out);
    out << ", ";
  }

  // member: is_match
  {
    out << "is_match: ";
    rosidl_generator_traits::value_to_yaml(msg.is_match, out);
    out << ", ";
  }

  // member: is_special
  {
    out << "is_special: ";
    rosidl_generator_traits::value_to_yaml(msg.is_special, out);
    out << ", ";
  }

  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
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
  const NaviSubCameraProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_type, out);
    out << "\n";
  }

  // member: make_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "make_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.make_sound, out);
    out << "\n";
  }

  // member: camera_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << "\n";
  }

  // member: busway_time_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "busway_time_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.busway_time_enable, out);
    out << "\n";
  }

  // member: penalty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "penalty: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: is_new
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_new: ";
    rosidl_generator_traits::value_to_yaml(msg.is_new, out);
    out << "\n";
  }

  // member: is_variable_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_variable_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.is_variable_speed, out);
    out << "\n";
  }

  // member: is_match
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_match: ";
    rosidl_generator_traits::value_to_yaml(msg.is_match, out);
    out << "\n";
  }

  // member: is_special
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_special: ";
    rosidl_generator_traits::value_to_yaml(msg.is_special, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
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

inline std::string to_yaml(const NaviSubCameraProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::NaviSubCameraProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::NaviSubCameraProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::NaviSubCameraProto>()
{
  return "deva_navi_msgs::msg::NaviSubCameraProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::NaviSubCameraProto>()
{
  return "deva_navi_msgs/msg/NaviSubCameraProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::NaviSubCameraProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::NaviSubCameraProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::NaviSubCameraProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__TRAITS_HPP_
