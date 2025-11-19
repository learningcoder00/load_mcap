// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProPathSplit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'split_list'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProPathSplit & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_id
  {
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << ", ";
  }

  // member: split_node_id
  {
    out << "split_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.split_node_id, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: split_list
  {
    if (msg.split_list.size() == 0) {
      out << "split_list: []";
    } else {
      out << "split_list: [";
      size_t pending_items = msg.split_list.size();
      for (auto item : msg.split_list) {
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
  const SdProPathSplit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id, out);
    out << "\n";
  }

  // member: split_node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "split_node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.split_node_id, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << "\n";
  }

  // member: split_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.split_list.size() == 0) {
      out << "split_list: []\n";
    } else {
      out << "split_list:\n";
      for (auto item : msg.split_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProPathSplit & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProPathSplit & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProPathSplit & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProPathSplit>()
{
  return "deva_gaode_routing_msgs::msg::SdProPathSplit";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProPathSplit>()
{
  return "deva_gaode_routing_msgs/msg/SdProPathSplit";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProPathSplit>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProPathSplit>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProPathSplit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH_SPLIT__TRAITS_HPP_
