// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/StopLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/stop_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'related_lane_ids'
// Member 'related_intersection_road_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'location'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"
// Member 'related_node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
    out << ", ";
  }

  // member: related_node_id
  {
    out << "related_node_id: ";
    to_flow_style_yaml(msg.related_node_id, out);
    out << ", ";
  }

  // member: related_lane_ids
  {
    if (msg.related_lane_ids.size() == 0) {
      out << "related_lane_ids: []";
    } else {
      out << "related_lane_ids: [";
      size_t pending_items = msg.related_lane_ids.size();
      for (auto item : msg.related_lane_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: related_intersection_road_ids
  {
    if (msg.related_intersection_road_ids.size() == 0) {
      out << "related_intersection_road_ids: []";
    } else {
      out << "related_intersection_road_ids: [";
      size_t pending_items = msg.related_intersection_road_ids.size();
      for (auto item : msg.related_intersection_road_ids) {
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
  const StopLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
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

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }

  // member: related_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "related_node_id:\n";
    to_block_style_yaml(msg.related_node_id, out, indentation + 2);
  }

  // member: related_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.related_lane_ids.size() == 0) {
      out << "related_lane_ids: []\n";
    } else {
      out << "related_lane_ids:\n";
      for (auto item : msg.related_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: related_intersection_road_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.related_intersection_road_ids.size() == 0) {
      out << "related_intersection_road_ids: []\n";
    } else {
      out << "related_intersection_road_ids:\n";
      for (auto item : msg.related_intersection_road_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopLine & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::StopLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::StopLine & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::StopLine>()
{
  return "deva_gaode_routing_msgs::msg::StopLine";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::StopLine>()
{
  return "deva_gaode_routing_msgs/msg/StopLine";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::StopLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::StopLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::StopLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__TRAITS_HPP_
