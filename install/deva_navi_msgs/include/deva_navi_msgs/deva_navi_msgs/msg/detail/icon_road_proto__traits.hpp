// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/IconRoadProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/icon_road_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IconRoadProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: usage
  {
    out << "usage: ";
    rosidl_generator_traits::value_to_yaml(msg.usage, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IconRoadProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usage: ";
    rosidl_generator_traits::value_to_yaml(msg.usage, out);
    out << "\n";
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

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IconRoadProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::IconRoadProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::IconRoadProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::IconRoadProto>()
{
  return "deva_navi_msgs::msg::IconRoadProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::IconRoadProto>()
{
  return "deva_navi_msgs/msg/IconRoadProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::IconRoadProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::IconRoadProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::IconRoadProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__TRAITS_HPP_
