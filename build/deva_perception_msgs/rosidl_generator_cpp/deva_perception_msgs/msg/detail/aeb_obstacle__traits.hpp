// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/aeb_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__traits.hpp"
// Member 'head_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__traits.hpp"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AEBObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: obstacle_type
  {
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << ", ";
  }

  // member: head_bbox
  {
    out << "head_bbox: ";
    to_flow_style_yaml(msg.head_bbox, out);
    out << ", ";
  }

  // member: tail_bbox
  {
    out << "tail_bbox: ";
    to_flow_style_yaml(msg.tail_bbox, out);
    out << ", ";
  }

  // member: ground_points
  {
    if (msg.ground_points.size() == 0) {
      out << "ground_points: []";
    } else {
      out << "ground_points: [";
      size_t pending_items = msg.ground_points.size();
      for (auto item : msg.ground_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: full_occ_score
  {
    out << "full_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_occ_score, out);
    out << ", ";
  }

  // member: head_occ_score
  {
    out << "head_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.head_occ_score, out);
    out << ", ";
  }

  // member: tail_occ_score
  {
    out << "tail_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.tail_occ_score, out);
    out << ", ";
  }

  // member: full_trunc_score
  {
    out << "full_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_trunc_score, out);
    out << ", ";
  }

  // member: head_trunc_score
  {
    out << "head_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.head_trunc_score, out);
    out << ", ";
  }

  // member: tail_trunc_score
  {
    out << "tail_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.tail_trunc_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AEBObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle:\n";
    to_block_style_yaml(msg.obstacle, out, indentation + 2);
  }

  // member: obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << "\n";
  }

  // member: head_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_bbox:\n";
    to_block_style_yaml(msg.head_bbox, out, indentation + 2);
  }

  // member: tail_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_bbox:\n";
    to_block_style_yaml(msg.tail_bbox, out, indentation + 2);
  }

  // member: ground_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ground_points.size() == 0) {
      out << "ground_points: []\n";
    } else {
      out << "ground_points:\n";
      for (auto item : msg.ground_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: full_occ_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_occ_score, out);
    out << "\n";
  }

  // member: head_occ_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.head_occ_score, out);
    out << "\n";
  }

  // member: tail_occ_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.tail_occ_score, out);
    out << "\n";
  }

  // member: full_trunc_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_trunc_score, out);
    out << "\n";
  }

  // member: head_trunc_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.head_trunc_score, out);
    out << "\n";
  }

  // member: tail_trunc_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.tail_trunc_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AEBObstacle & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::AEBObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::AEBObstacle & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::AEBObstacle>()
{
  return "deva_perception_msgs::msg::AEBObstacle";
}

template<>
inline const char * name<deva_perception_msgs::msg::AEBObstacle>()
{
  return "deva_perception_msgs/msg/AEBObstacle";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::AEBObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::AEBObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::AEBObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__TRAITS_HPP_
