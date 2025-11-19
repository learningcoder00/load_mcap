// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RoutePos.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoutePos & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: coor_start
  {
    out << "coor_start: ";
    rosidl_generator_traits::value_to_yaml(msg.coor_start, out);
    out << ", ";
  }

  // member: offset_length
  {
    out << "offset_length: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_length, out);
    out << ", ";
  }

  // member: link_offset
  {
    out << "link_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.link_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoutePos & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: coor_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coor_start: ";
    rosidl_generator_traits::value_to_yaml(msg.coor_start, out);
    out << "\n";
  }

  // member: offset_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_length: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_length, out);
    out << "\n";
  }

  // member: link_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.link_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoutePos & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RoutePos & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RoutePos & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RoutePos>()
{
  return "deva_gaode_routing_msgs::msg::RoutePos";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RoutePos>()
{
  return "deva_gaode_routing_msgs/msg/RoutePos";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RoutePos>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::Coordinate>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RoutePos>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::Coordinate>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RoutePos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__TRAITS_HPP_
