// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/radar_vehicle_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarVehicleInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: position_x
  {
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << ", ";
  }

  // member: position_y
  {
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << ", ";
  }

  // member: rel_vel_x
  {
    out << "rel_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_x, out);
    out << ", ";
  }

  // member: rel_vel_y
  {
    out << "rel_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_y, out);
    out << ", ";
  }

  // member: abs_vel_x
  {
    out << "abs_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_x, out);
    out << ", ";
  }

  // member: abs_vel_y
  {
    out << "abs_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_y, out);
    out << ", ";
  }

  // member: rel_acc_x
  {
    out << "rel_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_acc_x, out);
    out << ", ";
  }

  // member: rel_acc_y
  {
    out << "rel_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_acc_y, out);
    out << ", ";
  }

  // member: abs_acc_x
  {
    out << "abs_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_x, out);
    out << ", ";
  }

  // member: abs_acc_y
  {
    out << "abs_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_y, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: radar_time
  {
    out << "radar_time: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_time, out);
    out << ", ";
  }

  // member: vehicle_time
  {
    out << "vehicle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarVehicleInfo & msg,
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

  // member: position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.position_x, out);
    out << "\n";
  }

  // member: position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.position_y, out);
    out << "\n";
  }

  // member: rel_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_x, out);
    out << "\n";
  }

  // member: rel_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_y, out);
    out << "\n";
  }

  // member: abs_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_x, out);
    out << "\n";
  }

  // member: abs_vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_y, out);
    out << "\n";
  }

  // member: rel_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_acc_x, out);
    out << "\n";
  }

  // member: rel_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_acc_y, out);
    out << "\n";
  }

  // member: abs_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_x, out);
    out << "\n";
  }

  // member: abs_acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_y, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: radar_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_time: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_time, out);
    out << "\n";
  }

  // member: vehicle_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_time: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarVehicleInfo & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RadarVehicleInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RadarVehicleInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RadarVehicleInfo>()
{
  return "deva_perception_msgs::msg::RadarVehicleInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::RadarVehicleInfo>()
{
  return "deva_perception_msgs/msg/RadarVehicleInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RadarVehicleInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RadarVehicleInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::RadarVehicleInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__TRAITS_HPP_
