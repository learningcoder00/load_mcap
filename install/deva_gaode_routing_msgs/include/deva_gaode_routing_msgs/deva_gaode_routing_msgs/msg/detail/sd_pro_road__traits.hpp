// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/center_point__traits.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__traits.hpp"
// Member 'lane_connect'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__traits.hpp"
// Member 'trfc_signs'
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__traits.hpp"
// Member 'restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction__traits.hpp"
// Member 'cross_point'
#include "deva_gaode_routing_msgs/msg/detail/cross_point__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProRoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: road_kind
  {
    out << "road_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.road_kind, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: forms
  {
    if (msg.forms.size() == 0) {
      out << "forms: []";
    } else {
      out << "forms: [";
      size_t pending_items = msg.forms.size();
      for (auto item : msg.forms) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_count
  {
    out << "lane_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_count, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: speed_limit_min
  {
    out << "speed_limit_min: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_min, out);
    out << ", ";
  }

  // member: speed_limit_max
  {
    out << "speed_limit_max: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_max, out);
    out << ", ";
  }

  // member: start_angle
  {
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << ", ";
  }

  // member: end_angle
  {
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << ", ";
  }

  // member: geo
  {
    if (msg.geo.size() == 0) {
      out << "geo: []";
    } else {
      out << "geo: [";
      size_t pending_items = msg.geo.size();
      for (auto item : msg.geo) {
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

  // member: next_ids
  {
    if (msg.next_ids.size() == 0) {
      out << "next_ids: []";
    } else {
      out << "next_ids: [";
      size_t pending_items = msg.next_ids.size();
      for (auto item : msg.next_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pre_ids
  {
    if (msg.pre_ids.size() == 0) {
      out << "pre_ids: []";
    } else {
      out << "pre_ids: [";
      size_t pending_items = msg.pre_ids.size();
      for (auto item : msg.pre_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: product_type
  {
    out << "product_type: ";
    rosidl_generator_traits::value_to_yaml(msg.product_type, out);
    out << ", ";
  }

  // member: lane_connect
  {
    if (msg.lane_connect.size() == 0) {
      out << "lane_connect: []";
    } else {
      out << "lane_connect: [";
      size_t pending_items = msg.lane_connect.size();
      for (auto item : msg.lane_connect) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trfc_signs
  {
    if (msg.trfc_signs.size() == 0) {
      out << "trfc_signs: []";
    } else {
      out << "trfc_signs: [";
      size_t pending_items = msg.trfc_signs.size();
      for (auto item : msg.trfc_signs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: s_node_id
  {
    out << "s_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.s_node_id, out);
    out << ", ";
  }

  // member: e_node_id
  {
    out << "e_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.e_node_id, out);
    out << ", ";
  }

  // member: joint_type
  {
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << ", ";
  }

  // member: road_name
  {
    out << "road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.road_name, out);
    out << ", ";
  }

  // member: restriction
  {
    if (msg.restriction.size() == 0) {
      out << "restriction: []";
    } else {
      out << "restriction: [";
      size_t pending_items = msg.restriction.size();
      for (auto item : msg.restriction) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cross_point
  {
    if (msg.cross_point.size() == 0) {
      out << "cross_point: []";
    } else {
      out << "cross_point: [";
      size_t pending_items = msg.cross_point.size();
      for (auto item : msg.cross_point) {
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
  const SdProRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: road_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.road_kind, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: forms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forms.size() == 0) {
      out << "forms: []\n";
    } else {
      out << "forms:\n";
      for (auto item : msg.forms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_count, out);
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

  // member: speed_limit_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_min: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_min, out);
    out << "\n";
  }

  // member: speed_limit_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_max: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_max, out);
    out << "\n";
  }

  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << "\n";
  }

  // member: geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geo.size() == 0) {
      out << "geo: []\n";
    } else {
      out << "geo:\n";
      for (auto item : msg.geo) {
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

  // member: next_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_ids.size() == 0) {
      out << "next_ids: []\n";
    } else {
      out << "next_ids:\n";
      for (auto item : msg.next_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pre_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pre_ids.size() == 0) {
      out << "pre_ids: []\n";
    } else {
      out << "pre_ids:\n";
      for (auto item : msg.pre_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: product_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "product_type: ";
    rosidl_generator_traits::value_to_yaml(msg.product_type, out);
    out << "\n";
  }

  // member: lane_connect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_connect.size() == 0) {
      out << "lane_connect: []\n";
    } else {
      out << "lane_connect:\n";
      for (auto item : msg.lane_connect) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: trfc_signs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trfc_signs.size() == 0) {
      out << "trfc_signs: []\n";
    } else {
      out << "trfc_signs:\n";
      for (auto item : msg.trfc_signs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: s_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.s_node_id, out);
    out << "\n";
  }

  // member: e_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.e_node_id, out);
    out << "\n";
  }

  // member: joint_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << "\n";
  }

  // member: road_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.road_name, out);
    out << "\n";
  }

  // member: restriction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.restriction.size() == 0) {
      out << "restriction: []\n";
    } else {
      out << "restriction:\n";
      for (auto item : msg.restriction) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cross_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cross_point.size() == 0) {
      out << "cross_point: []\n";
    } else {
      out << "cross_point:\n";
      for (auto item : msg.cross_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProRoad & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProRoad & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProRoad>()
{
  return "deva_gaode_routing_msgs::msg::SdProRoad";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProRoad>()
{
  return "deva_gaode_routing_msgs/msg/SdProRoad";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProRoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProRoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProRoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__TRAITS_HPP_
