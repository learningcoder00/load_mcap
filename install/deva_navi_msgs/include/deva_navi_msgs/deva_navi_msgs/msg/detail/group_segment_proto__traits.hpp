// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/GroupSegmentProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/group_segment_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GroupSegmentProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: toll_cost
  {
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << ", ";
  }

  // member: road_name
  {
    out << "road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.road_name, out);
    out << ", ";
  }

  // member: start_segment_index
  {
    out << "start_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.start_segment_index, out);
    out << ", ";
  }

  // member: segment_count
  {
    out << "segment_count: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_count, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: is_via_point
  {
    out << "is_via_point: ";
    rosidl_generator_traits::value_to_yaml(msg.is_via_point, out);
    out << ", ";
  }

  // member: is_crucial
  {
    out << "is_crucial: ";
    rosidl_generator_traits::value_to_yaml(msg.is_crucial, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GroupSegmentProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: toll_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "toll_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.toll_cost, out);
    out << "\n";
  }

  // member: road_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_name: ";
    rosidl_generator_traits::value_to_yaml(msg.road_name, out);
    out << "\n";
  }

  // member: start_segment_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.start_segment_index, out);
    out << "\n";
  }

  // member: segment_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_count: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_count, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: is_via_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_via_point: ";
    rosidl_generator_traits::value_to_yaml(msg.is_via_point, out);
    out << "\n";
  }

  // member: is_crucial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_crucial: ";
    rosidl_generator_traits::value_to_yaml(msg.is_crucial, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GroupSegmentProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::GroupSegmentProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::GroupSegmentProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::GroupSegmentProto>()
{
  return "deva_navi_msgs::msg::GroupSegmentProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::GroupSegmentProto>()
{
  return "deva_navi_msgs/msg/GroupSegmentProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::GroupSegmentProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::GroupSegmentProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::GroupSegmentProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__TRAITS_HPP_
