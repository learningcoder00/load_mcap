// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersectionEntryInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'crowd_sourcing_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mIntersectionEntryInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: crowd_sourcing_link_id
  {
    out << "crowd_sourcing_link_id: ";
    to_flow_style_yaml(msg.crowd_sourcing_link_id, out);
    out << ", ";
  }

  // member: offset
  {
    out << "offset: ";
    rosidl_generator_traits::value_to_yaml(msg.offset, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const J6mIntersectionEntryInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: crowd_sourcing_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crowd_sourcing_link_id:\n";
    to_block_style_yaml(msg.crowd_sourcing_link_id, out, indentation + 2);
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mIntersectionEntryInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>()
{
  return "deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>()
{
  return "deva_gaode_routing_msgs/msg/J6mIntersectionEntryInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>
  : std::integral_constant<bool, has_fixed_size<deva_gaode_routing_msgs::msg::Coordinate>::value && has_fixed_size<deva_gaode_routing_msgs::msg::LinkIDType>::value> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>
  : std::integral_constant<bool, has_bounded_size<deva_gaode_routing_msgs::msg::Coordinate>::value && has_bounded_size<deva_gaode_routing_msgs::msg::LinkIDType>::value> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__TRAITS_HPP_
