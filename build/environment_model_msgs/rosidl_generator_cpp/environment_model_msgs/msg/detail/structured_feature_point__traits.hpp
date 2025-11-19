// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/structured_feature_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'prev_ids'
// Member 'next_ids'
// Member 'lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'position'
#include "environment_model_msgs/msg/detail/vec3d__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StructuredFeaturePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: link_id
  {
    out << "link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.link_id, out);
    out << ", ";
  }

  // member: types
  {
    if (msg.types.size() == 0) {
      out << "types: []";
    } else {
      out << "types: [";
      size_t pending_items = msg.types.size();
      for (auto item : msg.types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: project_percent
  {
    out << "project_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.project_percent, out);
    out << ", ";
  }

  // member: prev_ids
  {
    if (msg.prev_ids.size() == 0) {
      out << "prev_ids: []";
    } else {
      out << "prev_ids: [";
      size_t pending_items = msg.prev_ids.size();
      for (auto item : msg.prev_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: next_ids
  {
    if (msg.next_ids.size() == 0) {
      out << "next_ids: []";
    } else {
      out << "next_ids: [";
      size_t pending_items = msg.next_ids.size();
      for (auto item : msg.next_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_ids
  {
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []";
    } else {
      out << "lane_ids: [";
      size_t pending_items = msg.lane_ids.size();
      for (auto item : msg.lane_ids) {
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
  const StructuredFeaturePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.link_id, out);
    out << "\n";
  }

  // member: types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.types.size() == 0) {
      out << "types: []\n";
    } else {
      out << "types:\n";
      for (auto item : msg.types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: project_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "project_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.project_percent, out);
    out << "\n";
  }

  // member: prev_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prev_ids.size() == 0) {
      out << "prev_ids: []\n";
    } else {
      out << "prev_ids:\n";
      for (auto item : msg.prev_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: next_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_ids.size() == 0) {
      out << "next_ids: []\n";
    } else {
      out << "next_ids:\n";
      for (auto item : msg.next_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_ids.size() == 0) {
      out << "lane_ids: []\n";
    } else {
      out << "lane_ids:\n";
      for (auto item : msg.lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StructuredFeaturePoint & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::StructuredFeaturePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::StructuredFeaturePoint & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::StructuredFeaturePoint>()
{
  return "environment_model_msgs::msg::StructuredFeaturePoint";
}

template<>
inline const char * name<environment_model_msgs::msg::StructuredFeaturePoint>()
{
  return "environment_model_msgs/msg/StructuredFeaturePoint";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::StructuredFeaturePoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::StructuredFeaturePoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::StructuredFeaturePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__TRAITS_HPP_
