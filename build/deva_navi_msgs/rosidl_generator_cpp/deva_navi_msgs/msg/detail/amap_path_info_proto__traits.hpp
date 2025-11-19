// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'all_3d_traffic_lights'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"
// Member 'segment_infos'
#include "deva_navi_msgs/msg/detail/segment_info_proto__traits.hpp"
// Member 'line_icon_points'
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__traits.hpp"
// Member 'via_point_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__traits.hpp"
// Member 'charge_station_info'
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__traits.hpp"
// Member 'odd_seg_infos'
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__traits.hpp"
// Member 'group_segments'
#include "deva_navi_msgs/msg/detail/group_segment_proto__traits.hpp"
// Member 'restriction_info'
#include "deva_navi_msgs/msg/detail/restriction_info_proto__traits.hpp"
// Member 'end_poi'
#include "deva_navi_msgs/msg/detail/poi_info_proto__traits.hpp"
// Member 'tip'
#include "deva_navi_msgs/msg/detail/tip_info_proto__traits.hpp"
// Member 'elec_path_info'
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__traits.hpp"
// Member 'path_description_info'
#include "deva_navi_msgs/msg/detail/path_description_info_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AmapPathInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_3d_traffic_lights
  {
    if (msg.all_3d_traffic_lights.size() == 0) {
      out << "all_3d_traffic_lights: []";
    } else {
      out << "all_3d_traffic_lights: [";
      size_t pending_items = msg.all_3d_traffic_lights.size();
      for (auto item : msg.all_3d_traffic_lights) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: segment_infos
  {
    if (msg.segment_infos.size() == 0) {
      out << "segment_infos: []";
    } else {
      out << "segment_infos: [";
      size_t pending_items = msg.segment_infos.size();
      for (auto item : msg.segment_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: line_icon_points
  {
    if (msg.line_icon_points.size() == 0) {
      out << "line_icon_points: []";
    } else {
      out << "line_icon_points: [";
      size_t pending_items = msg.line_icon_points.size();
      for (auto item : msg.line_icon_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: city_adcode_list
  {
    if (msg.city_adcode_list.size() == 0) {
      out << "city_adcode_list: []";
    } else {
      out << "city_adcode_list: [";
      size_t pending_items = msg.city_adcode_list.size();
      for (auto item : msg.city_adcode_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: via_point_info
  {
    if (msg.via_point_info.size() == 0) {
      out << "via_point_info: []";
    } else {
      out << "via_point_info: [";
      size_t pending_items = msg.via_point_info.size();
      for (auto item : msg.via_point_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: charge_station_info
  {
    if (msg.charge_station_info.size() == 0) {
      out << "charge_station_info: []";
    } else {
      out << "charge_station_info: [";
      size_t pending_items = msg.charge_station_info.size();
      for (auto item : msg.charge_station_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: odd_seg_infos
  {
    if (msg.odd_seg_infos.size() == 0) {
      out << "odd_seg_infos: []";
    } else {
      out << "odd_seg_infos: [";
      size_t pending_items = msg.odd_seg_infos.size();
      for (auto item : msg.odd_seg_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: plan_channel_id
  {
    out << "plan_channel_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_channel_id, out);
    out << ", ";
  }

  // member: offline_req_custom_identity_id
  {
    out << "offline_req_custom_identity_id: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_req_custom_identity_id, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << ", ";
  }

  // member: path_id
  {
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: strategy
  {
    out << "strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.strategy, out);
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

  // member: toll_cost
  {
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << ", ";
  }

  // member: navi_id
  {
    out << "navi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_id, out);
    out << ", ";
  }

  // member: is_online
  {
    out << "is_online: ";
    rosidl_generator_traits::value_to_yaml(msg.is_online, out);
    out << ", ";
  }

  // member: group_segments
  {
    if (msg.group_segments.size() == 0) {
      out << "group_segments: []";
    } else {
      out << "group_segments: [";
      size_t pending_items = msg.group_segments.size();
      for (auto item : msg.group_segments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: restriction_info
  {
    out << "restriction_info: ";
    to_flow_style_yaml(msg.restriction_info, out);
    out << ", ";
  }

  // member: end_poi
  {
    out << "end_poi: ";
    to_flow_style_yaml(msg.end_poi, out);
    out << ", ";
  }

  // member: tip
  {
    out << "tip: ";
    to_flow_style_yaml(msg.tip, out);
    out << ", ";
  }

  // member: end_direction
  {
    out << "end_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.end_direction, out);
    out << ", ";
  }

  // member: is_holiday_free
  {
    out << "is_holiday_free: ";
    rosidl_generator_traits::value_to_yaml(msg.is_holiday_free, out);
    out << ", ";
  }

  // member: is_truck_path
  {
    out << "is_truck_path: ";
    rosidl_generator_traits::value_to_yaml(msg.is_truck_path, out);
    out << ", ";
  }

  // member: data_version
  {
    out << "data_version: ";
    rosidl_generator_traits::value_to_yaml(msg.data_version, out);
    out << ", ";
  }

  // member: normal_plan_time
  {
    out << "normal_plan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.normal_plan_time, out);
    out << ", ";
  }

  // member: route_type
  {
    out << "route_type: ";
    rosidl_generator_traits::value_to_yaml(msg.route_type, out);
    out << ", ";
  }

  // member: elec_path_info
  {
    out << "elec_path_info: ";
    to_flow_style_yaml(msg.elec_path_info, out);
    out << ", ";
  }

  // member: path_description_info
  {
    out << "path_description_info: ";
    to_flow_style_yaml(msg.path_description_info, out);
    out << ", ";
  }

  // member: remain_toll_cost
  {
    out << "remain_toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_toll_cost, out);
    out << ", ";
  }

  // member: main_route_remain_toll_cost
  {
    out << "main_route_remain_toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.main_route_remain_toll_cost, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmapPathInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_3d_traffic_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_3d_traffic_lights.size() == 0) {
      out << "all_3d_traffic_lights: []\n";
    } else {
      out << "all_3d_traffic_lights:\n";
      for (auto item : msg.all_3d_traffic_lights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: segment_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.segment_infos.size() == 0) {
      out << "segment_infos: []\n";
    } else {
      out << "segment_infos:\n";
      for (auto item : msg.segment_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: line_icon_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_icon_points.size() == 0) {
      out << "line_icon_points: []\n";
    } else {
      out << "line_icon_points:\n";
      for (auto item : msg.line_icon_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: city_adcode_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.city_adcode_list.size() == 0) {
      out << "city_adcode_list: []\n";
    } else {
      out << "city_adcode_list:\n";
      for (auto item : msg.city_adcode_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: via_point_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.via_point_info.size() == 0) {
      out << "via_point_info: []\n";
    } else {
      out << "via_point_info:\n";
      for (auto item : msg.via_point_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: charge_station_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.charge_station_info.size() == 0) {
      out << "charge_station_info: []\n";
    } else {
      out << "charge_station_info:\n";
      for (auto item : msg.charge_station_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: odd_seg_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.odd_seg_infos.size() == 0) {
      out << "odd_seg_infos: []\n";
    } else {
      out << "odd_seg_infos:\n";
      for (auto item : msg.odd_seg_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: plan_channel_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_channel_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_channel_id, out);
    out << "\n";
  }

  // member: offline_req_custom_identity_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offline_req_custom_identity_id: ";
    rosidl_generator_traits::value_to_yaml(msg.offline_req_custom_identity_id, out);
    out << "\n";
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

  // member: path_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << "\n";
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

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: strategy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.strategy, out);
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

  // member: toll_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << "\n";
  }

  // member: navi_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_id, out);
    out << "\n";
  }

  // member: is_online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_online: ";
    rosidl_generator_traits::value_to_yaml(msg.is_online, out);
    out << "\n";
  }

  // member: group_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.group_segments.size() == 0) {
      out << "group_segments: []\n";
    } else {
      out << "group_segments:\n";
      for (auto item : msg.group_segments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: restriction_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_info:\n";
    to_block_style_yaml(msg.restriction_info, out, indentation + 2);
  }

  // member: end_poi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_poi:\n";
    to_block_style_yaml(msg.end_poi, out, indentation + 2);
  }

  // member: tip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tip:\n";
    to_block_style_yaml(msg.tip, out, indentation + 2);
  }

  // member: end_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.end_direction, out);
    out << "\n";
  }

  // member: is_holiday_free
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_holiday_free: ";
    rosidl_generator_traits::value_to_yaml(msg.is_holiday_free, out);
    out << "\n";
  }

  // member: is_truck_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_truck_path: ";
    rosidl_generator_traits::value_to_yaml(msg.is_truck_path, out);
    out << "\n";
  }

  // member: data_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_version: ";
    rosidl_generator_traits::value_to_yaml(msg.data_version, out);
    out << "\n";
  }

  // member: normal_plan_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal_plan_time: ";
    rosidl_generator_traits::value_to_yaml(msg.normal_plan_time, out);
    out << "\n";
  }

  // member: route_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_type: ";
    rosidl_generator_traits::value_to_yaml(msg.route_type, out);
    out << "\n";
  }

  // member: elec_path_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elec_path_info:\n";
    to_block_style_yaml(msg.elec_path_info, out, indentation + 2);
  }

  // member: path_description_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_description_info:\n";
    to_block_style_yaml(msg.path_description_info, out, indentation + 2);
  }

  // member: remain_toll_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_toll_cost, out);
    out << "\n";
  }

  // member: main_route_remain_toll_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_route_remain_toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.main_route_remain_toll_cost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmapPathInfoProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::AmapPathInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::AmapPathInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::AmapPathInfoProto>()
{
  return "deva_navi_msgs::msg::AmapPathInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::AmapPathInfoProto>()
{
  return "deva_navi_msgs/msg/AmapPathInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::AmapPathInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::AmapPathInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::AmapPathInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__TRAITS_HPP_
