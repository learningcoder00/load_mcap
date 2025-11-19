// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/reference_channal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'middle_line'
#include "deva_map_msgs/msg/detail/channel_lane_line__traits.hpp"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__traits.hpp"
// Member 'object_infos'
#include "deva_map_msgs/msg/detail/channel_object_info__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReferenceChannal & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: confidence_coefficient
  {
    out << "confidence_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_coefficient, out);
    out << ", ";
  }

  // member: channel_idx
  {
    out << "channel_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_idx, out);
    out << ", ";
  }

  // member: middle_line
  {
    out << "middle_line: ";
    to_flow_style_yaml(msg.middle_line, out);
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

  // member: object_infos
  {
    if (msg.object_infos.size() == 0) {
      out << "object_infos: []";
    } else {
      out << "object_infos: [";
      size_t pending_items = msg.object_infos.size();
      for (auto item : msg.object_infos) {
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
  const ReferenceChannal & msg,
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

  // member: confidence_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence_coefficient, out);
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

  // member: middle_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle_line:\n";
    to_block_style_yaml(msg.middle_line, out, indentation + 2);
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

  // member: object_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_infos.size() == 0) {
      out << "object_infos: []\n";
    } else {
      out << "object_infos:\n";
      for (auto item : msg.object_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReferenceChannal & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::ReferenceChannal & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ReferenceChannal & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ReferenceChannal>()
{
  return "deva_map_msgs::msg::ReferenceChannal";
}

template<>
inline const char * name<deva_map_msgs::msg::ReferenceChannal>()
{
  return "deva_map_msgs/msg/ReferenceChannal";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ReferenceChannal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ReferenceChannal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::ReferenceChannal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__TRAITS_HPP_
