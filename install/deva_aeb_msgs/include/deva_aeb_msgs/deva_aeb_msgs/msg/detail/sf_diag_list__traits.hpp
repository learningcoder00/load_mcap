// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'weather'
// Member 'scene'
// Member 'rdsuf'
// Member 'light'
// Member 'time'
#include "deva_aeb_msgs/msg/detail/sf_diag_info__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFDiagList & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: weather
  {
    out << "weather: ";
    to_flow_style_yaml(msg.weather, out);
    out << ", ";
  }

  // member: scene
  {
    out << "scene: ";
    to_flow_style_yaml(msg.scene, out);
    out << ", ";
  }

  // member: rdsuf
  {
    out << "rdsuf: ";
    to_flow_style_yaml(msg.rdsuf, out);
    out << ", ";
  }

  // member: light
  {
    out << "light: ";
    to_flow_style_yaml(msg.light, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFDiagList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: weather
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weather:\n";
    to_block_style_yaml(msg.weather, out, indentation + 2);
  }

  // member: scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene:\n";
    to_block_style_yaml(msg.scene, out, indentation + 2);
  }

  // member: rdsuf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rdsuf:\n";
    to_block_style_yaml(msg.rdsuf, out, indentation + 2);
  }

  // member: light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light:\n";
    to_block_style_yaml(msg.light, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFDiagList & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFDiagList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFDiagList & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFDiagList>()
{
  return "deva_aeb_msgs::msg::SFDiagList";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFDiagList>()
{
  return "deva_aeb_msgs/msg/SFDiagList";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFDiagList>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFDiagInfo>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFDiagList>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFDiagInfo>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFDiagList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__TRAITS_HPP_
