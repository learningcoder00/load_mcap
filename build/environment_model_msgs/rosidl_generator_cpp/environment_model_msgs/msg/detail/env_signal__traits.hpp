// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygen'
// Member 'virtual_brake_point'
#include "environment_model_msgs/msg/detail/vec3d__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: enum_color
  {
    out << "enum_color: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_color, out);
    out << ", ";
  }

  // member: remain_time
  {
    out << "remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_time, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: enum_shape_type
  {
    out << "enum_shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_shape_type, out);
    out << ", ";
  }

  // member: polygen
  {
    if (msg.polygen.size() == 0) {
      out << "polygen: []";
    } else {
      out << "polygen: [";
      size_t pending_items = msg.polygen.size();
      for (auto item : msg.polygen) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: virtual_brake_point
  {
    if (msg.virtual_brake_point.size() == 0) {
      out << "virtual_brake_point: []";
    } else {
      out << "virtual_brake_point: [";
      size_t pending_items = msg.virtual_brake_point.size();
      for (auto item : msg.virtual_brake_point) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blink
  {
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << ", ";
  }

  // member: block
  {
    out << "block: ";
    rosidl_generator_traits::value_to_yaml(msg.block, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enum_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_color: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_color, out);
    out << "\n";
  }

  // member: remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_time, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: enum_shape_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_shape_type, out);
    out << "\n";
  }

  // member: polygen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.polygen.size() == 0) {
      out << "polygen: []\n";
    } else {
      out << "polygen:\n";
      for (auto item : msg.polygen) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: virtual_brake_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.virtual_brake_point.size() == 0) {
      out << "virtual_brake_point: []\n";
    } else {
      out << "virtual_brake_point:\n";
      for (auto item : msg.virtual_brake_point) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: blink
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blink: ";
    rosidl_generator_traits::value_to_yaml(msg.blink, out);
    out << "\n";
  }

  // member: block
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "block: ";
    rosidl_generator_traits::value_to_yaml(msg.block, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvSignal & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::EnvSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvSignal & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvSignal>()
{
  return "environment_model_msgs::msg::EnvSignal";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvSignal>()
{
  return "environment_model_msgs/msg/EnvSignal";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvSignal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvSignal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::EnvSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__TRAITS_HPP_
