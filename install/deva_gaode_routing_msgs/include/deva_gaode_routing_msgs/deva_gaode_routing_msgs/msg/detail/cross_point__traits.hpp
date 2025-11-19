// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/CrossPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/cross_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'geom'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CrossPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: geom
  {
    out << "geom: ";
    to_flow_style_yaml(msg.geom, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: cross_id
  {
    out << "cross_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CrossPoint & msg,
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

  // member: geom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geom:\n";
    to_block_style_yaml(msg.geom, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: cross_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CrossPoint & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::CrossPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::CrossPoint & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::CrossPoint>()
{
  return "deva_gaode_routing_msgs::msg::CrossPoint";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::CrossPoint>()
{
  return "deva_gaode_routing_msgs/msg/CrossPoint";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::CrossPoint>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::CrossPoint>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::CrossPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__TRAITS_HPP_
