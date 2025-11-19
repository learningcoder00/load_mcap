// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/avp_navigation_planning_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
// Member 'planning_header'
// Member 'prediction_header'
// Member 'localization_header'
// Member 'chassis_header'
// Member 'avp_local_map_header'
// Member 'perception_map_header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'avp_debug_info'
#include "deva_planning_msgs2/msg/detail/avp_debug_info__traits.hpp"
// Member 'nav_openspace_debug_info'
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpNavigationPlanningDebugInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: planning_header
  {
    out << "planning_header: ";
    to_flow_style_yaml(msg.planning_header, out);
    out << ", ";
  }

  // member: prediction_header
  {
    out << "prediction_header: ";
    to_flow_style_yaml(msg.prediction_header, out);
    out << ", ";
  }

  // member: localization_header
  {
    out << "localization_header: ";
    to_flow_style_yaml(msg.localization_header, out);
    out << ", ";
  }

  // member: chassis_header
  {
    out << "chassis_header: ";
    to_flow_style_yaml(msg.chassis_header, out);
    out << ", ";
  }

  // member: avp_local_map_header
  {
    out << "avp_local_map_header: ";
    to_flow_style_yaml(msg.avp_local_map_header, out);
    out << ", ";
  }

  // member: perception_map_header
  {
    out << "perception_map_header: ";
    to_flow_style_yaml(msg.perception_map_header, out);
    out << ", ";
  }

  // member: avp_debug_info
  {
    out << "avp_debug_info: ";
    to_flow_style_yaml(msg.avp_debug_info, out);
    out << ", ";
  }

  // member: nav_openspace_debug_info
  {
    out << "nav_openspace_debug_info: ";
    to_flow_style_yaml(msg.nav_openspace_debug_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpNavigationPlanningDebugInfo & msg,
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

  // member: planning_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_header:\n";
    to_block_style_yaml(msg.planning_header, out, indentation + 2);
  }

  // member: prediction_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_header:\n";
    to_block_style_yaml(msg.prediction_header, out, indentation + 2);
  }

  // member: localization_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_header:\n";
    to_block_style_yaml(msg.localization_header, out, indentation + 2);
  }

  // member: chassis_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_header:\n";
    to_block_style_yaml(msg.chassis_header, out, indentation + 2);
  }

  // member: avp_local_map_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avp_local_map_header:\n";
    to_block_style_yaml(msg.avp_local_map_header, out, indentation + 2);
  }

  // member: perception_map_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_map_header:\n";
    to_block_style_yaml(msg.perception_map_header, out, indentation + 2);
  }

  // member: avp_debug_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avp_debug_info:\n";
    to_block_style_yaml(msg.avp_debug_info, out, indentation + 2);
  }

  // member: nav_openspace_debug_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_openspace_debug_info:\n";
    to_block_style_yaml(msg.nav_openspace_debug_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpNavigationPlanningDebugInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo>()
{
  return "deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo";
}

template<>
inline const char * name<deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo>()
{
  return "deva_planning_msgs2/msg/AvpNavigationPlanningDebugInfo";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo>
  : std::integral_constant<bool, has_fixed_size<deva_planning_msgs2::msg::AvpDebugInfo>::value && has_fixed_size<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo>
  : std::integral_constant<bool, has_bounded_size<deva_planning_msgs2::msg::AvpDebugInfo>::value && has_bounded_size<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_planning_msgs2::msg::AvpNavigationPlanningDebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__TRAITS_HPP_
