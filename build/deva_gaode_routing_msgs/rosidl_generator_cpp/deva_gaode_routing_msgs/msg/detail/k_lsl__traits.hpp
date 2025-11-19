// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/k_lsl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KLsl & msg,
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

  // member: seqnum
  {
    out << "seqnum: ";
    rosidl_generator_traits::value_to_yaml(msg.seqnum, out);
    out << ", ";
  }

  // member: lsl_type
  {
    out << "lsl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lsl_type, out);
    out << ", ";
  }

  // member: lane_nums
  {
    out << "lane_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_nums, out);
    out << ", ";
  }

  // member: lsl_lanes
  {
    if (msg.lsl_lanes.size() == 0) {
      out << "lsl_lanes: []";
    } else {
      out << "lsl_lanes: [";
      size_t pending_items = msg.lsl_lanes.size();
      for (auto item : msg.lsl_lanes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const KLsl & msg,
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

  // member: seqnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seqnum: ";
    rosidl_generator_traits::value_to_yaml(msg.seqnum, out);
    out << "\n";
  }

  // member: lsl_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lsl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lsl_type, out);
    out << "\n";
  }

  // member: lane_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_nums, out);
    out << "\n";
  }

  // member: lsl_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lsl_lanes.size() == 0) {
      out << "lsl_lanes: []\n";
    } else {
      out << "lsl_lanes:\n";
      for (auto item : msg.lsl_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KLsl & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::KLsl & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::KLsl & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::KLsl>()
{
  return "deva_gaode_routing_msgs::msg::KLsl";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::KLsl>()
{
  return "deva_gaode_routing_msgs/msg/KLsl";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::KLsl>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::KLsl>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::KLsl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__TRAITS_HPP_
