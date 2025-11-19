// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/obstacle_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleTimestamp & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: radar_timestamps
  {
    if (msg.radar_timestamps.size() == 0) {
      out << "radar_timestamps: []";
    } else {
      out << "radar_timestamps: [";
      size_t pending_items = msg.radar_timestamps.size();
      for (auto item : msg.radar_timestamps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: camera_timestamps
  {
    if (msg.camera_timestamps.size() == 0) {
      out << "camera_timestamps: []";
    } else {
      out << "camera_timestamps: [";
      size_t pending_items = msg.camera_timestamps.size();
      for (auto item : msg.camera_timestamps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lidar_timestamp
  {
    out << "lidar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_timestamp, out);
    out << ", ";
  }

  // member: loc_timestamp
  {
    out << "loc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleTimestamp & msg,
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

  // member: radar_timestamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.radar_timestamps.size() == 0) {
      out << "radar_timestamps: []\n";
    } else {
      out << "radar_timestamps:\n";
      for (auto item : msg.radar_timestamps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera_timestamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_timestamps.size() == 0) {
      out << "camera_timestamps: []\n";
    } else {
      out << "camera_timestamps:\n";
      for (auto item : msg.camera_timestamps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lidar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_timestamp, out);
    out << "\n";
  }

  // member: loc_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loc_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.loc_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleTimestamp & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::ObstacleTimestamp & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::ObstacleTimestamp & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::ObstacleTimestamp>()
{
  return "deva_perception_msgs::msg::ObstacleTimestamp";
}

template<>
inline const char * name<deva_perception_msgs::msg::ObstacleTimestamp>()
{
  return "deva_perception_msgs/msg/ObstacleTimestamp";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::ObstacleTimestamp>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::ObstacleTimestamp>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::ObstacleTimestamp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__TRAITS_HPP_
