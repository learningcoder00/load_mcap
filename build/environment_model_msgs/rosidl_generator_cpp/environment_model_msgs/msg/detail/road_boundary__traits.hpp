// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/road_boundary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'left_physical_bound_line'
// Member 'right_physical_bound_line'
// Member 'left_law_bound_line'
// Member 'right_law_bound_line'
#include "environment_model_msgs/msg/detail/boundary_point__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadBoundary & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_physical_bound_line
  {
    if (msg.left_physical_bound_line.size() == 0) {
      out << "left_physical_bound_line: []";
    } else {
      out << "left_physical_bound_line: [";
      size_t pending_items = msg.left_physical_bound_line.size();
      for (auto item : msg.left_physical_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_physical_bound_line
  {
    if (msg.right_physical_bound_line.size() == 0) {
      out << "right_physical_bound_line: []";
    } else {
      out << "right_physical_bound_line: [";
      size_t pending_items = msg.right_physical_bound_line.size();
      for (auto item : msg.right_physical_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_law_bound_line
  {
    if (msg.left_law_bound_line.size() == 0) {
      out << "left_law_bound_line: []";
    } else {
      out << "left_law_bound_line: [";
      size_t pending_items = msg.left_law_bound_line.size();
      for (auto item : msg.left_law_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_law_bound_line
  {
    if (msg.right_law_bound_line.size() == 0) {
      out << "right_law_bound_line: []";
    } else {
      out << "right_law_bound_line: [";
      size_t pending_items = msg.right_law_bound_line.size();
      for (auto item : msg.right_law_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature
  {
    out << "feature: ";
    rosidl_generator_traits::value_to_yaml(msg.feature, out);
    out << ", ";
  }

  // member: isolated_obj_ids
  {
    if (msg.isolated_obj_ids.size() == 0) {
      out << "isolated_obj_ids: []";
    } else {
      out << "isolated_obj_ids: [";
      size_t pending_items = msg.isolated_obj_ids.size();
      for (auto item : msg.isolated_obj_ids) {
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
  const RoadBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_physical_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_physical_bound_line.size() == 0) {
      out << "left_physical_bound_line: []\n";
    } else {
      out << "left_physical_bound_line:\n";
      for (auto item : msg.left_physical_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_physical_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_physical_bound_line.size() == 0) {
      out << "right_physical_bound_line: []\n";
    } else {
      out << "right_physical_bound_line:\n";
      for (auto item : msg.right_physical_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_law_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_law_bound_line.size() == 0) {
      out << "left_law_bound_line: []\n";
    } else {
      out << "left_law_bound_line:\n";
      for (auto item : msg.left_law_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_law_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_law_bound_line.size() == 0) {
      out << "right_law_bound_line: []\n";
    } else {
      out << "right_law_bound_line:\n";
      for (auto item : msg.right_law_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature: ";
    rosidl_generator_traits::value_to_yaml(msg.feature, out);
    out << "\n";
  }

  // member: isolated_obj_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.isolated_obj_ids.size() == 0) {
      out << "isolated_obj_ids: []\n";
    } else {
      out << "isolated_obj_ids:\n";
      for (auto item : msg.isolated_obj_ids) {
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

inline std::string to_yaml(const RoadBoundary & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::RoadBoundary & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::RoadBoundary & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::RoadBoundary>()
{
  return "environment_model_msgs::msg::RoadBoundary";
}

template<>
inline const char * name<environment_model_msgs::msg::RoadBoundary>()
{
  return "environment_model_msgs/msg/RoadBoundary";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::RoadBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::RoadBoundary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::RoadBoundary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_BOUNDARY__TRAITS_HPP_
