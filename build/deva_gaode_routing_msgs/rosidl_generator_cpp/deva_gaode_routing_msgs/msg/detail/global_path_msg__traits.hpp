// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'global_coords'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"
// Member 'global_steps'
#include "deva_gaode_routing_msgs/msg/detail/web_step__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalPathMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_coords
  {
    if (msg.global_coords.size() == 0) {
      out << "global_coords: []";
    } else {
      out << "global_coords: [";
      size_t pending_items = msg.global_coords.size();
      for (auto item : msg.global_coords) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_steps
  {
    if (msg.global_steps.size() == 0) {
      out << "global_steps: []";
    } else {
      out << "global_steps: [";
      size_t pending_items = msg.global_steps.size();
      for (auto item : msg.global_steps) {
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
  const GlobalPathMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_coords
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_coords.size() == 0) {
      out << "global_coords: []\n";
    } else {
      out << "global_coords:\n";
      for (auto item : msg.global_coords) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: global_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_steps.size() == 0) {
      out << "global_steps: []\n";
    } else {
      out << "global_steps:\n";
      for (auto item : msg.global_steps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalPathMsg & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::GlobalPathMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::GlobalPathMsg & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::GlobalPathMsg>()
{
  return "deva_gaode_routing_msgs::msg::GlobalPathMsg";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::GlobalPathMsg>()
{
  return "deva_gaode_routing_msgs/msg/GlobalPathMsg";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::GlobalPathMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::GlobalPathMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::GlobalPathMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__TRAITS_HPP_
