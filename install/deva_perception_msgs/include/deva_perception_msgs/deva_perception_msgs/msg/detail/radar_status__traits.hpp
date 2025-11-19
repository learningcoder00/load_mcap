// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/radar_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_detection
  {
    out << "num_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.num_detection, out);
    out << ", ";
  }

  // member: num_object
  {
    out << "num_object: ";
    rosidl_generator_traits::value_to_yaml(msg.num_object, out);
    out << ", ";
  }

  // member: status_enable
  {
    out << "status_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.status_enable, out);
    out << ", ";
  }

  // member: status_faulty
  {
    out << "status_faulty: ";
    rosidl_generator_traits::value_to_yaml(msg.status_faulty, out);
    out << ", ";
  }

  // member: status_latency
  {
    out << "status_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.status_latency, out);
    out << ", ";
  }

  // member: status_safety_fault
  {
    out << "status_safety_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.status_safety_fault, out);
    out << ", ";
  }

  // member: timestamp_h
  {
    out << "timestamp_h: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_h, out);
    out << ", ";
  }

  // member: timestamp_l
  {
    out << "timestamp_l: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_l, out);
    out << ", ";
  }

  // member: vdy_velocity
  {
    out << "vdy_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_velocity, out);
    out << ", ";
  }

  // member: vdy_yawrate
  {
    out << "vdy_yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_yawrate, out);
    out << ", ";
  }

  // member: vdy_timestamp
  {
    out << "vdy_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.num_detection, out);
    out << "\n";
  }

  // member: num_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_object: ";
    rosidl_generator_traits::value_to_yaml(msg.num_object, out);
    out << "\n";
  }

  // member: status_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.status_enable, out);
    out << "\n";
  }

  // member: status_faulty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_faulty: ";
    rosidl_generator_traits::value_to_yaml(msg.status_faulty, out);
    out << "\n";
  }

  // member: status_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.status_latency, out);
    out << "\n";
  }

  // member: status_safety_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_safety_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.status_safety_fault, out);
    out << "\n";
  }

  // member: timestamp_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_h: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_h, out);
    out << "\n";
  }

  // member: timestamp_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_l: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_l, out);
    out << "\n";
  }

  // member: vdy_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdy_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_velocity, out);
    out << "\n";
  }

  // member: vdy_yawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdy_yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_yawrate, out);
    out << "\n";
  }

  // member: vdy_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdy_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.vdy_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarStatus & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RadarStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RadarStatus & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RadarStatus>()
{
  return "deva_perception_msgs::msg::RadarStatus";
}

template<>
inline const char * name<deva_perception_msgs::msg::RadarStatus>()
{
  return "deva_perception_msgs/msg/RadarStatus";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RadarStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RadarStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::RadarStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__TRAITS_HPP_
