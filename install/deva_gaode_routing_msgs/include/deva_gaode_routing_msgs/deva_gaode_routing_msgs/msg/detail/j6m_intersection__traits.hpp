// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'intersection_id'
// Member 'link_id_s'
// Member 'intersection_successor_id_s'
// Member 'intersection_predecessor_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'intersection_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mIntersection & msg,
  std::ostream & out)
{
  out << "{";
  // member: intersection_id
  {
    out << "intersection_id: ";
    to_flow_style_yaml(msg.intersection_id, out);
    out << ", ";
  }

  // member: link_id_s
  {
    if (msg.link_id_s.size() == 0) {
      out << "link_id_s: []";
    } else {
      out << "link_id_s: [";
      size_t pending_items = msg.link_id_s.size();
      for (auto item : msg.link_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intersection_successor_id_s
  {
    if (msg.intersection_successor_id_s.size() == 0) {
      out << "intersection_successor_id_s: []";
    } else {
      out << "intersection_successor_id_s: [";
      size_t pending_items = msg.intersection_successor_id_s.size();
      for (auto item : msg.intersection_successor_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intersection_predecessor_id_s
  {
    if (msg.intersection_predecessor_id_s.size() == 0) {
      out << "intersection_predecessor_id_s: []";
    } else {
      out << "intersection_predecessor_id_s: [";
      size_t pending_items = msg.intersection_predecessor_id_s.size();
      for (auto item : msg.intersection_predecessor_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_lane_num_change_areas
  {
    out << "is_lane_num_change_areas: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lane_num_change_areas, out);
    out << ", ";
  }

  // member: intersection_coordinates
  {
    if (msg.intersection_coordinates.size() == 0) {
      out << "intersection_coordinates: []";
    } else {
      out << "intersection_coordinates: [";
      size_t pending_items = msg.intersection_coordinates.size();
      for (auto item : msg.intersection_coordinates) {
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
  const J6mIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: intersection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersection_id:\n";
    to_block_style_yaml(msg.intersection_id, out, indentation + 2);
  }

  // member: link_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_id_s.size() == 0) {
      out << "link_id_s: []\n";
    } else {
      out << "link_id_s:\n";
      for (auto item : msg.link_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intersection_successor_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_successor_id_s.size() == 0) {
      out << "intersection_successor_id_s: []\n";
    } else {
      out << "intersection_successor_id_s:\n";
      for (auto item : msg.intersection_successor_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intersection_predecessor_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_predecessor_id_s.size() == 0) {
      out << "intersection_predecessor_id_s: []\n";
    } else {
      out << "intersection_predecessor_id_s:\n";
      for (auto item : msg.intersection_predecessor_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_lane_num_change_areas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_lane_num_change_areas: ";
    rosidl_generator_traits::value_to_yaml(msg.is_lane_num_change_areas, out);
    out << "\n";
  }

  // member: intersection_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_coordinates.size() == 0) {
      out << "intersection_coordinates: []\n";
    } else {
      out << "intersection_coordinates:\n";
      for (auto item : msg.intersection_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mIntersection & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::J6mIntersection & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mIntersection & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mIntersection>()
{
  return "deva_gaode_routing_msgs::msg::J6mIntersection";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mIntersection>()
{
  return "deva_gaode_routing_msgs/msg/J6mIntersection";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mIntersection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mIntersection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mIntersection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__TRAITS_HPP_
