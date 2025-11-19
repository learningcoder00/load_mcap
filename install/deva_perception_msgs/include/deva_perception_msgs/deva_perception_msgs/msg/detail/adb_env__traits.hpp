// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/AdbEnv.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/adb_env__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'sign_list'
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__traits.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdbEnv & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sign_list
  {
    if (msg.sign_list.size() == 0) {
      out << "sign_list: []";
    } else {
      out << "sign_list: [";
      size_t pending_items = msg.sign_list.size();
      for (auto item : msg.sign_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extra_infos
  {
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []";
    } else {
      out << "extra_infos: [";
      size_t pending_items = msg.extra_infos.size();
      for (auto item : msg.extra_infos) {
        to_flow_style_yaml(item, out);
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
  const AdbEnv & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sign_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sign_list.size() == 0) {
      out << "sign_list: []\n";
    } else {
      out << "sign_list:\n";
      for (auto item : msg.sign_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: extra_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []\n";
    } else {
      out << "extra_infos:\n";
      for (auto item : msg.extra_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdbEnv & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::AdbEnv & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::AdbEnv & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::AdbEnv>()
{
  return "deva_perception_msgs::msg::AdbEnv";
}

template<>
inline const char * name<deva_perception_msgs::msg::AdbEnv>()
{
  return "deva_perception_msgs/msg/AdbEnv";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::AdbEnv>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::AdbEnv>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::AdbEnv>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_ENV__TRAITS_HPP_
