// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGRedLightResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGRedLightResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: raw_link_id
  {
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGRedLightResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: raw_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << "\n";
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGRedLightResult & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RGRedLightResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RGRedLightResult & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RGRedLightResult>()
{
  return "deva_gaode_routing_msgs::msg::RGRedLightResult";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RGRedLightResult>()
{
  return "deva_gaode_routing_msgs/msg/RGRedLightResult";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RGRedLightResult>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::RoutePos>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RGRedLightResult>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::RoutePos>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RGRedLightResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__TRAITS_HPP_
