// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/avp_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'origin_ref_line'
#include "deva_planning_msgs2/msg/detail/avp_ref_line__traits.hpp"
// Member 'smooth_line'
// Member 'used_ref_line_tree'
// Member 'driver_path'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__traits.hpp"
// Member 'now_mpc_data'
// Member 'now_path_data'
// Member 'past_path_data'
#include "deva_planning_msgs2/msg/detail/mpc_path_data__traits.hpp"
// Member 'boundary_poses'
// Member 'obstacle_poses'
#include "deva_planning_msgs2/msg/detail/path_point__traits.hpp"
// Member 'stitch_data'
#include "deva_planning_msgs2/msg/detail/stitch_data__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpDebugInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: solve_num
  {
    out << "solve_num: ";
    rosidl_generator_traits::value_to_yaml(msg.solve_num, out);
    out << ", ";
  }

  // member: acados_status
  {
    out << "acados_status: ";
    rosidl_generator_traits::value_to_yaml(msg.acados_status, out);
    out << ", ";
  }

  // member: origin_ref_line
  {
    if (msg.origin_ref_line.size() == 0) {
      out << "origin_ref_line: []";
    } else {
      out << "origin_ref_line: [";
      size_t pending_items = msg.origin_ref_line.size();
      for (auto item : msg.origin_ref_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: smooth_line
  {
    out << "smooth_line: ";
    to_flow_style_yaml(msg.smooth_line, out);
    out << ", ";
  }

  // member: used_ref_line_tree
  {
    if (msg.used_ref_line_tree.size() == 0) {
      out << "used_ref_line_tree: []";
    } else {
      out << "used_ref_line_tree: [";
      size_t pending_items = msg.used_ref_line_tree.size();
      for (auto item : msg.used_ref_line_tree) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: driver_path
  {
    if (msg.driver_path.size() == 0) {
      out << "driver_path: []";
    } else {
      out << "driver_path: [";
      size_t pending_items = msg.driver_path.size();
      for (auto item : msg.driver_path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: now_mpc_data
  {
    if (msg.now_mpc_data.size() == 0) {
      out << "now_mpc_data: []";
    } else {
      out << "now_mpc_data: [";
      size_t pending_items = msg.now_mpc_data.size();
      for (auto item : msg.now_mpc_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: now_path_data
  {
    if (msg.now_path_data.size() == 0) {
      out << "now_path_data: []";
    } else {
      out << "now_path_data: [";
      size_t pending_items = msg.now_path_data.size();
      for (auto item : msg.now_path_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: past_path_data
  {
    if (msg.past_path_data.size() == 0) {
      out << "past_path_data: []";
    } else {
      out << "past_path_data: [";
      size_t pending_items = msg.past_path_data.size();
      for (auto item : msg.past_path_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: boundary_poses
  {
    if (msg.boundary_poses.size() == 0) {
      out << "boundary_poses: []";
    } else {
      out << "boundary_poses: [";
      size_t pending_items = msg.boundary_poses.size();
      for (auto item : msg.boundary_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacle_poses
  {
    if (msg.obstacle_poses.size() == 0) {
      out << "obstacle_poses: []";
    } else {
      out << "obstacle_poses: [";
      size_t pending_items = msg.obstacle_poses.size();
      for (auto item : msg.obstacle_poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stitch_data
  {
    out << "stitch_data: ";
    to_flow_style_yaml(msg.stitch_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AvpDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: solve_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solve_num: ";
    rosidl_generator_traits::value_to_yaml(msg.solve_num, out);
    out << "\n";
  }

  // member: acados_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acados_status: ";
    rosidl_generator_traits::value_to_yaml(msg.acados_status, out);
    out << "\n";
  }

  // member: origin_ref_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.origin_ref_line.size() == 0) {
      out << "origin_ref_line: []\n";
    } else {
      out << "origin_ref_line:\n";
      for (auto item : msg.origin_ref_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: smooth_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smooth_line:\n";
    to_block_style_yaml(msg.smooth_line, out, indentation + 2);
  }

  // member: used_ref_line_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.used_ref_line_tree.size() == 0) {
      out << "used_ref_line_tree: []\n";
    } else {
      out << "used_ref_line_tree:\n";
      for (auto item : msg.used_ref_line_tree) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: driver_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.driver_path.size() == 0) {
      out << "driver_path: []\n";
    } else {
      out << "driver_path:\n";
      for (auto item : msg.driver_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: now_mpc_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.now_mpc_data.size() == 0) {
      out << "now_mpc_data: []\n";
    } else {
      out << "now_mpc_data:\n";
      for (auto item : msg.now_mpc_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: now_path_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.now_path_data.size() == 0) {
      out << "now_path_data: []\n";
    } else {
      out << "now_path_data:\n";
      for (auto item : msg.now_path_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: past_path_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.past_path_data.size() == 0) {
      out << "past_path_data: []\n";
    } else {
      out << "past_path_data:\n";
      for (auto item : msg.past_path_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: boundary_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.boundary_poses.size() == 0) {
      out << "boundary_poses: []\n";
    } else {
      out << "boundary_poses:\n";
      for (auto item : msg.boundary_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obstacle_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacle_poses.size() == 0) {
      out << "obstacle_poses: []\n";
    } else {
      out << "obstacle_poses:\n";
      for (auto item : msg.obstacle_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stitch_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stitch_data:\n";
    to_block_style_yaml(msg.stitch_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpDebugInfo & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::AvpDebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::AvpDebugInfo & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::AvpDebugInfo>()
{
  return "deva_planning_msgs2::msg::AvpDebugInfo";
}

template<>
inline const char * name<deva_planning_msgs2::msg::AvpDebugInfo>()
{
  return "deva_planning_msgs2/msg/AvpDebugInfo";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::AvpDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::AvpDebugInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::AvpDebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__TRAITS_HPP_
