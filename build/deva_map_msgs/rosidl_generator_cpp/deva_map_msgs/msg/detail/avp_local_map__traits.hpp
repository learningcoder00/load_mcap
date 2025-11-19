// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/avp_local_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'ref_line'
// Member 'expand_lane_center_border'
#include "deva_map_msgs/msg/detail/path_point__traits.hpp"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__traits.hpp"
// Member 'avp_sub_map'
#include "deva_map_msgs/msg/detail/avp_sub_map__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpLocalMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ref_line
  {
    if (msg.ref_line.size() == 0) {
      out << "ref_line: []";
    } else {
      out << "ref_line: [";
      size_t pending_items = msg.ref_line.size();
      for (auto item : msg.ref_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drivable_boundary
  {
    if (msg.drivable_boundary.size() == 0) {
      out << "drivable_boundary: []";
    } else {
      out << "drivable_boundary: [";
      size_t pending_items = msg.drivable_boundary.size();
      for (auto item : msg.drivable_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expand_lane_center_border
  {
    if (msg.expand_lane_center_border.size() == 0) {
      out << "expand_lane_center_border: []";
    } else {
      out << "expand_lane_center_border: [";
      size_t pending_items = msg.expand_lane_center_border.size();
      for (auto item : msg.expand_lane_center_border) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: avp_sub_map
  {
    out << "avp_sub_map: ";
    to_flow_style_yaml(msg.avp_sub_map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpLocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ref_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_line.size() == 0) {
      out << "ref_line: []\n";
    } else {
      out << "ref_line:\n";
      for (auto item : msg.ref_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: drivable_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drivable_boundary.size() == 0) {
      out << "drivable_boundary: []\n";
    } else {
      out << "drivable_boundary:\n";
      for (auto item : msg.drivable_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: expand_lane_center_border
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expand_lane_center_border.size() == 0) {
      out << "expand_lane_center_border: []\n";
    } else {
      out << "expand_lane_center_border:\n";
      for (auto item : msg.expand_lane_center_border) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: avp_sub_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avp_sub_map:\n";
    to_block_style_yaml(msg.avp_sub_map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpLocalMap & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::AvpLocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::AvpLocalMap & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::AvpLocalMap>()
{
  return "deva_map_msgs::msg::AvpLocalMap";
}

template<>
inline const char * name<deva_map_msgs::msg::AvpLocalMap>()
{
  return "deva_map_msgs/msg/AvpLocalMap";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::AvpLocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::AvpLocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::AvpLocalMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__TRAITS_HPP_
