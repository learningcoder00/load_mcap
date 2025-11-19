// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KWarningSign & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_link_id
  {
    out << "in_link_id: ";
    to_flow_style_yaml(msg.in_link_id, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    to_flow_style_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: pass_link_id_s
  {
    out << "pass_link_id_s: ";
    to_flow_style_yaml(msg.pass_link_id_s, out);
    out << ", ";
  }

  // member: trc_kind
  {
    out << "trc_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.trc_kind, out);
    out << ", ";
  }

  // member: forcetold_dist
  {
    out << "forcetold_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.forcetold_dist, out);
    out << ", ";
  }

  // member: control_dist
  {
    out << "control_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.control_dist, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: descript
  {
    out << "descript: ";
    rosidl_generator_traits::value_to_yaml(msg.descript, out);
    out << ", ";
  }

  // member: coordinate
  {
    out << "coordinate: ";
    to_flow_style_yaml(msg.coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KWarningSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_link_id:\n";
    to_block_style_yaml(msg.in_link_id, out, indentation + 2);
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id:\n";
    to_block_style_yaml(msg.node_id, out, indentation + 2);
  }

  // member: pass_link_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_link_id_s:\n";
    to_block_style_yaml(msg.pass_link_id_s, out, indentation + 2);
  }

  // member: trc_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trc_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.trc_kind, out);
    out << "\n";
  }

  // member: forcetold_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forcetold_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.forcetold_dist, out);
    out << "\n";
  }

  // member: control_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.control_dist, out);
    out << "\n";
  }

  // member: link_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << "\n";
  }

  // member: descript
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descript: ";
    rosidl_generator_traits::value_to_yaml(msg.descript, out);
    out << "\n";
  }

  // member: coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate:\n";
    to_block_style_yaml(msg.coordinate, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KWarningSign & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::KWarningSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::KWarningSign & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::KWarningSign>()
{
  return "deva_gaode_routing_msgs::msg::KWarningSign";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::KWarningSign>()
{
  return "deva_gaode_routing_msgs/msg/KWarningSign";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::KWarningSign>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::KWarningSign>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::KWarningSign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__TRAITS_HPP_
