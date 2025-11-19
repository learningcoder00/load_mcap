// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/ParkableID.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/parkable_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParkableID & msg,
  std::ostream & out)
{
  out << "{";
  // member: parkable_ids
  {
    if (msg.parkable_ids.size() == 0) {
      out << "parkable_ids: []";
    } else {
      out << "parkable_ids: [";
      size_t pending_items = msg.parkable_ids.size();
      for (auto item : msg.parkable_ids) {
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
  const ParkableID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parkable_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parkable_ids.size() == 0) {
      out << "parkable_ids: []\n";
    } else {
      out << "parkable_ids:\n";
      for (auto item : msg.parkable_ids) {
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

inline std::string to_yaml(const ParkableID & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::ParkableID & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::ParkableID & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::ParkableID>()
{
  return "deva_planning_msgs::msg::ParkableID";
}

template<>
inline const char * name<deva_planning_msgs::msg::ParkableID>()
{
  return "deva_planning_msgs/msg/ParkableID";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::ParkableID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::ParkableID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::ParkableID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__TRAITS_HPP_
