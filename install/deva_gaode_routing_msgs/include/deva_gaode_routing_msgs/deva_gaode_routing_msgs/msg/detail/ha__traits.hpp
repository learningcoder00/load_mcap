// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/HA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ha__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'feature_point'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__traits.hpp"
// Member 'lane'
#include "deva_gaode_routing_msgs/msg/detail/lane__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HA & msg,
  std::ostream & out)
{
  out << "{";
  // member: feature_point
  {
    out << "feature_point: ";
    to_flow_style_yaml(msg.feature_point, out);
    out << ", ";
  }

  // member: lane
  {
    out << "lane: ";
    to_flow_style_yaml(msg.lane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feature_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_point:\n";
    to_block_style_yaml(msg.feature_point, out, indentation + 2);
  }

  // member: lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane:\n";
    to_block_style_yaml(msg.lane, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HA & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::HA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::HA & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::HA>()
{
  return "deva_gaode_routing_msgs::msg::HA";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::HA>()
{
  return "deva_gaode_routing_msgs/msg/HA";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::HA>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::FeaturePoint>::value && has_fixed_size<deva_gaode_routing_msgs::msg::LANE>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::HA>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::FeaturePoint>::value && has_bounded_size<deva_gaode_routing_msgs::msg::LANE>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::HA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__TRAITS_HPP_
