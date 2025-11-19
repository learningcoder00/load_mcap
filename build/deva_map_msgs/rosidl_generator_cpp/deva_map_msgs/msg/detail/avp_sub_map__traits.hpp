// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/avp_sub_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'avp_sub_lanes'
#include "deva_map_msgs/msg/detail/avp_sub_lane__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpSubMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: avp_sub_lanes
  {
    if (msg.avp_sub_lanes.size() == 0) {
      out << "avp_sub_lanes: []";
    } else {
      out << "avp_sub_lanes: [";
      size_t pending_items = msg.avp_sub_lanes.size();
      for (auto item : msg.avp_sub_lanes) {
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
  const AvpSubMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: avp_sub_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.avp_sub_lanes.size() == 0) {
      out << "avp_sub_lanes: []\n";
    } else {
      out << "avp_sub_lanes:\n";
      for (auto item : msg.avp_sub_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpSubMap & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::AvpSubMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::AvpSubMap & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::AvpSubMap>()
{
  return "deva_map_msgs::msg::AvpSubMap";
}

template<>
inline const char * name<deva_map_msgs::msg::AvpSubMap>()
{
  return "deva_map_msgs/msg/AvpSubMap";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::AvpSubMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::AvpSubMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::AvpSubMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__TRAITS_HPP_
