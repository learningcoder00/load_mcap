// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'so'
#include "deva_perception_msgs/msg/detail/static_obstacle__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Signal & msg,
  std::ostream & out)
{
  out << "{";
  // member: so
  {
    out << "so: ";
    to_flow_style_yaml(msg.so, out);
    out << ", ";
  }

  // member: signal_type
  {
    out << "signal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_type, out);
    out << ", ";
  }

  // member: geometry_type
  {
    out << "geometry_type: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_type, out);
    out << ", ";
  }

  // member: state_type
  {
    out << "state_type: ";
    rosidl_generator_traits::value_to_yaml(msg.state_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Signal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: so
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "so:\n";
    to_block_style_yaml(msg.so, out, indentation + 2);
  }

  // member: signal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_type, out);
    out << "\n";
  }

  // member: geometry_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry_type: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_type, out);
    out << "\n";
  }

  // member: state_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_type: ";
    rosidl_generator_traits::value_to_yaml(msg.state_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Signal & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Signal & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Signal & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Signal>()
{
  return "deva_perception_msgs::msg::Signal";
}

template<>
inline const char * name<deva_perception_msgs::msg::Signal>()
{
  return "deva_perception_msgs/msg/Signal";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Signal>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::StaticObstacle>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Signal>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::StaticObstacle>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::Signal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__TRAITS_HPP_
