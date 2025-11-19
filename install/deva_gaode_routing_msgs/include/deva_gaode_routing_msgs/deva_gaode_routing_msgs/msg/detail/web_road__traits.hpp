// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coord_list'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"
// Member 'intersection_msg'
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebRoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_traffic_light
  {
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
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

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: road_class
  {
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << ", ";
  }

  // member: specific_type
  {
    out << "specific_type: ";
    rosidl_generator_traits::value_to_yaml(msg.specific_type, out);
    out << ", ";
  }

  // member: road_direction
  {
    out << "road_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.road_direction, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: coord_list
  {
    if (msg.coord_list.size() == 0) {
      out << "coord_list: []";
    } else {
      out << "coord_list: [";
      size_t pending_items = msg.coord_list.size();
      for (auto item : msg.coord_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_status
  {
    out << "traffic_status: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_status, out);
    out << ", ";
  }

  // member: intersection_msg
  {
    if (msg.intersection_msg.size() == 0) {
      out << "intersection_msg: []";
    } else {
      out << "intersection_msg: [";
      size_t pending_items = msg.intersection_msg.size();
      for (auto item : msg.intersection_msg) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_traffic_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << "\n";
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

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
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

  // member: specific_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "specific_type: ";
    rosidl_generator_traits::value_to_yaml(msg.specific_type, out);
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

  // member: link_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << "\n";
  }

  // member: coord_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coord_list.size() == 0) {
      out << "coord_list: []\n";
    } else {
      out << "coord_list:\n";
      for (auto item : msg.coord_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: intersection_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersection_msg.size() == 0) {
      out << "intersection_msg: []\n";
    } else {
      out << "intersection_msg:\n";
      for (auto item : msg.intersection_msg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebRoad & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebRoad & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebRoad>()
{
  return "deva_gaode_routing_msgs::msg::WebRoad";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebRoad>()
{
  return "deva_gaode_routing_msgs/msg/WebRoad";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebRoad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebRoad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebRoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__TRAITS_HPP_
