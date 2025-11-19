// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/structured_link__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'points'
#include "environment_model_msgs/msg/detail/vec3d__traits.hpp"
// Member 'guidances'
#include "deva_gaode_routing_msgs/msg/detail/guidance__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StructuredLink & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: succ_ids
  {
    if (msg.succ_ids.size() == 0) {
      out << "succ_ids: []";
    } else {
      out << "succ_ids: [";
      size_t pending_items = msg.succ_ids.size();
      for (auto item : msg.succ_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_point_ids
  {
    if (msg.feature_point_ids.size() == 0) {
      out << "feature_point_ids: []";
    } else {
      out << "feature_point_ids: [";
      size_t pending_items = msg.feature_point_ids.size();
      for (auto item : msg.feature_point_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
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

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: speed_limit_s2e
  {
    out << "speed_limit_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_s2e, out);
    out << ", ";
  }

  // member: speed_limit_e2s
  {
    out << "speed_limit_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_e2s, out);
    out << ", ";
  }

  // member: coverage_status
  {
    out << "coverage_status: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_status, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: lane_num_s2e
  {
    out << "lane_num_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_s2e, out);
    out << ", ";
  }

  // member: lane_num_e2s
  {
    out << "lane_num_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_e2s, out);
    out << ", ";
  }

  // member: relationship_with_junction
  {
    out << "relationship_with_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.relationship_with_junction, out);
    out << ", ";
  }

  // member: guidances
  {
    if (msg.guidances.size() == 0) {
      out << "guidances: []";
    } else {
      out << "guidances: [";
      size_t pending_items = msg.guidances.size();
      for (auto item : msg.guidances) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_on_routing
  {
    out << "is_on_routing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_routing, out);
    out << ", ";
  }

  // member: need_revert
  {
    out << "need_revert: ";
    rosidl_generator_traits::value_to_yaml(msg.need_revert, out);
    out << ", ";
  }

  // member: link_kinds
  {
    if (msg.link_kinds.size() == 0) {
      out << "link_kinds: []";
    } else {
      out << "link_kinds: [";
      size_t pending_items = msg.link_kinds.size();
      for (auto item : msg.link_kinds) {
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
  const StructuredLink & msg,
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
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: succ_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.succ_ids.size() == 0) {
      out << "succ_ids: []\n";
    } else {
      out << "succ_ids:\n";
      for (auto item : msg.succ_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: feature_point_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_point_ids.size() == 0) {
      out << "feature_point_ids: []\n";
    } else {
      out << "feature_point_ids:\n";
      for (auto item : msg.feature_point_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
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

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: speed_limit_s2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_s2e, out);
    out << "\n";
  }

  // member: speed_limit_e2s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_e2s, out);
    out << "\n";
  }

  // member: coverage_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_status: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_status, out);
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

  // member: lane_num_s2e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_s2e: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_s2e, out);
    out << "\n";
  }

  // member: lane_num_e2s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_e2s: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_e2s, out);
    out << "\n";
  }

  // member: relationship_with_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relationship_with_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.relationship_with_junction, out);
    out << "\n";
  }

  // member: guidances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.guidances.size() == 0) {
      out << "guidances: []\n";
    } else {
      out << "guidances:\n";
      for (auto item : msg.guidances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: is_on_routing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_routing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_routing, out);
    out << "\n";
  }

  // member: need_revert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "need_revert: ";
    rosidl_generator_traits::value_to_yaml(msg.need_revert, out);
    out << "\n";
  }

  // member: link_kinds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_kinds.size() == 0) {
      out << "link_kinds: []\n";
    } else {
      out << "link_kinds:\n";
      for (auto item : msg.link_kinds) {
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

inline std::string to_yaml(const StructuredLink & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::StructuredLink & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::StructuredLink & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::StructuredLink>()
{
  return "environment_model_msgs::msg::StructuredLink";
}

template<>
inline const char * name<environment_model_msgs::msg::StructuredLink>()
{
  return "environment_model_msgs/msg/StructuredLink";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::StructuredLink>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::StructuredLink>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::StructuredLink>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__TRAITS_HPP_
