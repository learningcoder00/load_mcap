// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'connect_restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProLaneConnect & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: out_road
  {
    out << "out_road: ";
    rosidl_generator_traits::value_to_yaml(msg.out_road, out);
    out << ", ";
  }

  // member: pass_road_ids
  {
    if (msg.pass_road_ids.size() == 0) {
      out << "pass_road_ids: []";
    } else {
      out << "pass_road_ids: [";
      size_t pending_items = msg.pass_road_ids.size();
      for (auto item : msg.pass_road_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: arrow_info
  {
    out << "arrow_info: ";
    rosidl_generator_traits::value_to_yaml(msg.arrow_info, out);
    out << ", ";
  }

  // member: lane_info
  {
    out << "lane_info: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_info, out);
    out << ", ";
  }

  // member: bus_lane
  {
    out << "bus_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_lane, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: lane_left
  {
    out << "lane_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_left, out);
    out << ", ";
  }

  // member: lane_right
  {
    out << "lane_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_right, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: limit_lane
  {
    out << "limit_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_lane, out);
    out << ", ";
  }

  // member: connect_restriction
  {
    if (msg.connect_restriction.size() == 0) {
      out << "connect_restriction: []";
    } else {
      out << "connect_restriction: [";
      size_t pending_items = msg.connect_restriction.size();
      for (auto item : msg.connect_restriction) {
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
  const SdProLaneConnect & msg,
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

  // member: out_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out_road: ";
    rosidl_generator_traits::value_to_yaml(msg.out_road, out);
    out << "\n";
  }

  // member: pass_road_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pass_road_ids.size() == 0) {
      out << "pass_road_ids: []\n";
    } else {
      out << "pass_road_ids:\n";
      for (auto item : msg.pass_road_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: arrow_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrow_info: ";
    rosidl_generator_traits::value_to_yaml(msg.arrow_info, out);
    out << "\n";
  }

  // member: lane_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_info: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_info, out);
    out << "\n";
  }

  // member: bus_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_lane, out);
    out << "\n";
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

  // member: lane_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_left, out);
    out << "\n";
  }

  // member: lane_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_right, out);
    out << "\n";
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: limit_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_lane, out);
    out << "\n";
  }

  // member: connect_restriction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connect_restriction.size() == 0) {
      out << "connect_restriction: []\n";
    } else {
      out << "connect_restriction:\n";
      for (auto item : msg.connect_restriction) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProLaneConnect & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProLaneConnect & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProLaneConnect & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProLaneConnect>()
{
  return "deva_gaode_routing_msgs::msg::SdProLaneConnect";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProLaneConnect>()
{
  return "deva_gaode_routing_msgs/msg/SdProLaneConnect";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProLaneConnect>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProLaneConnect>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProLaneConnect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__TRAITS_HPP_
