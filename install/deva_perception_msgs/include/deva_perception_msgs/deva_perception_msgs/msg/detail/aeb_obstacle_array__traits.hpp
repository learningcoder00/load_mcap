// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/AEBObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/aeb_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'aeb_obstacles'
#include "deva_perception_msgs/msg/detail/aeb_obstacle__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AEBObstacleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: translation
  {
    out << "translation: ";
    to_flow_style_yaml(msg.translation, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: aeb_obstacles
  {
    if (msg.aeb_obstacles.size() == 0) {
      out << "aeb_obstacles: []";
    } else {
      out << "aeb_obstacles: [";
      size_t pending_items = msg.aeb_obstacles.size();
      for (auto item : msg.aeb_obstacles) {
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
  const AEBObstacleArray & msg,
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

  // member: translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation:\n";
    to_block_style_yaml(msg.translation, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: aeb_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aeb_obstacles.size() == 0) {
      out << "aeb_obstacles: []\n";
    } else {
      out << "aeb_obstacles:\n";
      for (auto item : msg.aeb_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AEBObstacleArray & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::AEBObstacleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::AEBObstacleArray & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::AEBObstacleArray>()
{
  return "deva_perception_msgs::msg::AEBObstacleArray";
}

template<>
inline const char * name<deva_perception_msgs::msg::AEBObstacleArray>()
{
  return "deva_perception_msgs/msg/AEBObstacleArray";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::AEBObstacleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::AEBObstacleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::AEBObstacleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE_ARRAY__TRAITS_HPP_
