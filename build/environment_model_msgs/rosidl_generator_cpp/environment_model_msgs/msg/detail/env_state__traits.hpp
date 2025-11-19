// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvState.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvState & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: msg_length
  {
    out << "msg_length: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_length, out);
    out << ", ";
  }

  // member: msg
  {
    if (msg.msg.size() == 0) {
      out << "msg: []";
    } else {
      out << "msg: [";
      size_t pending_items = msg.msg.size();
      for (auto item : msg.msg) {
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
  const EnvState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: msg_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_length: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_length, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.msg.size() == 0) {
      out << "msg: []\n";
    } else {
      out << "msg:\n";
      for (auto item : msg.msg) {
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

inline std::string to_yaml(const EnvState & msg, bool use_flow_style = false)
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

}  // namespace environment_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use environment_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_model_msgs::msg::EnvState & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvState & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvState>()
{
  return "environment_model_msgs::msg::EnvState";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvState>()
{
  return "environment_model_msgs/msg/EnvState";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::EnvState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__TRAITS_HPP_
