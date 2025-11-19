// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LinkAttribute & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_id
  {
    out << "link_id: ";
    to_flow_style_yaml(msg.link_id, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: lane_num_sum
  {
    out << "lane_num_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_sum, out);
    out << ", ";
  }

  // member: lane_num_s2e
  {
    out << "lane_num_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_s2e, out);
    out << ", ";
  }

  // member: lane_num_e2s
  {
    out << "lane_num_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_e2s, out);
    out << ", ";
  }

  // member: speed_limit_s2e
  {
    out << "speed_limit_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_s2e, out);
    out << ", ";
  }

  // member: speed_limit_e2s
  {
    out << "speed_limit_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_e2s, out);
    out << ", ";
  }

  // member: road_class
  {
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << ", ";
  }

  // member: toll_type
  {
    out << "toll_type: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_type, out);
    out << ", ";
  }

  // member: road_kinds
  {
    if (msg.road_kinds.size() == 0) {
      out << "road_kinds: []";
    } else {
      out << "road_kinds: [";
      size_t pending_items = msg.road_kinds.size();
      for (auto item : msg.road_kinds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coverage_status
  {
    out << "coverage_status: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_status, out);
    out << ", ";
  }

  // member: function_class
  {
    out << "function_class: ";
    rosidl_generator_traits::value_to_yaml(msg.function_class, out);
    out << ", ";
  }

  // member: construction_type
  {
    out << "construction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.construction_type, out);
    out << ", ";
  }

  // member: condition_type
  {
    out << "condition_type: ";
    rosidl_generator_traits::value_to_yaml(msg.condition_type, out);
    out << ", ";
  }

  // member: speed_class
  {
    out << "speed_class: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_class, out);
    out << ", ";
  }

  // member: admin_code
  {
    out << "admin_code: ";
    rosidl_generator_traits::value_to_yaml(msg.admin_code, out);
    out << ", ";
  }

  // member: vehicle_types
  {
    if (msg.vehicle_types.size() == 0) {
      out << "vehicle_types: []";
    } else {
      out << "vehicle_types: [";
      size_t pending_items = msg.vehicle_types.size();
      for (auto item : msg.vehicle_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: compacity
  {
    out << "compacity: ";
    rosidl_generator_traits::value_to_yaml(msg.compacity, out);
    out << ", ";
  }

  // member: is_special
  {
    out << "is_special: ";
    rosidl_generator_traits::value_to_yaml(msg.is_special, out);
    out << ", ";
  }

  // member: is_in_city
  {
    out << "is_in_city: ";
    rosidl_generator_traits::value_to_yaml(msg.is_in_city, out);
    out << ", ";
  }

  // member: is_cross_tile
  {
    out << "is_cross_tile: ";
    rosidl_generator_traits::value_to_yaml(msg.is_cross_tile, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinkAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_id:\n";
    to_block_style_yaml(msg.link_id, out, indentation + 2);
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

  // member: link_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << "\n";
  }

  // member: lane_num_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_sum, out);
    out << "\n";
  }

  // member: lane_num_s2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_s2e, out);
    out << "\n";
  }

  // member: lane_num_e2s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_e2s, out);
    out << "\n";
  }

  // member: speed_limit_s2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_s2e, out);
    out << "\n";
  }

  // member: speed_limit_e2s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_e2s, out);
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

  // member: toll_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_type: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_type, out);
    out << "\n";
  }

  // member: road_kinds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.road_kinds.size() == 0) {
      out << "road_kinds: []\n";
    } else {
      out << "road_kinds:\n";
      for (auto item : msg.road_kinds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coverage_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_status: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_status, out);
    out << "\n";
  }

  // member: function_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function_class: ";
    rosidl_generator_traits::value_to_yaml(msg.function_class, out);
    out << "\n";
  }

  // member: construction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "construction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.construction_type, out);
    out << "\n";
  }

  // member: condition_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition_type: ";
    rosidl_generator_traits::value_to_yaml(msg.condition_type, out);
    out << "\n";
  }

  // member: speed_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_class: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_class, out);
    out << "\n";
  }

  // member: admin_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "admin_code: ";
    rosidl_generator_traits::value_to_yaml(msg.admin_code, out);
    out << "\n";
  }

  // member: vehicle_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_types.size() == 0) {
      out << "vehicle_types: []\n";
    } else {
      out << "vehicle_types:\n";
      for (auto item : msg.vehicle_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: compacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compacity: ";
    rosidl_generator_traits::value_to_yaml(msg.compacity, out);
    out << "\n";
  }

  // member: is_special
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_special: ";
    rosidl_generator_traits::value_to_yaml(msg.is_special, out);
    out << "\n";
  }

  // member: is_in_city
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_in_city: ";
    rosidl_generator_traits::value_to_yaml(msg.is_in_city, out);
    out << "\n";
  }

  // member: is_cross_tile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_cross_tile: ";
    rosidl_generator_traits::value_to_yaml(msg.is_cross_tile, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinkAttribute & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LinkAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LinkAttribute & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LinkAttribute>()
{
  return "deva_gaode_routing_msgs::msg::LinkAttribute";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LinkAttribute>()
{
  return "deva_gaode_routing_msgs/msg/LinkAttribute";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LinkAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LinkAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LinkAttribute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__TRAITS_HPP_
