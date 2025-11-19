// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/calibration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'version'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'lidar2gnss'
// Member 'gnss2ego'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Calibration & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    to_flow_style_yaml(msg.version, out);
    out << ", ";
  }

  // member: lidar2gnss
  {
    out << "lidar2gnss: ";
    to_flow_style_yaml(msg.lidar2gnss, out);
    out << ", ";
  }

  // member: gnss2ego
  {
    out << "gnss2ego: ";
    to_flow_style_yaml(msg.gnss2ego, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calibration & msg,
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

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version:\n";
    to_block_style_yaml(msg.version, out, indentation + 2);
  }

  // member: lidar2gnss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar2gnss:\n";
    to_block_style_yaml(msg.lidar2gnss, out, indentation + 2);
  }

  // member: gnss2ego
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss2ego:\n";
    to_block_style_yaml(msg.gnss2ego, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calibration & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Calibration & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Calibration & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Calibration>()
{
  return "deva_perception_msgs::msg::Calibration";
}

template<>
inline const char * name<deva_perception_msgs::msg::Calibration>()
{
  return "deva_perception_msgs/msg/Calibration";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Calibration>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Calibration>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::Calibration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__TRAITS_HPP_
