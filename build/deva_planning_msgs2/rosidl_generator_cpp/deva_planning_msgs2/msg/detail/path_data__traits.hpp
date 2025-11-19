// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/PathData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/path_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathData & msg,
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

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: kappa
  {
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << ", ";
  }

  // member: dkappa
  {
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << ", ";
  }

  // member: ddkappa
  {
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
    out << ", ";
  }

  // member: is_junction
  {
    out << "is_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.is_junction, out);
    out << ", ";
  }

  // member: speedlimit
  {
    out << "speedlimit: ";
    rosidl_generator_traits::value_to_yaml(msg.speedlimit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathData & msg,
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

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: dkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.dkappa, out);
    out << "\n";
  }

  // member: ddkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ddkappa: ";
    rosidl_generator_traits::value_to_yaml(msg.ddkappa, out);
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

  // member: speedlimit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedlimit: ";
    rosidl_generator_traits::value_to_yaml(msg.speedlimit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathData & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::PathData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::PathData & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::PathData>()
{
  return "deva_planning_msgs2::msg::PathData";
}

template<>
inline const char * name<deva_planning_msgs2::msg::PathData>()
{
  return "deva_planning_msgs2/msg/PathData";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::PathData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::PathData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_planning_msgs2::msg::PathData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PATH_DATA__TRAITS_HPP_
