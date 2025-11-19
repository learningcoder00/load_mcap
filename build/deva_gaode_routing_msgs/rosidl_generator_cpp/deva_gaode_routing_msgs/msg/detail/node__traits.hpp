// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tpid'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"
// Member 'links_enter'
// Member 'links_enter_cross'
// Member 'links_out'
// Member 'links_out_cross'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Node & msg,
  std::ostream & out)
{
  out << "{";
  // member: tpid
  {
    out << "tpid: ";
    to_flow_style_yaml(msg.tpid, out);
    out << ", ";
  }

  // member: cross_flag
  {
    out << "cross_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_flag, out);
    out << ", ";
  }

  // member: has_traffic_light
  {
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: links_enter
  {
    if (msg.links_enter.size() == 0) {
      out << "links_enter: []";
    } else {
      out << "links_enter: [";
      size_t pending_items = msg.links_enter.size();
      for (auto item : msg.links_enter) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links_enter_cross
  {
    if (msg.links_enter_cross.size() == 0) {
      out << "links_enter_cross: []";
    } else {
      out << "links_enter_cross: [";
      size_t pending_items = msg.links_enter_cross.size();
      for (auto item : msg.links_enter_cross) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links_out
  {
    if (msg.links_out.size() == 0) {
      out << "links_out: []";
    } else {
      out << "links_out: [";
      size_t pending_items = msg.links_out.size();
      for (auto item : msg.links_out) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links_out_cross
  {
    if (msg.links_out_cross.size() == 0) {
      out << "links_out_cross: []";
    } else {
      out << "links_out_cross: [";
      size_t pending_items = msg.links_out_cross.size();
      for (auto item : msg.links_out_cross) {
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
  const Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tpid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tpid:\n";
    to_block_style_yaml(msg.tpid, out, indentation + 2);
  }

  // member: cross_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_flag, out);
    out << "\n";
  }

  // member: has_traffic_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: links_enter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links_enter.size() == 0) {
      out << "links_enter: []\n";
    } else {
      out << "links_enter:\n";
      for (auto item : msg.links_enter) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links_enter_cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links_enter_cross.size() == 0) {
      out << "links_enter_cross: []\n";
    } else {
      out << "links_enter_cross:\n";
      for (auto item : msg.links_enter_cross) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links_out.size() == 0) {
      out << "links_out: []\n";
    } else {
      out << "links_out:\n";
      for (auto item : msg.links_out) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links_out_cross
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links_out_cross.size() == 0) {
      out << "links_out_cross: []\n";
    } else {
      out << "links_out_cross:\n";
      for (auto item : msg.links_out_cross) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Node & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Node & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Node>()
{
  return "deva_gaode_routing_msgs::msg::Node";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Node>()
{
  return "deva_gaode_routing_msgs/msg/Node";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
