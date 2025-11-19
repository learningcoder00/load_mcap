// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebVocalRecMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence_num
  {
    out << "sequence_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_num, out);
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: conor_type
  {
    out << "conor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conor_type, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: voice_content
  {
    out << "voice_content: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebVocalRecMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_num: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_num, out);
    out << "\n";
  }

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << "\n";
  }

  // member: conor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conor_type, out);
    out << "\n";
  }

  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: voice_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voice_content: ";
    rosidl_generator_traits::value_to_yaml(msg.voice_content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebVocalRecMsg & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebVocalRecMsg & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebVocalRecMsg>()
{
  return "deva_gaode_routing_msgs::msg::WebVocalRecMsg";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebVocalRecMsg>()
{
  return "deva_gaode_routing_msgs/msg/WebVocalRecMsg";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebVocalRecMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebVocalRecMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebVocalRecMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__TRAITS_HPP_
