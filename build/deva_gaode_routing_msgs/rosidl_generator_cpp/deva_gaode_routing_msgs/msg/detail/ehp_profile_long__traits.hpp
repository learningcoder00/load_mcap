// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpProfileLong & msg,
  std::ostream & out)
{
  out << "{";
  // member: prof_long_offset
  {
    out << "prof_long_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_offset, out);
    out << ", ";
  }

  // member: prof_long_msg_type
  {
    out << "prof_long_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_msg_type, out);
    out << ", ";
  }

  // member: prof_long_path_idx
  {
    out << "prof_long_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_path_idx, out);
    out << ", ";
  }

  // member: prof_long_cyc_cnt
  {
    out << "prof_long_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_cyc_cnt, out);
    out << ", ";
  }

  // member: prof_long_update
  {
    out << "prof_long_update: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_update, out);
    out << ", ";
  }

  // member: prof_long_retr
  {
    out << "prof_long_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_retr, out);
    out << ", ";
  }

  // member: prof_long_ctrl_point
  {
    out << "prof_long_ctrl_point: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_ctrl_point, out);
    out << ", ";
  }

  // member: prof_long_prof_type
  {
    out << "prof_long_prof_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_prof_type, out);
    out << ", ";
  }

  // member: prof_long_value
  {
    out << "prof_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_value, out);
    out << ", ";
  }

  // member: prof_long_relative_offset
  {
    out << "prof_long_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_relative_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpProfileLong & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prof_long_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_offset, out);
    out << "\n";
  }

  // member: prof_long_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_msg_type, out);
    out << "\n";
  }

  // member: prof_long_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_path_idx, out);
    out << "\n";
  }

  // member: prof_long_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_cyc_cnt, out);
    out << "\n";
  }

  // member: prof_long_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_update: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_update, out);
    out << "\n";
  }

  // member: prof_long_retr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_retr, out);
    out << "\n";
  }

  // member: prof_long_ctrl_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_ctrl_point: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_ctrl_point, out);
    out << "\n";
  }

  // member: prof_long_prof_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_prof_type: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_prof_type, out);
    out << "\n";
  }

  // member: prof_long_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_value: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_value, out);
    out << "\n";
  }

  // member: prof_long_relative_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prof_long_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.prof_long_relative_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpProfileLong & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::EhpProfileLong & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpProfileLong & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpProfileLong>()
{
  return "deva_gaode_routing_msgs::msg::EhpProfileLong";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpProfileLong>()
{
  return "deva_gaode_routing_msgs/msg/EhpProfileLong";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpProfileLong>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpProfileLong>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpProfileLong>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__TRAITS_HPP_
