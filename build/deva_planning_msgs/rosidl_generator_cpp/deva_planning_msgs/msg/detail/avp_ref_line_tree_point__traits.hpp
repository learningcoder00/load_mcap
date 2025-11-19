// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpRefLineTreePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: idx
  {
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << ", ";
  }

  // member: directory
  {
    out << "directory: ";
    rosidl_generator_traits::value_to_yaml(msg.directory, out);
    out << ", ";
  }

  // member: center_n
  {
    out << "center_n: ";
    rosidl_generator_traits::value_to_yaml(msg.center_n, out);
    out << ", ";
  }

  // member: center_point_x
  {
    out << "center_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_x, out);
    out << ", ";
  }

  // member: center_point_y
  {
    out << "center_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_y, out);
    out << ", ";
  }

  // member: center_point_z
  {
    out << "center_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_z, out);
    out << ", ";
  }

  // member: left_n
  {
    out << "left_n: ";
    rosidl_generator_traits::value_to_yaml(msg.left_n, out);
    out << ", ";
  }

  // member: right_n
  {
    out << "right_n: ";
    rosidl_generator_traits::value_to_yaml(msg.right_n, out);
    out << ", ";
  }

  // member: left_x
  {
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << ", ";
  }

  // member: left_y
  {
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << ", ";
  }

  // member: left_z
  {
    out << "left_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_z, out);
    out << ", ";
  }

  // member: right_x
  {
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << ", ";
  }

  // member: right_y
  {
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << ", ";
  }

  // member: right_z
  {
    out << "right_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpRefLineTreePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
    out << "\n";
  }

  // member: directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directory: ";
    rosidl_generator_traits::value_to_yaml(msg.directory, out);
    out << "\n";
  }

  // member: center_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_n: ";
    rosidl_generator_traits::value_to_yaml(msg.center_n, out);
    out << "\n";
  }

  // member: center_point_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_x: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_x, out);
    out << "\n";
  }

  // member: center_point_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_y: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_y, out);
    out << "\n";
  }

  // member: center_point_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point_z: ";
    rosidl_generator_traits::value_to_yaml(msg.center_point_z, out);
    out << "\n";
  }

  // member: left_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_n: ";
    rosidl_generator_traits::value_to_yaml(msg.left_n, out);
    out << "\n";
  }

  // member: right_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_n: ";
    rosidl_generator_traits::value_to_yaml(msg.right_n, out);
    out << "\n";
  }

  // member: left_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << "\n";
  }

  // member: left_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << "\n";
  }

  // member: left_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_z: ";
    rosidl_generator_traits::value_to_yaml(msg.left_z, out);
    out << "\n";
  }

  // member: right_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << "\n";
  }

  // member: right_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << "\n";
  }

  // member: right_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_z: ";
    rosidl_generator_traits::value_to_yaml(msg.right_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpRefLineTreePoint & msg, bool use_flow_style = false)
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
  const deva_planning_msgs::msg::AvpRefLineTreePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::AvpRefLineTreePoint & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::AvpRefLineTreePoint>()
{
  return "deva_planning_msgs::msg::AvpRefLineTreePoint";
}

template<>
inline const char * name<deva_planning_msgs::msg::AvpRefLineTreePoint>()
{
  return "deva_planning_msgs/msg/AvpRefLineTreePoint";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::AvpRefLineTreePoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::AvpRefLineTreePoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_planning_msgs::msg::AvpRefLineTreePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__TRAITS_HPP_
