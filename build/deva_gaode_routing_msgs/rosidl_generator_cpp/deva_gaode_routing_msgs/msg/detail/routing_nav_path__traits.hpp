// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_point'
// Member 'way_points'
// Member 'end_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoutingNavPath & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: md5
  {
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: start_point
  {
    out << "start_point: ";
    to_flow_style_yaml(msg.start_point, out);
    out << ", ";
  }

  // member: way_points
  {
    if (msg.way_points.size() == 0) {
      out << "way_points: []";
    } else {
      out << "way_points: [";
      size_t pending_items = msg.way_points.size();
      for (auto item : msg.way_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_point
  {
    out << "end_point: ";
    to_flow_style_yaml(msg.end_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoutingNavPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
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

  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << "\n";
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: start_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_point:\n";
    to_block_style_yaml(msg.start_point, out, indentation + 2);
  }

  // member: way_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.way_points.size() == 0) {
      out << "way_points: []\n";
    } else {
      out << "way_points:\n";
      for (auto item : msg.way_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point:\n";
    to_block_style_yaml(msg.end_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoutingNavPath & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RoutingNavPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RoutingNavPath & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RoutingNavPath>()
{
  return "deva_gaode_routing_msgs::msg::RoutingNavPath";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RoutingNavPath>()
{
  return "deva_gaode_routing_msgs/msg/RoutingNavPath";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RoutingNavPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RoutingNavPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RoutingNavPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTING_NAV_PATH__TRAITS_HPP_
