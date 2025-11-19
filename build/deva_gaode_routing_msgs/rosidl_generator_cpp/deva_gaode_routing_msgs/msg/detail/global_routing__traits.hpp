// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/global_routing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_point'
// Member 'way_points'
// Member 'end_point'
// Member 'cur_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"
// Member 'locate_step'
// Member 'forward_step'
#include "deva_gaode_routing_msgs/msg/detail/web_step__traits.hpp"
// Member 'call_back'
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__traits.hpp"
// Member 'vocal_info'
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__traits.hpp"
// Member 'global_path'
#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalRouting & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: md5
  {
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: start_point
  {
    out << "start_point: ";
    to_flow_style_yaml(msg.start_point, out);
    out << ", ";
  }

  // member: way_points
  {
    if (msg.way_points.size() == 0) {
      out << "way_points: []";
    } else {
      out << "way_points: [";
      size_t pending_items = msg.way_points.size();
      for (auto item : msg.way_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_point
  {
    out << "end_point: ";
    to_flow_style_yaml(msg.end_point, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: step_num
  {
    out << "step_num: ";
    rosidl_generator_traits::value_to_yaml(msg.step_num, out);
    out << ", ";
  }

  // member: locate_step
  {
    out << "locate_step: ";
    to_flow_style_yaml(msg.locate_step, out);
    out << ", ";
  }

  // member: forward_step
  {
    out << "forward_step: ";
    to_flow_style_yaml(msg.forward_step, out);
    out << ", ";
  }

  // member: traffic_light_count
  {
    out << "traffic_light_count: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_count, out);
    out << ", ";
  }

  // member: call_back
  {
    out << "call_back: ";
    to_flow_style_yaml(msg.call_back, out);
    out << ", ";
  }

  // member: vocal_info
  {
    out << "vocal_info: ";
    to_flow_style_yaml(msg.vocal_info, out);
    out << ", ";
  }

  // member: global_path
  {
    out << "global_path: ";
    to_flow_style_yaml(msg.global_path, out);
    out << ", ";
  }

  // member: cur_point
  {
    out << "cur_point: ";
    to_flow_style_yaml(msg.cur_point, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalRouting & msg,
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

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: start_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_point:\n";
    to_block_style_yaml(msg.start_point, out, indentation + 2);
  }

  // member: way_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.way_points.size() == 0) {
      out << "way_points: []\n";
    } else {
      out << "way_points:\n";
      for (auto item : msg.way_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point:\n";
    to_block_style_yaml(msg.end_point, out, indentation + 2);
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: step_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_num: ";
    rosidl_generator_traits::value_to_yaml(msg.step_num, out);
    out << "\n";
  }

  // member: locate_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locate_step:\n";
    to_block_style_yaml(msg.locate_step, out, indentation + 2);
  }

  // member: forward_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_step:\n";
    to_block_style_yaml(msg.forward_step, out, indentation + 2);
  }

  // member: traffic_light_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_count: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_count, out);
    out << "\n";
  }

  // member: call_back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "call_back:\n";
    to_block_style_yaml(msg.call_back, out, indentation + 2);
  }

  // member: vocal_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vocal_info:\n";
    to_block_style_yaml(msg.vocal_info, out, indentation + 2);
  }

  // member: global_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_path:\n";
    to_block_style_yaml(msg.global_path, out, indentation + 2);
  }

  // member: cur_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cur_point:\n";
    to_block_style_yaml(msg.cur_point, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalRouting & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::GlobalRouting & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::GlobalRouting & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::GlobalRouting>()
{
  return "deva_gaode_routing_msgs::msg::GlobalRouting";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::GlobalRouting>()
{
  return "deva_gaode_routing_msgs/msg/GlobalRouting";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::GlobalRouting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::GlobalRouting>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::GlobalRouting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__TRAITS_HPP_
