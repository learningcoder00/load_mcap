// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFRoadEdgeEstimn & msg,
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

  // member: overrideflag
  {
    out << "overrideflag: ";
    rosidl_generator_traits::value_to_yaml(msg.overrideflag, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: parseconfi
  {
    out << "parseconfi: ";
    rosidl_generator_traits::value_to_yaml(msg.parseconfi, out);
    out << ", ";
  }

  // member: tracestatus
  {
    out << "tracestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.tracestatus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFRoadEdgeEstimn & msg,
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

  // member: overrideflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overrideflag: ";
    rosidl_generator_traits::value_to_yaml(msg.overrideflag, out);
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

  // member: parseconfi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parseconfi: ";
    rosidl_generator_traits::value_to_yaml(msg.parseconfi, out);
    out << "\n";
  }

  // member: tracestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracestatus: ";
    rosidl_generator_traits::value_to_yaml(msg.tracestatus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFRoadEdgeEstimn & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFRoadEdgeEstimn & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFRoadEdgeEstimn>()
{
  return "deva_aeb_msgs::msg::SFRoadEdgeEstimn";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFRoadEdgeEstimn>()
{
  return "deva_aeb_msgs/msg/SFRoadEdgeEstimn";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFRoadEdgeEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFRoadEdgeEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFRoadEdgeEstimn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_EDGE_ESTIMN__TRAITS_HPP_
