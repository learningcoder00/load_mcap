// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebCrossImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: cross_image_type
  {
    out << "cross_image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_image_type, out);
    out << ", ";
  }

  // member: cross_image_data
  {
    if (msg.cross_image_data.size() == 0) {
      out << "cross_image_data: []";
    } else {
      out << "cross_image_data: [";
      size_t pending_items = msg.cross_image_data.size();
      for (auto item : msg.cross_image_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebCrossImage & msg,
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

  // member: cross_image_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_image_type, out);
    out << "\n";
  }

  // member: cross_image_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cross_image_data.size() == 0) {
      out << "cross_image_data: []\n";
    } else {
      out << "cross_image_data:\n";
      for (auto item : msg.cross_image_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebCrossImage & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebCrossImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebCrossImage & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebCrossImage>()
{
  return "deva_gaode_routing_msgs::msg::WebCrossImage";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebCrossImage>()
{
  return "deva_gaode_routing_msgs/msg/WebCrossImage";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebCrossImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebCrossImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebCrossImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__TRAITS_HPP_
