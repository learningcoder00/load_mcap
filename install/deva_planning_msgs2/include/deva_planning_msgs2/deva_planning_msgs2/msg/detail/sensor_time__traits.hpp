// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/SensorTime.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/sensor_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'localization_header'
// Member 'prediction_header'
// Member 'decision_header'
// Member 'chassis_header'
// Member 'traffic_light_header'
// Member 'traffic_pole_header'
// Member 'cone_header'
// Member 'map_header'
// Member 'padmsg_header'
// Member 'pull_over_header'
// Member 'routing_header'
// Member 'start_planning_header'
// Member 'finish_planning_header'
// Member 'navigator_start_header'
// Member 'navigator_end_header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorTime & msg,
  std::ostream & out)
{
  out << "{";
  // member: localization_header
  {
    out << "localization_header: ";
    to_flow_style_yaml(msg.localization_header, out);
    out << ", ";
  }

  // member: prediction_header
  {
    out << "prediction_header: ";
    to_flow_style_yaml(msg.prediction_header, out);
    out << ", ";
  }

  // member: decision_header
  {
    out << "decision_header: ";
    to_flow_style_yaml(msg.decision_header, out);
    out << ", ";
  }

  // member: chassis_header
  {
    out << "chassis_header: ";
    to_flow_style_yaml(msg.chassis_header, out);
    out << ", ";
  }

  // member: traffic_light_header
  {
    out << "traffic_light_header: ";
    to_flow_style_yaml(msg.traffic_light_header, out);
    out << ", ";
  }

  // member: traffic_pole_header
  {
    out << "traffic_pole_header: ";
    to_flow_style_yaml(msg.traffic_pole_header, out);
    out << ", ";
  }

  // member: cone_header
  {
    out << "cone_header: ";
    to_flow_style_yaml(msg.cone_header, out);
    out << ", ";
  }

  // member: map_header
  {
    out << "map_header: ";
    to_flow_style_yaml(msg.map_header, out);
    out << ", ";
  }

  // member: padmsg_header
  {
    out << "padmsg_header: ";
    to_flow_style_yaml(msg.padmsg_header, out);
    out << ", ";
  }

  // member: pull_over_header
  {
    out << "pull_over_header: ";
    to_flow_style_yaml(msg.pull_over_header, out);
    out << ", ";
  }

  // member: routing_header
  {
    out << "routing_header: ";
    to_flow_style_yaml(msg.routing_header, out);
    out << ", ";
  }

  // member: start_planning_header
  {
    out << "start_planning_header: ";
    to_flow_style_yaml(msg.start_planning_header, out);
    out << ", ";
  }

  // member: finish_planning_header
  {
    out << "finish_planning_header: ";
    to_flow_style_yaml(msg.finish_planning_header, out);
    out << ", ";
  }

  // member: navigator_start_header
  {
    out << "navigator_start_header: ";
    to_flow_style_yaml(msg.navigator_start_header, out);
    out << ", ";
  }

  // member: navigator_end_header
  {
    out << "navigator_end_header: ";
    to_flow_style_yaml(msg.navigator_end_header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: localization_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_header:\n";
    to_block_style_yaml(msg.localization_header, out, indentation + 2);
  }

  // member: prediction_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_header:\n";
    to_block_style_yaml(msg.prediction_header, out, indentation + 2);
  }

  // member: decision_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision_header:\n";
    to_block_style_yaml(msg.decision_header, out, indentation + 2);
  }

  // member: chassis_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_header:\n";
    to_block_style_yaml(msg.chassis_header, out, indentation + 2);
  }

  // member: traffic_light_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_header:\n";
    to_block_style_yaml(msg.traffic_light_header, out, indentation + 2);
  }

  // member: traffic_pole_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_pole_header:\n";
    to_block_style_yaml(msg.traffic_pole_header, out, indentation + 2);
  }

  // member: cone_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cone_header:\n";
    to_block_style_yaml(msg.cone_header, out, indentation + 2);
  }

  // member: map_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_header:\n";
    to_block_style_yaml(msg.map_header, out, indentation + 2);
  }

  // member: padmsg_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "padmsg_header:\n";
    to_block_style_yaml(msg.padmsg_header, out, indentation + 2);
  }

  // member: pull_over_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pull_over_header:\n";
    to_block_style_yaml(msg.pull_over_header, out, indentation + 2);
  }

  // member: routing_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routing_header:\n";
    to_block_style_yaml(msg.routing_header, out, indentation + 2);
  }

  // member: start_planning_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_planning_header:\n";
    to_block_style_yaml(msg.start_planning_header, out, indentation + 2);
  }

  // member: finish_planning_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish_planning_header:\n";
    to_block_style_yaml(msg.finish_planning_header, out, indentation + 2);
  }

  // member: navigator_start_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigator_start_header:\n";
    to_block_style_yaml(msg.navigator_start_header, out, indentation + 2);
  }

  // member: navigator_end_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navigator_end_header:\n";
    to_block_style_yaml(msg.navigator_end_header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorTime & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::SensorTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::SensorTime & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::SensorTime>()
{
  return "deva_planning_msgs2::msg::SensorTime";
}

template<>
inline const char * name<deva_planning_msgs2::msg::SensorTime>()
{
  return "deva_planning_msgs2/msg/SensorTime";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::SensorTime>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::SensorTime>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_planning_msgs2::msg::SensorTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__TRAITS_HPP_
