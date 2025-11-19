// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'next_lanes'
// Member 'pre_lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lane_arrow_type
  {
    out << "lane_arrow_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_arrow_type, out);
    out << ", ";
  }

  // member: category_location
  {
    out << "category_location: ";
    rosidl_generator_traits::value_to_yaml(msg.category_location, out);
    out << ", ";
  }

  // member: category_vehicle
  {
    out << "category_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.category_vehicle, out);
    out << ", ";
  }

  // member: category_special
  {
    out << "category_special: ";
    rosidl_generator_traits::value_to_yaml(msg.category_special, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: next_lanes
  {
    if (msg.next_lanes.size() == 0) {
      out << "next_lanes: []";
    } else {
      out << "next_lanes: [";
      size_t pending_items = msg.next_lanes.size();
      for (auto item : msg.next_lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pre_lanes
  {
    if (msg.pre_lanes.size() == 0) {
      out << "pre_lanes: []";
    } else {
      out << "pre_lanes: [";
      size_t pending_items = msg.pre_lanes.size();
      for (auto item : msg.pre_lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transition
  {
    out << "transition: ";
    rosidl_generator_traits::value_to_yaml(msg.transition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SdProLane & msg,
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

  // member: lane_arrow_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_arrow_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_arrow_type, out);
    out << "\n";
  }

  // member: category_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category_location: ";
    rosidl_generator_traits::value_to_yaml(msg.category_location, out);
    out << "\n";
  }

  // member: category_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category_vehicle: ";
    rosidl_generator_traits::value_to_yaml(msg.category_vehicle, out);
    out << "\n";
  }

  // member: category_special
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category_special: ";
    rosidl_generator_traits::value_to_yaml(msg.category_special, out);
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

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
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

  // member: next_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_lanes.size() == 0) {
      out << "next_lanes: []\n";
    } else {
      out << "next_lanes:\n";
      for (auto item : msg.next_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pre_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pre_lanes.size() == 0) {
      out << "pre_lanes: []\n";
    } else {
      out << "pre_lanes:\n";
      for (auto item : msg.pre_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition: ";
    rosidl_generator_traits::value_to_yaml(msg.transition, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProLane & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProLane & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProLane>()
{
  return "deva_gaode_routing_msgs::msg::SdProLane";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProLane>()
{
  return "deva_gaode_routing_msgs/msg/SdProLane";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__TRAITS_HPP_
