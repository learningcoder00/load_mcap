// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SDCross.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_cross__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SDCross & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: main_node
  {
    out << "main_node: ";
    rosidl_generator_traits::value_to_yaml(msg.main_node, out);
    out << ", ";
  }

  // member: sub_node
  {
    if (msg.sub_node.size() == 0) {
      out << "sub_node: []";
    } else {
      out << "sub_node: [";
      size_t pending_items = msg.sub_node.size();
      for (auto item : msg.sub_node) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inner_roads
  {
    if (msg.inner_roads.size() == 0) {
      out << "inner_roads: []";
    } else {
      out << "inner_roads: [";
      size_t pending_items = msg.inner_roads.size();
      for (auto item : msg.inner_roads) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: in_roads
  {
    if (msg.in_roads.size() == 0) {
      out << "in_roads: []";
    } else {
      out << "in_roads: [";
      size_t pending_items = msg.in_roads.size();
      for (auto item : msg.in_roads) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: out_roads
  {
    if (msg.out_roads.size() == 0) {
      out << "out_roads: []";
    } else {
      out << "out_roads: [";
      size_t pending_items = msg.out_roads.size();
      for (auto item : msg.out_roads) {
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
  const SDCross & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: main_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_node: ";
    rosidl_generator_traits::value_to_yaml(msg.main_node, out);
    out << "\n";
  }

  // member: sub_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sub_node.size() == 0) {
      out << "sub_node: []\n";
    } else {
      out << "sub_node:\n";
      for (auto item : msg.sub_node) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inner_roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inner_roads.size() == 0) {
      out << "inner_roads: []\n";
    } else {
      out << "inner_roads:\n";
      for (auto item : msg.inner_roads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: in_roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.in_roads.size() == 0) {
      out << "in_roads: []\n";
    } else {
      out << "in_roads:\n";
      for (auto item : msg.in_roads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: out_roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.out_roads.size() == 0) {
      out << "out_roads: []\n";
    } else {
      out << "out_roads:\n";
      for (auto item : msg.out_roads) {
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

inline std::string to_yaml(const SDCross & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SDCross & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SDCross & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SDCross>()
{
  return "deva_gaode_routing_msgs::msg::SDCross";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SDCross>()
{
  return "deva_gaode_routing_msgs/msg/SDCross";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SDCross>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SDCross>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SDCross>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_CROSS__TRAITS_HPP_
