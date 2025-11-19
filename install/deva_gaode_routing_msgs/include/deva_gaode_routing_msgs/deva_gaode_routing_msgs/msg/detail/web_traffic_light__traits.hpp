// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"
// Member 'light_info'
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebTrafficLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: road_id
  {
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << ", ";
  }

  // member: road_index
  {
    out << "road_index: ";
    rosidl_generator_traits::value_to_yaml(msg.road_index, out);
    out << ", ";
  }

  // member: setp_index
  {
    out << "setp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.setp_index, out);
    out << ", ";
  }

  // member: path_id
  {
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: light_info
  {
    out << "light_info: ";
    to_flow_style_yaml(msg.light_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebTrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: road_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << "\n";
  }

  // member: road_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_index: ";
    rosidl_generator_traits::value_to_yaml(msg.road_index, out);
    out << "\n";
  }

  // member: setp_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.setp_index, out);
    out << "\n";
  }

  // member: path_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: light_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_info:\n";
    to_block_style_yaml(msg.light_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebTrafficLight & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::WebTrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebTrafficLight>()
{
  return "deva_gaode_routing_msgs::msg::WebTrafficLight";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebTrafficLight>()
{
  return "deva_gaode_routing_msgs/msg/WebTrafficLight";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebTrafficLight>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::WebLightInfo>::value && has_fixed_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebTrafficLight>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::WebLightInfo>::value && has_bounded_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebTrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__TRAITS_HPP_
