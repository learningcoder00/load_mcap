// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: actual_turn
  {
    if (msg.actual_turn.size() == 0) {
      out << "actual_turn: []";
    } else {
      out << "actual_turn: [";
      size_t pending_items = msg.actual_turn.size();
      for (auto item : msg.actual_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_turn
  {
    if (msg.navi_turn.size() == 0) {
      out << "navi_turn: []";
    } else {
      out << "navi_turn: [";
      size_t pending_items = msg.navi_turn.size();
      for (auto item : msg.navi_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: md5
  {
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: actual_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_turn.size() == 0) {
      out << "actual_turn: []\n";
    } else {
      out << "actual_turn:\n";
      for (auto item : msg.actual_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navi_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.navi_turn.size() == 0) {
      out << "navi_turn: []\n";
    } else {
      out << "navi_turn:\n";
      for (auto item : msg.navi_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::LaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::LaneInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::LaneInfo>()
{
  return "deva_perception_msgs::msg::LaneInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::LaneInfo>()
{
  return "deva_perception_msgs/msg/LaneInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::LaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::LaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::LaneInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_INFO__TRAITS_HPP_
