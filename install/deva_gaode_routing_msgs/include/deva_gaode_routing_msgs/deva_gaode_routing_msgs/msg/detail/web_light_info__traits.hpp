// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_light_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'light_states'
#include "deva_gaode_routing_msgs/msg/detail/web_light_state__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebLightInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: dir
  {
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << ", ";
  }

  // member: wait_num
  {
    out << "wait_num: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_num, out);
    out << ", ";
  }

  // member: light_states
  {
    if (msg.light_states.size() == 0) {
      out << "light_states: []";
    } else {
      out << "light_states: [";
      size_t pending_items = msg.light_states.size();
      for (auto item : msg.light_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desc
  {
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebLightInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << "\n";
  }

  // member: wait_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_num: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_num, out);
    out << "\n";
  }

  // member: light_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.light_states.size() == 0) {
      out << "light_states: []\n";
    } else {
      out << "light_states:\n";
      for (auto item : msg.light_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: desc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desc: ";
    rosidl_generator_traits::value_to_yaml(msg.desc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebLightInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebLightInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebLightInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebLightInfo>()
{
  return "deva_gaode_routing_msgs::msg::WebLightInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebLightInfo>()
{
  return "deva_gaode_routing_msgs/msg/WebLightInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebLightInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebLightInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebLightInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__TRAITS_HPP_
