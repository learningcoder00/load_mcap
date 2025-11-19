// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/ultrasonic_radar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UltrasonicRadar & msg,
  std::ostream & out)
{
  out << "{";
  // member: radar_identify_id
  {
    out << "radar_identify_id: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_identify_id, out);
    out << ", ";
  }

  // member: radar_name
  {
    out << "radar_name: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_name, out);
    out << ", ";
  }

  // member: radar_type
  {
    out << "radar_type: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_type, out);
    out << ", ";
  }

  // member: radar_state
  {
    out << "radar_state: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_state, out);
    out << ", ";
  }

  // member: radar_tx_status
  {
    out << "radar_tx_status: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_tx_status, out);
    out << ", ";
  }

  // member: radar_rx_status
  {
    out << "radar_rx_status: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_rx_status, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: max_radar_distance
  {
    out << "max_radar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_radar_distance, out);
    out << ", ";
  }

  // member: radar_distance
  {
    out << "radar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_distance, out);
    out << ", ";
  }

  // member: radar_distance_vaild
  {
    out << "radar_distance_vaild: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_distance_vaild, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UltrasonicRadar & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: radar_identify_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_identify_id: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_identify_id, out);
    out << "\n";
  }

  // member: radar_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_name: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_name, out);
    out << "\n";
  }

  // member: radar_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_type: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_type, out);
    out << "\n";
  }

  // member: radar_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_state: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_state, out);
    out << "\n";
  }

  // member: radar_tx_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_tx_status: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_tx_status, out);
    out << "\n";
  }

  // member: radar_rx_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_rx_status: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_rx_status, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: max_radar_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_radar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_radar_distance, out);
    out << "\n";
  }

  // member: radar_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_distance, out);
    out << "\n";
  }

  // member: radar_distance_vaild
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_distance_vaild: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_distance_vaild, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UltrasonicRadar & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::UltrasonicRadar & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::UltrasonicRadar & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::UltrasonicRadar>()
{
  return "deva_perception_msgs::msg::UltrasonicRadar";
}

template<>
inline const char * name<deva_perception_msgs::msg::UltrasonicRadar>()
{
  return "deva_perception_msgs/msg/UltrasonicRadar";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::UltrasonicRadar>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::UltrasonicRadar>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::UltrasonicRadar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__TRAITS_HPP_
