// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'link_attribute'
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__traits.hpp"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"
// Member 'topology'
#include "deva_gaode_routing_msgs/msg/detail/topology__traits.hpp"
// Member 'link_curvature'
#include "deva_gaode_routing_msgs/msg/detail/link_curvature__traits.hpp"
// Member 'guidance'
#include "deva_gaode_routing_msgs/msg/detail/guidance__traits.hpp"
// Member 'start_id'
// Member 'end_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'start'
// Member 'end'
#include "deva_gaode_routing_msgs/msg/detail/node__traits.hpp"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__traits.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__traits.hpp"
// Member 'j6m_intersection_entry_infos'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__traits.hpp"
// Member 'j6m_lane_ids'
// Member 'j6m_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Link & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_attribute
  {
    out << "link_attribute: ";
    to_flow_style_yaml(msg.link_attribute, out);
    out << ", ";
  }

  // member: coordinate
  {
    if (msg.coordinate.size() == 0) {
      out << "coordinate: []";
    } else {
      out << "coordinate: [";
      size_t pending_items = msg.coordinate.size();
      for (auto item : msg.coordinate) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: raw_id
  {
    out << "raw_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_id, out);
    out << ", ";
  }

  // member: topology
  {
    out << "topology: ";
    to_flow_style_yaml(msg.topology, out);
    out << ", ";
  }

  // member: link_curvature
  {
    out << "link_curvature: ";
    to_flow_style_yaml(msg.link_curvature, out);
    out << ", ";
  }

  // member: guidance
  {
    if (msg.guidance.size() == 0) {
      out << "guidance: []";
    } else {
      out << "guidance: [";
      size_t pending_items = msg.guidance.size();
      for (auto item : msg.guidance) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_id
  {
    out << "start_id: ";
    to_flow_style_yaml(msg.start_id, out);
    out << ", ";
  }

  // member: end_id
  {
    out << "end_id: ";
    to_flow_style_yaml(msg.end_id, out);
    out << ", ";
  }

  // member: feature_point_ids
  {
    if (msg.feature_point_ids.size() == 0) {
      out << "feature_point_ids: []";
    } else {
      out << "feature_point_ids: [";
      size_t pending_items = msg.feature_point_ids.size();
      for (auto item : msg.feature_point_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
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

  // member: j6m_intersection_entry_infos
  {
    if (msg.j6m_intersection_entry_infos.size() == 0) {
      out << "j6m_intersection_entry_infos: []";
    } else {
      out << "j6m_intersection_entry_infos: [";
      size_t pending_items = msg.j6m_intersection_entry_infos.size();
      for (auto item : msg.j6m_intersection_entry_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_lane_ids
  {
    if (msg.j6m_lane_ids.size() == 0) {
      out << "j6m_lane_ids: []";
    } else {
      out << "j6m_lane_ids: [";
      size_t pending_items = msg.j6m_lane_ids.size();
      for (auto item : msg.j6m_lane_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: j6m_link_ids
  {
    if (msg.j6m_link_ids.size() == 0) {
      out << "j6m_link_ids: []";
    } else {
      out << "j6m_link_ids: [";
      size_t pending_items = msg.j6m_link_ids.size();
      for (auto item : msg.j6m_link_ids) {
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
  const Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_attribute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_attribute:\n";
    to_block_style_yaml(msg.link_attribute, out, indentation + 2);
  }

  // member: coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinate.size() == 0) {
      out << "coordinate: []\n";
    } else {
      out << "coordinate:\n";
      for (auto item : msg.coordinate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: raw_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_id, out);
    out << "\n";
  }

  // member: topology
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topology:\n";
    to_block_style_yaml(msg.topology, out, indentation + 2);
  }

  // member: link_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_curvature:\n";
    to_block_style_yaml(msg.link_curvature, out, indentation + 2);
  }

  // member: guidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.guidance.size() == 0) {
      out << "guidance: []\n";
    } else {
      out << "guidance:\n";
      for (auto item : msg.guidance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: start_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_id:\n";
    to_block_style_yaml(msg.start_id, out, indentation + 2);
  }

  // member: end_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_id:\n";
    to_block_style_yaml(msg.end_id, out, indentation + 2);
  }

  // member: feature_point_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_point_ids.size() == 0) {
      out << "feature_point_ids: []\n";
    } else {
      out << "feature_point_ids:\n";
      for (auto item : msg.feature_point_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
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

  // member: j6m_intersection_entry_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_intersection_entry_infos.size() == 0) {
      out << "j6m_intersection_entry_infos: []\n";
    } else {
      out << "j6m_intersection_entry_infos:\n";
      for (auto item : msg.j6m_intersection_entry_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_lane_ids.size() == 0) {
      out << "j6m_lane_ids: []\n";
    } else {
      out << "j6m_lane_ids:\n";
      for (auto item : msg.j6m_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: j6m_link_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.j6m_link_ids.size() == 0) {
      out << "j6m_link_ids: []\n";
    } else {
      out << "j6m_link_ids:\n";
      for (auto item : msg.j6m_link_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Link & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Link & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Link & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Link>()
{
  return "deva_gaode_routing_msgs::msg::Link";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Link>()
{
  return "deva_gaode_routing_msgs/msg/Link";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Link>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Link>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Link>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__TRAITS_HPP_
