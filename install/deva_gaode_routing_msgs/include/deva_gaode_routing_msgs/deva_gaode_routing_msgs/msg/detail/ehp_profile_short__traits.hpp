// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpProfileShort & msg,
  std::ostream & out)
{
  out << "{";
  // member: prof_short_offset
  {
    out << "prof_short_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_offset, out);
    out << ", ";
  }

  // member: prof_short_msg_type
  {
    out << "prof_short_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_msg_type, out);
    out << ", ";
  }

  // member: prof_short_path_idx
  {
    out << "prof_short_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_path_idx, out);
    out << ", ";
  }

  // member: prof_short_cyc_cnt
  {
    out << "prof_short_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_cyc_cnt, out);
    out << ", ";
  }

  // member: prof_short_update
  {
    out << "prof_short_update: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_update, out);
    out << ", ";
  }

  // member: prof_short_retr
  {
    out << "prof_short_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_retr, out);
    out << ", ";
  }

  // member: prof_short_ctrl_point
  {
    out << "prof_short_ctrl_point: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_ctrl_point, out);
    out << ", ";
  }

  // member: prof_short_prof_type
  {
    out << "prof_short_prof_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_prof_type, out);
    out << ", ";
  }

  // member: prof_short_dist1
  {
    out << "prof_short_dist1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_dist1, out);
    out << ", ";
  }

  // member: prof_short_accur_class
  {
    out << "prof_short_accur_class: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_accur_class, out);
    out << ", ";
  }

  // member: prof_short_value0
  {
    out << "prof_short_value0: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_value0, out);
    out << ", ";
  }

  // member: prof_short_value1
  {
    out << "prof_short_value1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_value1, out);
    out << ", ";
  }

  // member: prof_short_relative_offset
  {
    out << "prof_short_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_relative_offset, out);
    out << ", ";
  }

  // member: prof_short_curve_road
  {
    out << "prof_short_curve_road: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_curve_road, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpProfileShort & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prof_short_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_offset, out);
    out << "\n";
  }

  // member: prof_short_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_msg_type, out);
    out << "\n";
  }

  // member: prof_short_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_path_idx, out);
    out << "\n";
  }

  // member: prof_short_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_cyc_cnt, out);
    out << "\n";
  }

  // member: prof_short_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_update: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_update, out);
    out << "\n";
  }

  // member: prof_short_retr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_retr, out);
    out << "\n";
  }

  // member: prof_short_ctrl_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_ctrl_point: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_ctrl_point, out);
    out << "\n";
  }

  // member: prof_short_prof_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_prof_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_prof_type, out);
    out << "\n";
  }

  // member: prof_short_dist1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_dist1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_dist1, out);
    out << "\n";
  }

  // member: prof_short_accur_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_accur_class: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_accur_class, out);
    out << "\n";
  }

  // member: prof_short_value0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_value0: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_value0, out);
    out << "\n";
  }

  // member: prof_short_value1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_value1: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_value1, out);
    out << "\n";
  }

  // member: prof_short_relative_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_relative_offset, out);
    out << "\n";
  }

  // member: prof_short_curve_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_short_curve_road: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_short_curve_road, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpProfileShort & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::EhpProfileShort & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpProfileShort & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpProfileShort>()
{
  return "deva_gaode_routing_msgs::msg::EhpProfileShort";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpProfileShort>()
{
  return "deva_gaode_routing_msgs/msg/EhpProfileShort";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpProfileShort>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpProfileShort>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpProfileShort>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__TRAITS_HPP_
