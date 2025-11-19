// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'marking_equation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__traits.hpp"
// Member 'marking_type_vec'
#include "deva_map_msgs/msg/detail/channel_marking_type__traits.hpp"
// Member 'marking_point_vec'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChannelLaneMarking & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: perception_lane_id
  {
    out << "perception_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_lane_id, out);
    out << ", ";
  }

  // member: marking_equation_vec
  {
    if (msg.marking_equation_vec.size() == 0) {
      out << "marking_equation_vec: []";
    } else {
      out << "marking_equation_vec: [";
      size_t pending_items = msg.marking_equation_vec.size();
      for (auto item : msg.marking_equation_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: marking_type_vec
  {
    if (msg.marking_type_vec.size() == 0) {
      out << "marking_type_vec: []";
    } else {
      out << "marking_type_vec: [";
      size_t pending_items = msg.marking_type_vec.size();
      for (auto item : msg.marking_type_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: marking_point_vec
  {
    if (msg.marking_point_vec.size() == 0) {
      out << "marking_point_vec: []";
    } else {
      out << "marking_point_vec: [";
      size_t pending_items = msg.marking_point_vec.size();
      for (auto item : msg.marking_point_vec) {
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
  const ChannelLaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }

  // member: perception_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_lane_id, out);
    out << "\n";
  }

  // member: marking_equation_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marking_equation_vec.size() == 0) {
      out << "marking_equation_vec: []\n";
    } else {
      out << "marking_equation_vec:\n";
      for (auto item : msg.marking_equation_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: marking_type_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marking_type_vec.size() == 0) {
      out << "marking_type_vec: []\n";
    } else {
      out << "marking_type_vec:\n";
      for (auto item : msg.marking_type_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: marking_point_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marking_point_vec.size() == 0) {
      out << "marking_point_vec: []\n";
    } else {
      out << "marking_point_vec:\n";
      for (auto item : msg.marking_point_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChannelLaneMarking & msg, bool use_flow_style = false)
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

}  // namespace deva_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_map_msgs::msg::ChannelLaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ChannelLaneMarking & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ChannelLaneMarking>()
{
  return "deva_map_msgs::msg::ChannelLaneMarking";
}

template<>
inline const char * name<deva_map_msgs::msg::ChannelLaneMarking>()
{
  return "deva_map_msgs/msg/ChannelLaneMarking";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ChannelLaneMarking>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ChannelLaneMarking>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::ChannelLaneMarking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__TRAITS_HPP_
