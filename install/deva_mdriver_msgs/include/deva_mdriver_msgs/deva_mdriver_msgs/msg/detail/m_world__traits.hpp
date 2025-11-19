// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/m_world__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'all_obstacles'
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__traits.hpp"
// Member 'nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__traits.hpp"
// Member 'mdriver_meta_actions'
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__traits.hpp"
// Member 'refline_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MWorld & msg,
  std::ostream & out)
{
  out << "{";
  // member: world_id
  {
    out << "world_id: ";
    rosidl_generator_traits::value_to_yaml(msg.world_id, out);
    out << ", ";
  }

  // member: meta_action
  {
    out << "meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_action, out);
    out << ", ";
  }

  // member: all_obstacles
  {
    if (msg.all_obstacles.size() == 0) {
      out << "all_obstacles: []";
    } else {
      out << "all_obstacles: [";
      size_t pending_items = msg.all_obstacles.size();
      for (auto item : msg.all_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nudge_buffer
  {
    out << "nudge_buffer: ";
    to_flow_style_yaml(msg.nudge_buffer, out);
    out << ", ";
  }

  // member: ego_ref_v
  {
    if (msg.ego_ref_v.size() == 0) {
      out << "ego_ref_v: []";
    } else {
      out << "ego_ref_v: [";
      size_t pending_items = msg.ego_ref_v.size();
      for (auto item : msg.ego_ref_v) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mdriver_meta_actions
  {
    if (msg.mdriver_meta_actions.size() == 0) {
      out << "mdriver_meta_actions: []";
    } else {
      out << "mdriver_meta_actions: [";
      size_t pending_items = msg.mdriver_meta_actions.size();
      for (auto item : msg.mdriver_meta_actions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: refline_points
  {
    if (msg.refline_points.size() == 0) {
      out << "refline_points: []";
    } else {
      out << "refline_points: [";
      size_t pending_items = msg.refline_points.size();
      for (auto item : msg.refline_points) {
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
  const MWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: world_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_id: ";
    rosidl_generator_traits::value_to_yaml(msg.world_id, out);
    out << "\n";
  }

  // member: meta_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_action: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_action, out);
    out << "\n";
  }

  // member: all_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_obstacles.size() == 0) {
      out << "all_obstacles: []\n";
    } else {
      out << "all_obstacles:\n";
      for (auto item : msg.all_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nudge_buffer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nudge_buffer:\n";
    to_block_style_yaml(msg.nudge_buffer, out, indentation + 2);
  }

  // member: ego_ref_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego_ref_v.size() == 0) {
      out << "ego_ref_v: []\n";
    } else {
      out << "ego_ref_v:\n";
      for (auto item : msg.ego_ref_v) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mdriver_meta_actions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mdriver_meta_actions.size() == 0) {
      out << "mdriver_meta_actions: []\n";
    } else {
      out << "mdriver_meta_actions:\n";
      for (auto item : msg.mdriver_meta_actions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: refline_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.refline_points.size() == 0) {
      out << "refline_points: []\n";
    } else {
      out << "refline_points:\n";
      for (auto item : msg.refline_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MWorld & msg, bool use_flow_style = false)
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

}  // namespace deva_mdriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_mdriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_mdriver_msgs::msg::MWorld & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::MWorld & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::MWorld>()
{
  return "deva_mdriver_msgs::msg::MWorld";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::MWorld>()
{
  return "deva_mdriver_msgs/msg/MWorld";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::MWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::MWorld>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::MWorld>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__TRAITS_HPP_
