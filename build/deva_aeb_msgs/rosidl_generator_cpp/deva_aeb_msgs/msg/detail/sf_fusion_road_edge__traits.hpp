// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frontleft'
// Member 'frontright'
// Member 'rearleft'
// Member 'rearright'
#include "deva_aeb_msgs/msg/detail/road_info__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionRoadEdge & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: frontleft
  {
    out << "frontleft: ";
    to_flow_style_yaml(msg.frontleft, out);
    out << ", ";
  }

  // member: frontright
  {
    out << "frontright: ";
    to_flow_style_yaml(msg.frontright, out);
    out << ", ";
  }

  // member: rearleft
  {
    out << "rearleft: ";
    to_flow_style_yaml(msg.rearleft, out);
    out << ", ";
  }

  // member: rearright
  {
    out << "rearright: ";
    to_flow_style_yaml(msg.rearright, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionRoadEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: frontleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frontleft:\n";
    to_block_style_yaml(msg.frontleft, out, indentation + 2);
  }

  // member: frontright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frontright:\n";
    to_block_style_yaml(msg.frontright, out, indentation + 2);
  }

  // member: rearleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearleft:\n";
    to_block_style_yaml(msg.rearleft, out, indentation + 2);
  }

  // member: rearright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearright:\n";
    to_block_style_yaml(msg.rearright, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionRoadEdge & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFusionRoadEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionRoadEdge & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionRoadEdge>()
{
  return "deva_aeb_msgs::msg::SFFusionRoadEdge";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionRoadEdge>()
{
  return "deva_aeb_msgs/msg/SFFusionRoadEdge";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionRoadEdge>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::RoadInfo>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionRoadEdge>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::RoadInfo>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionRoadEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_EDGE__TRAITS_HPP_
