// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoadNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'enter_intersection_road_ids'
// Member 'out_intersection_roads_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionRoadNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: enter_intersection_road_ids
  {
    if (msg.enter_intersection_road_ids.size() == 0) {
      out << "enter_intersection_road_ids: []";
    } else {
      out << "enter_intersection_road_ids: [";
      size_t pending_items = msg.enter_intersection_road_ids.size();
      for (auto item : msg.enter_intersection_road_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: out_intersection_roads_ids
  {
    if (msg.out_intersection_roads_ids.size() == 0) {
      out << "out_intersection_roads_ids: []";
    } else {
      out << "out_intersection_roads_ids: [";
      size_t pending_items = msg.out_intersection_roads_ids.size();
      for (auto item : msg.out_intersection_roads_ids) {
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
  const IntersectionRoadNode & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: enter_intersection_road_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enter_intersection_road_ids.size() == 0) {
      out << "enter_intersection_road_ids: []\n";
    } else {
      out << "enter_intersection_road_ids:\n";
      for (auto item : msg.enter_intersection_road_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: out_intersection_roads_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.out_intersection_roads_ids.size() == 0) {
      out << "out_intersection_roads_ids: []\n";
    } else {
      out << "out_intersection_roads_ids:\n";
      for (auto item : msg.out_intersection_roads_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionRoadNode & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::IntersectionRoadNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::IntersectionRoadNode & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::IntersectionRoadNode>()
{
  return "deva_gaode_routing_msgs::msg::IntersectionRoadNode";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::IntersectionRoadNode>()
{
  return "deva_gaode_routing_msgs/msg/IntersectionRoadNode";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::IntersectionRoadNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::IntersectionRoadNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::IntersectionRoadNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__TRAITS_HPP_
