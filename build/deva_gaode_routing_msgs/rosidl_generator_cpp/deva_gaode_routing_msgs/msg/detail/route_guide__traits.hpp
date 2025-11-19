// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RouteGuide.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/route_guide__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'routes'
#include "deva_gaode_routing_msgs/msg/detail/route__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteGuide & msg,
  std::ostream & out)
{
  out << "{";
  // member: routes
  {
    if (msg.routes.size() == 0) {
      out << "routes: []";
    } else {
      out << "routes: [";
      size_t pending_items = msg.routes.size();
      for (auto item : msg.routes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RouteGuide & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: routes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.routes.size() == 0) {
      out << "routes: []\n";
    } else {
      out << "routes:\n";
      for (auto item : msg.routes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteGuide & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RouteGuide & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RouteGuide & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RouteGuide>()
{
  return "deva_gaode_routing_msgs::msg::RouteGuide";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RouteGuide>()
{
  return "deva_gaode_routing_msgs/msg/RouteGuide";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RouteGuide>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RouteGuide>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RouteGuide>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE__TRAITS_HPP_
