// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/EnergyEndPointProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/energy_end_point_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'show'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnergyEndPointProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: show
  {
    out << "show: ";
    to_flow_style_yaml(msg.show, out);
    out << ", ";
  }

  // member: segment_idx
  {
    out << "segment_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_idx, out);
    out << ", ";
  }

  // member: link_index
  {
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnergyEndPointProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: show
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "show:\n";
    to_block_style_yaml(msg.show, out, indentation + 2);
  }

  // member: segment_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_idx, out);
    out << "\n";
  }

  // member: link_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_index: ";
    rosidl_generator_traits::value_to_yaml(msg.link_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnergyEndPointProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::EnergyEndPointProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::EnergyEndPointProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::EnergyEndPointProto>()
{
  return "deva_navi_msgs::msg::EnergyEndPointProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::EnergyEndPointProto>()
{
  return "deva_navi_msgs/msg/EnergyEndPointProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::EnergyEndPointProto>
  : std::integral_constant<bool, has_fixed_size<deva_navi_msgs::msg::Coord3DDoubleProto>::value> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::EnergyEndPointProto>
  : std::integral_constant<bool, has_bounded_size<deva_navi_msgs::msg::Coord3DDoubleProto>::value> {};

template<>
struct is_message<deva_navi_msgs::msg::EnergyEndPointProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__TRAITS_HPP_
