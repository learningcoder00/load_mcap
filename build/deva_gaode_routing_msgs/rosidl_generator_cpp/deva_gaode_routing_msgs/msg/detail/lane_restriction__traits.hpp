// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneRestriction & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: limit_vehicle_type
  {
    if (msg.limit_vehicle_type.size() == 0) {
      out << "limit_vehicle_type: []";
    } else {
      out << "limit_vehicle_type: [";
      size_t pending_items = msg.limit_vehicle_type.size();
      for (auto item : msg.limit_vehicle_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: special_time_type
  {
    if (msg.special_time_type.size() == 0) {
      out << "special_time_type: []";
    } else {
      out << "special_time_type: [";
      size_t pending_items = msg.special_time_type.size();
      for (auto item : msg.special_time_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: restrict_time_period
  {
    out << "restrict_time_period: ";
    rosidl_generator_traits::value_to_yaml(msg.restrict_time_period, out);
    out << ", ";
  }

  // member: lane_direction
  {
    out << "lane_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_direction, out);
    out << ", ";
  }

  // member: lane_retriction_type
  {
    out << "lane_retriction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_retriction_type, out);
    out << ", ";
  }

  // member: lane_range_start
  {
    out << "lane_range_start: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_range_start, out);
    out << ", ";
  }

  // member: lane_range_end
  {
    out << "lane_range_end: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_range_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneRestriction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: limit_vehicle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.limit_vehicle_type.size() == 0) {
      out << "limit_vehicle_type: []\n";
    } else {
      out << "limit_vehicle_type:\n";
      for (auto item : msg.limit_vehicle_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: special_time_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.special_time_type.size() == 0) {
      out << "special_time_type: []\n";
    } else {
      out << "special_time_type:\n";
      for (auto item : msg.special_time_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: restrict_time_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restrict_time_period: ";
    rosidl_generator_traits::value_to_yaml(msg.restrict_time_period, out);
    out << "\n";
  }

  // member: lane_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_direction, out);
    out << "\n";
  }

  // member: lane_retriction_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_retriction_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_retriction_type, out);
    out << "\n";
  }

  // member: lane_range_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_range_start: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_range_start, out);
    out << "\n";
  }

  // member: lane_range_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_range_end: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_range_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneRestriction & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LaneRestriction & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LaneRestriction & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LaneRestriction>()
{
  return "deva_gaode_routing_msgs::msg::LaneRestriction";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LaneRestriction>()
{
  return "deva_gaode_routing_msgs/msg/LaneRestriction";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LaneRestriction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LaneRestriction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LaneRestriction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__TRAITS_HPP_
