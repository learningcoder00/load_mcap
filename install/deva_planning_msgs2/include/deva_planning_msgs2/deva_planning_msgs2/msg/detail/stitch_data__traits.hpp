// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/StitchData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/stitch_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const StitchData & msg,
  std::ostream & out)
{
  out << "{";
  // member: stitch_mode
  {
    out << "stitch_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_mode, out);
    out << ", ";
  }

  // member: planner_mode
  {
    out << "planner_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_mode, out);
    out << ", ";
  }

  // member: actual_planner_mode
  {
    out << "actual_planner_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_planner_mode, out);
    out << ", ";
  }

  // member: current_x
  {
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << ", ";
  }

  // member: current_y
  {
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << ", ";
  }

  // member: stitch_s
  {
    out << "stitch_s: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_s, out);
    out << ", ";
  }

  // member: stitch_l
  {
    out << "stitch_l: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_l, out);
    out << ", ";
  }

  // member: stitch_x
  {
    out << "stitch_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_x, out);
    out << ", ";
  }

  // member: stitch_y
  {
    out << "stitch_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_y, out);
    out << ", ";
  }

  // member: stitch_z
  {
    out << "stitch_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_z, out);
    out << ", ";
  }

  // member: stitch_heading
  {
    out << "stitch_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_heading, out);
    out << ", ";
  }

  // member: stitch_alpha
  {
    out << "stitch_alpha: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_alpha, out);
    out << ", ";
  }

  // member: stitch_v
  {
    out << "stitch_v: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_v, out);
    out << ", ";
  }

  // member: stitch_steer
  {
    out << "stitch_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StitchData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stitch_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_mode, out);
    out << "\n";
  }

  // member: planner_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_mode, out);
    out << "\n";
  }

  // member: actual_planner_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_planner_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_planner_mode, out);
    out << "\n";
  }

  // member: current_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_x, out);
    out << "\n";
  }

  // member: current_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_y, out);
    out << "\n";
  }

  // member: stitch_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_s: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_s, out);
    out << "\n";
  }

  // member: stitch_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_l: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_l, out);
    out << "\n";
  }

  // member: stitch_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_x: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_x, out);
    out << "\n";
  }

  // member: stitch_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_y: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_y, out);
    out << "\n";
  }

  // member: stitch_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_z: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_z, out);
    out << "\n";
  }

  // member: stitch_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_heading, out);
    out << "\n";
  }

  // member: stitch_alpha
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_alpha: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_alpha, out);
    out << "\n";
  }

  // member: stitch_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_v: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_v, out);
    out << "\n";
  }

  // member: stitch_steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_steer: ";
    rosidl_generator_traits::value_to_yaml(msg.stitch_steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StitchData & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::StitchData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::StitchData & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::StitchData>()
{
  return "deva_planning_msgs2::msg::StitchData";
}

template<>
inline const char * name<deva_planning_msgs2::msg::StitchData>()
{
  return "deva_planning_msgs2/msg/StitchData";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::StitchData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::StitchData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_planning_msgs2::msg::StitchData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STITCH_DATA__TRAITS_HPP_
