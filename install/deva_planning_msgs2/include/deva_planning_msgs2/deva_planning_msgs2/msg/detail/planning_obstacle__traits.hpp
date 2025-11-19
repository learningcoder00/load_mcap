// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: current_line_id
  {
    if (msg.current_line_id.size() == 0) {
      out << "current_line_id: []";
    } else {
      out << "current_line_id: [";
      size_t pending_items = msg.current_line_id.size();
      for (auto item : msg.current_line_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_line_id
  {
    if (msg.target_line_id.size() == 0) {
      out << "target_line_id: []";
    } else {
      out << "target_line_id: [";
      size_t pending_items = msg.target_line_id.size();
      for (auto item : msg.target_line_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: decision_tag
  {
    if (msg.decision_tag.size() == 0) {
      out << "decision_tag: []";
    } else {
      out << "decision_tag: [";
      size_t pending_items = msg.decision_tag.size();
      for (auto item : msg.decision_tag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scene_understanding
  {
    if (msg.scene_understanding.size() == 0) {
      out << "scene_understanding: []";
    } else {
      out << "scene_understanding: [";
      size_t pending_items = msg.scene_understanding.size();
      for (auto item : msg.scene_understanding) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cutin_time
  {
    out << "cutin_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cutin_time, out);
    out << ", ";
  }

  // member: cutout_time
  {
    out << "cutout_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cutout_time, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: ttc
  {
    out << "ttc: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
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
  const PlanningObstacle & msg,
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

  // member: current_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_line_id.size() == 0) {
      out << "current_line_id: []\n";
    } else {
      out << "current_line_id:\n";
      for (auto item : msg.current_line_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_line_id.size() == 0) {
      out << "target_line_id: []\n";
    } else {
      out << "target_line_id:\n";
      for (auto item : msg.target_line_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: decision_tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.decision_tag.size() == 0) {
      out << "decision_tag: []\n";
    } else {
      out << "decision_tag:\n";
      for (auto item : msg.decision_tag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scene_understanding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scene_understanding.size() == 0) {
      out << "scene_understanding: []\n";
    } else {
      out << "scene_understanding:\n";
      for (auto item : msg.scene_understanding) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cutin_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cutin_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cutin_time, out);
    out << "\n";
  }

  // member: cutout_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cutout_time: ";
    rosidl_generator_traits::value_to_yaml(msg.cutout_time, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: ttc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ttc: ";
    rosidl_generator_traits::value_to_yaml(msg.ttc, out);
    out << "\n";
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningObstacle & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::PlanningObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::PlanningObstacle & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::PlanningObstacle>()
{
  return "deva_planning_msgs2::msg::PlanningObstacle";
}

template<>
inline const char * name<deva_planning_msgs2::msg::PlanningObstacle>()
{
  return "deva_planning_msgs2/msg/PlanningObstacle";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::PlanningObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::PlanningObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::PlanningObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__TRAITS_HPP_
