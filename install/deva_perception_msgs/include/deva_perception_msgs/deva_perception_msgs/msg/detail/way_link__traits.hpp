// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/way_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'car_coord_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WayLink & msg,
  std::ostream & out)
{
  out << "{";
  // member: car_coord_points
  {
    if (msg.car_coord_points.size() == 0) {
      out << "car_coord_points: []";
    } else {
      out << "car_coord_points: [";
      size_t pending_items = msg.car_coord_points.size();
      for (auto item : msg.car_coord_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_points_idx
  {
    if (msg.corner_points_idx.size() == 0) {
      out << "corner_points_idx: []";
    } else {
      out << "corner_points_idx: [";
      size_t pending_items = msg.corner_points_idx.size();
      for (auto item : msg.corner_points_idx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: point_confidences
  {
    if (msg.point_confidences.size() == 0) {
      out << "point_confidences: []";
    } else {
      out << "point_confidences: [";
      size_t pending_items = msg.point_confidences.size();
      for (auto item : msg.point_confidences) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_confidences
  {
    if (msg.corner_confidences.size() == 0) {
      out << "corner_confidences: []";
    } else {
      out << "corner_confidences: [";
      size_t pending_items = msg.corner_confidences.size();
      for (auto item : msg.corner_confidences) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pixel_points
  {
    if (msg.pixel_points.size() == 0) {
      out << "pixel_points: []";
    } else {
      out << "pixel_points: [";
      size_t pending_items = msg.pixel_points.size();
      for (auto item : msg.pixel_points) {
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
  const WayLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: car_coord_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.car_coord_points.size() == 0) {
      out << "car_coord_points: []\n";
    } else {
      out << "car_coord_points:\n";
      for (auto item : msg.car_coord_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: corner_points_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_points_idx.size() == 0) {
      out << "corner_points_idx: []\n";
    } else {
      out << "corner_points_idx:\n";
      for (auto item : msg.corner_points_idx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: point_confidences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.point_confidences.size() == 0) {
      out << "point_confidences: []\n";
    } else {
      out << "point_confidences:\n";
      for (auto item : msg.point_confidences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: corner_confidences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_confidences.size() == 0) {
      out << "corner_confidences: []\n";
    } else {
      out << "corner_confidences:\n";
      for (auto item : msg.corner_confidences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pixel_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pixel_points.size() == 0) {
      out << "pixel_points: []\n";
    } else {
      out << "pixel_points:\n";
      for (auto item : msg.pixel_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WayLink & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::WayLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::WayLink & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::WayLink>()
{
  return "deva_perception_msgs::msg::WayLink";
}

template<>
inline const char * name<deva_perception_msgs::msg::WayLink>()
{
  return "deva_perception_msgs/msg/WayLink";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::WayLink>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::WayLink>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::WayLink>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__TRAITS_HPP_
