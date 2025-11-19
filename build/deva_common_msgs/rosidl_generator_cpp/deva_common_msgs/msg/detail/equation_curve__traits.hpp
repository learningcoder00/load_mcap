// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__TRAITS_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EquationCurve & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: a3
  {
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
    out << ", ";
  }

  // member: a2
  {
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << ", ";
  }

  // member: a1
  {
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << ", ";
  }

  // member: a0
  {
    out << "a0: ";
    rosidl_generator_traits::value_to_yaml(msg.a0, out);
    out << ", ";
  }

  // member: b3
  {
    out << "b3: ";
    rosidl_generator_traits::value_to_yaml(msg.b3, out);
    out << ", ";
  }

  // member: b2
  {
    out << "b2: ";
    rosidl_generator_traits::value_to_yaml(msg.b2, out);
    out << ", ";
  }

  // member: b1
  {
    out << "b1: ";
    rosidl_generator_traits::value_to_yaml(msg.b1, out);
    out << ", ";
  }

  // member: b0
  {
    out << "b0: ";
    rosidl_generator_traits::value_to_yaml(msg.b0, out);
    out << ", ";
  }

  // member: c3
  {
    out << "c3: ";
    rosidl_generator_traits::value_to_yaml(msg.c3, out);
    out << ", ";
  }

  // member: c2
  {
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << ", ";
  }

  // member: c1
  {
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << ", ";
  }

  // member: c0
  {
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
    out << ", ";
  }

  // member: s_start
  {
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << ", ";
  }

  // member: s_end
  {
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EquationCurve & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: a3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a3: ";
    rosidl_generator_traits::value_to_yaml(msg.a3, out);
    out << "\n";
  }

  // member: a2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a2: ";
    rosidl_generator_traits::value_to_yaml(msg.a2, out);
    out << "\n";
  }

  // member: a1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a1: ";
    rosidl_generator_traits::value_to_yaml(msg.a1, out);
    out << "\n";
  }

  // member: a0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a0: ";
    rosidl_generator_traits::value_to_yaml(msg.a0, out);
    out << "\n";
  }

  // member: b3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b3: ";
    rosidl_generator_traits::value_to_yaml(msg.b3, out);
    out << "\n";
  }

  // member: b2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b2: ";
    rosidl_generator_traits::value_to_yaml(msg.b2, out);
    out << "\n";
  }

  // member: b1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b1: ";
    rosidl_generator_traits::value_to_yaml(msg.b1, out);
    out << "\n";
  }

  // member: b0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b0: ";
    rosidl_generator_traits::value_to_yaml(msg.b0, out);
    out << "\n";
  }

  // member: c3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c3: ";
    rosidl_generator_traits::value_to_yaml(msg.c3, out);
    out << "\n";
  }

  // member: c2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << "\n";
  }

  // member: c1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << "\n";
  }

  // member: c0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
    out << "\n";
  }

  // member: s_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_start: ";
    rosidl_generator_traits::value_to_yaml(msg.s_start, out);
    out << "\n";
  }

  // member: s_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_end: ";
    rosidl_generator_traits::value_to_yaml(msg.s_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EquationCurve & msg, bool use_flow_style = false)
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

}  // namespace deva_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_common_msgs::msg::EquationCurve & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_common_msgs::msg::EquationCurve & msg)
{
  return deva_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_common_msgs::msg::EquationCurve>()
{
  return "deva_common_msgs::msg::EquationCurve";
}

template<>
inline const char * name<deva_common_msgs::msg::EquationCurve>()
{
  return "deva_common_msgs/msg/EquationCurve";
}

template<>
struct has_fixed_size<deva_common_msgs::msg::EquationCurve>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_common_msgs::msg::EquationCurve>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_common_msgs::msg::EquationCurve>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__TRAITS_HPP_
