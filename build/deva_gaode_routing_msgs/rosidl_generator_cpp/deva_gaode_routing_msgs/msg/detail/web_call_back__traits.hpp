// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_info'
#include "deva_gaode_routing_msgs/msg/detail/web_lane__traits.hpp"
// Member 'camera_callback'
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__traits.hpp"
// Member 'not_avoid_info'
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__traits.hpp"
// Member 'next_cross_info'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__traits.hpp"
// Member 'traffic_light_cd'
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__traits.hpp"
// Member 'parallel_road'
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__traits.hpp"
// Member 'cross_image'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebCallBack & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: cur_step
  {
    out << "cur_step: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step, out);
    out << ", ";
  }

  // member: cur_road
  {
    out << "cur_road: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road, out);
    out << ", ";
  }

  // member: cur_point
  {
    out << "cur_point: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_point, out);
    out << ", ";
  }

  // member: cur_road_retain_dis
  {
    out << "cur_road_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road_retain_dis, out);
    out << ", ";
  }

  // member: cur_step_retain_dis
  {
    out << "cur_step_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step_retain_dis, out);
    out << ", ";
  }

  // member: cur_step_retain_time
  {
    out << "cur_step_retain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step_retain_time, out);
    out << ", ";
  }

  // member: via_retain_dis
  {
    if (msg.via_retain_dis.size() == 0) {
      out << "via_retain_dis: []";
    } else {
      out << "via_retain_dis: [";
      size_t pending_items = msg.via_retain_dis.size();
      for (auto item : msg.via_retain_dis) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_retain_dis
  {
    out << "path_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.path_retain_dis, out);
    out << ", ";
  }

  // member: path_retain_time
  {
    out << "path_retain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.path_retain_time, out);
    out << ", ";
  }

  // member: trun_icon
  {
    out << "trun_icon: ";
    rosidl_generator_traits::value_to_yaml(msg.trun_icon, out);
    out << ", ";
  }

  // member: trun_icon_retain_dis
  {
    out << "trun_icon_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.trun_icon_retain_dis, out);
    out << ", ";
  }

  // member: lane_info
  {
    out << "lane_info: ";
    to_flow_style_yaml(msg.lane_info, out);
    out << ", ";
  }

  // member: camera_callback
  {
    out << "camera_callback: ";
    to_flow_style_yaml(msg.camera_callback, out);
    out << ", ";
  }

  // member: ring_out_cnt
  {
    out << "ring_out_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_out_cnt, out);
    out << ", ";
  }

  // member: roundabout_out_angle
  {
    out << "roundabout_out_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roundabout_out_angle, out);
    out << ", ";
  }

  // member: cur_link_speed
  {
    out << "cur_link_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_link_speed, out);
    out << ", ";
  }

  // member: not_avoid_info
  {
    out << "not_avoid_info: ";
    to_flow_style_yaml(msg.not_avoid_info, out);
    out << ", ";
  }

  // member: cross_maneuver_id
  {
    out << "cross_maneuver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_maneuver_id, out);
    out << ", ";
  }

  // member: next_cross_info
  {
    if (msg.next_cross_info.size() == 0) {
      out << "next_cross_info: []";
    } else {
      out << "next_cross_info: [";
      size_t pending_items = msg.next_cross_info.size();
      for (auto item : msg.next_cross_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_light_cd
  {
    out << "traffic_light_cd: ";
    to_flow_style_yaml(msg.traffic_light_cd, out);
    out << ", ";
  }

  // member: parallel_road
  {
    out << "parallel_road: ";
    to_flow_style_yaml(msg.parallel_road, out);
    out << ", ";
  }

  // member: ownership
  {
    out << "ownership: ";
    rosidl_generator_traits::value_to_yaml(msg.ownership, out);
    out << ", ";
  }

  // member: cur_road_limit_speed
  {
    out << "cur_road_limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road_limit_speed, out);
    out << ", ";
  }

  // member: cross_image
  {
    out << "cross_image: ";
    to_flow_style_yaml(msg.cross_image, out);
    out << ", ";
  }

  // member: cur_cross_dir
  {
    out << "cur_cross_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_cross_dir, out);
    out << ", ";
  }

  // member: cur_cross_dist
  {
    out << "cur_cross_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_cross_dist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebCallBack & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: cur_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_step: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step, out);
    out << "\n";
  }

  // member: cur_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_road: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road, out);
    out << "\n";
  }

  // member: cur_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_point: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_point, out);
    out << "\n";
  }

  // member: cur_road_retain_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_road_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road_retain_dis, out);
    out << "\n";
  }

  // member: cur_step_retain_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_step_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step_retain_dis, out);
    out << "\n";
  }

  // member: cur_step_retain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_step_retain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_step_retain_time, out);
    out << "\n";
  }

  // member: via_retain_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.via_retain_dis.size() == 0) {
      out << "via_retain_dis: []\n";
    } else {
      out << "via_retain_dis:\n";
      for (auto item : msg.via_retain_dis) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_retain_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.path_retain_dis, out);
    out << "\n";
  }

  // member: path_retain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_retain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.path_retain_time, out);
    out << "\n";
  }

  // member: trun_icon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trun_icon: ";
    rosidl_generator_traits::value_to_yaml(msg.trun_icon, out);
    out << "\n";
  }

  // member: trun_icon_retain_dis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trun_icon_retain_dis: ";
    rosidl_generator_traits::value_to_yaml(msg.trun_icon_retain_dis, out);
    out << "\n";
  }

  // member: lane_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_info:\n";
    to_block_style_yaml(msg.lane_info, out, indentation + 2);
  }

  // member: camera_callback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_callback:\n";
    to_block_style_yaml(msg.camera_callback, out, indentation + 2);
  }

  // member: ring_out_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring_out_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_out_cnt, out);
    out << "\n";
  }

  // member: roundabout_out_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roundabout_out_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roundabout_out_angle, out);
    out << "\n";
  }

  // member: cur_link_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_link_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_link_speed, out);
    out << "\n";
  }

  // member: not_avoid_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_avoid_info:\n";
    to_block_style_yaml(msg.not_avoid_info, out, indentation + 2);
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

  // member: next_cross_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_cross_info.size() == 0) {
      out << "next_cross_info: []\n";
    } else {
      out << "next_cross_info:\n";
      for (auto item : msg.next_cross_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traffic_light_cd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_cd:\n";
    to_block_style_yaml(msg.traffic_light_cd, out, indentation + 2);
  }

  // member: parallel_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parallel_road:\n";
    to_block_style_yaml(msg.parallel_road, out, indentation + 2);
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

  // member: cur_road_limit_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_road_limit_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_road_limit_speed, out);
    out << "\n";
  }

  // member: cross_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_image:\n";
    to_block_style_yaml(msg.cross_image, out, indentation + 2);
  }

  // member: cur_cross_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_cross_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_cross_dir, out);
    out << "\n";
  }

  // member: cur_cross_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_cross_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.cur_cross_dist, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebCallBack & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebCallBack & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebCallBack & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebCallBack>()
{
  return "deva_gaode_routing_msgs::msg::WebCallBack";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebCallBack>()
{
  return "deva_gaode_routing_msgs/msg/WebCallBack";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebCallBack>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebCallBack>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebCallBack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__TRAITS_HPP_
