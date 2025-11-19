// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dims'
// Member 'corner_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__traits.hpp"
// Member 'line_segments'
#include "deva_perception_msgs/msg/detail/edge_line_segment__traits.hpp"
// Member 'equation_curves'
#include "deva_perception_msgs/msg/detail/edge_equation_curve__traits.hpp"
// Member 'disperse_curves'
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__traits.hpp"
// Member 'direction_pixcoord'
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"
// Member 'static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Area & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: dims
  {
    out << "dims: ";
    to_flow_style_yaml(msg.dims, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: segment_type
  {
    out << "segment_type: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_type, out);
    out << ", ";
  }

  // member: line_segments
  {
    if (msg.line_segments.size() == 0) {
      out << "line_segments: []";
    } else {
      out << "line_segments: [";
      size_t pending_items = msg.line_segments.size();
      for (auto item : msg.line_segments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: equation_curves
  {
    if (msg.equation_curves.size() == 0) {
      out << "equation_curves: []";
    } else {
      out << "equation_curves: [";
      size_t pending_items = msg.equation_curves.size();
      for (auto item : msg.equation_curves) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: disperse_curves
  {
    if (msg.disperse_curves.size() == 0) {
      out << "disperse_curves: []";
    } else {
      out << "disperse_curves: [";
      size_t pending_items = msg.disperse_curves.size();
      for (auto item : msg.disperse_curves) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_points
  {
    if (msg.corner_points.size() == 0) {
      out << "corner_points: []";
    } else {
      out << "corner_points: [";
      size_t pending_items = msg.corner_points.size();
      for (auto item : msg.corner_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direction_pixcoord
  {
    out << "direction_pixcoord: ";
    to_flow_style_yaml(msg.direction_pixcoord, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: depth_carcoord
  {
    out << "depth_carcoord: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_carcoord, out);
    out << ", ";
  }

  // member: is_occupied
  {
    out << "is_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occupied, out);
    out << ", ";
  }

  // member: is_stable_tracked
  {
    out << "is_stable_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable_tracked, out);
    out << ", ";
  }

  // member: occupied_confidence
  {
    out << "occupied_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_confidence, out);
    out << ", ";
  }

  // member: static_obstacles
  {
    if (msg.static_obstacles.size() == 0) {
      out << "static_obstacles: []";
    } else {
      out << "static_obstacles: [";
      size_t pending_items = msg.static_obstacles.size();
      for (auto item : msg.static_obstacles) {
        to_flow_style_yaml(item, out);
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
  const Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
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

  // member: dims
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dims:\n";
    to_block_style_yaml(msg.dims, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: segment_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_type: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_type, out);
    out << "\n";
  }

  // member: line_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_segments.size() == 0) {
      out << "line_segments: []\n";
    } else {
      out << "line_segments:\n";
      for (auto item : msg.line_segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: equation_curves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.equation_curves.size() == 0) {
      out << "equation_curves: []\n";
    } else {
      out << "equation_curves:\n";
      for (auto item : msg.equation_curves) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: disperse_curves
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.disperse_curves.size() == 0) {
      out << "disperse_curves: []\n";
    } else {
      out << "disperse_curves:\n";
      for (auto item : msg.disperse_curves) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: corner_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_points.size() == 0) {
      out << "corner_points: []\n";
    } else {
      out << "corner_points:\n";
      for (auto item : msg.corner_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: direction_pixcoord
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_pixcoord:\n";
    to_block_style_yaml(msg.direction_pixcoord, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: depth_carcoord
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_carcoord: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_carcoord, out);
    out << "\n";
  }

  // member: is_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occupied, out);
    out << "\n";
  }

  // member: is_stable_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stable_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable_tracked, out);
    out << "\n";
  }

  // member: occupied_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_confidence, out);
    out << "\n";
  }

  // member: static_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.static_obstacles.size() == 0) {
      out << "static_obstacles: []\n";
    } else {
      out << "static_obstacles:\n";
      for (auto item : msg.static_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

inline std::string to_yaml(const Area & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Area & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Area>()
{
  return "deva_perception_msgs::msg::Area";
}

template<>
inline const char * name<deva_perception_msgs::msg::Area>()
{
  return "deva_perception_msgs/msg/Area";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Area>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Area>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Area>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__TRAITS_HPP_
