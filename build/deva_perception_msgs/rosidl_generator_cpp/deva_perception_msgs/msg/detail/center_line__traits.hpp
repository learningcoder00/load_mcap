// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/center_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_equalization'
#include "deva_common_msgs/msg/detail/equation_curve__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CenterLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: center_line_id
  {
    out << "center_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_line_id, out);
    out << ", ";
  }

  // member: left_lane_id
  {
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << ", ";
  }

  // member: right_lane_id
  {
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << ", ";
  }

  // member: lane_equalization
  {
    if (msg.lane_equalization.size() == 0) {
      out << "lane_equalization: []";
    } else {
      out << "lane_equalization: [";
      size_t pending_items = msg.lane_equalization.size();
      for (auto item : msg.lane_equalization) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_current_lane
  {
    out << "is_current_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_current_lane, out);
    out << ", ";
  }

  // member: is_virtual_lane
  {
    out << "is_virtual_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_virtual_lane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CenterLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_line_id, out);
    out << "\n";
  }

  // member: left_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << "\n";
  }

  // member: right_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << "\n";
  }

  // member: lane_equalization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_equalization.size() == 0) {
      out << "lane_equalization: []\n";
    } else {
      out << "lane_equalization:\n";
      for (auto item : msg.lane_equalization) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_current_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_current_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_current_lane, out);
    out << "\n";
  }

  // member: is_virtual_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_virtual_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.is_virtual_lane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CenterLine & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::CenterLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::CenterLine & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::CenterLine>()
{
  return "deva_perception_msgs::msg::CenterLine";
}

template<>
inline const char * name<deva_perception_msgs::msg::CenterLine>()
{
  return "deva_perception_msgs/msg/CenterLine";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::CenterLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::CenterLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::CenterLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CENTER_LINE__TRAITS_HPP_
