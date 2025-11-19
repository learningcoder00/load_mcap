// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebCrossNaviInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: assist_action
  {
    out << "assist_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assist_action, out);
    out << ", ";
  }

  // member: cross_maneuver_id
  {
    out << "cross_maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_maneuver_id, out);
    out << ", ";
  }

  // member: cur_to_segment_dist
  {
    out << "cur_to_segment_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_to_segment_dist, out);
    out << ", ";
  }

  // member: cur_to_segment_time
  {
    out << "cur_to_segment_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_to_segment_time, out);
    out << ", ";
  }

  // member: dest_direction
  {
    out << "dest_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_direction, out);
    out << ", ";
  }

  // member: main_action
  {
    out << "main_action: ";
    rosidl_generator_traits::value_to_yaml(msg.main_action, out);
    out << ", ";
  }

  // member: maneuver_id
  {
    out << "maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_id, out);
    out << ", ";
  }

  // member: next_road_name
  {
    out << "next_road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.next_road_name, out);
    out << ", ";
  }

  // member: out_cnt
  {
    out << "out_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.out_cnt, out);
    out << ", ";
  }

  // member: path_id
  {
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << ", ";
  }

  // member: rev
  {
    out << "rev: ";
    rosidl_generator_traits::value_to_yaml(msg.rev, out);
    out << ", ";
  }

  // member: reversed
  {
    out << "reversed: ";
    rosidl_generator_traits::value_to_yaml(msg.reversed, out);
    out << ", ";
  }

  // member: seg_idx
  {
    out << "seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_idx, out);
    out << ", ";
  }

  // member: tunnel_flag
  {
    out << "tunnel_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.tunnel_flag, out);
    out << ", ";
  }

  // member: via_num
  {
    out << "via_num: ";
    rosidl_generator_traits::value_to_yaml(msg.via_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebCrossNaviInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: assist_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assist_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assist_action, out);
    out << "\n";
  }

  // member: cross_maneuver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_maneuver_id, out);
    out << "\n";
  }

  // member: cur_to_segment_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_to_segment_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_to_segment_dist, out);
    out << "\n";
  }

  // member: cur_to_segment_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_to_segment_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_to_segment_time, out);
    out << "\n";
  }

  // member: dest_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dest_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_direction, out);
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

  // member: maneuver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_id, out);
    out << "\n";
  }

  // member: next_road_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.next_road_name, out);
    out << "\n";
  }

  // member: out_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.out_cnt, out);
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

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rev: ";
    rosidl_generator_traits::value_to_yaml(msg.rev, out);
    out << "\n";
  }

  // member: reversed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reversed: ";
    rosidl_generator_traits::value_to_yaml(msg.reversed, out);
    out << "\n";
  }

  // member: seg_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_idx, out);
    out << "\n";
  }

  // member: tunnel_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tunnel_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.tunnel_flag, out);
    out << "\n";
  }

  // member: via_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "via_num: ";
    rosidl_generator_traits::value_to_yaml(msg.via_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebCrossNaviInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebCrossNaviInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebCrossNaviInfo>()
{
  return "deva_gaode_routing_msgs::msg::WebCrossNaviInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebCrossNaviInfo>()
{
  return "deva_gaode_routing_msgs/msg/WebCrossNaviInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebCrossNaviInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebCrossNaviInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebCrossNaviInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__TRAITS_HPP_
