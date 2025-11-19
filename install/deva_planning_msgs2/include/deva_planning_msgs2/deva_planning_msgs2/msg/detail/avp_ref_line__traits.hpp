// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/AvpRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/avp_ref_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpRefLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

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

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: left_boundary_x
  {
    out << "left_boundary_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_x, out);
    out << ", ";
  }

  // member: left_boundary_y
  {
    out << "left_boundary_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_y, out);
    out << ", ";
  }

  // member: left_boundary_z
  {
    out << "left_boundary_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_z, out);
    out << ", ";
  }

  // member: right_boundary_x
  {
    out << "right_boundary_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_x, out);
    out << ", ";
  }

  // member: right_boundary_y
  {
    out << "right_boundary_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_y, out);
    out << ", ";
  }

  // member: right_boundary_z
  {
    out << "right_boundary_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_z, out);
    out << ", ";
  }

  // member: left_boundary_n
  {
    out << "left_boundary_n: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_n, out);
    out << ", ";
  }

  // member: right_boundary_n
  {
    out << "right_boundary_n: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_n, out);
    out << ", ";
  }

  // member: is_junction
  {
    out << "is_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_junction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpRefLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

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

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: left_boundary_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_boundary_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_x, out);
    out << "\n";
  }

  // member: left_boundary_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_boundary_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_y, out);
    out << "\n";
  }

  // member: left_boundary_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_boundary_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_z, out);
    out << "\n";
  }

  // member: right_boundary_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_boundary_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_x, out);
    out << "\n";
  }

  // member: right_boundary_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_boundary_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_y, out);
    out << "\n";
  }

  // member: right_boundary_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_boundary_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_z, out);
    out << "\n";
  }

  // member: left_boundary_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_boundary_n: ";
    rosidl_generator_traits::value_to_yaml(msg.left_boundary_n, out);
    out << "\n";
  }

  // member: right_boundary_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_boundary_n: ";
    rosidl_generator_traits::value_to_yaml(msg.right_boundary_n, out);
    out << "\n";
  }

  // member: is_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_junction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpRefLine & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::AvpRefLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::AvpRefLine & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::AvpRefLine>()
{
  return "deva_planning_msgs2::msg::AvpRefLine";
}

template<>
inline const char * name<deva_planning_msgs2::msg::AvpRefLine>()
{
  return "deva_planning_msgs2/msg/AvpRefLine";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::AvpRefLine>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::AvpRefLine>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_planning_msgs2::msg::AvpRefLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE__TRAITS_HPP_
