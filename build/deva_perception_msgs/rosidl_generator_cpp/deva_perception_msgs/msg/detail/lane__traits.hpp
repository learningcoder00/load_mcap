// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'imagepoints'
// Member 'rv_fork_point'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"
// Member 'waypoints'
// Member 'waypoints_extend'
// Member 'bev_fork_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'lane_xy'
// Member 'lane_xz'
#include "deva_common_msgs/msg/detail/line2d__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lane & msg,
  std::ostream & out)
{
  out << "{";
  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

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

  // member: fork_lane_id
  {
    out << "fork_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_lane_id, out);
    out << ", ";
  }

  // member: imagepoints
  {
    if (msg.imagepoints.size() == 0) {
      out << "imagepoints: []";
    } else {
      out << "imagepoints: [";
      size_t pending_items = msg.imagepoints.size();
      for (auto item : msg.imagepoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v_min
  {
    out << "v_min: ";
    rosidl_generator_traits::value_to_yaml(msg.v_min, out);
    out << ", ";
  }

  // member: v_max
  {
    out << "v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.v_max, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_min
  {
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << ", ";
  }

  // member: x_max
  {
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << ", ";
  }

  // member: waypoints_extend
  {
    if (msg.waypoints_extend.size() == 0) {
      out << "waypoints_extend: []";
    } else {
      out << "waypoints_extend: [";
      size_t pending_items = msg.waypoints_extend.size();
      for (auto item : msg.waypoints_extend) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_min_extend
  {
    out << "x_min_extend: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min_extend, out);
    out << ", ";
  }

  // member: x_max_extend
  {
    out << "x_max_extend: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max_extend, out);
    out << ", ";
  }

  // member: lane_property
  {
    out << "lane_property: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_property, out);
    out << ", ";
  }

  // member: fork_property
  {
    out << "fork_property: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_property, out);
    out << ", ";
  }

  // member: rv_fork_point
  {
    out << "rv_fork_point: ";
    to_flow_style_yaml(msg.rv_fork_point, out);
    out << ", ";
  }

  // member: bev_fork_point
  {
    out << "bev_fork_point: ";
    to_flow_style_yaml(msg.bev_fork_point, out);
    out << ", ";
  }

  // member: lane_xy
  {
    out << "lane_xy: ";
    to_flow_style_yaml(msg.lane_xy, out);
    out << ", ";
  }

  // member: lane_xz
  {
    out << "lane_xz: ";
    to_flow_style_yaml(msg.lane_xz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

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

  // member: fork_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fork_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_lane_id, out);
    out << "\n";
  }

  // member: imagepoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imagepoints.size() == 0) {
      out << "imagepoints: []\n";
    } else {
      out << "imagepoints:\n";
      for (auto item : msg.imagepoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: v_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_min: ";
    rosidl_generator_traits::value_to_yaml(msg.v_min, out);
    out << "\n";
  }

  // member: v_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.v_max, out);
    out << "\n";
  }

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: x_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << "\n";
  }

  // member: x_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << "\n";
  }

  // member: waypoints_extend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints_extend.size() == 0) {
      out << "waypoints_extend: []\n";
    } else {
      out << "waypoints_extend:\n";
      for (auto item : msg.waypoints_extend) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: x_min_extend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min_extend: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min_extend, out);
    out << "\n";
  }

  // member: x_max_extend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max_extend: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max_extend, out);
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

  // member: fork_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fork_property: ";
    rosidl_generator_traits::value_to_yaml(msg.fork_property, out);
    out << "\n";
  }

  // member: rv_fork_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rv_fork_point:\n";
    to_block_style_yaml(msg.rv_fork_point, out, indentation + 2);
  }

  // member: bev_fork_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bev_fork_point:\n";
    to_block_style_yaml(msg.bev_fork_point, out, indentation + 2);
  }

  // member: lane_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_xy:\n";
    to_block_style_yaml(msg.lane_xy, out, indentation + 2);
  }

  // member: lane_xz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_xz:\n";
    to_block_style_yaml(msg.lane_xz, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lane & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Lane & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Lane>()
{
  return "deva_perception_msgs::msg::Lane";
}

template<>
inline const char * name<deva_perception_msgs::msg::Lane>()
{
  return "deva_perception_msgs/msg/Lane";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Lane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Lane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
