// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RouteGuideResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route_guides'
#include "deva_gaode_routing_msgs/msg/detail/route_guide__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RouteGuideResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: route_guides
  {
    if (msg.route_guides.size() == 0) {
      out << "route_guides: []";
    } else {
      out << "route_guides: [";
      size_t pending_items = msg.route_guides.size();
      for (auto item : msg.route_guides) {
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
  const RouteGuideResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route_guides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route_guides.size() == 0) {
      out << "route_guides: []\n";
    } else {
      out << "route_guides:\n";
      for (auto item : msg.route_guides) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RouteGuideResponse & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RouteGuideResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RouteGuideResponse & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RouteGuideResponse>()
{
  return "deva_gaode_routing_msgs::msg::RouteGuideResponse";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RouteGuideResponse>()
{
  return "deva_gaode_routing_msgs/msg/RouteGuideResponse";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RouteGuideResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RouteGuideResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RouteGuideResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__TRAITS_HPP_
