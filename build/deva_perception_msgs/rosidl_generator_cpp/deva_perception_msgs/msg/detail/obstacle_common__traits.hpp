// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
// Member 'dims'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__traits.hpp"
// Member 'bounding_box'
#include "deva_common_msgs/msg/detail/bounding_box__traits.hpp"
// Member 'associated_infos'
#include "deva_perception_msgs/msg/detail/associated_info__traits.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleCommon & msg,
  std::ostream & out)
{
  out << "{";
  // member: obs_name
  {
    out << "obs_name: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_name, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obs_id
  {
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
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

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: track_length
  {
    out << "track_length: ";
    rosidl_generator_traits::value_to_yaml(msg.track_length, out);
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: bounding_box
  {
    out << "bounding_box: ";
    to_flow_style_yaml(msg.bounding_box, out);
    out << ", ";
  }

  // member: miss_length
  {
    out << "miss_length: ";
    rosidl_generator_traits::value_to_yaml(msg.miss_length, out);
    out << ", ";
  }

  // member: is_stable_tracked
  {
    out << "is_stable_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable_tracked, out);
    out << ", ";
  }

  // member: in_parking_slot
  {
    out << "in_parking_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.in_parking_slot, out);
    out << ", ";
  }

  // member: associated_infos
  {
    if (msg.associated_infos.size() == 0) {
      out << "associated_infos: []";
    } else {
      out << "associated_infos: [";
      size_t pending_items = msg.associated_infos.size();
      for (auto item : msg.associated_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extra_infos
  {
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []";
    } else {
      out << "extra_infos: [";
      size_t pending_items = msg.extra_infos.size();
      for (auto item : msg.extra_infos) {
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
  const ObstacleCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obs_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_name: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_name, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obs_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
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

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: track_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_length: ";
    rosidl_generator_traits::value_to_yaml(msg.track_length, out);
    out << "\n";
  }

  // member: tracking_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << "\n";
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box:\n";
    to_block_style_yaml(msg.bounding_box, out, indentation + 2);
  }

  // member: miss_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "miss_length: ";
    rosidl_generator_traits::value_to_yaml(msg.miss_length, out);
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

  // member: in_parking_slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_parking_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.in_parking_slot, out);
    out << "\n";
  }

  // member: associated_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associated_infos.size() == 0) {
      out << "associated_infos: []\n";
    } else {
      out << "associated_infos:\n";
      for (auto item : msg.associated_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: extra_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []\n";
    } else {
      out << "extra_infos:\n";
      for (auto item : msg.extra_infos) {
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

inline std::string to_yaml(const ObstacleCommon & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::ObstacleCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::ObstacleCommon & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::ObstacleCommon>()
{
  return "deva_perception_msgs::msg::ObstacleCommon";
}

template<>
inline const char * name<deva_perception_msgs::msg::ObstacleCommon>()
{
  return "deva_perception_msgs/msg/ObstacleCommon";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::ObstacleCommon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::ObstacleCommon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::ObstacleCommon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__TRAITS_HPP_
