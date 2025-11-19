// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'successor_linkid_s'
// Member 'predecessor_linkid_s'
// Member 'referenced_lane_id_s'
// Member 'referenced_intersection_id_s'
// Member 'referenced_lanemarking_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mLink & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: travel_direction
  {
    out << "travel_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_direction, out);
    out << ", ";
  }

  // member: coordinates
  {
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []";
    } else {
      out << "coordinates: [";
      size_t pending_items = msg.coordinates.size();
      for (auto item : msg.coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: successor_linkid_s
  {
    if (msg.successor_linkid_s.size() == 0) {
      out << "successor_linkid_s: []";
    } else {
      out << "successor_linkid_s: [";
      size_t pending_items = msg.successor_linkid_s.size();
      for (auto item : msg.successor_linkid_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predecessor_linkid_s
  {
    if (msg.predecessor_linkid_s.size() == 0) {
      out << "predecessor_linkid_s: []";
    } else {
      out << "predecessor_linkid_s: [";
      size_t pending_items = msg.predecessor_linkid_s.size();
      for (auto item : msg.predecessor_linkid_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: referenced_lane_id_s
  {
    if (msg.referenced_lane_id_s.size() == 0) {
      out << "referenced_lane_id_s: []";
    } else {
      out << "referenced_lane_id_s: [";
      size_t pending_items = msg.referenced_lane_id_s.size();
      for (auto item : msg.referenced_lane_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: referenced_intersection_id_s
  {
    if (msg.referenced_intersection_id_s.size() == 0) {
      out << "referenced_intersection_id_s: []";
    } else {
      out << "referenced_intersection_id_s: [";
      size_t pending_items = msg.referenced_intersection_id_s.size();
      for (auto item : msg.referenced_intersection_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: referenced_lanemarking_id_s
  {
    if (msg.referenced_lanemarking_id_s.size() == 0) {
      out << "referenced_lanemarking_id_s: []";
    } else {
      out << "referenced_lanemarking_id_s: [";
      size_t pending_items = msg.referenced_lanemarking_id_s.size();
      for (auto item : msg.referenced_lanemarking_id_s) {
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
  const J6mLink & msg,
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

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: travel_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "travel_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_direction, out);
    out << "\n";
  }

  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []\n";
    } else {
      out << "coordinates:\n";
      for (auto item : msg.coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: successor_linkid_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.successor_linkid_s.size() == 0) {
      out << "successor_linkid_s: []\n";
    } else {
      out << "successor_linkid_s:\n";
      for (auto item : msg.successor_linkid_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: predecessor_linkid_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predecessor_linkid_s.size() == 0) {
      out << "predecessor_linkid_s: []\n";
    } else {
      out << "predecessor_linkid_s:\n";
      for (auto item : msg.predecessor_linkid_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: referenced_lane_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.referenced_lane_id_s.size() == 0) {
      out << "referenced_lane_id_s: []\n";
    } else {
      out << "referenced_lane_id_s:\n";
      for (auto item : msg.referenced_lane_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: referenced_intersection_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.referenced_intersection_id_s.size() == 0) {
      out << "referenced_intersection_id_s: []\n";
    } else {
      out << "referenced_intersection_id_s:\n";
      for (auto item : msg.referenced_intersection_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: referenced_lanemarking_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.referenced_lanemarking_id_s.size() == 0) {
      out << "referenced_lanemarking_id_s: []\n";
    } else {
      out << "referenced_lanemarking_id_s:\n";
      for (auto item : msg.referenced_lanemarking_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mLink & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::J6mLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mLink & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mLink>()
{
  return "deva_gaode_routing_msgs::msg::J6mLink";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mLink>()
{
  return "deva_gaode_routing_msgs/msg/J6mLink";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mLink>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mLink>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mLink>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__TRAITS_HPP_
