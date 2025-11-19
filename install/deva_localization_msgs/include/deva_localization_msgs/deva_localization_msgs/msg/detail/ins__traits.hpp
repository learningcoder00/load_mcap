// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_localization_msgs:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__TRAITS_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_localization_msgs/msg/detail/ins__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'localization'
// Member 'gcj_localization'
#include "deva_localization_msgs/msg/detail/pose__traits.hpp"

namespace deva_localization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ins & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ins_status
  {
    out << "ins_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_status, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: localization
  {
    out << "localization: ";
    to_flow_style_yaml(msg.localization, out);
    out << ", ";
  }

  // member: gcj_lat
  {
    out << "gcj_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gcj_lat, out);
    out << ", ";
  }

  // member: gcj_lon
  {
    out << "gcj_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.gcj_lon, out);
    out << ", ";
  }

  // member: gcj_localization
  {
    out << "gcj_localization: ";
    to_flow_style_yaml(msg.gcj_localization, out);
    out << ", ";
  }

  // member: true_north_heading
  {
    out << "true_north_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.true_north_heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ins & msg,
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

  // member: ins_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_status: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_status, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization:\n";
    to_block_style_yaml(msg.localization, out, indentation + 2);
  }

  // member: gcj_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcj_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.gcj_lat, out);
    out << "\n";
  }

  // member: gcj_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcj_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.gcj_lon, out);
    out << "\n";
  }

  // member: gcj_localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcj_localization:\n";
    to_block_style_yaml(msg.gcj_localization, out, indentation + 2);
  }

  // member: true_north_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_north_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.true_north_heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ins & msg, bool use_flow_style = false)
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

}  // namespace deva_localization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_localization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_localization_msgs::msg::Ins & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_localization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_localization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_localization_msgs::msg::Ins & msg)
{
  return deva_localization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_localization_msgs::msg::Ins>()
{
  return "deva_localization_msgs::msg::Ins";
}

template<>
inline const char * name<deva_localization_msgs::msg::Ins>()
{
  return "deva_localization_msgs/msg/Ins";
}

template<>
struct has_fixed_size<deva_localization_msgs::msg::Ins>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_localization_msgs::msg::Ins>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_localization_msgs::msg::Ins>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__TRAITS_HPP_
