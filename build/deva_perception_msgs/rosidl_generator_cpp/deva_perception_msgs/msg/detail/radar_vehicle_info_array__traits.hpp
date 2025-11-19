// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RadarVehicleInfoArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/radar_vehicle_info_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'info_array'
#include "deva_perception_msgs/msg/detail/radar_vehicle_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarVehicleInfoArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: info_array
  {
    if (msg.info_array.size() == 0) {
      out << "info_array: []";
    } else {
      out << "info_array: [";
      size_t pending_items = msg.info_array.size();
      for (auto item : msg.info_array) {
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
  const RadarVehicleInfoArray & msg,
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

  // member: info_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.info_array.size() == 0) {
      out << "info_array: []\n";
    } else {
      out << "info_array:\n";
      for (auto item : msg.info_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarVehicleInfoArray & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RadarVehicleInfoArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RadarVehicleInfoArray & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RadarVehicleInfoArray>()
{
  return "deva_perception_msgs::msg::RadarVehicleInfoArray";
}

template<>
inline const char * name<deva_perception_msgs::msg::RadarVehicleInfoArray>()
{
  return "deva_perception_msgs/msg/RadarVehicleInfoArray";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RadarVehicleInfoArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RadarVehicleInfoArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::RadarVehicleInfoArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO_ARRAY__TRAITS_HPP_
