// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/reference_lines__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference_lines'
#include "deva_planning_msgs2/msg/detail/reference_line__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReferenceLines & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reference_lines
  {
    if (msg.reference_lines.size() == 0) {
      out << "reference_lines: []";
    } else {
      out << "reference_lines: [";
      size_t pending_items = msg.reference_lines.size();
      for (auto item : msg.reference_lines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: curr_id
  {
    out << "curr_id: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_id, out);
    out << ", ";
  }

  // member: tar_id
  {
    out << "tar_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tar_id, out);
    out << ", ";
  }

  // member: curr_model_id
  {
    out << "curr_model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_model_id, out);
    out << ", ";
  }

  // member: curr_line_virtual
  {
    out << "curr_line_virtual: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_line_virtual, out);
    out << ", ";
  }

  // member: curr_left_nums
  {
    out << "curr_left_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_left_nums, out);
    out << ", ";
  }

  // member: curr_right_nums
  {
    out << "curr_right_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_right_nums, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReferenceLines & msg,
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

  // member: reference_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_lines.size() == 0) {
      out << "reference_lines: []\n";
    } else {
      out << "reference_lines:\n";
      for (auto item : msg.reference_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: curr_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_id: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_id, out);
    out << "\n";
  }

  // member: tar_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tar_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tar_id, out);
    out << "\n";
  }

  // member: curr_model_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_model_id: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_model_id, out);
    out << "\n";
  }

  // member: curr_line_virtual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_line_virtual: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_line_virtual, out);
    out << "\n";
  }

  // member: curr_left_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_left_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_left_nums, out);
    out << "\n";
  }

  // member: curr_right_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_right_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_right_nums, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReferenceLines & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::ReferenceLines & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::ReferenceLines & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::ReferenceLines>()
{
  return "deva_planning_msgs2::msg::ReferenceLines";
}

template<>
inline const char * name<deva_planning_msgs2::msg::ReferenceLines>()
{
  return "deva_planning_msgs2/msg/ReferenceLines";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::ReferenceLines>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::ReferenceLines>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::ReferenceLines>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINES__TRAITS_HPP_
