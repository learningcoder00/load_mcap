// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coord_3d'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"
// Member 'sub_cameras'
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NaviCameraProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: coord_3d
  {
    out << "coord_3d: ";
    to_flow_style_yaml(msg.coord_3d, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
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
    out << ", ";
  }

  // member: road_class
  {
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << ", ";
  }

  // member: segment_index
  {
    out << "segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_index, out);
    out << ", ";
  }

  // member: link_index
  {
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
    out << ", ";
  }

  // member: distance_to_end
  {
    out << "distance_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_end, out);
    out << ", ";
  }

  // member: sub_cameras
  {
    if (msg.sub_cameras.size() == 0) {
      out << "sub_cameras: []";
    } else {
      out << "sub_cameras: [";
      size_t pending_items = msg.sub_cameras.size();
      for (auto item : msg.sub_cameras) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: penalty
  {
    out << "penalty: ";
    rosidl_generator_traits::value_to_yaml(msg.penalty, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: is_new
  {
    out << "is_new: ";
    rosidl_generator_traits::value_to_yaml(msg.is_new, out);
    out << ", ";
  }

  // member: is_hidden
  {
    out << "is_hidden: ";
    rosidl_generator_traits::value_to_yaml(msg.is_hidden, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NaviCameraProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coord_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coord_3d:\n";
    to_block_style_yaml(msg.coord_3d, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
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

  // member: road_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << "\n";
  }

  // member: segment_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_index, out);
    out << "\n";
  }

  // member: link_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
    out << "\n";
  }

  // member: distance_to_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_to_end, out);
    out << "\n";
  }

  // member: sub_cameras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sub_cameras.size() == 0) {
      out << "sub_cameras: []\n";
    } else {
      out << "sub_cameras:\n";
      for (auto item : msg.sub_cameras) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: is_hidden
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_hidden: ";
    rosidl_generator_traits::value_to_yaml(msg.is_hidden, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NaviCameraProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::NaviCameraProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::NaviCameraProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::NaviCameraProto>()
{
  return "deva_navi_msgs::msg::NaviCameraProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::NaviCameraProto>()
{
  return "deva_navi_msgs/msg/NaviCameraProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::NaviCameraProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::NaviCameraProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::NaviCameraProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__TRAITS_HPP_
