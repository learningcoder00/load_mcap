// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneGroupIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneGroupIDType & msg,
  std::ostream & out)
{
  out << "{";
  // member: tile_id
  {
    out << "tile_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tile_id, out);
    out << ", ";
  }

  // member: lane_group_id
  {
    out << "lane_group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_group_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneGroupIDType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tile_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tile_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tile_id, out);
    out << "\n";
  }

  // member: lane_group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_group_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneGroupIDType & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LaneGroupIDType & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LaneGroupIDType & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LaneGroupIDType>()
{
  return "deva_gaode_routing_msgs::msg::LaneGroupIDType";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LaneGroupIDType>()
{
  return "deva_gaode_routing_msgs/msg/LaneGroupIDType";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LaneGroupIDType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LaneGroupIDType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LaneGroupIDType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_GROUP_ID_TYPE__TRAITS_HPP_
