// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'relative_velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'relative_acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObject & msg,
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

  // member: relative_velocity
  {
    out << "relative_velocity: ";
    to_flow_style_yaml(msg.relative_velocity, out);
    out << ", ";
  }

  // member: relative_acceleration
  {
    out << "relative_acceleration: ";
    to_flow_style_yaml(msg.relative_acceleration, out);
    out << ", ";
  }

  // member: rcs
  {
    out << "rcs: ";
    rosidl_generator_traits::value_to_yaml(msg.rcs, out);
    out << ", ";
  }

  // member: dynamic_property
  {
    out << "dynamic_property: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_property, out);
    out << ", ";
  }

  // member: quality_valid
  {
    out << "quality_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_valid, out);
    out << ", ";
  }

  // member: meas_state
  {
    out << "meas_state: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_state, out);
    out << ", ";
  }

  // member: prob_of_exist
  {
    out << "prob_of_exist: ";
    rosidl_generator_traits::value_to_yaml(msg.prob_of_exist, out);
    out << ", ";
  }

  // member: extended_valid
  {
    out << "extended_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_valid, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: center_latitude
  {
    out << "center_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.center_latitude, out);
    out << ", ";
  }

  // member: center_longitude
  {
    out << "center_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.center_longitude, out);
    out << ", ";
  }

  // member: orientation_angle
  {
    out << "orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_angle, out);
    out << ", ";
  }

  // member: class_type
  {
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarObject & msg,
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

  // member: relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity:\n";
    to_block_style_yaml(msg.relative_velocity, out, indentation + 2);
  }

  // member: relative_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_acceleration:\n";
    to_block_style_yaml(msg.relative_acceleration, out, indentation + 2);
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

  // member: dynamic_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_property: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_property, out);
    out << "\n";
  }

  // member: quality_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.quality_valid, out);
    out << "\n";
  }

  // member: meas_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meas_state: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_state, out);
    out << "\n";
  }

  // member: prob_of_exist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prob_of_exist: ";
    rosidl_generator_traits::value_to_yaml(msg.prob_of_exist, out);
    out << "\n";
  }

  // member: extended_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extended_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_valid, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: center_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.center_latitude, out);
    out << "\n";
  }

  // member: center_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.center_longitude, out);
    out << "\n";
  }

  // member: orientation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_angle, out);
    out << "\n";
  }

  // member: class_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObject & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RadarObject & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RadarObject>()
{
  return "deva_perception_msgs::msg::RadarObject";
}

template<>
inline const char * name<deva_perception_msgs::msg::RadarObject>()
{
  return "deva_perception_msgs/msg/RadarObject";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RadarObject>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RadarObject>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::RadarObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
