// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route_points'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"
// Member 'rg_intersection_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__traits.hpp"
// Member 'rg_lane_info_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__traits.hpp"
// Member 'rg_red_light_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__traits.hpp"
// Member 'rg_tips_result'
#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Route & msg,
  std::ostream & out)
{
  out << "{";
  // member: route_points
  {
    if (msg.route_points.size() == 0) {
      out << "route_points: []";
    } else {
      out << "route_points: [";
      size_t pending_items = msg.route_points.size();
      for (auto item : msg.route_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg_intersection_result
  {
    if (msg.rg_intersection_result.size() == 0) {
      out << "rg_intersection_result: []";
    } else {
      out << "rg_intersection_result: [";
      size_t pending_items = msg.rg_intersection_result.size();
      for (auto item : msg.rg_intersection_result) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg_lane_info_result
  {
    if (msg.rg_lane_info_result.size() == 0) {
      out << "rg_lane_info_result: []";
    } else {
      out << "rg_lane_info_result: [";
      size_t pending_items = msg.rg_lane_info_result.size();
      for (auto item : msg.rg_lane_info_result) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg_red_light_result
  {
    if (msg.rg_red_light_result.size() == 0) {
      out << "rg_red_light_result: []";
    } else {
      out << "rg_red_light_result: [";
      size_t pending_items = msg.rg_red_light_result.size();
      for (auto item : msg.rg_red_light_result) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg_tips_result
  {
    if (msg.rg_tips_result.size() == 0) {
      out << "rg_tips_result: []";
    } else {
      out << "rg_tips_result: [";
      size_t pending_items = msg.rg_tips_result.size();
      for (auto item : msg.rg_tips_result) {
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
  const Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.route_points.size() == 0) {
      out << "route_points: []\n";
    } else {
      out << "route_points:\n";
      for (auto item : msg.route_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rg_intersection_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_intersection_result.size() == 0) {
      out << "rg_intersection_result: []\n";
    } else {
      out << "rg_intersection_result:\n";
      for (auto item : msg.rg_intersection_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rg_lane_info_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_lane_info_result.size() == 0) {
      out << "rg_lane_info_result: []\n";
    } else {
      out << "rg_lane_info_result:\n";
      for (auto item : msg.rg_lane_info_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rg_red_light_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_red_light_result.size() == 0) {
      out << "rg_red_light_result: []\n";
    } else {
      out << "rg_red_light_result:\n";
      for (auto item : msg.rg_red_light_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rg_tips_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_tips_result.size() == 0) {
      out << "rg_tips_result: []\n";
    } else {
      out << "rg_tips_result:\n";
      for (auto item : msg.rg_tips_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Route & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Route & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Route>()
{
  return "deva_gaode_routing_msgs::msg::Route";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Route>()
{
  return "deva_gaode_routing_msgs/msg/Route";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
