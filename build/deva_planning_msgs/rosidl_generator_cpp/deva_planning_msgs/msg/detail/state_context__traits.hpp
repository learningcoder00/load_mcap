// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/state_context__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
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

  // member: navi_map_mode
  {
    out << "navi_map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_map_mode, out);
    out << ", ";
  }

  // member: routing_mode
  {
    out << "routing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_mode, out);
    out << ", ";
  }

  // member: target_lane_seq_score
  {
    out << "target_lane_seq_score: ";
    rosidl_generator_traits::value_to_yaml(msg.target_lane_seq_score, out);
    out << ", ";
  }

  // member: state_score
  {
    out << "state_score: ";
    rosidl_generator_traits::value_to_yaml(msg.state_score, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
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

  // member: gap_id
  {
    out << "gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_id, out);
    out << ", ";
  }

  // member: gap_line_id
  {
    out << "gap_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_line_id, out);
    out << ", ";
  }

  // member: start_s
  {
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << ", ";
  }

  // member: end_s
  {
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: future_length
  {
    out << "future_length: ";
    rosidl_generator_traits::value_to_yaml(msg.future_length, out);
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

  // member: cipv_obstacle_id
  {
    if (msg.cipv_obstacle_id.size() == 0) {
      out << "cipv_obstacle_id: []";
    } else {
      out << "cipv_obstacle_id: [";
      size_t pending_items = msg.cipv_obstacle_id.size();
      for (auto item : msg.cipv_obstacle_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nudge_obstacle_id
  {
    if (msg.nudge_obstacle_id.size() == 0) {
      out << "nudge_obstacle_id: []";
    } else {
      out << "nudge_obstacle_id: [";
      size_t pending_items = msg.nudge_obstacle_id.size();
      for (auto item : msg.nudge_obstacle_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cutin_follow_obstacle_id
  {
    if (msg.cutin_follow_obstacle_id.size() == 0) {
      out << "cutin_follow_obstacle_id: []";
    } else {
      out << "cutin_follow_obstacle_id: [";
      size_t pending_items = msg.cutin_follow_obstacle_id.size();
      for (auto item : msg.cutin_follow_obstacle_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cutin_overtake_obstacle_id
  {
    if (msg.cutin_overtake_obstacle_id.size() == 0) {
      out << "cutin_overtake_obstacle_id: []";
    } else {
      out << "cutin_overtake_obstacle_id: [";
      size_t pending_items = msg.cutin_overtake_obstacle_id.size();
      for (auto item : msg.cutin_overtake_obstacle_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_change_task
  {
    out << "lane_change_task: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_change_task, out);
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

  // member: navi_map_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_map_mode, out);
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

  // member: target_lane_seq_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_lane_seq_score: ";
    rosidl_generator_traits::value_to_yaml(msg.target_lane_seq_score, out);
    out << "\n";
  }

  // member: state_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_score: ";
    rosidl_generator_traits::value_to_yaml(msg.state_score, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
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

  // member: gap_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_id, out);
    out << "\n";
  }

  // member: gap_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gap_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_line_id, out);
    out << "\n";
  }

  // member: start_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_s: ";
    rosidl_generator_traits::value_to_yaml(msg.start_s, out);
    out << "\n";
  }

  // member: end_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_s: ";
    rosidl_generator_traits::value_to_yaml(msg.end_s, out);
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

  // member: future_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "future_length: ";
    rosidl_generator_traits::value_to_yaml(msg.future_length, out);
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

  // member: cipv_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cipv_obstacle_id.size() == 0) {
      out << "cipv_obstacle_id: []\n";
    } else {
      out << "cipv_obstacle_id:\n";
      for (auto item : msg.cipv_obstacle_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nudge_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nudge_obstacle_id.size() == 0) {
      out << "nudge_obstacle_id: []\n";
    } else {
      out << "nudge_obstacle_id:\n";
      for (auto item : msg.nudge_obstacle_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cutin_follow_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cutin_follow_obstacle_id.size() == 0) {
      out << "cutin_follow_obstacle_id: []\n";
    } else {
      out << "cutin_follow_obstacle_id:\n";
      for (auto item : msg.cutin_follow_obstacle_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cutin_overtake_obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cutin_overtake_obstacle_id.size() == 0) {
      out << "cutin_overtake_obstacle_id: []\n";
    } else {
      out << "cutin_overtake_obstacle_id:\n";
      for (auto item : msg.cutin_overtake_obstacle_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::StateContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::StateContext & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::StateContext>()
{
  return "deva_planning_msgs::msg::StateContext";
}

template<>
inline const char * name<deva_planning_msgs::msg::StateContext>()
{
  return "deva_planning_msgs/msg/StateContext";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::StateContext>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::StateContext>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::StateContext>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__TRAITS_HPP_
