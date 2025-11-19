// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"
// Member 'k_warning_sign'
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__traits.hpp"
// Member 'k_lane_meta_info'
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__traits.hpp"
// Member 'k_lsl'
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Guidance & msg,
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
    if (msg.pass_link_id_s.size() == 0) {
      out << "pass_link_id_s: []";
    } else {
      out << "pass_link_id_s: [";
      size_t pending_items = msg.pass_link_id_s.size();
      for (auto item : msg.pass_link_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: k_warning_sign
  {
    out << "k_warning_sign: ";
    to_flow_style_yaml(msg.k_warning_sign, out);
    out << ", ";
  }

  // member: k_lane_meta_info
  {
    out << "k_lane_meta_info: ";
    to_flow_style_yaml(msg.k_lane_meta_info, out);
    out << ", ";
  }

  // member: k_lsl
  {
    out << "k_lsl: ";
    to_flow_style_yaml(msg.k_lsl, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Guidance & msg,
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
    if (msg.pass_link_id_s.size() == 0) {
      out << "pass_link_id_s: []\n";
    } else {
      out << "pass_link_id_s:\n";
      for (auto item : msg.pass_link_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: k_warning_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_warning_sign:\n";
    to_block_style_yaml(msg.k_warning_sign, out, indentation + 2);
  }

  // member: k_lane_meta_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_lane_meta_info:\n";
    to_block_style_yaml(msg.k_lane_meta_info, out, indentation + 2);
  }

  // member: k_lsl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_lsl:\n";
    to_block_style_yaml(msg.k_lsl, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Guidance & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Guidance & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Guidance & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Guidance>()
{
  return "deva_gaode_routing_msgs::msg::Guidance";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Guidance>()
{
  return "deva_gaode_routing_msgs/msg/Guidance";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Guidance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Guidance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Guidance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__TRAITS_HPP_
