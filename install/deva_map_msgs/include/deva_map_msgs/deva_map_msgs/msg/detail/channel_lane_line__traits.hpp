// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel_lane_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'markingequation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__traits.hpp"
// Member 'markingpoint_vec'
#include "deva_common_msgs/msg/detail/point2d__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChannelLaneLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: markingequation_vec
  {
    if (msg.markingequation_vec.size() == 0) {
      out << "markingequation_vec: []";
    } else {
      out << "markingequation_vec: [";
      size_t pending_items = msg.markingequation_vec.size();
      for (auto item : msg.markingequation_vec) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: markingpoint_vec
  {
    if (msg.markingpoint_vec.size() == 0) {
      out << "markingpoint_vec: []";
    } else {
      out << "markingpoint_vec: [";
      size_t pending_items = msg.markingpoint_vec.size();
      for (auto item : msg.markingpoint_vec) {
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
  const ChannelLaneLine & msg,
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

  // member: markingequation_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markingequation_vec.size() == 0) {
      out << "markingequation_vec: []\n";
    } else {
      out << "markingequation_vec:\n";
      for (auto item : msg.markingequation_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: markingpoint_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markingpoint_vec.size() == 0) {
      out << "markingpoint_vec: []\n";
    } else {
      out << "markingpoint_vec:\n";
      for (auto item : msg.markingpoint_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChannelLaneLine & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::ChannelLaneLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ChannelLaneLine & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ChannelLaneLine>()
{
  return "deva_map_msgs::msg::ChannelLaneLine";
}

template<>
inline const char * name<deva_map_msgs::msg::ChannelLaneLine>()
{
  return "deva_map_msgs/msg/ChannelLaneLine";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ChannelLaneLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ChannelLaneLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::ChannelLaneLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__TRAITS_HPP_
