// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ChannelTurnType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel_turn_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChannelTurnType & msg,
  std::ostream & out)
{
  out << "{";
  // member: s_start
  {
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << ", ";
  }

  // member: s_end
  {
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
    out << ", ";
  }

  // member: laneturntype
  {
    out << "laneturntype: ";
    rosidl_generator_traits::value_to_yaml(msg.laneturntype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChannelTurnType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << "\n";
  }

  // member: s_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
    out << "\n";
  }

  // member: laneturntype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneturntype: ";
    rosidl_generator_traits::value_to_yaml(msg.laneturntype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChannelTurnType & msg, bool use_flow_style = false)
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

}  // namespace deva_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_map_msgs::msg::ChannelTurnType & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ChannelTurnType & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ChannelTurnType>()
{
  return "deva_map_msgs::msg::ChannelTurnType";
}

template<>
inline const char * name<deva_map_msgs::msg::ChannelTurnType>()
{
  return "deva_map_msgs/msg/ChannelTurnType";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ChannelTurnType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ChannelTurnType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_map_msgs::msg::ChannelTurnType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__TRAITS_HPP_
