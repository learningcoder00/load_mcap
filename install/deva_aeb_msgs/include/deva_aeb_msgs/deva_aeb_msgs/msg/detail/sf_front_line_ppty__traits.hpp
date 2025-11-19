// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFrontLinePpty & msg,
  std::ostream & out)
{
  out << "{";
  // member: drvrpfmncmonqly
  {
    out << "drvrpfmncmonqly: ";
    rosidl_generator_traits::value_to_yaml(msg.drvrpfmncmonqly, out);
    out << ", ";
  }

  // member: lanekeepaidqly
  {
    out << "lanekeepaidqly: ";
    rosidl_generator_traits::value_to_yaml(msg.lanekeepaidqly, out);
    out << ", ";
  }

  // member: trfcjamassiqly
  {
    out << "trfcjamassiqly: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcjamassiqly, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: tunqly
  {
    out << "tunqly: ";
    rosidl_generator_traits::value_to_yaml(msg.tunqly, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFrontLinePpty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drvrpfmncmonqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvrpfmncmonqly: ";
    rosidl_generator_traits::value_to_yaml(msg.drvrpfmncmonqly, out);
    out << "\n";
  }

  // member: lanekeepaidqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanekeepaidqly: ";
    rosidl_generator_traits::value_to_yaml(msg.lanekeepaidqly, out);
    out << "\n";
  }

  // member: trfcjamassiqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trfcjamassiqly: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcjamassiqly, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: tunqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tunqly: ";
    rosidl_generator_traits::value_to_yaml(msg.tunqly, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFrontLinePpty & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFrontLinePpty & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFrontLinePpty & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFrontLinePpty>()
{
  return "deva_aeb_msgs::msg::SFFrontLinePpty";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFrontLinePpty>()
{
  return "deva_aeb_msgs/msg/SFFrontLinePpty";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFrontLinePpty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFrontLinePpty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFrontLinePpty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FRONT_LINE_PPTY__TRAITS_HPP_
