// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lanetype_vec'
#include "deva_map_msgs/msg/detail/channel_lane_type__traits.hpp"
// Member 'turntype_vec'
#include "deva_map_msgs/msg/detail/channel_turn_type__traits.hpp"
// Member 'lanespeedlimitation_vec'
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChannelLaneInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id_vec
  {
    if (msg.lane_id_vec.size() == 0) {
      out << "lane_id_vec: []";
    } else {
      out << "lane_id_vec: [";
      size_t pending_items = msg.lane_id_vec.size();
      for (auto item : msg.lane_id_vec) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lanetype_vec
  {
    if (msg.lanetype_vec.size() == 0) {
      out << "lanetype_vec: []";
    } else {
      out << "lanetype_vec: [";
      size_t pending_items = msg.lanetype_vec.size();
      for (auto item : msg.lanetype_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: turntype_vec
  {
    if (msg.turntype_vec.size() == 0) {
      out << "turntype_vec: []";
    } else {
      out << "turntype_vec: [";
      size_t pending_items = msg.turntype_vec.size();
      for (auto item : msg.turntype_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lanespeedlimitation_vec
  {
    if (msg.lanespeedlimitation_vec.size() == 0) {
      out << "lanespeedlimitation_vec: []";
    } else {
      out << "lanespeedlimitation_vec: [";
      size_t pending_items = msg.lanespeedlimitation_vec.size();
      for (auto item : msg.lanespeedlimitation_vec) {
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
  const ChannelLaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_id_vec.size() == 0) {
      out << "lane_id_vec: []\n";
    } else {
      out << "lane_id_vec:\n";
      for (auto item : msg.lane_id_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lanetype_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanetype_vec.size() == 0) {
      out << "lanetype_vec: []\n";
    } else {
      out << "lanetype_vec:\n";
      for (auto item : msg.lanetype_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: turntype_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turntype_vec.size() == 0) {
      out << "turntype_vec: []\n";
    } else {
      out << "turntype_vec:\n";
      for (auto item : msg.turntype_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lanespeedlimitation_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanespeedlimitation_vec.size() == 0) {
      out << "lanespeedlimitation_vec: []\n";
    } else {
      out << "lanespeedlimitation_vec:\n";
      for (auto item : msg.lanespeedlimitation_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChannelLaneInfo & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::ChannelLaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ChannelLaneInfo & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ChannelLaneInfo>()
{
  return "deva_map_msgs::msg::ChannelLaneInfo";
}

template<>
inline const char * name<deva_map_msgs::msg::ChannelLaneInfo>()
{
  return "deva_map_msgs/msg/ChannelLaneInfo";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ChannelLaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ChannelLaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::ChannelLaneInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__TRAITS_HPP_
