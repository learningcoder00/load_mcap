// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'world_info'
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__traits.hpp"
// Member 'full_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RVDynamicObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: life_time
  {
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
    out << ", ";
  }

  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: select_level
  {
    out << "select_level: ";
    rosidl_generator_traits::value_to_yaml(msg.select_level, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: mapped_type
  {
    out << "mapped_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mapped_type, out);
    out << ", ";
  }

  // member: world_info
  {
    out << "world_info: ";
    to_flow_style_yaml(msg.world_info, out);
    out << ", ";
  }

  // member: full_bbox
  {
    out << "full_bbox: ";
    to_flow_style_yaml(msg.full_bbox, out);
    out << ", ";
  }

  // member: tail_bbox
  {
    out << "tail_bbox: ";
    to_flow_style_yaml(msg.tail_bbox, out);
    out << ", ";
  }

  // member: full_occ_score
  {
    out << "full_occ_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_occ_score, out);
    out << ", ";
  }

  // member: full_trunc_score
  {
    out << "full_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_trunc_score, out);
    out << ", ";
  }

  // member: obj_source
  {
    out << "obj_source: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RVDynamicObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: life_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
    out << "\n";
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: select_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "select_level: ";
    rosidl_generator_traits::value_to_yaml(msg.select_level, out);
    out << "\n";
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

  // member: mapped_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapped_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mapped_type, out);
    out << "\n";
  }

  // member: world_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_info:\n";
    to_block_style_yaml(msg.world_info, out, indentation + 2);
  }

  // member: full_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_bbox:\n";
    to_block_style_yaml(msg.full_bbox, out, indentation + 2);
  }

  // member: tail_bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_bbox:\n";
    to_block_style_yaml(msg.tail_bbox, out, indentation + 2);
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

  // member: full_trunc_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_trunc_score: ";
    rosidl_generator_traits::value_to_yaml(msg.full_trunc_score, out);
    out << "\n";
  }

  // member: obj_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_source: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_source, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RVDynamicObstacle & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RVDynamicObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RVDynamicObstacle & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RVDynamicObstacle>()
{
  return "deva_perception_msgs::msg::RVDynamicObstacle";
}

template<>
inline const char * name<deva_perception_msgs::msg::RVDynamicObstacle>()
{
  return "deva_perception_msgs/msg/RVDynamicObstacle";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RVDynamicObstacle>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::BoundingBox2d>::value && has_fixed_size<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RVDynamicObstacle>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::BoundingBox2d>::value && has_bounded_size<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::RVDynamicObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__TRAITS_HPP_
