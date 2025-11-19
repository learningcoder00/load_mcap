// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/link_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"
// Member 'gantry_infos'
#include "deva_navi_msgs/msg/detail/gantry_info_proto__traits.hpp"
// Member 'cameras'
#include "deva_navi_msgs/msg/detail/navi_camera_proto__traits.hpp"
// Member 'road_facilities'
#include "deva_navi_msgs/msg/detail/road_facility_proto__traits.hpp"
// Member 'turn_infos'
#include "deva_navi_msgs/msg/detail/turn_info_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LinkInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gantry_infos
  {
    if (msg.gantry_infos.size() == 0) {
      out << "gantry_infos: []";
    } else {
      out << "gantry_infos: [";
      size_t pending_items = msg.gantry_infos.size();
      for (auto item : msg.gantry_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cameras
  {
    if (msg.cameras.size() == 0) {
      out << "cameras: []";
    } else {
      out << "cameras: [";
      size_t pending_items = msg.cameras.size();
      for (auto item : msg.cameras) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: related_path_id
  {
    out << "related_path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.related_path_id, out);
    out << ", ";
  }

  // member: related_segment_index
  {
    out << "related_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.related_segment_index, out);
    out << ", ";
  }

  // member: link_index
  {
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: travel_time
  {
    out << "travel_time: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_time, out);
    out << ", ";
  }

  // member: static_travel_time
  {
    out << "static_travel_time: ";
    rosidl_generator_traits::value_to_yaml(msg.static_travel_time, out);
    out << ", ";
  }

  // member: road_name
  {
    out << "road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.road_name, out);
    out << ", ";
  }

  // member: road_facilities
  {
    if (msg.road_facilities.size() == 0) {
      out << "road_facilities: []";
    } else {
      out << "road_facilities: [";
      size_t pending_items = msg.road_facilities.size();
      for (auto item : msg.road_facilities) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: topo_id_64
  {
    out << "topo_id_64: ";
    rosidl_generator_traits::value_to_yaml(msg.topo_id_64, out);
    out << ", ";
  }

  // member: urid
  {
    out << "urid: ";
    rosidl_generator_traits::value_to_yaml(msg.urid, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: main_action
  {
    out << "main_action: ";
    rosidl_generator_traits::value_to_yaml(msg.main_action, out);
    out << ", ";
  }

  // member: assistant_action
  {
    out << "assistant_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assistant_action, out);
    out << ", ";
  }

  // member: adcode
  {
    out << "adcode: ";
    rosidl_generator_traits::value_to_yaml(msg.adcode, out);
    out << ", ";
  }

  // member: link_type
  {
    out << "link_type: ";
    rosidl_generator_traits::value_to_yaml(msg.link_type, out);
    out << ", ";
  }

  // member: formway
  {
    out << "formway: ";
    rosidl_generator_traits::value_to_yaml(msg.formway, out);
    out << ", ";
  }

  // member: road_class
  {
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << ", ";
  }

  // member: road_direction
  {
    out << "road_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.road_direction, out);
    out << ", ";
  }

  // member: ownership
  {
    out << "ownership: ";
    rosidl_generator_traits::value_to_yaml(msg.ownership, out);
    out << ", ";
  }

  // member: is_toll
  {
    out << "is_toll: ";
    rosidl_generator_traits::value_to_yaml(msg.is_toll, out);
    out << ", ";
  }

  // member: is_over_head
  {
    out << "is_over_head: ";
    rosidl_generator_traits::value_to_yaml(msg.is_over_head, out);
    out << ", ";
  }

  // member: has_parallel_road
  {
    out << "has_parallel_road: ";
    rosidl_generator_traits::value_to_yaml(msg.has_parallel_road, out);
    out << ", ";
  }

  // member: has_multi_out
  {
    out << "has_multi_out: ";
    rosidl_generator_traits::value_to_yaml(msg.has_multi_out, out);
    out << ", ";
  }

  // member: has_traffic_light
  {
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << ", ";
  }

  // member: has_mix_fork
  {
    out << "has_mix_fork: ";
    rosidl_generator_traits::value_to_yaml(msg.has_mix_fork, out);
    out << ", ";
  }

  // member: is_at_service
  {
    out << "is_at_service: ";
    rosidl_generator_traits::value_to_yaml(msg.is_at_service, out);
    out << ", ";
  }

  // member: is_restricting
  {
    out << "is_restricting: ";
    rosidl_generator_traits::value_to_yaml(msg.is_restricting, out);
    out << ", ";
  }

  // member: limit_flag
  {
    out << "limit_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_flag, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: turn_infos
  {
    if (msg.turn_infos.size() == 0) {
      out << "turn_infos: []";
    } else {
      out << "turn_infos: [";
      size_t pending_items = msg.turn_infos.size();
      for (auto item : msg.turn_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: inner_road
  {
    out << "inner_road: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_road, out);
    out << ", ";
  }

  // member: is_parking_road
  {
    out << "is_parking_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_parking_road, out);
    out << ", ";
  }

  // member: traffic_status
  {
    out << "traffic_status: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinkInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: gantry_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gantry_infos.size() == 0) {
      out << "gantry_infos: []\n";
    } else {
      out << "gantry_infos:\n";
      for (auto item : msg.gantry_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cameras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cameras.size() == 0) {
      out << "cameras: []\n";
    } else {
      out << "cameras:\n";
      for (auto item : msg.cameras) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }

  // member: related_path_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "related_path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.related_path_id, out);
    out << "\n";
  }

  // member: related_segment_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "related_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.related_segment_index, out);
    out << "\n";
  }

  // member: link_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
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

  // member: travel_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "travel_time: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_time, out);
    out << "\n";
  }

  // member: static_travel_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "static_travel_time: ";
    rosidl_generator_traits::value_to_yaml(msg.static_travel_time, out);
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

  // member: road_facilities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.road_facilities.size() == 0) {
      out << "road_facilities: []\n";
    } else {
      out << "road_facilities:\n";
      for (auto item : msg.road_facilities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: topo_id_64
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topo_id_64: ";
    rosidl_generator_traits::value_to_yaml(msg.topo_id_64, out);
    out << "\n";
  }

  // member: urid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "urid: ";
    rosidl_generator_traits::value_to_yaml(msg.urid, out);
    out << "\n";
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

  // member: main_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_action: ";
    rosidl_generator_traits::value_to_yaml(msg.main_action, out);
    out << "\n";
  }

  // member: assistant_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assistant_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assistant_action, out);
    out << "\n";
  }

  // member: adcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adcode: ";
    rosidl_generator_traits::value_to_yaml(msg.adcode, out);
    out << "\n";
  }

  // member: link_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_type: ";
    rosidl_generator_traits::value_to_yaml(msg.link_type, out);
    out << "\n";
  }

  // member: formway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "formway: ";
    rosidl_generator_traits::value_to_yaml(msg.formway, out);
    out << "\n";
  }

  // member: road_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << "\n";
  }

  // member: road_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.road_direction, out);
    out << "\n";
  }

  // member: ownership
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ownership: ";
    rosidl_generator_traits::value_to_yaml(msg.ownership, out);
    out << "\n";
  }

  // member: is_toll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_toll: ";
    rosidl_generator_traits::value_to_yaml(msg.is_toll, out);
    out << "\n";
  }

  // member: is_over_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_over_head: ";
    rosidl_generator_traits::value_to_yaml(msg.is_over_head, out);
    out << "\n";
  }

  // member: has_parallel_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_parallel_road: ";
    rosidl_generator_traits::value_to_yaml(msg.has_parallel_road, out);
    out << "\n";
  }

  // member: has_multi_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_multi_out: ";
    rosidl_generator_traits::value_to_yaml(msg.has_multi_out, out);
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

  // member: has_mix_fork
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_mix_fork: ";
    rosidl_generator_traits::value_to_yaml(msg.has_mix_fork, out);
    out << "\n";
  }

  // member: is_at_service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_at_service: ";
    rosidl_generator_traits::value_to_yaml(msg.is_at_service, out);
    out << "\n";
  }

  // member: is_restricting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_restricting: ";
    rosidl_generator_traits::value_to_yaml(msg.is_restricting, out);
    out << "\n";
  }

  // member: limit_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_flag, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: turn_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turn_infos.size() == 0) {
      out << "turn_infos: []\n";
    } else {
      out << "turn_infos:\n";
      for (auto item : msg.turn_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: inner_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inner_road: ";
    rosidl_generator_traits::value_to_yaml(msg.inner_road, out);
    out << "\n";
  }

  // member: is_parking_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_parking_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_parking_road, out);
    out << "\n";
  }

  // member: traffic_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_status: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinkInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::LinkInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::LinkInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::LinkInfoProto>()
{
  return "deva_navi_msgs::msg::LinkInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::LinkInfoProto>()
{
  return "deva_navi_msgs/msg/LinkInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::LinkInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::LinkInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::LinkInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__TRAITS_HPP_
