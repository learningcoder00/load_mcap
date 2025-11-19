// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/FreespacePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/freespace_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FreespacePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: rfu_x
  {
    out << "rfu_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_x, out);
    out << ", ";
  }

  // member: rfu_y
  {
    out << "rfu_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_y, out);
    out << ", ";
  }

  // member: rfu_z
  {
    out << "rfu_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_z, out);
    out << ", ";
  }

  // member: azim
  {
    out << "azim: ";
    rosidl_generator_traits::value_to_yaml(msg.azim, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: class_type
  {
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
    out << ", ";
  }

  // member: ins_id
  {
    out << "ins_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_id, out);
    out << ", ";
  }

  // member: visible
  {
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FreespacePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
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

  // member: rfu_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfu_x: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_x, out);
    out << "\n";
  }

  // member: rfu_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfu_y: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_y, out);
    out << "\n";
  }

  // member: rfu_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfu_z: ";
    rosidl_generator_traits::value_to_yaml(msg.rfu_z, out);
    out << "\n";
  }

  // member: azim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azim: ";
    rosidl_generator_traits::value_to_yaml(msg.azim, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: class_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_type: ";
    rosidl_generator_traits::value_to_yaml(msg.class_type, out);
    out << "\n";
  }

  // member: ins_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_id, out);
    out << "\n";
  }

  // member: visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FreespacePoint & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::FreespacePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::FreespacePoint & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::FreespacePoint>()
{
  return "deva_perception_msgs::msg::FreespacePoint";
}

template<>
inline const char * name<deva_perception_msgs::msg::FreespacePoint>()
{
  return "deva_perception_msgs/msg/FreespacePoint";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::FreespacePoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::FreespacePoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::FreespacePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__TRAITS_HPP_
