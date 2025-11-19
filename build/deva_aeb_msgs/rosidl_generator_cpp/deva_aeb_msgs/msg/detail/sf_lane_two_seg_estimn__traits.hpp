// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFLaneTwoSegEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFLaneTwoSegEstimn & msg,
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

  // member: dstlgttoend
  {
    out << "dstlgttoend: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoend, out);
    out << ", ";
  }

  // member: startpointposx
  {
    out << "startpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.startpointposx, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: parseconfi
  {
    out << "parseconfi: ";
    rosidl_generator_traits::value_to_yaml(msg.parseconfi, out);
    out << ", ";
  }

  // member: rmse
  {
    out << "rmse: ";
    rosidl_generator_traits::value_to_yaml(msg.rmse, out);
    out << ", ";
  }

  // member: obstacleflag
  {
    out << "obstacleflag: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacleflag, out);
    out << ", ";
  }

  // member: trackstatus
  {
    out << "trackstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.trackstatus, out);
    out << ", ";
  }

  // member: poslat
  {
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
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

  // member: extendendpointposx
  {
    out << "extendendpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.extendendpointposx, out);
    out << ", ";
  }

  // member: extendendpointposy
  {
    out << "extendendpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.extendendpointposy, out);
    out << ", ";
  }

  // member: secondsegpointdistance
  {
    out << "secondsegpointdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.secondsegpointdistance, out);
    out << ", ";
  }

  // member: secondsegthirdordercoeff
  {
    out << "secondsegthirdordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.secondsegthirdordercoeff, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFLaneTwoSegEstimn & msg,
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

  // member: dstlgttoend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dstlgttoend: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoend, out);
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

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: parseconfi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parseconfi: ";
    rosidl_generator_traits::value_to_yaml(msg.parseconfi, out);
    out << "\n";
  }

  // member: rmse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rmse: ";
    rosidl_generator_traits::value_to_yaml(msg.rmse, out);
    out << "\n";
  }

  // member: obstacleflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacleflag: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacleflag, out);
    out << "\n";
  }

  // member: trackstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trackstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.trackstatus, out);
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

  // member: extendendpointposx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extendendpointposx: ";
    rosidl_generator_traits::value_to_yaml(msg.extendendpointposx, out);
    out << "\n";
  }

  // member: extendendpointposy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extendendpointposy: ";
    rosidl_generator_traits::value_to_yaml(msg.extendendpointposy, out);
    out << "\n";
  }

  // member: secondsegpointdistance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondsegpointdistance: ";
    rosidl_generator_traits::value_to_yaml(msg.secondsegpointdistance, out);
    out << "\n";
  }

  // member: secondsegthirdordercoeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondsegthirdordercoeff: ";
    rosidl_generator_traits::value_to_yaml(msg.secondsegthirdordercoeff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFLaneTwoSegEstimn & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFLaneTwoSegEstimn & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFLaneTwoSegEstimn>()
{
  return "deva_aeb_msgs::msg::SFLaneTwoSegEstimn";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFLaneTwoSegEstimn>()
{
  return "deva_aeb_msgs/msg/SFLaneTwoSegEstimn";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFLaneTwoSegEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFLaneTwoSegEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFLaneTwoSegEstimn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_LANE_TWO_SEG_ESTIMN__TRAITS_HPP_
