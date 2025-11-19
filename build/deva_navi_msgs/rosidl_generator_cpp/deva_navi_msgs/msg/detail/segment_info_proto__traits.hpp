// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'link_infos'
#include "deva_navi_msgs/msg/detail/link_info_proto__traits.hpp"
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"
// Member 'maneuver_icons'
#include "deva_navi_msgs/msg/detail/icon_road_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SegmentInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_infos
  {
    if (msg.link_infos.size() == 0) {
      out << "link_infos: []";
    } else {
      out << "link_infos: [";
      size_t pending_items = msg.link_infos.size();
      for (auto item : msg.link_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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

  // member: segment_index
  {
    out << "segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_index, out);
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

  // member: slope
  {
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: toll_cost
  {
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << ", ";
  }

  // member: toll_dist
  {
    out << "toll_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_dist, out);
    out << ", ";
  }

  // member: travel_time
  {
    out << "travel_time: ";
    rosidl_generator_traits::value_to_yaml(msg.travel_time, out);
    out << ", ";
  }

  // member: traffic_light_num
  {
    out << "traffic_light_num: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_num, out);
    out << ", ";
  }

  // member: is_end_of_road
  {
    out << "is_end_of_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_end_of_road, out);
    out << ", ";
  }

  // member: toll_road_name
  {
    out << "toll_road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_road_name, out);
    out << ", ";
  }

  // member: guideboard_name
  {
    out << "guideboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.guideboard_name, out);
    out << ", ";
  }

  // member: exit_name
  {
    out << "exit_name: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_name, out);
    out << ", ";
  }

  // member: crossing_name
  {
    out << "crossing_name: ";
    rosidl_generator_traits::value_to_yaml(msg.crossing_name, out);
    out << ", ";
  }

  // member: maneuver_icons
  {
    if (msg.maneuver_icons.size() == 0) {
      out << "maneuver_icons: []";
    } else {
      out << "maneuver_icons: [";
      size_t pending_items = msg.maneuver_icons.size();
      for (auto item : msg.maneuver_icons) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: uturn_and_arrivedest
  {
    out << "uturn_and_arrivedest: ";
    rosidl_generator_traits::value_to_yaml(msg.uturn_and_arrivedest, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_infos.size() == 0) {
      out << "link_infos: []\n";
    } else {
      out << "link_infos:\n";
      for (auto item : msg.link_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

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

  // member: segment_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_index, out);
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

  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
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

  // member: toll_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << "\n";
  }

  // member: toll_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_dist, out);
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

  // member: traffic_light_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_num: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_num, out);
    out << "\n";
  }

  // member: is_end_of_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_end_of_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_end_of_road, out);
    out << "\n";
  }

  // member: toll_road_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_road_name, out);
    out << "\n";
  }

  // member: guideboard_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guideboard_name: ";
    rosidl_generator_traits::value_to_yaml(msg.guideboard_name, out);
    out << "\n";
  }

  // member: exit_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_name: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_name, out);
    out << "\n";
  }

  // member: crossing_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossing_name: ";
    rosidl_generator_traits::value_to_yaml(msg.crossing_name, out);
    out << "\n";
  }

  // member: maneuver_icons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.maneuver_icons.size() == 0) {
      out << "maneuver_icons: []\n";
    } else {
      out << "maneuver_icons:\n";
      for (auto item : msg.maneuver_icons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: uturn_and_arrivedest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uturn_and_arrivedest: ";
    rosidl_generator_traits::value_to_yaml(msg.uturn_and_arrivedest, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentInfoProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::SegmentInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::SegmentInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::SegmentInfoProto>()
{
  return "deva_navi_msgs::msg::SegmentInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::SegmentInfoProto>()
{
  return "deva_navi_msgs/msg/SegmentInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::SegmentInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::SegmentInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::SegmentInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__TRAITS_HPP_
