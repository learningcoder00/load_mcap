// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/state_context__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'mcts_trees'
#include "deva_planning_msgs2/msg/detail/policy_scenario__traits.hpp"
// Member 'tagged_obstacle'
#include "deva_planning_msgs2/msg/detail/u_int2_string__traits.hpp"
// Member 'lane_bind_infos'
#include "deva_planning_msgs2/msg/detail/lane_bind_info__traits.hpp"
// Member 'ego_sl_on_ref_lines'
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__traits.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__traits.hpp"
// Member 'scalable_stream'
#include "deva_planning_msgs2/msg/detail/string2_u_int__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateContext & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: behavior_type
  {
    out << "behavior_type: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_type, out);
    out << ", ";
  }

  // member: routing_mode
  {
    out << "routing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_mode, out);
    out << ", ";
  }

  // member: current_turn_type
  {
    out << "current_turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.current_turn_type, out);
    out << ", ";
  }

  // member: use_mdriver_ego
  {
    out << "use_mdriver_ego: ";
    rosidl_generator_traits::value_to_yaml(msg.use_mdriver_ego, out);
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

  // member: lane_change_task
  {
    out << "lane_change_task: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_task, out);
    out << ", ";
  }

  // member: best_tree_id
  {
    out << "best_tree_id: ";
    rosidl_generator_traits::value_to_yaml(msg.best_tree_id, out);
    out << ", ";
  }

  // member: mcts_trees
  {
    if (msg.mcts_trees.size() == 0) {
      out << "mcts_trees: []";
    } else {
      out << "mcts_trees: [";
      size_t pending_items = msg.mcts_trees.size();
      for (auto item : msg.mcts_trees) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tagged_obstacle
  {
    if (msg.tagged_obstacle.size() == 0) {
      out << "tagged_obstacle: []";
    } else {
      out << "tagged_obstacle: [";
      size_t pending_items = msg.tagged_obstacle.size();
      for (auto item : msg.tagged_obstacle) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_bind_infos
  {
    if (msg.lane_bind_infos.size() == 0) {
      out << "lane_bind_infos: []";
    } else {
      out << "lane_bind_infos: [";
      size_t pending_items = msg.lane_bind_infos.size();
      for (auto item : msg.lane_bind_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ego_sl_on_ref_lines
  {
    if (msg.ego_sl_on_ref_lines.size() == 0) {
      out << "ego_sl_on_ref_lines: []";
    } else {
      out << "ego_sl_on_ref_lines: [";
      size_t pending_items = msg.ego_sl_on_ref_lines.size();
      for (auto item : msg.ego_sl_on_ref_lines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_change_cancel_reason
  {
    out << "lane_change_cancel_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_cancel_reason, out);
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
    out << ", ";
  }

  // member: scalable_stream
  {
    if (msg.scalable_stream.size() == 0) {
      out << "scalable_stream: []";
    } else {
      out << "scalable_stream: [";
      size_t pending_items = msg.scalable_stream.size();
      for (auto item : msg.scalable_stream) {
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
  const StateContext & msg,
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

  // member: behavior_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_type: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_type, out);
    out << "\n";
  }

  // member: routing_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_mode, out);
    out << "\n";
  }

  // member: current_turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_turn_type: ";
    rosidl_generator_traits::value_to_yaml(msg.current_turn_type, out);
    out << "\n";
  }

  // member: use_mdriver_ego
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_mdriver_ego: ";
    rosidl_generator_traits::value_to_yaml(msg.use_mdriver_ego, out);
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

  // member: lane_change_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_change_task: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_task, out);
    out << "\n";
  }

  // member: best_tree_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_tree_id: ";
    rosidl_generator_traits::value_to_yaml(msg.best_tree_id, out);
    out << "\n";
  }

  // member: mcts_trees
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcts_trees.size() == 0) {
      out << "mcts_trees: []\n";
    } else {
      out << "mcts_trees:\n";
      for (auto item : msg.mcts_trees) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tagged_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tagged_obstacle.size() == 0) {
      out << "tagged_obstacle: []\n";
    } else {
      out << "tagged_obstacle:\n";
      for (auto item : msg.tagged_obstacle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_bind_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_bind_infos.size() == 0) {
      out << "lane_bind_infos: []\n";
    } else {
      out << "lane_bind_infos:\n";
      for (auto item : msg.lane_bind_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ego_sl_on_ref_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego_sl_on_ref_lines.size() == 0) {
      out << "ego_sl_on_ref_lines: []\n";
    } else {
      out << "ego_sl_on_ref_lines:\n";
      for (auto item : msg.ego_sl_on_ref_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_change_cancel_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_change_cancel_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_cancel_reason, out);
    out << "\n";
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

  // member: scalable_stream
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scalable_stream.size() == 0) {
      out << "scalable_stream: []\n";
    } else {
      out << "scalable_stream:\n";
      for (auto item : msg.scalable_stream) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateContext & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::StateContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::StateContext & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::StateContext>()
{
  return "deva_planning_msgs2::msg::StateContext";
}

template<>
inline const char * name<deva_planning_msgs2::msg::StateContext>()
{
  return "deva_planning_msgs2/msg/StateContext";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::StateContext>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::StateContext>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::StateContext>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_
