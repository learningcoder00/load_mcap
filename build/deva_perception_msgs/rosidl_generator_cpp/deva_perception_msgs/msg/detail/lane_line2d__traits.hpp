// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane_line2d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"
// Member 'curve_line_coeffs'
#include "deva_perception_msgs/msg/detail/curve_coef__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneLine2d & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: left_lane_id
  {
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << ", ";
  }

  // member: right_lane_id
  {
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: num_points
  {
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_color
  {
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << ", ";
  }

  // member: lane_property
  {
    out << "lane_property: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_property, out);
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
    out << ", ";
  }

  // member: curve_line_coeffs
  {
    if (msg.curve_line_coeffs.size() == 0) {
      out << "curve_line_coeffs: []";
    } else {
      out << "curve_line_coeffs: [";
      size_t pending_items = msg.curve_line_coeffs.size();
      for (auto item : msg.curve_line_coeffs) {
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
  const LaneLine2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: left_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << "\n";
  }

  // member: right_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << "\n";
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

  // member: num_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << "\n";
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_color, out);
    out << "\n";
  }

  // member: lane_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_property: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_property, out);
    out << "\n";
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

  // member: curve_line_coeffs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.curve_line_coeffs.size() == 0) {
      out << "curve_line_coeffs: []\n";
    } else {
      out << "curve_line_coeffs:\n";
      for (auto item : msg.curve_line_coeffs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneLine2d & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::LaneLine2d & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::LaneLine2d & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::LaneLine2d>()
{
  return "deva_perception_msgs::msg::LaneLine2d";
}

template<>
inline const char * name<deva_perception_msgs::msg::LaneLine2d>()
{
  return "deva_perception_msgs/msg/LaneLine2d";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::LaneLine2d>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::LaneLine2d>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::LaneLine2d>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__TRAITS_HPP_
