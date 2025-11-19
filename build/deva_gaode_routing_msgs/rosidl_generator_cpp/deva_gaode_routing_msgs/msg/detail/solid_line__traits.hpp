// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/solid_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolidLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: in_road
  {
    out << "in_road: ";
    rosidl_generator_traits::value_to_yaml(msg.in_road, out);
    out << ", ";
  }

  // member: pass_list
  {
    if (msg.pass_list.size() == 0) {
      out << "pass_list: []";
    } else {
      out << "pass_list: [";
      size_t pending_items = msg.pass_list.size();
      for (auto item : msg.pass_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: out_road
  {
    out << "out_road: ";
    rosidl_generator_traits::value_to_yaml(msg.out_road, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: seq_num
  {
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << ", ";
  }

  // member: lane_list
  {
    if (msg.lane_list.size() == 0) {
      out << "lane_list: []";
    } else {
      out << "lane_list: [";
      size_t pending_items = msg.lane_list.size();
      for (auto item : msg.lane_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolidLine & msg,
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

  // member: in_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_road: ";
    rosidl_generator_traits::value_to_yaml(msg.in_road, out);
    out << "\n";
  }

  // member: pass_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pass_list.size() == 0) {
      out << "pass_list: []\n";
    } else {
      out << "pass_list:\n";
      for (auto item : msg.pass_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: out_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "out_road: ";
    rosidl_generator_traits::value_to_yaml(msg.out_road, out);
    out << "\n";
  }

  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: seq_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << "\n";
  }

  // member: lane_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_list.size() == 0) {
      out << "lane_list: []\n";
    } else {
      out << "lane_list:\n";
      for (auto item : msg.lane_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolidLine & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SolidLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SolidLine & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SolidLine>()
{
  return "deva_gaode_routing_msgs::msg::SolidLine";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SolidLine>()
{
  return "deva_gaode_routing_msgs/msg/SolidLine";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SolidLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SolidLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SolidLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SOLID_LINE__TRAITS_HPP_
