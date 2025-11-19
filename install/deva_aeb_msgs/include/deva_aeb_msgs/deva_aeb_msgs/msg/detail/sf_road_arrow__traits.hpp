// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_road_arrow__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFRoadArrow & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: confi
  {
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << ", ";
  }

  // member: lanassignment
  {
    out << "lanassignment: ";
    rosidl_generator_traits::value_to_yaml(msg.lanassignment, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: poslgt
  {
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << ", ";
  }

  // member: poslat
  {
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << ", ";
  }

  // member: headingangle
  {
    out << "headingangle: ";
    rosidl_generator_traits::value_to_yaml(msg.headingangle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFRoadArrow & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: confi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << "\n";
  }

  // member: lanassignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanassignment: ";
    rosidl_generator_traits::value_to_yaml(msg.lanassignment, out);
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

  // member: poslgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << "\n";
  }

  // member: poslat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << "\n";
  }

  // member: headingangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headingangle: ";
    rosidl_generator_traits::value_to_yaml(msg.headingangle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFRoadArrow & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFRoadArrow & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFRoadArrow & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFRoadArrow>()
{
  return "deva_aeb_msgs::msg::SFRoadArrow";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFRoadArrow>()
{
  return "deva_aeb_msgs/msg/SFRoadArrow";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFRoadArrow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFRoadArrow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFRoadArrow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_ARROW__TRAITS_HPP_
