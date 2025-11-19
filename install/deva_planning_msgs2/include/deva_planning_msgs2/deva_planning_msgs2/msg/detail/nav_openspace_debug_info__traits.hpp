// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacles_info'
#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__traits.hpp"
// Member 'parking_slots'
#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__traits.hpp"
// Member 'ref_points'
// Member 'last_ref_points'
#include "deva_planning_msgs2/msg/detail/path_data__traits.hpp"
// Member 'last_trajectory'
// Member 'last_internal_trajectory_paths'
// Member 'hybrid_astar_search_results'
// Member 'optimization_results'
#include "deva_planning_msgs2/msg/detail/target_trajectory__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavOpenspaceDebugInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_s
  {
    out << "x_s: ";
    rosidl_generator_traits::value_to_yaml(msg.x_s, out);
    out << ", ";
  }

  // member: y_s
  {
    out << "y_s: ";
    rosidl_generator_traits::value_to_yaml(msg.y_s, out);
    out << ", ";
  }

  // member: theta_s
  {
    out << "theta_s: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_s, out);
    out << ", ";
  }

  // member: x_e
  {
    out << "x_e: ";
    rosidl_generator_traits::value_to_yaml(msg.x_e, out);
    out << ", ";
  }

  // member: y_e
  {
    out << "y_e: ";
    rosidl_generator_traits::value_to_yaml(msg.y_e, out);
    out << ", ";
  }

  // member: theta_e
  {
    out << "theta_e: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_e, out);
    out << ", ";
  }

  // member: xy_bounds
  {
    if (msg.xy_bounds.size() == 0) {
      out << "xy_bounds: []";
    } else {
      out << "xy_bounds: [";
      size_t pending_items = msg.xy_bounds.size();
      for (auto item : msg.xy_bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacles_info
  {
    if (msg.obstacles_info.size() == 0) {
      out << "obstacles_info: []";
    } else {
      out << "obstacles_info: [";
      size_t pending_items = msg.obstacles_info.size();
      for (auto item : msg.obstacles_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parking_slots
  {
    if (msg.parking_slots.size() == 0) {
      out << "parking_slots: []";
    } else {
      out << "parking_slots: [";
      size_t pending_items = msg.parking_slots.size();
      for (auto item : msg.parking_slots) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_gear
  {
    out << "start_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.start_gear, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: keep_start_gear_distance
  {
    out << "keep_start_gear_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_start_gear_distance, out);
    out << ", ";
  }

  // member: kappa
  {
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: ref_points
  {
    if (msg.ref_points.size() == 0) {
      out << "ref_points: []";
    } else {
      out << "ref_points: [";
      size_t pending_items = msg.ref_points.size();
      for (auto item : msg.ref_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: openspace_planning_status
  {
    out << "openspace_planning_status: ";
    rosidl_generator_traits::value_to_yaml(msg.openspace_planning_status, out);
    out << ", ";
  }

  // member: last_trajectory
  {
    out << "last_trajectory: ";
    to_flow_style_yaml(msg.last_trajectory, out);
    out << ", ";
  }

  // member: last_trajectory_timestamp
  {
    out << "last_trajectory_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_trajectory_timestamp, out);
    out << ", ";
  }

  // member: last_internal_trajectory_paths
  {
    if (msg.last_internal_trajectory_paths.size() == 0) {
      out << "last_internal_trajectory_paths: []";
    } else {
      out << "last_internal_trajectory_paths: [";
      size_t pending_items = msg.last_internal_trajectory_paths.size();
      for (auto item : msg.last_internal_trajectory_paths) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_path_index
  {
    out << "current_path_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_path_index, out);
    out << ", ";
  }

  // member: is_arrived_path_end
  {
    out << "is_arrived_path_end: ";
    rosidl_generator_traits::value_to_yaml(msg.is_arrived_path_end, out);
    out << ", ";
  }

  // member: last_ref_points
  {
    if (msg.last_ref_points.size() == 0) {
      out << "last_ref_points: []";
    } else {
      out << "last_ref_points: [";
      size_t pending_items = msg.last_ref_points.size();
      for (auto item : msg.last_ref_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hybrid_astar_search_results
  {
    if (msg.hybrid_astar_search_results.size() == 0) {
      out << "hybrid_astar_search_results: []";
    } else {
      out << "hybrid_astar_search_results: [";
      size_t pending_items = msg.hybrid_astar_search_results.size();
      for (auto item : msg.hybrid_astar_search_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: optimization_results
  {
    if (msg.optimization_results.size() == 0) {
      out << "optimization_results: []";
    } else {
      out << "optimization_results: [";
      size_t pending_items = msg.optimization_results.size();
      for (auto item : msg.optimization_results) {
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
  const NavOpenspaceDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_s: ";
    rosidl_generator_traits::value_to_yaml(msg.x_s, out);
    out << "\n";
  }

  // member: y_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_s: ";
    rosidl_generator_traits::value_to_yaml(msg.y_s, out);
    out << "\n";
  }

  // member: theta_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_s: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_s, out);
    out << "\n";
  }

  // member: x_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_e: ";
    rosidl_generator_traits::value_to_yaml(msg.x_e, out);
    out << "\n";
  }

  // member: y_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_e: ";
    rosidl_generator_traits::value_to_yaml(msg.y_e, out);
    out << "\n";
  }

  // member: theta_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_e: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_e, out);
    out << "\n";
  }

  // member: xy_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xy_bounds.size() == 0) {
      out << "xy_bounds: []\n";
    } else {
      out << "xy_bounds:\n";
      for (auto item : msg.xy_bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obstacles_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles_info.size() == 0) {
      out << "obstacles_info: []\n";
    } else {
      out << "obstacles_info:\n";
      for (auto item : msg.obstacles_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: parking_slots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parking_slots.size() == 0) {
      out << "parking_slots: []\n";
    } else {
      out << "parking_slots:\n";
      for (auto item : msg.parking_slots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: start_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.start_gear, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: keep_start_gear_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keep_start_gear_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.keep_start_gear_distance, out);
    out << "\n";
  }

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    rosidl_generator_traits::value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: ref_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_points.size() == 0) {
      out << "ref_points: []\n";
    } else {
      out << "ref_points:\n";
      for (auto item : msg.ref_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: openspace_planning_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "openspace_planning_status: ";
    rosidl_generator_traits::value_to_yaml(msg.openspace_planning_status, out);
    out << "\n";
  }

  // member: last_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_trajectory:\n";
    to_block_style_yaml(msg.last_trajectory, out, indentation + 2);
  }

  // member: last_trajectory_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_trajectory_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.last_trajectory_timestamp, out);
    out << "\n";
  }

  // member: last_internal_trajectory_paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.last_internal_trajectory_paths.size() == 0) {
      out << "last_internal_trajectory_paths: []\n";
    } else {
      out << "last_internal_trajectory_paths:\n";
      for (auto item : msg.last_internal_trajectory_paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: current_path_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_path_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_path_index, out);
    out << "\n";
  }

  // member: is_arrived_path_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_arrived_path_end: ";
    rosidl_generator_traits::value_to_yaml(msg.is_arrived_path_end, out);
    out << "\n";
  }

  // member: last_ref_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.last_ref_points.size() == 0) {
      out << "last_ref_points: []\n";
    } else {
      out << "last_ref_points:\n";
      for (auto item : msg.last_ref_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: hybrid_astar_search_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hybrid_astar_search_results.size() == 0) {
      out << "hybrid_astar_search_results: []\n";
    } else {
      out << "hybrid_astar_search_results:\n";
      for (auto item : msg.hybrid_astar_search_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: optimization_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.optimization_results.size() == 0) {
      out << "optimization_results: []\n";
    } else {
      out << "optimization_results:\n";
      for (auto item : msg.optimization_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavOpenspaceDebugInfo & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>()
{
  return "deva_planning_msgs2::msg::NavOpenspaceDebugInfo";
}

template<>
inline const char * name<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>()
{
  return "deva_planning_msgs2/msg/NavOpenspaceDebugInfo";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::NavOpenspaceDebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__TRAITS_HPP_
