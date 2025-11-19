// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__TRAITS_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_localization_msgs/msg/detail/gnss_best_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GnssBestPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: solution_status
  {
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << ", ";
  }

  // member: position_type
  {
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: height_msl
  {
    out << "height_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.height_msl, out);
    out << ", ";
  }

  // member: undulation
  {
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << ", ";
  }

  // member: datum_id
  {
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << ", ";
  }

  // member: lat_sigma
  {
    out << "lat_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_sigma, out);
    out << ", ";
  }

  // member: lon_sigma
  {
    out << "lon_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_sigma, out);
    out << ", ";
  }

  // member: height_sigma
  {
    out << "height_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.height_sigma, out);
    out << ", ";
  }

  // member: diff_age
  {
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << ", ";
  }

  // member: solution_age
  {
    out << "solution_age: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_age, out);
    out << ", ";
  }

  // member: num_satellites_tracked
  {
    out << "num_satellites_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_tracked, out);
    out << ", ";
  }

  // member: num_satellites_used_in_solution
  {
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << ", ";
  }

  // member: num_gps_and_glonass_l1_used_in_solution
  {
    out << "num_gps_and_glonass_l1_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_used_in_solution, out);
    out << ", ";
  }

  // member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    out << "num_gps_and_glonass_l1_and_l2_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_and_l2_used_in_solution, out);
    out << ", ";
  }

  // member: extended_solution_status
  {
    out << "extended_solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_solution_status, out);
    out << ", ";
  }

  // member: gps_glonass_used_mask
  {
    out << "gps_glonass_used_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_glonass_used_mask, out);
    out << ", ";
  }

  // member: galileo_beidou_used_mask
  {
    out << "galileo_beidou_used_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_beidou_used_mask, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: velocity_latency
  {
    out << "velocity_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_latency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GnssBestPose & msg,
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

  // member: solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status, out);
    out << "\n";
  }

  // member: position_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_type: ";
    rosidl_generator_traits::value_to_yaml(msg.position_type, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: height_msl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.height_msl, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    rosidl_generator_traits::value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: datum_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.datum_id, out);
    out << "\n";
  }

  // member: lat_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_sigma, out);
    out << "\n";
  }

  // member: lon_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.lon_sigma, out);
    out << "\n";
  }

  // member: height_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.height_sigma, out);
    out << "\n";
  }

  // member: diff_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diff_age: ";
    rosidl_generator_traits::value_to_yaml(msg.diff_age, out);
    out << "\n";
  }

  // member: solution_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_age: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_age, out);
    out << "\n";
  }

  // member: num_satellites_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_tracked, out);
    out << "\n";
  }

  // member: num_satellites_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_satellites_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_satellites_used_in_solution, out);
    out << "\n";
  }

  // member: num_gps_and_glonass_l1_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_gps_and_glonass_l1_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_used_in_solution, out);
    out << "\n";
  }

  // member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_gps_and_glonass_l1_and_l2_used_in_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.num_gps_and_glonass_l1_and_l2_used_in_solution, out);
    out << "\n";
  }

  // member: extended_solution_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extended_solution_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_solution_status, out);
    out << "\n";
  }

  // member: gps_glonass_used_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_glonass_used_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_glonass_used_mask, out);
    out << "\n";
  }

  // member: galileo_beidou_used_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_beidou_used_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_beidou_used_mask, out);
    out << "\n";
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: velocity_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_latency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GnssBestPose & msg, bool use_flow_style = false)
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

}  // namespace deva_localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_localization_msgs::msg::GnssBestPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_localization_msgs::msg::GnssBestPose & msg)
{
  return deva_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_localization_msgs::msg::GnssBestPose>()
{
  return "deva_localization_msgs::msg::GnssBestPose";
}

template<>
inline const char * name<deva_localization_msgs::msg::GnssBestPose>()
{
  return "deva_localization_msgs/msg/GnssBestPose";
}

template<>
struct has_fixed_size<deva_localization_msgs::msg::GnssBestPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_localization_msgs::msg::GnssBestPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_localization_msgs::msg::GnssBestPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__TRAITS_HPP_
