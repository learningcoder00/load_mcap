// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/radar_object_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'position_std'
// Member 'nearest_point'
// Member 'nearest_point_std'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity_rel'
// Member 'velocity_rel_std'
// Member 'velocity_abs'
// Member 'velocity_abs_std'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration_rel'
// Member 'acceleration_abs'
#include "geometry_msgs/msg/detail/accel__traits.hpp"
// Member 'box_lwh'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObjectInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: position_std
  {
    out << "position_std: ";
    to_flow_style_yaml(msg.position_std, out);
    out << ", ";
  }

  // member: nearest_point
  {
    out << "nearest_point: ";
    to_flow_style_yaml(msg.nearest_point, out);
    out << ", ";
  }

  // member: nearest_point_std
  {
    out << "nearest_point_std: ";
    to_flow_style_yaml(msg.nearest_point_std, out);
    out << ", ";
  }

  // member: velocity_rel
  {
    out << "velocity_rel: ";
    to_flow_style_yaml(msg.velocity_rel, out);
    out << ", ";
  }

  // member: velocity_rel_std
  {
    out << "velocity_rel_std: ";
    to_flow_style_yaml(msg.velocity_rel_std, out);
    out << ", ";
  }

  // member: velocity_abs
  {
    out << "velocity_abs: ";
    to_flow_style_yaml(msg.velocity_abs, out);
    out << ", ";
  }

  // member: velocity_abs_std
  {
    out << "velocity_abs_std: ";
    to_flow_style_yaml(msg.velocity_abs_std, out);
    out << ", ";
  }

  // member: acceleration_rel
  {
    out << "acceleration_rel: ";
    to_flow_style_yaml(msg.acceleration_rel, out);
    out << ", ";
  }

  // member: acceleration_abs
  {
    out << "acceleration_abs: ";
    to_flow_style_yaml(msg.acceleration_abs, out);
    out << ", ";
  }

  // member: dynamic_property
  {
    out << "dynamic_property: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_property, out);
    out << ", ";
  }

  // member: heading_angle
  {
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << ", ";
  }

  // member: life_cycles
  {
    out << "life_cycles: ";
    rosidl_generator_traits::value_to_yaml(msg.life_cycles, out);
    out << ", ";
  }

  // member: box_lwh
  {
    out << "box_lwh: ";
    to_flow_style_yaml(msg.box_lwh, out);
    out << ", ";
  }

  // member: box_center_lat
  {
    out << "box_center_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_lat, out);
    out << ", ";
  }

  // member: box_center_lgt
  {
    out << "box_center_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_lgt, out);
    out << ", ";
  }

  // member: snr
  {
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: obstacle_probability
  {
    out << "obstacle_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_probability, out);
    out << ", ";
  }

  // member: probability_of_existence
  {
    out << "probability_of_existence: ";
    rosidl_generator_traits::value_to_yaml(msg.probability_of_existence, out);
    out << ", ";
  }

  // member: mirror_probability
  {
    out << "mirror_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_probability, out);
    out << ", ";
  }

  // member: not_real_probability
  {
    out << "not_real_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.not_real_probability, out);
    out << ", ";
  }

  // member: rcs
  {
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << ", ";
  }

  // member: target_classification_confidence
  {
    out << "target_classification_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.target_classification_confidence, out);
    out << ", ";
  }

  // member: track_status
  {
    out << "track_status: ";
    rosidl_generator_traits::value_to_yaml(msg.track_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarObjectInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: position_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_std:\n";
    to_block_style_yaml(msg.position_std, out, indentation + 2);
  }

  // member: nearest_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_point:\n";
    to_block_style_yaml(msg.nearest_point, out, indentation + 2);
  }

  // member: nearest_point_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_point_std:\n";
    to_block_style_yaml(msg.nearest_point_std, out, indentation + 2);
  }

  // member: velocity_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_rel:\n";
    to_block_style_yaml(msg.velocity_rel, out, indentation + 2);
  }

  // member: velocity_rel_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_rel_std:\n";
    to_block_style_yaml(msg.velocity_rel_std, out, indentation + 2);
  }

  // member: velocity_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_abs:\n";
    to_block_style_yaml(msg.velocity_abs, out, indentation + 2);
  }

  // member: velocity_abs_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_abs_std:\n";
    to_block_style_yaml(msg.velocity_abs_std, out, indentation + 2);
  }

  // member: acceleration_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_rel:\n";
    to_block_style_yaml(msg.acceleration_rel, out, indentation + 2);
  }

  // member: acceleration_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_abs:\n";
    to_block_style_yaml(msg.acceleration_abs, out, indentation + 2);
  }

  // member: dynamic_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_property: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_property, out);
    out << "\n";
  }

  // member: heading_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << "\n";
  }

  // member: life_cycles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "life_cycles: ";
    rosidl_generator_traits::value_to_yaml(msg.life_cycles, out);
    out << "\n";
  }

  // member: box_lwh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_lwh:\n";
    to_block_style_yaml(msg.box_lwh, out, indentation + 2);
  }

  // member: box_center_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_lat, out);
    out << "\n";
  }

  // member: box_center_lgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_lgt: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_lgt, out);
    out << "\n";
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snr: ";
    rosidl_generator_traits::value_to_yaml(msg.snr, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: obstacle_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_probability, out);
    out << "\n";
  }

  // member: probability_of_existence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability_of_existence: ";
    rosidl_generator_traits::value_to_yaml(msg.probability_of_existence, out);
    out << "\n";
  }

  // member: mirror_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_probability, out);
    out << "\n";
  }

  // member: not_real_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_real_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.not_real_probability, out);
    out << "\n";
  }

  // member: rcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << "\n";
  }

  // member: target_classification_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_classification_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.target_classification_confidence, out);
    out << "\n";
  }

  // member: track_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_status: ";
    rosidl_generator_traits::value_to_yaml(msg.track_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObjectInfo & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RadarObjectInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RadarObjectInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RadarObjectInfo>()
{
  return "deva_perception_msgs::msg::RadarObjectInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::RadarObjectInfo>()
{
  return "deva_perception_msgs/msg/RadarObjectInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RadarObjectInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RadarObjectInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::RadarObjectInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__TRAITS_HPP_
