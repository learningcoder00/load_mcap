// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coords'
// Member 'extends'
// Member 'left_boundary'
// Member 'right_boundary'
#include "environment_model_msgs/msg/detail/vec2d__traits.hpp"
// Member 'left_neibors'
// Member 'right_neibors'
#include "environment_model_msgs/msg/detail/map_ids__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: coords
  {
    if (msg.coords.size() == 0) {
      out << "coords: []";
    } else {
      out << "coords: [";
      size_t pending_items = msg.coords.size();
      for (auto item : msg.coords) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: extends
  {
    if (msg.extends.size() == 0) {
      out << "extends: []";
    } else {
      out << "extends: [";
      size_t pending_items = msg.extends.size();
      for (auto item : msg.extends) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_boundary
  {
    if (msg.left_boundary.size() == 0) {
      out << "left_boundary: []";
    } else {
      out << "left_boundary: [";
      size_t pending_items = msg.left_boundary.size();
      for (auto item : msg.left_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_boundary
  {
    if (msg.right_boundary.size() == 0) {
      out << "right_boundary: []";
    } else {
      out << "right_boundary: [";
      size_t pending_items = msg.right_boundary.size();
      for (auto item : msg.right_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_neibors
  {
    if (msg.left_neibors.size() == 0) {
      out << "left_neibors: []";
    } else {
      out << "left_neibors: [";
      size_t pending_items = msg.left_neibors.size();
      for (auto item : msg.left_neibors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_neibors
  {
    if (msg.right_neibors.size() == 0) {
      out << "right_neibors: []";
    } else {
      out << "right_neibors: [";
      size_t pending_items = msg.right_neibors.size();
      for (auto item : msg.right_neibors) {
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
  const EnvLane & msg,
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

  // member: coords
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coords.size() == 0) {
      out << "coords: []\n";
    } else {
      out << "coords:\n";
      for (auto item : msg.coords) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: extends
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extends.size() == 0) {
      out << "extends: []\n";
    } else {
      out << "extends:\n";
      for (auto item : msg.extends) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_boundary.size() == 0) {
      out << "left_boundary: []\n";
    } else {
      out << "left_boundary:\n";
      for (auto item : msg.left_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_boundary.size() == 0) {
      out << "right_boundary: []\n";
    } else {
      out << "right_boundary:\n";
      for (auto item : msg.right_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_neibors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_neibors.size() == 0) {
      out << "left_neibors: []\n";
    } else {
      out << "left_neibors:\n";
      for (auto item : msg.left_neibors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_neibors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_neibors.size() == 0) {
      out << "right_neibors: []\n";
    } else {
      out << "right_neibors:\n";
      for (auto item : msg.right_neibors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvLane & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::EnvLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvLane & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvLane>()
{
  return "environment_model_msgs::msg::EnvLane";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvLane>()
{
  return "environment_model_msgs/msg/EnvLane";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::EnvLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__TRAITS_HPP_
