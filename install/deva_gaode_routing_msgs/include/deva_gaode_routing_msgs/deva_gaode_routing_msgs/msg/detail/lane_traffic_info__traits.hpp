// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneTrafficInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_bus
  {
    out << "is_bus: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bus, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: arrow
  {
    out << "arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.arrow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneTrafficInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_bus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_bus: ";
    rosidl_generator_traits::value_to_yaml(msg.is_bus, out);
    out << "\n";
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.arrow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneTrafficInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LaneTrafficInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LaneTrafficInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LaneTrafficInfo>()
{
  return "deva_gaode_routing_msgs::msg::LaneTrafficInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LaneTrafficInfo>()
{
  return "deva_gaode_routing_msgs/msg/LaneTrafficInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LaneTrafficInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LaneTrafficInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LaneTrafficInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__TRAITS_HPP_
