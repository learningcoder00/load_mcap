// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/nav_route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavRoute & msg,
  std::ostream & out)
{
  out << "{";
  // member: route_list
  {
    if (msg.route_list.size() == 0) {
      out << "route_list: []";
    } else {
      out << "route_list: [";
      size_t pending_items = msg.route_list.size();
      for (auto item : msg.route_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_status
  {
    out << "navi_status: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_status, out);
    out << ", ";
  }

  // member: match_status
  {
    out << "match_status: ";
    rosidl_generator_traits::value_to_yaml(msg.match_status, out);
    out << ", ";
  }

  // member: remain_distance
  {
    out << "remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavRoute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route_list.size() == 0) {
      out << "route_list: []\n";
    } else {
      out << "route_list:\n";
      for (auto item : msg.route_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navi_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_status: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_status, out);
    out << "\n";
  }

  // member: match_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "match_status: ";
    rosidl_generator_traits::value_to_yaml(msg.match_status, out);
    out << "\n";
  }

  // member: remain_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavRoute & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::NavRoute & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::NavRoute & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::NavRoute>()
{
  return "deva_gaode_routing_msgs::msg::NavRoute";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::NavRoute>()
{
  return "deva_gaode_routing_msgs/msg/NavRoute";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::NavRoute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::NavRoute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::NavRoute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__TRAITS_HPP_
