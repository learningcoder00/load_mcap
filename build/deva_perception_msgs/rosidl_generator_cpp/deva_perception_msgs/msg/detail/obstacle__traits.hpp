// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'detection_velocity'
// Member 'velocity'
// Member 'velocity_variance'
// Member 'acceleration'
// Member 'acceleration_variance'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__traits.hpp"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/dict_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: dimensions
  {
    out << "dimensions: ";
    to_flow_style_yaml(msg.dimensions, out);
    out << ", ";
  }

  // member: detection_velocity
  {
    out << "detection_velocity: ";
    to_flow_style_yaml(msg.detection_velocity, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: velocity_variance
  {
    out << "velocity_variance: ";
    to_flow_style_yaml(msg.velocity_variance, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: acceleration_variance
  {
    out << "acceleration_variance: ";
    to_flow_style_yaml(msg.acceleration_variance, out);
    out << ", ";
  }

  // member: tracking_time
  {
    out << "tracking_time: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_time, out);
    out << ", ";
  }

  // member: track_length
  {
    out << "track_length: ";
    rosidl_generator_traits::value_to_yaml(msg.track_length, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: is_predict
  {
    out << "is_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.is_predict, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: bbox2d
  {
    out << "bbox2d: ";
    to_flow_style_yaml(msg.bbox2d, out);
    out << ", ";
  }

  // member: extra_info
  {
    if (msg.extra_info.size() == 0) {
      out << "extra_info: []";
    } else {
      out << "extra_info: [";
      size_t pending_items = msg.extra_info.size();
      for (auto item : msg.extra_info) {
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
  const Obstacle & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_block_style_yaml(msg.dimensions, out, indentation + 2);
  }

  // member: detection_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_velocity:\n";
    to_block_style_yaml(msg.detection_velocity, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: velocity_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_variance:\n";
    to_block_style_yaml(msg.velocity_variance, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: acceleration_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_variance:\n";
    to_block_style_yaml(msg.acceleration_variance, out, indentation + 2);
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

  // member: track_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_length: ";
    rosidl_generator_traits::value_to_yaml(msg.track_length, out);
    out << "\n";
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

  // member: is_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.is_predict, out);
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

  // member: bbox2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox2d:\n";
    to_block_style_yaml(msg.bbox2d, out, indentation + 2);
  }

  // member: extra_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_info.size() == 0) {
      out << "extra_info: []\n";
    } else {
      out << "extra_info:\n";
      for (auto item : msg.extra_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Obstacle & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Obstacle>()
{
  return "deva_perception_msgs::msg::Obstacle";
}

template<>
inline const char * name<deva_perception_msgs::msg::Obstacle>()
{
  return "deva_perception_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
