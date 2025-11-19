// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/LaneSecInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/lane_sec_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__traits.hpp"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_lane_info__traits.hpp"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__traits.hpp"
// Member 'nearramppoint'
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneSecInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: estimn
  {
    out << "estimn: ";
    to_flow_style_yaml(msg.estimn, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: ppty
  {
    out << "ppty: ";
    to_flow_style_yaml(msg.ppty, out);
    out << ", ";
  }

  // member: nearramppoint
  {
    out << "nearramppoint: ";
    to_flow_style_yaml(msg.nearramppoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneSecInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: estimn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimn:\n";
    to_block_style_yaml(msg.estimn, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: ppty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ppty:\n";
    to_block_style_yaml(msg.ppty, out, indentation + 2);
  }

  // member: nearramppoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearramppoint:\n";
    to_block_style_yaml(msg.nearramppoint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneSecInfo & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::LaneSecInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::LaneSecInfo & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::LaneSecInfo>()
{
  return "deva_aeb_msgs::msg::LaneSecInfo";
}

template<>
inline const char * name<deva_aeb_msgs::msg::LaneSecInfo>()
{
  return "deva_aeb_msgs/msg/LaneSecInfo";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::LaneSecInfo>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFFrontLinePpty>::value && has_fixed_size<deva_aeb_msgs::msg::SFLaneInfo>::value && has_fixed_size<deva_aeb_msgs::msg::SFSecLaneEstimn>::value && has_fixed_size<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::LaneSecInfo>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFFrontLinePpty>::value && has_bounded_size<deva_aeb_msgs::msg::SFLaneInfo>::value && has_bounded_size<deva_aeb_msgs::msg::SFSecLaneEstimn>::value && has_bounded_size<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::LaneSecInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__LANE_SEC_INFO__TRAITS_HPP_
