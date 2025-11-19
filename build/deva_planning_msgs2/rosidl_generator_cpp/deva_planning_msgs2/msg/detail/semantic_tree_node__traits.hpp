// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'game_cost'
// Member 'rollout_cost'
#include "deva_planning_msgs2/msg/detail/string2_double__traits.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const SemanticTreeNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: rollout_start_time
  {
    out << "rollout_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.rollout_start_time, out);
    out << ", ";
  }

  // member: total_score
  {
    out << "total_score: ";
    rosidl_generator_traits::value_to_yaml(msg.total_score, out);
    out << ", ";
  }

  // member: game_score
  {
    out << "game_score: ";
    rosidl_generator_traits::value_to_yaml(msg.game_score, out);
    out << ", ";
  }

  // member: rollout_score
  {
    out << "rollout_score: ";
    rosidl_generator_traits::value_to_yaml(msg.rollout_score, out);
    out << ", ";
  }

  // member: game_cost
  {
    if (msg.game_cost.size() == 0) {
      out << "game_cost: []";
    } else {
      out << "game_cost: [";
      size_t pending_items = msg.game_cost.size();
      for (auto item : msg.game_cost) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rollout_cost
  {
    if (msg.rollout_cost.size() == 0) {
      out << "rollout_cost: []";
    } else {
      out << "rollout_cost: [";
      size_t pending_items = msg.rollout_cost.size();
      for (auto item : msg.rollout_cost) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scalable_flags
  {
    if (msg.scalable_flags.size() == 0) {
      out << "scalable_flags: []";
    } else {
      out << "scalable_flags: [";
      size_t pending_items = msg.scalable_flags.size();
      for (auto item : msg.scalable_flags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scalable_multimap
  {
    if (msg.scalable_multimap.size() == 0) {
      out << "scalable_multimap: []";
    } else {
      out << "scalable_multimap: [";
      size_t pending_items = msg.scalable_multimap.size();
      for (auto item : msg.scalable_multimap) {
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
  const SemanticTreeNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: rollout_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollout_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.rollout_start_time, out);
    out << "\n";
  }

  // member: total_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_score: ";
    rosidl_generator_traits::value_to_yaml(msg.total_score, out);
    out << "\n";
  }

  // member: game_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_score: ";
    rosidl_generator_traits::value_to_yaml(msg.game_score, out);
    out << "\n";
  }

  // member: rollout_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollout_score: ";
    rosidl_generator_traits::value_to_yaml(msg.rollout_score, out);
    out << "\n";
  }

  // member: game_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.game_cost.size() == 0) {
      out << "game_cost: []\n";
    } else {
      out << "game_cost:\n";
      for (auto item : msg.game_cost) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: rollout_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rollout_cost.size() == 0) {
      out << "rollout_cost: []\n";
    } else {
      out << "rollout_cost:\n";
      for (auto item : msg.rollout_cost) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: scalable_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scalable_flags.size() == 0) {
      out << "scalable_flags: []\n";
    } else {
      out << "scalable_flags:\n";
      for (auto item : msg.scalable_flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scalable_multimap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scalable_multimap.size() == 0) {
      out << "scalable_multimap: []\n";
    } else {
      out << "scalable_multimap:\n";
      for (auto item : msg.scalable_multimap) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SemanticTreeNode & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::SemanticTreeNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::SemanticTreeNode & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::SemanticTreeNode>()
{
  return "deva_planning_msgs2::msg::SemanticTreeNode";
}

template<>
inline const char * name<deva_planning_msgs2::msg::SemanticTreeNode>()
{
  return "deva_planning_msgs2/msg/SemanticTreeNode";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::SemanticTreeNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::SemanticTreeNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::SemanticTreeNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__TRAITS_HPP_
