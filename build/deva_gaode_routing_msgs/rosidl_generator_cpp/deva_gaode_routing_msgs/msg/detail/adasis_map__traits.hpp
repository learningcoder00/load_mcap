// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'ehp_position'
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__traits.hpp"
// Member 'ehp_meta_data'
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__traits.hpp"
// Member 'ehp_segments'
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__traits.hpp"
// Member 'ehp_stubs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__traits.hpp"
// Member 'ehp_profile_shorts'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__traits.hpp"
// Member 'ehp_profile_longs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__traits.hpp"
// Member 'link'
#include "deva_gaode_routing_msgs/msg/detail/link__traits.hpp"
// Member 'node'
#include "deva_gaode_routing_msgs/msg/detail/node__traits.hpp"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__traits.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane__traits.hpp"
// Member 'stoplines'
#include "deva_gaode_routing_msgs/msg/detail/stop_line__traits.hpp"
// Member 'intersection_road_nodes'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__traits.hpp"
// Member 'intersection_roads'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__traits.hpp"
// Member 'position_match_link'
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__traits.hpp"
// Member 'heterogeneous_match_link'
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__traits.hpp"
// Member 'route_guide_response'
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__traits.hpp"
// Member 'j6m_data'
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdasisMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: is_update_ehp_position
  {
    out << "is_update_ehp_position: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_position, out);
    out << ", ";
  }

  // member: ehp_position
  {
    out << "ehp_position: ";
    to_flow_style_yaml(msg.ehp_position, out);
    out << ", ";
  }

  // member: is_update_ehp_meta_data
  {
    out << "is_update_ehp_meta_data: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_meta_data, out);
    out << ", ";
  }

  // member: ehp_meta_data
  {
    out << "ehp_meta_data: ";
    to_flow_style_yaml(msg.ehp_meta_data, out);
    out << ", ";
  }

  // member: is_update_ehp_segments
  {
    out << "is_update_ehp_segments: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_segments, out);
    out << ", ";
  }

  // member: ehp_segments
  {
    if (msg.ehp_segments.size() == 0) {
      out << "ehp_segments: []";
    } else {
      out << "ehp_segments: [";
      size_t pending_items = msg.ehp_segments.size();
      for (auto item : msg.ehp_segments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_update_ehp_stubs
  {
    out << "is_update_ehp_stubs: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_stubs, out);
    out << ", ";
  }

  // member: ehp_stubs
  {
    if (msg.ehp_stubs.size() == 0) {
      out << "ehp_stubs: []";
    } else {
      out << "ehp_stubs: [";
      size_t pending_items = msg.ehp_stubs.size();
      for (auto item : msg.ehp_stubs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_update_ehp_profile_shorts
  {
    out << "is_update_ehp_profile_shorts: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_profile_shorts, out);
    out << ", ";
  }

  // member: ehp_profile_shorts
  {
    if (msg.ehp_profile_shorts.size() == 0) {
      out << "ehp_profile_shorts: []";
    } else {
      out << "ehp_profile_shorts: [";
      size_t pending_items = msg.ehp_profile_shorts.size();
      for (auto item : msg.ehp_profile_shorts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_update_ehp_profile_longs
  {
    out << "is_update_ehp_profile_longs: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_profile_longs, out);
    out << ", ";
  }

  // member: ehp_profile_longs
  {
    if (msg.ehp_profile_longs.size() == 0) {
      out << "ehp_profile_longs: []";
    } else {
      out << "ehp_profile_longs: [";
      size_t pending_items = msg.ehp_profile_longs.size();
      for (auto item : msg.ehp_profile_longs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link
  {
    if (msg.link.size() == 0) {
      out << "link: []";
    } else {
      out << "link: [";
      size_t pending_items = msg.link.size();
      for (auto item : msg.link) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: node
  {
    if (msg.node.size() == 0) {
      out << "node: []";
    } else {
      out << "node: [";
      size_t pending_items = msg.node.size();
      for (auto item : msg.node) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_points
  {
    if (msg.feature_points.size() == 0) {
      out << "feature_points: []";
    } else {
      out << "feature_points: [";
      size_t pending_items = msg.feature_points.size();
      for (auto item : msg.feature_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lanes
  {
    if (msg.lanes.size() == 0) {
      out << "lanes: []";
    } else {
      out << "lanes: [";
      size_t pending_items = msg.lanes.size();
      for (auto item : msg.lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stoplines
  {
    if (msg.stoplines.size() == 0) {
      out << "stoplines: []";
    } else {
      out << "stoplines: [";
      size_t pending_items = msg.stoplines.size();
      for (auto item : msg.stoplines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intersection_road_nodes
  {
    if (msg.intersection_road_nodes.size() == 0) {
      out << "intersection_road_nodes: []";
    } else {
      out << "intersection_road_nodes: [";
      size_t pending_items = msg.intersection_road_nodes.size();
      for (auto item : msg.intersection_road_nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intersection_roads
  {
    if (msg.intersection_roads.size() == 0) {
      out << "intersection_roads: []";
    } else {
      out << "intersection_roads: [";
      size_t pending_items = msg.intersection_roads.size();
      for (auto item : msg.intersection_roads) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_match_link
  {
    out << "position_match_link: ";
    to_flow_style_yaml(msg.position_match_link, out);
    out << ", ";
  }

  // member: heterogeneous_match_link
  {
    out << "heterogeneous_match_link: ";
    to_flow_style_yaml(msg.heterogeneous_match_link, out);
    out << ", ";
  }

  // member: route_guide_response
  {
    out << "route_guide_response: ";
    to_flow_style_yaml(msg.route_guide_response, out);
    out << ", ";
  }

  // member: j6m_data
  {
    out << "j6m_data: ";
    to_flow_style_yaml(msg.j6m_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AdasisMap & msg,
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

  // member: is_update_ehp_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_position: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_position, out);
    out << "\n";
  }

  // member: ehp_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ehp_position:\n";
    to_block_style_yaml(msg.ehp_position, out, indentation + 2);
  }

  // member: is_update_ehp_meta_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_meta_data: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_meta_data, out);
    out << "\n";
  }

  // member: ehp_meta_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ehp_meta_data:\n";
    to_block_style_yaml(msg.ehp_meta_data, out, indentation + 2);
  }

  // member: is_update_ehp_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_segments: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_segments, out);
    out << "\n";
  }

  // member: ehp_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ehp_segments.size() == 0) {
      out << "ehp_segments: []\n";
    } else {
      out << "ehp_segments:\n";
      for (auto item : msg.ehp_segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_update_ehp_stubs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_stubs: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_stubs, out);
    out << "\n";
  }

  // member: ehp_stubs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ehp_stubs.size() == 0) {
      out << "ehp_stubs: []\n";
    } else {
      out << "ehp_stubs:\n";
      for (auto item : msg.ehp_stubs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_update_ehp_profile_shorts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_profile_shorts: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_profile_shorts, out);
    out << "\n";
  }

  // member: ehp_profile_shorts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ehp_profile_shorts.size() == 0) {
      out << "ehp_profile_shorts: []\n";
    } else {
      out << "ehp_profile_shorts:\n";
      for (auto item : msg.ehp_profile_shorts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_update_ehp_profile_longs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_update_ehp_profile_longs: ";
    rosidl_generator_traits::value_to_yaml(msg.is_update_ehp_profile_longs, out);
    out << "\n";
  }

  // member: ehp_profile_longs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ehp_profile_longs.size() == 0) {
      out << "ehp_profile_longs: []\n";
    } else {
      out << "ehp_profile_longs:\n";
      for (auto item : msg.ehp_profile_longs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link.size() == 0) {
      out << "link: []\n";
    } else {
      out << "link:\n";
      for (auto item : msg.link) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node.size() == 0) {
      out << "node: []\n";
    } else {
      out << "node:\n";
      for (auto item : msg.node) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_points.size() == 0) {
      out << "feature_points: []\n";
    } else {
      out << "feature_points:\n";
      for (auto item : msg.feature_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanes.size() == 0) {
      out << "lanes: []\n";
    } else {
      out << "lanes:\n";
      for (auto item : msg.lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stoplines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stoplines.size() == 0) {
      out << "stoplines: []\n";
    } else {
      out << "stoplines:\n";
      for (auto item : msg.stoplines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intersection_road_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_road_nodes.size() == 0) {
      out << "intersection_road_nodes: []\n";
    } else {
      out << "intersection_road_nodes:\n";
      for (auto item : msg.intersection_road_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intersection_roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_roads.size() == 0) {
      out << "intersection_roads: []\n";
    } else {
      out << "intersection_roads:\n";
      for (auto item : msg.intersection_roads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position_match_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_match_link:\n";
    to_block_style_yaml(msg.position_match_link, out, indentation + 2);
  }

  // member: heterogeneous_match_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heterogeneous_match_link:\n";
    to_block_style_yaml(msg.heterogeneous_match_link, out, indentation + 2);
  }

  // member: route_guide_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_guide_response:\n";
    to_block_style_yaml(msg.route_guide_response, out, indentation + 2);
  }

  // member: j6m_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j6m_data:\n";
    to_block_style_yaml(msg.j6m_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdasisMap & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::AdasisMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::AdasisMap & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::AdasisMap>()
{
  return "deva_gaode_routing_msgs::msg::AdasisMap";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::AdasisMap>()
{
  return "deva_gaode_routing_msgs/msg/AdasisMap";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::AdasisMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::AdasisMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::AdasisMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__TRAITS_HPP_
