// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'game_obstacles'
#include "deva_planning_msgs2/msg/detail/u_int2_string__traits.hpp"
// Member 'critical_obstacles'
#include "deva_planning_msgs2/msg/detail/planning_obstacle__traits.hpp"
// Member 'tree_score'
#include "deva_planning_msgs2/msg/detail/string2_double__traits.hpp"
// Member 'tree_nodes'
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__traits.hpp"
// Member 'tree_output_trajs'
#include "deva_planning_msgs2/msg/detail/tree_trajectory__traits.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PolicyScenario & msg,
  std::ostream & out)
{
  out << "{";
  // member: tree_id
  {
    out << "tree_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_id, out);
    out << ", ";
  }

  // member: behavior_type
  {
    out << "behavior_type: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_type, out);
    out << ", ";
  }

  // member: target_line_id
  {
    out << "target_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_line_id, out);
    out << ", ";
  }

  // member: current_line_id
  {
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << ", ";
  }

  // member: is_from_mdriver
  {
    out << "is_from_mdriver: ";
    rosidl_generator_traits::value_to_yaml(msg.is_from_mdriver, out);
    out << ", ";
  }

  // member: front_obstacle_id
  {
    out << "front_obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.front_obstacle_id, out);
    out << ", ";
  }

  // member: rear_obstacle_id
  {
    out << "rear_obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_obstacle_id, out);
    out << ", ";
  }

  // member: game_obstacles
  {
    if (msg.game_obstacles.size() == 0) {
      out << "game_obstacles: []";
    } else {
      out << "game_obstacles: [";
      size_t pending_items = msg.game_obstacles.size();
      for (auto item : msg.game_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: critical_obstacles
  {
    if (msg.critical_obstacles.size() == 0) {
      out << "critical_obstacles: []";
    } else {
      out << "critical_obstacles: [";
      size_t pending_items = msg.critical_obstacles.size();
      for (auto item : msg.critical_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tree_score
  {
    if (msg.tree_score.size() == 0) {
      out << "tree_score: []";
    } else {
      out << "tree_score: [";
      size_t pending_items = msg.tree_score.size();
      for (auto item : msg.tree_score) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rollout_start_time
  {
    out << "rollout_start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.rollout_start_time, out);
    out << ", ";
  }

  // member: tree_nodes
  {
    if (msg.tree_nodes.size() == 0) {
      out << "tree_nodes: []";
    } else {
      out << "tree_nodes: [";
      size_t pending_items = msg.tree_nodes.size();
      for (auto item : msg.tree_nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tree_output_trajs
  {
    if (msg.tree_output_trajs.size() == 0) {
      out << "tree_output_trajs: []";
    } else {
      out << "tree_output_trajs: [";
      size_t pending_items = msg.tree_output_trajs.size();
      for (auto item : msg.tree_output_trajs) {
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
  const PolicyScenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tree_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_id, out);
    out << "\n";
  }

  // member: behavior_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_type: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_type, out);
    out << "\n";
  }

  // member: target_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.target_line_id, out);
    out << "\n";
  }

  // member: current_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << "\n";
  }

  // member: is_from_mdriver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_from_mdriver: ";
    rosidl_generator_traits::value_to_yaml(msg.is_from_mdriver, out);
    out << "\n";
  }

  // member: front_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.front_obstacle_id, out);
    out << "\n";
  }

  // member: rear_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_obstacle_id, out);
    out << "\n";
  }

  // member: game_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.game_obstacles.size() == 0) {
      out << "game_obstacles: []\n";
    } else {
      out << "game_obstacles:\n";
      for (auto item : msg.game_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: critical_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.critical_obstacles.size() == 0) {
      out << "critical_obstacles: []\n";
    } else {
      out << "critical_obstacles:\n";
      for (auto item : msg.critical_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tree_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tree_score.size() == 0) {
      out << "tree_score: []\n";
    } else {
      out << "tree_score:\n";
      for (auto item : msg.tree_score) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: tree_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tree_nodes.size() == 0) {
      out << "tree_nodes: []\n";
    } else {
      out << "tree_nodes:\n";
      for (auto item : msg.tree_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tree_output_trajs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tree_output_trajs.size() == 0) {
      out << "tree_output_trajs: []\n";
    } else {
      out << "tree_output_trajs:\n";
      for (auto item : msg.tree_output_trajs) {
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

inline std::string to_yaml(const PolicyScenario & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::PolicyScenario & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::PolicyScenario & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::PolicyScenario>()
{
  return "deva_planning_msgs2::msg::PolicyScenario";
}

template<>
inline const char * name<deva_planning_msgs2::msg::PolicyScenario>()
{
  return "deva_planning_msgs2/msg/PolicyScenario";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::PolicyScenario>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::PolicyScenario>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::PolicyScenario>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__TRAITS_HPP_
