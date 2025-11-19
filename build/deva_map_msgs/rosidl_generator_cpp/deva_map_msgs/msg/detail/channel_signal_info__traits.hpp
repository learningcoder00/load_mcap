// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/ChannelSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/channel_signal_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChannelSignalInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChannelSignalInfo & msg,
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

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChannelSignalInfo & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::ChannelSignalInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::ChannelSignalInfo & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::ChannelSignalInfo>()
{
  return "deva_map_msgs::msg::ChannelSignalInfo";
}

template<>
inline const char * name<deva_map_msgs::msg::ChannelSignalInfo>()
{
  return "deva_map_msgs/msg/ChannelSignalInfo";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::ChannelSignalInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::ChannelSignalInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::ChannelSignalInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__TRAITS_HPP_
