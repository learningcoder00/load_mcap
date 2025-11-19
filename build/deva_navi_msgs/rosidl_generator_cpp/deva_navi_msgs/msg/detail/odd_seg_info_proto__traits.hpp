// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OddSegInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: m_odd_len
  {
    out << "m_odd_len: ";
    rosidl_generator_traits::value_to_yaml(msg.m_odd_len, out);
    out << ", ";
  }

  // member: m_start_seg_idx
  {
    out << "m_start_seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_seg_idx, out);
    out << ", ";
  }

  // member: m_start_link_idx
  {
    out << "m_start_link_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_link_idx, out);
    out << ", ";
  }

  // member: m_start_off_set
  {
    out << "m_start_off_set: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_off_set, out);
    out << ", ";
  }

  // member: m_end_seg_idx
  {
    out << "m_end_seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_seg_idx, out);
    out << ", ";
  }

  // member: m_end_link_idx
  {
    out << "m_end_link_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_link_idx, out);
    out << ", ";
  }

  // member: m_end_off_set
  {
    out << "m_end_off_set: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_off_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OddSegInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m_odd_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_odd_len: ";
    rosidl_generator_traits::value_to_yaml(msg.m_odd_len, out);
    out << "\n";
  }

  // member: m_start_seg_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_start_seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_seg_idx, out);
    out << "\n";
  }

  // member: m_start_link_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_start_link_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_link_idx, out);
    out << "\n";
  }

  // member: m_start_off_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_start_off_set: ";
    rosidl_generator_traits::value_to_yaml(msg.m_start_off_set, out);
    out << "\n";
  }

  // member: m_end_seg_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_end_seg_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_seg_idx, out);
    out << "\n";
  }

  // member: m_end_link_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_end_link_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_link_idx, out);
    out << "\n";
  }

  // member: m_end_off_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_end_off_set: ";
    rosidl_generator_traits::value_to_yaml(msg.m_end_off_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OddSegInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::OddSegInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::OddSegInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::OddSegInfoProto>()
{
  return "deva_navi_msgs::msg::OddSegInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::OddSegInfoProto>()
{
  return "deva_navi_msgs/msg/OddSegInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::OddSegInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::OddSegInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_navi_msgs::msg::OddSegInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__TRAITS_HPP_
