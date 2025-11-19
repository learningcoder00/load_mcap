// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: posn_offset
  {
    out << "posn_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_offset, out);
    out << ", ";
  }

  // member: posn_msg_type
  {
    out << "posn_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_msg_type, out);
    out << ", ";
  }

  // member: posn_path_idx
  {
    out << "posn_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_path_idx, out);
    out << ", ";
  }

  // member: posn_cyc_cnt
  {
    out << "posn_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_cyc_cnt, out);
    out << ", ";
  }

  // member: posn_age
  {
    out << "posn_age: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_age, out);
    out << ", ";
  }

  // member: posn_pos_probb
  {
    out << "posn_pos_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_pos_probb, out);
    out << ", ";
  }

  // member: posn_idx
  {
    out << "posn_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_idx, out);
    out << ", ";
  }

  // member: posn_spd
  {
    out << "posn_spd: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_spd, out);
    out << ", ";
  }

  // member: posn_cur_lane
  {
    out << "posn_cur_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_cur_lane, out);
    out << ", ";
  }

  // member: posn_pos_confdc
  {
    out << "posn_pos_confdc: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_pos_confdc, out);
    out << ", ";
  }

  // member: posn_rehead
  {
    out << "posn_rehead: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_rehead, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posn_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_offset, out);
    out << "\n";
  }

  // member: posn_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_msg_type, out);
    out << "\n";
  }

  // member: posn_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_path_idx, out);
    out << "\n";
  }

  // member: posn_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_cyc_cnt, out);
    out << "\n";
  }

  // member: posn_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_age: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_age, out);
    out << "\n";
  }

  // member: posn_pos_probb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_pos_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_pos_probb, out);
    out << "\n";
  }

  // member: posn_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_idx, out);
    out << "\n";
  }

  // member: posn_spd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_spd: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_spd, out);
    out << "\n";
  }

  // member: posn_cur_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_cur_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_cur_lane, out);
    out << "\n";
  }

  // member: posn_pos_confdc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_pos_confdc: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_pos_confdc, out);
    out << "\n";
  }

  // member: posn_rehead
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posn_rehead: ";
    rosidl_generator_traits::value_to_yaml(msg.posn_rehead, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpPosition & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::EhpPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpPosition & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpPosition>()
{
  return "deva_gaode_routing_msgs::msg::EhpPosition";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpPosition>()
{
  return "deva_gaode_routing_msgs/msg/EhpPosition";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__TRAITS_HPP_
