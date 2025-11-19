// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dynamic_obstacles'
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RVDynObstacleList & msg,
  std::ostream & out)
{
  out << "{";
  // member: dynamic_obstacles
  {
    if (msg.dynamic_obstacles.size() == 0) {
      out << "dynamic_obstacles: []";
    } else {
      out << "dynamic_obstacles: [";
      size_t pending_items = msg.dynamic_obstacles.size();
      for (auto item : msg.dynamic_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RVDynObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dynamic_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dynamic_obstacles.size() == 0) {
      out << "dynamic_obstacles: []\n";
    } else {
      out << "dynamic_obstacles:\n";
      for (auto item : msg.dynamic_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RVDynObstacleList & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RVDynObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RVDynObstacleList & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RVDynObstacleList>()
{
  return "deva_perception_msgs::msg::RVDynObstacleList";
}

template<>
inline const char * name<deva_perception_msgs::msg::RVDynObstacleList>()
{
  return "deva_perception_msgs/msg/RVDynObstacleList";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RVDynObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RVDynObstacleList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::RVDynObstacleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__TRAITS_HPP_
