// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"
// Member 'sd_cross'
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__traits.hpp"
// Member 'solid_line'
#include "deva_gaode_routing_msgs/msg/detail/solid_line__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SDNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: geo
  {
    out << "geo: ";
    to_flow_style_yaml(msg.geo, out);
    out << ", ";
  }

  // member: in_linklist
  {
    if (msg.in_linklist.size() == 0) {
      out << "in_linklist: []";
    } else {
      out << "in_linklist: [";
      size_t pending_items = msg.in_linklist.size();
      for (auto item : msg.in_linklist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: out_linklist
  {
    if (msg.out_linklist.size() == 0) {
      out << "out_linklist: []";
    } else {
      out << "out_linklist: [";
      size_t pending_items = msg.out_linklist.size();
      for (auto item : msg.out_linklist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: change_point
  {
    out << "change_point: ";
    rosidl_generator_traits::value_to_yaml(msg.change_point, out);
    out << ", ";
  }

  // member: sd_cross
  {
    out << "sd_cross: ";
    to_flow_style_yaml(msg.sd_cross, out);
    out << ", ";
  }

  // member: solid_line
  {
    if (msg.solid_line.size() == 0) {
      out << "solid_line: []";
    } else {
      out << "solid_line: [";
      size_t pending_items = msg.solid_line.size();
      for (auto item : msg.solid_line) {
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
  const SDNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: geo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geo:\n";
    to_block_style_yaml(msg.geo, out, indentation + 2);
  }

  // member: in_linklist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.in_linklist.size() == 0) {
      out << "in_linklist: []\n";
    } else {
      out << "in_linklist:\n";
      for (auto item : msg.in_linklist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: out_linklist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.out_linklist.size() == 0) {
      out << "out_linklist: []\n";
    } else {
      out << "out_linklist:\n";
      for (auto item : msg.out_linklist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: change_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_point: ";
    rosidl_generator_traits::value_to_yaml(msg.change_point, out);
    out << "\n";
  }

  // member: sd_cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_cross:\n";
    to_block_style_yaml(msg.sd_cross, out, indentation + 2);
  }

  // member: solid_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.solid_line.size() == 0) {
      out << "solid_line: []\n";
    } else {
      out << "solid_line:\n";
      for (auto item : msg.solid_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SDNode & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SDNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SDNode & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SDNode>()
{
  return "deva_gaode_routing_msgs::msg::SDNode";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SDNode>()
{
  return "deva_gaode_routing_msgs/msg/SDNode";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SDNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SDNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SDNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_NODE__TRAITS_HPP_
