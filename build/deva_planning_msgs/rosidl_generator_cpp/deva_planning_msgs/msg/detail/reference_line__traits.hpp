// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/ReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/reference_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference_line'
// Member 'original_merge_point'
// Member 'merge_point'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReferenceLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: reference_line
  {
    out << "reference_line: ";
    to_flow_style_yaml(msg.reference_line, out);
    out << ", ";
  }

  // member: line_id
  {
    out << "line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.line_id, out);
    out << ", ";
  }

  // member: original_merge_point
  {
    out << "original_merge_point: ";
    to_flow_style_yaml(msg.original_merge_point, out);
    out << ", ";
  }

  // member: merge_point
  {
    out << "merge_point: ";
    to_flow_style_yaml(msg.merge_point, out);
    out << ", ";
  }

  // member: reference_line_type
  {
    out << "reference_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_line_type, out);
    out << ", ";
  }

  // member: line_is_virtual
  {
    out << "line_is_virtual: ";
    rosidl_generator_traits::value_to_yaml(msg.line_is_virtual, out);
    out << ", ";
  }

  // member: left_line_nums
  {
    out << "left_line_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_nums, out);
    out << ", ";
  }

  // member: right_line_nums
  {
    out << "right_line_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_nums, out);
    out << ", ";
  }

  // member: cipv_ids
  {
    if (msg.cipv_ids.size() == 0) {
      out << "cipv_ids: []";
    } else {
      out << "cipv_ids: [";
      size_t pending_items = msg.cipv_ids.size();
      for (auto item : msg.cipv_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cutin_cipv_ids
  {
    if (msg.cutin_cipv_ids.size() == 0) {
      out << "cutin_cipv_ids: []";
    } else {
      out << "cutin_cipv_ids: [";
      size_t pending_items = msg.cutin_cipv_ids.size();
      for (auto item : msg.cutin_cipv_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nearest_cipv_ids
  {
    if (msg.nearest_cipv_ids.size() == 0) {
      out << "nearest_cipv_ids: []";
    } else {
      out << "nearest_cipv_ids: [";
      size_t pending_items = msg.nearest_cipv_ids.size();
      for (auto item : msg.nearest_cipv_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_score
  {
    out << "navi_score: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_score, out);
    out << ", ";
  }

  // member: effic_score
  {
    out << "effic_score: ";
    rosidl_generator_traits::value_to_yaml(msg.effic_score, out);
    out << ", ";
  }

  // member: turn_scenario
  {
    out << "turn_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_scenario, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReferenceLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reference_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_line:\n";
    to_block_style_yaml(msg.reference_line, out, indentation + 2);
  }

  // member: line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.line_id, out);
    out << "\n";
  }

  // member: original_merge_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "original_merge_point:\n";
    to_block_style_yaml(msg.original_merge_point, out, indentation + 2);
  }

  // member: merge_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "merge_point:\n";
    to_block_style_yaml(msg.merge_point, out, indentation + 2);
  }

  // member: reference_line_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_line_type, out);
    out << "\n";
  }

  // member: line_is_virtual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_is_virtual: ";
    rosidl_generator_traits::value_to_yaml(msg.line_is_virtual, out);
    out << "\n";
  }

  // member: left_line_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_line_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.left_line_nums, out);
    out << "\n";
  }

  // member: right_line_nums
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_line_nums: ";
    rosidl_generator_traits::value_to_yaml(msg.right_line_nums, out);
    out << "\n";
  }

  // member: cipv_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cipv_ids.size() == 0) {
      out << "cipv_ids: []\n";
    } else {
      out << "cipv_ids:\n";
      for (auto item : msg.cipv_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cutin_cipv_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cutin_cipv_ids.size() == 0) {
      out << "cutin_cipv_ids: []\n";
    } else {
      out << "cutin_cipv_ids:\n";
      for (auto item : msg.cutin_cipv_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nearest_cipv_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nearest_cipv_ids.size() == 0) {
      out << "nearest_cipv_ids: []\n";
    } else {
      out << "nearest_cipv_ids:\n";
      for (auto item : msg.nearest_cipv_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navi_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_score: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_score, out);
    out << "\n";
  }

  // member: effic_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effic_score: ";
    rosidl_generator_traits::value_to_yaml(msg.effic_score, out);
    out << "\n";
  }

  // member: turn_scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_scenario, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReferenceLine & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::ReferenceLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::ReferenceLine & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::ReferenceLine>()
{
  return "deva_planning_msgs::msg::ReferenceLine";
}

template<>
inline const char * name<deva_planning_msgs::msg::ReferenceLine>()
{
  return "deva_planning_msgs/msg/ReferenceLine";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::ReferenceLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::ReferenceLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::ReferenceLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINE__TRAITS_HPP_
