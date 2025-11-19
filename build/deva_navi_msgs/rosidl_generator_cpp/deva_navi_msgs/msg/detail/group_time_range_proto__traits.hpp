// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/GroupTimeRangeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/group_time_range_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupTimeRangeProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupTimeRangeProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupTimeRangeProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::GroupTimeRangeProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::GroupTimeRangeProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::GroupTimeRangeProto>()
{
  return "deva_navi_msgs::msg::GroupTimeRangeProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::GroupTimeRangeProto>()
{
  return "deva_navi_msgs/msg/GroupTimeRangeProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::GroupTimeRangeProto>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::GroupTimeRangeProto>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_navi_msgs::msg::GroupTimeRangeProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__TRAITS_HPP_
