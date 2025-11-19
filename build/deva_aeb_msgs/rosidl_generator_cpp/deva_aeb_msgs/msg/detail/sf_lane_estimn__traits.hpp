// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFLaneEstimn & msg,
  std::ostream & out)
{
  out << "{";
  // member: constcoeff
  {
    out << "constcoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.constcoeff, out);
    out << ", ";
  }

  // member: firstordercoeff
  {
    out << "firstordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.firstordercoeff, out);
    out << ", ";
  }

  // member: secondordercoeff
  {
    out << "secondordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.secondordercoeff, out);
    out << ", ";
  }

  // member: thirdordercoeff
  {
    out << "thirdordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.thirdordercoeff, out);
    out << ", ";
  }

  // member: startpointposx
  {
    out << "startpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.startpointposx, out);
    out << ", ";
  }

  // member: startpointposy
  {
    out << "startpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.startpointposy, out);
    out << ", ";
  }

  // member: endpointposx
  {
    out << "endpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.endpointposx, out);
    out << ", ";
  }

  // member: endpointposy
  {
    out << "endpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.endpointposy, out);
    out << ", ";
  }

  // member: dstlgttoend
  {
    out << "dstlgttoend: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoend, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFLaneEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: constcoeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constcoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.constcoeff, out);
    out << "\n";
  }

  // member: firstordercoeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firstordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.firstordercoeff, out);
    out << "\n";
  }

  // member: secondordercoeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.secondordercoeff, out);
    out << "\n";
  }

  // member: thirdordercoeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thirdordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.thirdordercoeff, out);
    out << "\n";
  }

  // member: startpointposx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.startpointposx, out);
    out << "\n";
  }

  // member: startpointposy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.startpointposy, out);
    out << "\n";
  }

  // member: endpointposx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.endpointposx, out);
    out << "\n";
  }

  // member: endpointposy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "endpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.endpointposy, out);
    out << "\n";
  }

  // member: dstlgttoend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dstlgttoend: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoend, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFLaneEstimn & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFLaneEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFLaneEstimn & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFLaneEstimn>()
{
  return "deva_aeb_msgs::msg::SFLaneEstimn";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFLaneEstimn>()
{
  return "deva_aeb_msgs/msg/SFLaneEstimn";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFLaneEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFLaneEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFLaneEstimn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_ESTIMN__TRAITS_HPP_
