// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Topology.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/topology__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'next_id_s'
// Member 'previous_id_s'
// Member 'next_within_intersection'
// Member 'previous_within_intersection'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Topology & msg,
  std::ostream & out)
{
  out << "{";
  // member: next_id_s
  {
    if (msg.next_id_s.size() == 0) {
      out << "next_id_s: []";
    } else {
      out << "next_id_s: [";
      size_t pending_items = msg.next_id_s.size();
      for (auto item : msg.next_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: previous_id_s
  {
    if (msg.previous_id_s.size() == 0) {
      out << "previous_id_s: []";
    } else {
      out << "previous_id_s: [";
      size_t pending_items = msg.previous_id_s.size();
      for (auto item : msg.previous_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: next_within_intersection
  {
    if (msg.next_within_intersection.size() == 0) {
      out << "next_within_intersection: []";
    } else {
      out << "next_within_intersection: [";
      size_t pending_items = msg.next_within_intersection.size();
      for (auto item : msg.next_within_intersection) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: previous_within_intersection
  {
    if (msg.previous_within_intersection.size() == 0) {
      out << "previous_within_intersection: []";
    } else {
      out << "previous_within_intersection: [";
      size_t pending_items = msg.previous_within_intersection.size();
      for (auto item : msg.previous_within_intersection) {
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
  const Topology & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: next_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_id_s.size() == 0) {
      out << "next_id_s: []\n";
    } else {
      out << "next_id_s:\n";
      for (auto item : msg.next_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: previous_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.previous_id_s.size() == 0) {
      out << "previous_id_s: []\n";
    } else {
      out << "previous_id_s:\n";
      for (auto item : msg.previous_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: next_within_intersection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_within_intersection.size() == 0) {
      out << "next_within_intersection: []\n";
    } else {
      out << "next_within_intersection:\n";
      for (auto item : msg.next_within_intersection) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: previous_within_intersection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.previous_within_intersection.size() == 0) {
      out << "previous_within_intersection: []\n";
    } else {
      out << "previous_within_intersection:\n";
      for (auto item : msg.previous_within_intersection) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Topology & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Topology & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Topology & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Topology>()
{
  return "deva_gaode_routing_msgs::msg::Topology";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Topology>()
{
  return "deva_gaode_routing_msgs/msg/Topology";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Topology>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Topology>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Topology>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__TRAITS_HPP_
