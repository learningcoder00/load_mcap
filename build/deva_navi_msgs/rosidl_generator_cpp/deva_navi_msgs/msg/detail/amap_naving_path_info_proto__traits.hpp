// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'amap_path_info'
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AmapNavingPathInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: amap_path_info
  {
    out << "amap_path_info: ";
    to_flow_style_yaml(msg.amap_path_info, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmapNavingPathInfoProto & msg,
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

  // member: amap_path_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amap_path_info:\n";
    to_block_style_yaml(msg.amap_path_info, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmapNavingPathInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::AmapNavingPathInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::AmapNavingPathInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::AmapNavingPathInfoProto>()
{
  return "deva_navi_msgs::msg::AmapNavingPathInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::AmapNavingPathInfoProto>()
{
  return "deva_navi_msgs/msg/AmapNavingPathInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::AmapNavingPathInfoProto>
  : std::integral_constant<bool, has_fixed_size<deva_navi_msgs::msg::AmapPathInfoProto>::value> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::AmapNavingPathInfoProto>
  : std::integral_constant<bool, has_bounded_size<deva_navi_msgs::msg::AmapPathInfoProto>::value> {};

template<>
struct is_message<deva_navi_msgs::msg::AmapNavingPathInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__TRAITS_HPP_
