// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RVDynamicObstacleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cipv_id
  {
    out << "cipv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_id, out);
    out << ", ";
  }

  // member: num_obstacles
  {
    out << "num_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_obstacles, out);
    out << ", ";
  }

  // member: obstacles
  {
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []";
    } else {
      out << "obstacles: [";
      size_t pending_items = msg.obstacles.size();
      for (auto item : msg.obstacles) {
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
  const RVDynamicObstacleArray & msg,
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

  // member: cipv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_id, out);
    out << "\n";
  }

  // member: num_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_obstacles, out);
    out << "\n";
  }

  // member: obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []\n";
    } else {
      out << "obstacles:\n";
      for (auto item : msg.obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RVDynamicObstacleArray & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RVDynamicObstacleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RVDynamicObstacleArray & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RVDynamicObstacleArray>()
{
  return "deva_perception_msgs::msg::RVDynamicObstacleArray";
}

template<>
inline const char * name<deva_perception_msgs::msg::RVDynamicObstacleArray>()
{
  return "deva_perception_msgs/msg/RVDynamicObstacleArray";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RVDynamicObstacleArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RVDynamicObstacleArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::RVDynamicObstacleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__TRAITS_HPP_
