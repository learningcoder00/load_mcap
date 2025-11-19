// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebNotAvoidInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coord_2d'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebNotAvoidInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: coord_2d
  {
    out << "coord_2d: ";
    to_flow_style_yaml(msg.coord_2d, out);
    out << ", ";
  }

  // member: dist_to_car
  {
    out << "dist_to_car: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_car, out);
    out << ", ";
  }

  // member: forbid_type
  {
    out << "forbid_type: ";
    rosidl_generator_traits::value_to_yaml(msg.forbid_type, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebNotAvoidInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coord_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coord_2d:\n";
    to_block_style_yaml(msg.coord_2d, out, indentation + 2);
  }

  // member: dist_to_car
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_car: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_car, out);
    out << "\n";
  }

  // member: forbid_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forbid_type: ";
    rosidl_generator_traits::value_to_yaml(msg.forbid_type, out);
    out << "\n";
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

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebNotAvoidInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebNotAvoidInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebNotAvoidInfo>()
{
  return "deva_gaode_routing_msgs::msg::WebNotAvoidInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebNotAvoidInfo>()
{
  return "deva_gaode_routing_msgs/msg/WebNotAvoidInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebNotAvoidInfo>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebNotAvoidInfo>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::WebPoint>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebNotAvoidInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__TRAITS_HPP_
