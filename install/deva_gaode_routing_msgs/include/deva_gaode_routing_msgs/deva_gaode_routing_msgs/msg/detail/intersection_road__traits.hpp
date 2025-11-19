// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/intersection_road__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'start_node_id'
// Member 'end_node_id'
// Member 'start_feature_point_id'
// Member 'end_feature_point_id'
// Member 'nexts'
// Member 'prevs'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'geometry'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"
// Member 'relate_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionRoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: cross_turn_type
  {
    out << "cross_turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_turn_type, out);
    out << ", ";
  }

  // member: has_traffic_light
  {
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << ", ";
  }

  // member: geometry
  {
    if (msg.geometry.size() == 0) {
      out << "geometry: []";
    } else {
      out << "geometry: [";
      size_t pending_items = msg.geometry.size();
      for (auto item : msg.geometry) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_node_id
  {
    out << "start_node_id: ";
    to_flow_style_yaml(msg.start_node_id, out);
    out << ", ";
  }

  // member: end_node_id
  {
    out << "end_node_id: ";
    to_flow_style_yaml(msg.end_node_id, out);
    out << ", ";
  }

  // member: start_feature_point_id
  {
    out << "start_feature_point_id: ";
    to_flow_style_yaml(msg.start_feature_point_id, out);
    out << ", ";
  }

  // member: end_feature_point_id
  {
    out << "end_feature_point_id: ";
    to_flow_style_yaml(msg.end_feature_point_id, out);
    out << ", ";
  }

  // member: relate_link_id
  {
    out << "relate_link_id: ";
    to_flow_style_yaml(msg.relate_link_id, out);
    out << ", ";
  }

  // member: nexts
  {
    if (msg.nexts.size() == 0) {
      out << "nexts: []";
    } else {
      out << "nexts: [";
      size_t pending_items = msg.nexts.size();
      for (auto item : msg.nexts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prevs
  {
    if (msg.prevs.size() == 0) {
      out << "prevs: []";
    } else {
      out << "prevs: [";
      size_t pending_items = msg.prevs.size();
      for (auto item : msg.prevs) {
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
  const IntersectionRoad & msg,
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

  // member: link_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << "\n";
  }

  // member: cross_turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_turn_type, out);
    out << "\n";
  }

  // member: has_traffic_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << "\n";
  }

  // member: geometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geometry.size() == 0) {
      out << "geometry: []\n";
    } else {
      out << "geometry:\n";
      for (auto item : msg.geometry) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: start_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_node_id:\n";
    to_block_style_yaml(msg.start_node_id, out, indentation + 2);
  }

  // member: end_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_node_id:\n";
    to_block_style_yaml(msg.end_node_id, out, indentation + 2);
  }

  // member: start_feature_point_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_feature_point_id:\n";
    to_block_style_yaml(msg.start_feature_point_id, out, indentation + 2);
  }

  // member: end_feature_point_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_feature_point_id:\n";
    to_block_style_yaml(msg.end_feature_point_id, out, indentation + 2);
  }

  // member: relate_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relate_link_id:\n";
    to_block_style_yaml(msg.relate_link_id, out, indentation + 2);
  }

  // member: nexts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nexts.size() == 0) {
      out << "nexts: []\n";
    } else {
      out << "nexts:\n";
      for (auto item : msg.nexts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: prevs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prevs.size() == 0) {
      out << "prevs: []\n";
    } else {
      out << "prevs:\n";
      for (auto item : msg.prevs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionRoad & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::IntersectionRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::IntersectionRoad>()
{
  return "deva_gaode_routing_msgs::msg::IntersectionRoad";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::IntersectionRoad>()
{
  return "deva_gaode_routing_msgs/msg/IntersectionRoad";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::IntersectionRoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::IntersectionRoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::IntersectionRoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__TRAITS_HPP_
