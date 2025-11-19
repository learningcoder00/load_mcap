// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/VirtualWallArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/virtual_wall_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'virtual_wall_array'
#include "deva_planning_msgs2/msg/detail/virtual_wall__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualWallArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << ", ";
  }

  // member: virtual_wall_array
  {
    if (msg.virtual_wall_array.size() == 0) {
      out << "virtual_wall_array: []";
    } else {
      out << "virtual_wall_array: [";
      size_t pending_items = msg.virtual_wall_array.size();
      for (auto item : msg.virtual_wall_array) {
        to_flow_style_yaml(item, out);
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
  const VirtualWallArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }

  // member: virtual_wall_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.virtual_wall_array.size() == 0) {
      out << "virtual_wall_array: []\n";
    } else {
      out << "virtual_wall_array:\n";
      for (auto item : msg.virtual_wall_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualWallArray & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::VirtualWallArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::VirtualWallArray & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::VirtualWallArray>()
{
  return "deva_planning_msgs2::msg::VirtualWallArray";
}

template<>
inline const char * name<deva_planning_msgs2::msg::VirtualWallArray>()
{
  return "deva_planning_msgs2/msg/VirtualWallArray";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::VirtualWallArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::VirtualWallArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::VirtualWallArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL_ARRAY__TRAITS_HPP_
