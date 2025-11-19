// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'enter_pos'
// Member 'leave_pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGIntersectionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: raw_link_id
  {
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << ", ";
  }

  // member: inter_type
  {
    out << "inter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_type, out);
    out << ", ";
  }

  // member: accessory_info
  {
    out << "accessory_info: ";
    rosidl_generator_traits::value_to_yaml(msg.accessory_info, out);
    out << ", ";
  }

  // member: enter_pos
  {
    out << "enter_pos: ";
    to_flow_style_yaml(msg.enter_pos, out);
    out << ", ";
  }

  // member: leave_pos
  {
    out << "leave_pos: ";
    to_flow_style_yaml(msg.leave_pos, out);
    out << ", ";
  }

  // member: inter_raw_link_ids
  {
    if (msg.inter_raw_link_ids.size() == 0) {
      out << "inter_raw_link_ids: []";
    } else {
      out << "inter_raw_link_ids: [";
      size_t pending_items = msg.inter_raw_link_ids.size();
      for (auto item : msg.inter_raw_link_ids) {
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
  const RGIntersectionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: raw_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << "\n";
  }

  // member: inter_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.inter_type, out);
    out << "\n";
  }

  // member: accessory_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accessory_info: ";
    rosidl_generator_traits::value_to_yaml(msg.accessory_info, out);
    out << "\n";
  }

  // member: enter_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enter_pos:\n";
    to_block_style_yaml(msg.enter_pos, out, indentation + 2);
  }

  // member: leave_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leave_pos:\n";
    to_block_style_yaml(msg.leave_pos, out, indentation + 2);
  }

  // member: inter_raw_link_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inter_raw_link_ids.size() == 0) {
      out << "inter_raw_link_ids: []\n";
    } else {
      out << "inter_raw_link_ids:\n";
      for (auto item : msg.inter_raw_link_ids) {
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

inline std::string to_yaml(const RGIntersectionResult & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RGIntersectionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RGIntersectionResult & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RGIntersectionResult>()
{
  return "deva_gaode_routing_msgs::msg::RGIntersectionResult";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RGIntersectionResult>()
{
  return "deva_gaode_routing_msgs/msg/RGIntersectionResult";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RGIntersectionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RGIntersectionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RGIntersectionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__TRAITS_HPP_
