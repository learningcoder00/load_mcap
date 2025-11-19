// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'j6m_links'
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__traits.hpp"
// Member 'j6m_intersections'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__traits.hpp"
// Member 'j6m_lanes'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__traits.hpp"
// Member 'j6m_lane_markings'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__traits.hpp"
// Member 'j6m_road_objects'
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mData & msg,
  std::ostream & out)
{
  out << "{";
  // member: j6m_links
  {
    if (msg.j6m_links.size() == 0) {
      out << "j6m_links: []";
    } else {
      out << "j6m_links: [";
      size_t pending_items = msg.j6m_links.size();
      for (auto item : msg.j6m_links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_intersections
  {
    if (msg.j6m_intersections.size() == 0) {
      out << "j6m_intersections: []";
    } else {
      out << "j6m_intersections: [";
      size_t pending_items = msg.j6m_intersections.size();
      for (auto item : msg.j6m_intersections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_lanes
  {
    if (msg.j6m_lanes.size() == 0) {
      out << "j6m_lanes: []";
    } else {
      out << "j6m_lanes: [";
      size_t pending_items = msg.j6m_lanes.size();
      for (auto item : msg.j6m_lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_lane_markings
  {
    if (msg.j6m_lane_markings.size() == 0) {
      out << "j6m_lane_markings: []";
    } else {
      out << "j6m_lane_markings: [";
      size_t pending_items = msg.j6m_lane_markings.size();
      for (auto item : msg.j6m_lane_markings) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_road_objects
  {
    if (msg.j6m_road_objects.size() == 0) {
      out << "j6m_road_objects: []";
    } else {
      out << "j6m_road_objects: [";
      size_t pending_items = msg.j6m_road_objects.size();
      for (auto item : msg.j6m_road_objects) {
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
  const J6mData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: j6m_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_links.size() == 0) {
      out << "j6m_links: []\n";
    } else {
      out << "j6m_links:\n";
      for (auto item : msg.j6m_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_intersections.size() == 0) {
      out << "j6m_intersections: []\n";
    } else {
      out << "j6m_intersections:\n";
      for (auto item : msg.j6m_intersections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_lanes.size() == 0) {
      out << "j6m_lanes: []\n";
    } else {
      out << "j6m_lanes:\n";
      for (auto item : msg.j6m_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_lane_markings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_lane_markings.size() == 0) {
      out << "j6m_lane_markings: []\n";
    } else {
      out << "j6m_lane_markings:\n";
      for (auto item : msg.j6m_lane_markings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_road_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_road_objects.size() == 0) {
      out << "j6m_road_objects: []\n";
    } else {
      out << "j6m_road_objects:\n";
      for (auto item : msg.j6m_road_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mData & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::J6mData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mData & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mData>()
{
  return "deva_gaode_routing_msgs::msg::J6mData";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mData>()
{
  return "deva_gaode_routing_msgs/msg/J6mData";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__TRAITS_HPP_
