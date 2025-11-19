// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/Coord3DDoubleProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Coord3DDoubleProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coord3DDoubleProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coord3DDoubleProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::Coord3DDoubleProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::Coord3DDoubleProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::Coord3DDoubleProto>()
{
  return "deva_navi_msgs::msg::Coord3DDoubleProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::Coord3DDoubleProto>()
{
  return "deva_navi_msgs/msg/Coord3DDoubleProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::Coord3DDoubleProto>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::Coord3DDoubleProto>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_navi_msgs::msg::Coord3DDoubleProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__TRAITS_HPP_
