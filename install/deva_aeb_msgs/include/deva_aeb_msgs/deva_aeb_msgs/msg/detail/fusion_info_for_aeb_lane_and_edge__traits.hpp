// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'fusionlanemkrlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__traits.hpp"
// Member 'fusionroadedge'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FusionInfoForAEBLaneAndEdge & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fusionlanemkrlist
  {
    out << "fusionlanemkrlist: ";
    to_flow_style_yaml(msg.fusionlanemkrlist, out);
    out << ", ";
  }

  // member: fusionroadedge
  {
    out << "fusionroadedge: ";
    to_flow_style_yaml(msg.fusionroadedge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FusionInfoForAEBLaneAndEdge & msg,
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

  // member: fusionlanemkrlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusionlanemkrlist:\n";
    to_block_style_yaml(msg.fusionlanemkrlist, out, indentation + 2);
  }

  // member: fusionroadedge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusionroadedge:\n";
    to_block_style_yaml(msg.fusionroadedge, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FusionInfoForAEBLaneAndEdge & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>()
{
  return "deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge";
}

template<>
inline const char * name<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>()
{
  return "deva_aeb_msgs/msg/FusionInfoForAEBLaneAndEdge";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFFusionLaneMkrList>::value && has_fixed_size<deva_aeb_msgs::msg::SFFusionRoadEdge>::value && has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFFusionLaneMkrList>::value && has_bounded_size<deva_aeb_msgs::msg::SFFusionRoadEdge>::value && has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::FusionInfoForAEBLaneAndEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__TRAITS_HPP_
