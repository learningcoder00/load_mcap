// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/Restriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/restriction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'restriction_detail'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Restriction & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: limit_type
  {
    out << "limit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_type, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
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

  // member: passage
  {
    out << "passage: ";
    rosidl_generator_traits::value_to_yaml(msg.passage, out);
    out << ", ";
  }

  // member: slope
  {
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << ", ";
  }

  // member: toll_mode
  {
    out << "toll_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_mode, out);
    out << ", ";
  }

  // member: toll_lane_type
  {
    out << "toll_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_lane_type, out);
    out << ", ";
  }

  // member: toll_name
  {
    out << "toll_name: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_name, out);
    out << ", ";
  }

  // member: restriction_detail
  {
    out << "restriction_detail: ";
    to_flow_style_yaml(msg.restriction_detail, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Restriction & msg,
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

  // member: limit_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit_type: ";
    rosidl_generator_traits::value_to_yaml(msg.limit_type, out);
    out << "\n";
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
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

  // member: passage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passage: ";
    rosidl_generator_traits::value_to_yaml(msg.passage, out);
    out << "\n";
  }

  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << "\n";
  }

  // member: toll_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_mode, out);
    out << "\n";
  }

  // member: toll_lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_lane_type, out);
    out << "\n";
  }

  // member: toll_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_name: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_name, out);
    out << "\n";
  }

  // member: restriction_detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_detail:\n";
    to_block_style_yaml(msg.restriction_detail, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Restriction & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::Restriction & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::Restriction & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::Restriction>()
{
  return "deva_gaode_routing_msgs::msg::Restriction";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::Restriction>()
{
  return "deva_gaode_routing_msgs/msg/Restriction";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::Restriction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::Restriction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::Restriction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION__TRAITS_HPP_
