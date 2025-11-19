// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/CurveCoef.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/curve_coef__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CurveCoef & msg,
  std::ostream & out)
{
  out << "{";
  // member: c0
  {
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
    out << ", ";
  }

  // member: c1
  {
    out << "c1: ";
    rosidl_generator_traits::value_to_yaml(msg.c1, out);
    out << ", ";
  }

  // member: c2
  {
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
    out << ", ";
  }

  // member: c3
  {
    out << "c3: ";
    rosidl_generator_traits::value_to_yaml(msg.c3, out);
    out << ", ";
  }

  // member: startpoint
  {
    out << "startpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.startpoint, out);
    out << ", ";
  }

  // member: endpoint
  {
    out << "endpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.endpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CurveCoef & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: c0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c0: ";
    rosidl_generator_traits::value_to_yaml(msg.c0, out);
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

  // member: c2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c2: ";
    rosidl_generator_traits::value_to_yaml(msg.c2, out);
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

  // member: startpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.startpoint, out);
    out << "\n";
  }

  // member: endpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.endpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CurveCoef & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::CurveCoef & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::CurveCoef & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::CurveCoef>()
{
  return "deva_perception_msgs::msg::CurveCoef";
}

template<>
inline const char * name<deva_perception_msgs::msg::CurveCoef>()
{
  return "deva_perception_msgs/msg/CurveCoef";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::CurveCoef>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::CurveCoef>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::CurveCoef>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CURVE_COEF__TRAITS_HPP_
