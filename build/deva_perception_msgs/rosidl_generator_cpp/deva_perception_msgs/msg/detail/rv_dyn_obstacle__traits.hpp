// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__traits.hpp"
// Member 'bbox'
// Member 'head_bbox'
// Member 'tail_bbox'
// Member 'ped_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__traits.hpp"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__traits.hpp"
// Member 'subclassification_type'
#include "deva_perception_msgs/msg/detail/subclassification_type__traits.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RVDynObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: dynamic_obstacle_type
  {
    out << "dynamic_obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_obstacle_type, out);
    out << ", ";
  }

  // member: det_score
  {
    out << "det_score: ";
    rosidl_generator_traits::value_to_yaml(msg.det_score, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
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
    out << ", ";
  }

  // member: ped_bbox
  {
    out << "ped_bbox: ";
    to_flow_style_yaml(msg.ped_bbox, out);
    out << ", ";
  }

  // member: subclassification_type
  {
    out << "subclassification_type: ";
    to_flow_style_yaml(msg.subclassification_type, out);
    out << ", ";
  }

  // member: subclass_score
  {
    out << "subclass_score: ";
    rosidl_generator_traits::value_to_yaml(msg.subclass_score, out);
    out << ", ";
  }

  // member: light_valid
  {
    out << "light_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.light_valid, out);
    out << ", ";
  }

  // member: turn_type
  {
    out << "turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_type, out);
    out << ", ";
  }

  // member: turn_score
  {
    out << "turn_score: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_score, out);
    out << ", ";
  }

  // member: brake_type
  {
    out << "brake_type: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_type, out);
    out << ", ";
  }

  // member: brake_score
  {
    out << "brake_score: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_score, out);
    out << ", ";
  }

  // member: hazard_type
  {
    out << "hazard_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_type, out);
    out << ", ";
  }

  // member: hazard_score
  {
    out << "hazard_score: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_score, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RVDynObstacle & msg,
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

  // member: dynamic_obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_obstacle_type, out);
    out << "\n";
  }

  // member: det_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "det_score: ";
    rosidl_generator_traits::value_to_yaml(msg.det_score, out);
    out << "\n";
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
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

  // member: ped_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ped_bbox:\n";
    to_block_style_yaml(msg.ped_bbox, out, indentation + 2);
  }

  // member: subclassification_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subclassification_type:\n";
    to_block_style_yaml(msg.subclassification_type, out, indentation + 2);
  }

  // member: subclass_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subclass_score: ";
    rosidl_generator_traits::value_to_yaml(msg.subclass_score, out);
    out << "\n";
  }

  // member: light_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.light_valid, out);
    out << "\n";
  }

  // member: turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_type, out);
    out << "\n";
  }

  // member: turn_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_score: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_score, out);
    out << "\n";
  }

  // member: brake_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_type: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_type, out);
    out << "\n";
  }

  // member: brake_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_score: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_score, out);
    out << "\n";
  }

  // member: hazard_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_type, out);
    out << "\n";
  }

  // member: hazard_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hazard_score: ";
    rosidl_generator_traits::value_to_yaml(msg.hazard_score, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RVDynObstacle & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RVDynObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RVDynObstacle & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RVDynObstacle>()
{
  return "deva_perception_msgs::msg::RVDynObstacle";
}

template<>
inline const char * name<deva_perception_msgs::msg::RVDynObstacle>()
{
  return "deva_perception_msgs/msg/RVDynObstacle";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RVDynObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RVDynObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::RVDynObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__TRAITS_HPP_
