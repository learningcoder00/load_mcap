// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/perception_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'st_boundaries'
#include "deva_perception_msgs/msg/detail/st_boundary__traits.hpp"
// Member 'ust_boundaries'
#include "deva_perception_msgs/msg/detail/ust_boundary__traits.hpp"
// Member 'crosswalks'
#include "deva_perception_msgs/msg/detail/crosswalk__traits.hpp"
// Member 'steering_arrows'
#include "deva_perception_msgs/msg/detail/steering_arrow__traits.hpp"
// Member 'noparking_zones'
#include "deva_perception_msgs/msg/detail/noparking_zone__traits.hpp"
// Member 'areas'
#include "deva_perception_msgs/msg/detail/area__traits.hpp"
// Member 'moving_obstacles'
#include "deva_perception_msgs/msg/detail/moving_obstacle__traits.hpp"
// Member 'general_static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__traits.hpp"
// Member 'traffic_light_obstacles'
#include "deva_perception_msgs/msg/detail/traffic_light__traits.hpp"
// Member 'mutable_obstacles'
#include "deva_perception_msgs/msg/detail/mutable_obstacle__traits.hpp"
// Member 'center_lines'
#include "deva_perception_msgs/msg/detail/center_line__traits.hpp"
// Member 'fork_points'
#include "deva_perception_msgs/msg/detail/fork_point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PerceptionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: translation
  {
    out << "translation: ";
    to_flow_style_yaml(msg.translation, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: st_boundaries
  {
    if (msg.st_boundaries.size() == 0) {
      out << "st_boundaries: []";
    } else {
      out << "st_boundaries: [";
      size_t pending_items = msg.st_boundaries.size();
      for (auto item : msg.st_boundaries) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ust_boundaries
  {
    if (msg.ust_boundaries.size() == 0) {
      out << "ust_boundaries: []";
    } else {
      out << "ust_boundaries: [";
      size_t pending_items = msg.ust_boundaries.size();
      for (auto item : msg.ust_boundaries) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: crosswalks
  {
    if (msg.crosswalks.size() == 0) {
      out << "crosswalks: []";
    } else {
      out << "crosswalks: [";
      size_t pending_items = msg.crosswalks.size();
      for (auto item : msg.crosswalks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steering_arrows
  {
    if (msg.steering_arrows.size() == 0) {
      out << "steering_arrows: []";
    } else {
      out << "steering_arrows: [";
      size_t pending_items = msg.steering_arrows.size();
      for (auto item : msg.steering_arrows) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: noparking_zones
  {
    if (msg.noparking_zones.size() == 0) {
      out << "noparking_zones: []";
    } else {
      out << "noparking_zones: [";
      size_t pending_items = msg.noparking_zones.size();
      for (auto item : msg.noparking_zones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: areas
  {
    if (msg.areas.size() == 0) {
      out << "areas: []";
    } else {
      out << "areas: [";
      size_t pending_items = msg.areas.size();
      for (auto item : msg.areas) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: moving_obstacles
  {
    if (msg.moving_obstacles.size() == 0) {
      out << "moving_obstacles: []";
    } else {
      out << "moving_obstacles: [";
      size_t pending_items = msg.moving_obstacles.size();
      for (auto item : msg.moving_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: general_static_obstacles
  {
    if (msg.general_static_obstacles.size() == 0) {
      out << "general_static_obstacles: []";
    } else {
      out << "general_static_obstacles: [";
      size_t pending_items = msg.general_static_obstacles.size();
      for (auto item : msg.general_static_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_light_obstacles
  {
    if (msg.traffic_light_obstacles.size() == 0) {
      out << "traffic_light_obstacles: []";
    } else {
      out << "traffic_light_obstacles: [";
      size_t pending_items = msg.traffic_light_obstacles.size();
      for (auto item : msg.traffic_light_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mutable_obstacles
  {
    if (msg.mutable_obstacles.size() == 0) {
      out << "mutable_obstacles: []";
    } else {
      out << "mutable_obstacles: [";
      size_t pending_items = msg.mutable_obstacles.size();
      for (auto item : msg.mutable_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: center_lines
  {
    if (msg.center_lines.size() == 0) {
      out << "center_lines: []";
    } else {
      out << "center_lines: [";
      size_t pending_items = msg.center_lines.size();
      for (auto item : msg.center_lines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fork_points
  {
    if (msg.fork_points.size() == 0) {
      out << "fork_points: []";
    } else {
      out << "fork_points: [";
      size_t pending_items = msg.fork_points.size();
      for (auto item : msg.fork_points) {
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
  const PerceptionResult & msg,
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

  // member: translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation:\n";
    to_block_style_yaml(msg.translation, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: st_boundaries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.st_boundaries.size() == 0) {
      out << "st_boundaries: []\n";
    } else {
      out << "st_boundaries:\n";
      for (auto item : msg.st_boundaries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ust_boundaries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ust_boundaries.size() == 0) {
      out << "ust_boundaries: []\n";
    } else {
      out << "ust_boundaries:\n";
      for (auto item : msg.ust_boundaries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: crosswalks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crosswalks.size() == 0) {
      out << "crosswalks: []\n";
    } else {
      out << "crosswalks:\n";
      for (auto item : msg.crosswalks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: steering_arrows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steering_arrows.size() == 0) {
      out << "steering_arrows: []\n";
    } else {
      out << "steering_arrows:\n";
      for (auto item : msg.steering_arrows) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: noparking_zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.noparking_zones.size() == 0) {
      out << "noparking_zones: []\n";
    } else {
      out << "noparking_zones:\n";
      for (auto item : msg.noparking_zones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: areas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.areas.size() == 0) {
      out << "areas: []\n";
    } else {
      out << "areas:\n";
      for (auto item : msg.areas) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: moving_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.moving_obstacles.size() == 0) {
      out << "moving_obstacles: []\n";
    } else {
      out << "moving_obstacles:\n";
      for (auto item : msg.moving_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: general_static_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.general_static_obstacles.size() == 0) {
      out << "general_static_obstacles: []\n";
    } else {
      out << "general_static_obstacles:\n";
      for (auto item : msg.general_static_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traffic_light_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_light_obstacles.size() == 0) {
      out << "traffic_light_obstacles: []\n";
    } else {
      out << "traffic_light_obstacles:\n";
      for (auto item : msg.traffic_light_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mutable_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mutable_obstacles.size() == 0) {
      out << "mutable_obstacles: []\n";
    } else {
      out << "mutable_obstacles:\n";
      for (auto item : msg.mutable_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: center_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.center_lines.size() == 0) {
      out << "center_lines: []\n";
    } else {
      out << "center_lines:\n";
      for (auto item : msg.center_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: fork_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fork_points.size() == 0) {
      out << "fork_points: []\n";
    } else {
      out << "fork_points:\n";
      for (auto item : msg.fork_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerceptionResult & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::PerceptionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::PerceptionResult & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::PerceptionResult>()
{
  return "deva_perception_msgs::msg::PerceptionResult";
}

template<>
inline const char * name<deva_perception_msgs::msg::PerceptionResult>()
{
  return "deva_perception_msgs/msg/PerceptionResult";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::PerceptionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::PerceptionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::PerceptionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__TRAITS_HPP_
