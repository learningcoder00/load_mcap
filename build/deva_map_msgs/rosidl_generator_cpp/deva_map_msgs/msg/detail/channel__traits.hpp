// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'laneinfo'
#include "deva_map_msgs/msg/detail/channel_lane_info__traits.hpp"
// Member 'middle_line'
// Member 'reference_line_vec'
#include "deva_map_msgs/msg/detail/channel_lane_line__traits.hpp"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__traits.hpp"
// Member 'object_info'
#include "deva_map_msgs/msg/detail/channel_object_info__traits.hpp"
// Member 'signal_info'
#include "deva_map_msgs/msg/detail/channel_signal_info__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Channel & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: is_on_route
  {
    out << "is_on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_route, out);
    out << ", ";
  }

  // member: errcode
  {
    out << "errcode: ";
    rosidl_generator_traits::value_to_yaml(msg.errcode, out);
    out << ", ";
  }

  // member: current_lane_id
  {
    out << "current_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lane_id, out);
    out << ", ";
  }

  // member: channel_idx
  {
    out << "channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_idx, out);
    out << ", ";
  }

  // member: lane_offset
  {
    out << "lane_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_offset, out);
    out << ", ";
  }

  // member: laneinfo
  {
    out << "laneinfo: ";
    to_flow_style_yaml(msg.laneinfo, out);
    out << ", ";
  }

  // member: middle_line
  {
    out << "middle_line: ";
    to_flow_style_yaml(msg.middle_line, out);
    out << ", ";
  }

  // member: reference_line_vec
  {
    if (msg.reference_line_vec.size() == 0) {
      out << "reference_line_vec: []";
    } else {
      out << "reference_line_vec: [";
      size_t pending_items = msg.reference_line_vec.size();
      for (auto item : msg.reference_line_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_marking
  {
    out << "left_marking: ";
    to_flow_style_yaml(msg.left_marking, out);
    out << ", ";
  }

  // member: right_marking
  {
    out << "right_marking: ";
    to_flow_style_yaml(msg.right_marking, out);
    out << ", ";
  }

  // member: left_channel_idx
  {
    out << "left_channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.left_channel_idx, out);
    out << ", ";
  }

  // member: right_channel_idx
  {
    out << "right_channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.right_channel_idx, out);
    out << ", ";
  }

  // member: object_info
  {
    if (msg.object_info.size() == 0) {
      out << "object_info: []";
    } else {
      out << "object_info: [";
      size_t pending_items = msg.object_info.size();
      for (auto item : msg.object_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: signal_info
  {
    if (msg.signal_info.size() == 0) {
      out << "signal_info: []";
    } else {
      out << "signal_info: [";
      size_t pending_items = msg.signal_info.size();
      for (auto item : msg.signal_info) {
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
  const Channel & msg,
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

  // member: is_on_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_route, out);
    out << "\n";
  }

  // member: errcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "errcode: ";
    rosidl_generator_traits::value_to_yaml(msg.errcode, out);
    out << "\n";
  }

  // member: current_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_lane_id, out);
    out << "\n";
  }

  // member: channel_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_idx, out);
    out << "\n";
  }

  // member: lane_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_offset, out);
    out << "\n";
  }

  // member: laneinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneinfo:\n";
    to_block_style_yaml(msg.laneinfo, out, indentation + 2);
  }

  // member: middle_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle_line:\n";
    to_block_style_yaml(msg.middle_line, out, indentation + 2);
  }

  // member: reference_line_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_line_vec.size() == 0) {
      out << "reference_line_vec: []\n";
    } else {
      out << "reference_line_vec:\n";
      for (auto item : msg.reference_line_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_marking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_marking:\n";
    to_block_style_yaml(msg.left_marking, out, indentation + 2);
  }

  // member: right_marking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_marking:\n";
    to_block_style_yaml(msg.right_marking, out, indentation + 2);
  }

  // member: left_channel_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.left_channel_idx, out);
    out << "\n";
  }

  // member: right_channel_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.right_channel_idx, out);
    out << "\n";
  }

  // member: object_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_info.size() == 0) {
      out << "object_info: []\n";
    } else {
      out << "object_info:\n";
      for (auto item : msg.object_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: signal_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signal_info.size() == 0) {
      out << "signal_info: []\n";
    } else {
      out << "signal_info:\n";
      for (auto item : msg.signal_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Channel & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::Channel & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::Channel & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::Channel>()
{
  return "deva_map_msgs::msg::Channel";
}

template<>
inline const char * name<deva_map_msgs::msg::Channel>()
{
  return "deva_map_msgs/msg/Channel";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::Channel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::Channel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::Channel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_
