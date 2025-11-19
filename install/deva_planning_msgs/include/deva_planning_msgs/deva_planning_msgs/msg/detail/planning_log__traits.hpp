// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/planning_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: localization
  {
    if (msg.localization.size() == 0) {
      out << "localization: []";
    } else {
      out << "localization: [";
      size_t pending_items = msg.localization.size();
      for (auto item : msg.localization) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: chassis
  {
    if (msg.chassis.size() == 0) {
      out << "chassis: []";
    } else {
      out << "chassis: [";
      size_t pending_items = msg.chassis.size();
      for (auto item : msg.chassis) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pad_message
  {
    if (msg.pad_message.size() == 0) {
      out << "pad_message: []";
    } else {
      out << "pad_message: [";
      size_t pending_items = msg.pad_message.size();
      for (auto item : msg.pad_message) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pull_over_msg
  {
    if (msg.pull_over_msg.size() == 0) {
      out << "pull_over_msg: []";
    } else {
      out << "pull_over_msg: [";
      size_t pending_items = msg.pull_over_msg.size();
      for (auto item : msg.pull_over_msg) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_poles
  {
    if (msg.traffic_poles.size() == 0) {
      out << "traffic_poles: []";
    } else {
      out << "traffic_poles: [";
      size_t pending_items = msg.traffic_poles.size();
      for (auto item : msg.traffic_poles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: apollo_decision
  {
    if (msg.apollo_decision.size() == 0) {
      out << "apollo_decision: []";
    } else {
      out << "apollo_decision: [";
      size_t pending_items = msg.apollo_decision.size();
      for (auto item : msg.apollo_decision) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prediction
  {
    if (msg.prediction.size() == 0) {
      out << "prediction: []";
    } else {
      out << "prediction: [";
      size_t pending_items = msg.prediction.size();
      for (auto item : msg.prediction) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: megmap_proto
  {
    if (msg.megmap_proto.size() == 0) {
      out << "megmap_proto: []";
    } else {
      out << "megmap_proto: [";
      size_t pending_items = msg.megmap_proto.size();
      for (auto item : msg.megmap_proto) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state_context
  {
    if (msg.state_context.size() == 0) {
      out << "state_context: []";
    } else {
      out << "state_context: [";
      size_t pending_items = msg.state_context.size();
      for (auto item : msg.state_context) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_trajectory
  {
    if (msg.target_trajectory.size() == 0) {
      out << "target_trajectory: []";
    } else {
      out << "target_trajectory: [";
      size_t pending_items = msg.target_trajectory.size();
      for (auto item : msg.target_trajectory) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_solver_debug_sequence
  {
    if (msg.speed_solver_debug_sequence.size() == 0) {
      out << "speed_solver_debug_sequence: []";
    } else {
      out << "speed_solver_debug_sequence: [";
      size_t pending_items = msg.speed_solver_debug_sequence.size();
      for (auto item : msg.speed_solver_debug_sequence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_solver_debug_sequence
  {
    if (msg.trajectory_solver_debug_sequence.size() == 0) {
      out << "trajectory_solver_debug_sequence: []";
    } else {
      out << "trajectory_solver_debug_sequence: [";
      size_t pending_items = msg.trajectory_solver_debug_sequence.size();
      for (auto item : msg.trajectory_solver_debug_sequence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_log
  {
    if (msg.planning_log.size() == 0) {
      out << "planning_log: []";
    } else {
      out << "planning_log: [";
      size_t pending_items = msg.planning_log.size();
      for (auto item : msg.planning_log) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navigator_routing
  {
    if (msg.navigator_routing.size() == 0) {
      out << "navigator_routing: []";
    } else {
      out << "navigator_routing: [";
      size_t pending_items = msg.navigator_routing.size();
      for (auto item : msg.navigator_routing) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drving_state
  {
    out << "drving_state: ";
    rosidl_generator_traits::value_to_yaml(msg.drving_state, out);
    out << ", ";
  }

  // member: auto_function
  {
    out << "auto_function: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_function, out);
    out << ", ";
  }

  // member: drive_action
  {
    out << "drive_action: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_action, out);
    out << ", ";
  }

  // member: env_info_index
  {
    out << "env_info_index: ";
    rosidl_generator_traits::value_to_yaml(msg.env_info_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningLog & msg,
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

  // member: localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.localization.size() == 0) {
      out << "localization: []\n";
    } else {
      out << "localization:\n";
      for (auto item : msg.localization) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: chassis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassis.size() == 0) {
      out << "chassis: []\n";
    } else {
      out << "chassis:\n";
      for (auto item : msg.chassis) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pad_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pad_message.size() == 0) {
      out << "pad_message: []\n";
    } else {
      out << "pad_message:\n";
      for (auto item : msg.pad_message) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pull_over_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pull_over_msg.size() == 0) {
      out << "pull_over_msg: []\n";
    } else {
      out << "pull_over_msg:\n";
      for (auto item : msg.pull_over_msg) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_poles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_poles.size() == 0) {
      out << "traffic_poles: []\n";
    } else {
      out << "traffic_poles:\n";
      for (auto item : msg.traffic_poles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: apollo_decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.apollo_decision.size() == 0) {
      out << "apollo_decision: []\n";
    } else {
      out << "apollo_decision:\n";
      for (auto item : msg.apollo_decision) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prediction.size() == 0) {
      out << "prediction: []\n";
    } else {
      out << "prediction:\n";
      for (auto item : msg.prediction) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: megmap_proto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.megmap_proto.size() == 0) {
      out << "megmap_proto: []\n";
    } else {
      out << "megmap_proto:\n";
      for (auto item : msg.megmap_proto) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state_context
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_context.size() == 0) {
      out << "state_context: []\n";
    } else {
      out << "state_context:\n";
      for (auto item : msg.state_context) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_trajectory.size() == 0) {
      out << "target_trajectory: []\n";
    } else {
      out << "target_trajectory:\n";
      for (auto item : msg.target_trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_solver_debug_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_solver_debug_sequence.size() == 0) {
      out << "speed_solver_debug_sequence: []\n";
    } else {
      out << "speed_solver_debug_sequence:\n";
      for (auto item : msg.speed_solver_debug_sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trajectory_solver_debug_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_solver_debug_sequence.size() == 0) {
      out << "trajectory_solver_debug_sequence: []\n";
    } else {
      out << "trajectory_solver_debug_sequence:\n";
      for (auto item : msg.trajectory_solver_debug_sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: planning_log
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planning_log.size() == 0) {
      out << "planning_log: []\n";
    } else {
      out << "planning_log:\n";
      for (auto item : msg.planning_log) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navigator_routing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.navigator_routing.size() == 0) {
      out << "navigator_routing: []\n";
    } else {
      out << "navigator_routing:\n";
      for (auto item : msg.navigator_routing) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: drving_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drving_state: ";
    rosidl_generator_traits::value_to_yaml(msg.drving_state, out);
    out << "\n";
  }

  // member: auto_function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_function: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_function, out);
    out << "\n";
  }

  // member: drive_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_action: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_action, out);
    out << "\n";
  }

  // member: env_info_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "env_info_index: ";
    rosidl_generator_traits::value_to_yaml(msg.env_info_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningLog & msg, bool use_flow_style = false)
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
  const deva_planning_msgs::msg::PlanningLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::PlanningLog & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::PlanningLog>()
{
  return "deva_planning_msgs::msg::PlanningLog";
}

template<>
inline const char * name<deva_planning_msgs::msg::PlanningLog>()
{
  return "deva_planning_msgs/msg/PlanningLog";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::PlanningLog>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::PlanningLog>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::PlanningLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__TRAITS_HPP_
