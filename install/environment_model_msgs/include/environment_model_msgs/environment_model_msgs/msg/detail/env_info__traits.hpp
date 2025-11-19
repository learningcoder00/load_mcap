// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
// Member 'env_start_header'
// Member 'map_header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'env_lines'
#include "environment_model_msgs/msg/detail/env_line__traits.hpp"
// Member 'env_objects'
#include "environment_model_msgs/msg/detail/env_object__traits.hpp"
// Member 'env_signals'
#include "environment_model_msgs/msg/detail/env_signal__traits.hpp"
// Member 'junction_box'
// Member 'roadline_final'
// Member 'roadline'
#include "environment_model_msgs/msg/detail/vec2d__traits.hpp"
// Member 'passable_space'
// Member 'law_space'
// Member 'law_space_merged'
// Member 'hdair_driveline'
#include "environment_model_msgs/msg/detail/vec2d_array__traits.hpp"
// Member 'links'
#include "environment_model_msgs/msg/detail/env_link__traits.hpp"
// Member 'road_boundaries'
#include "environment_model_msgs/msg/detail/road_boundary__traits.hpp"
// Member 'scenario_info'
#include "environment_model_msgs/msg/detail/scenario_info__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: env_lines
  {
    if (msg.env_lines.size() == 0) {
      out << "env_lines: []";
    } else {
      out << "env_lines: [";
      size_t pending_items = msg.env_lines.size();
      for (auto item : msg.env_lines) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: env_objects
  {
    if (msg.env_objects.size() == 0) {
      out << "env_objects: []";
    } else {
      out << "env_objects: [";
      size_t pending_items = msg.env_objects.size();
      for (auto item : msg.env_objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: env_signals
  {
    if (msg.env_signals.size() == 0) {
      out << "env_signals: []";
    } else {
      out << "env_signals: [";
      size_t pending_items = msg.env_signals.size();
      for (auto item : msg.env_signals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: junction_box
  {
    if (msg.junction_box.size() == 0) {
      out << "junction_box: []";
    } else {
      out << "junction_box: [";
      size_t pending_items = msg.junction_box.size();
      for (auto item : msg.junction_box) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: env_start_header
  {
    out << "env_start_header: ";
    to_flow_style_yaml(msg.env_start_header, out);
    out << ", ";
  }

  // member: map_header
  {
    out << "map_header: ";
    to_flow_style_yaml(msg.map_header, out);
    out << ", ";
  }

  // member: map_mode
  {
    out << "map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.map_mode, out);
    out << ", ";
  }

  // member: routing_mode
  {
    out << "routing_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_mode, out);
    out << ", ";
  }

  // member: navi_index
  {
    out << "navi_index: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_index, out);
    out << ", ";
  }

  // member: has_map
  {
    out << "has_map: ";
    rosidl_generator_traits::value_to_yaml(msg.has_map, out);
    out << ", ";
  }

  // member: passable_space
  {
    if (msg.passable_space.size() == 0) {
      out << "passable_space: []";
    } else {
      out << "passable_space: [";
      size_t pending_items = msg.passable_space.size();
      for (auto item : msg.passable_space) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: law_space
  {
    if (msg.law_space.size() == 0) {
      out << "law_space: []";
    } else {
      out << "law_space: [";
      size_t pending_items = msg.law_space.size();
      for (auto item : msg.law_space) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roadline_final
  {
    if (msg.roadline_final.size() == 0) {
      out << "roadline_final: []";
    } else {
      out << "roadline_final: [";
      size_t pending_items = msg.roadline_final.size();
      for (auto item : msg.roadline_final) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: roadline
  {
    if (msg.roadline.size() == 0) {
      out << "roadline: []";
    } else {
      out << "roadline: [";
      size_t pending_items = msg.roadline.size();
      for (auto item : msg.roadline) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: law_space_merged
  {
    if (msg.law_space_merged.size() == 0) {
      out << "law_space_merged: []";
    } else {
      out << "law_space_merged: [";
      size_t pending_items = msg.law_space_merged.size();
      for (auto item : msg.law_space_merged) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: meg_map_mode
  {
    out << "meg_map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.meg_map_mode, out);
    out << ", ";
  }

  // member: channel_valid
  {
    out << "channel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_valid, out);
    out << ", ";
  }

  // member: dist_sd_junction
  {
    out << "dist_sd_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_sd_junction, out);
    out << ", ";
  }

  // member: hdair_driveline
  {
    if (msg.hdair_driveline.size() == 0) {
      out << "hdair_driveline: []";
    } else {
      out << "hdair_driveline: [";
      size_t pending_items = msg.hdair_driveline.size();
      for (auto item : msg.hdair_driveline) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ownership
  {
    out << "ownership: ";
    rosidl_generator_traits::value_to_yaml(msg.ownership, out);
    out << ", ";
  }

  // member: road_boundaries
  {
    if (msg.road_boundaries.size() == 0) {
      out << "road_boundaries: []";
    } else {
      out << "road_boundaries: [";
      size_t pending_items = msg.road_boundaries.size();
      for (auto item : msg.road_boundaries) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scenario_info
  {
    if (msg.scenario_info.size() == 0) {
      out << "scenario_info: []";
    } else {
      out << "scenario_info: [";
      size_t pending_items = msg.scenario_info.size();
      for (auto item : msg.scenario_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: highway_scene
  {
    out << "highway_scene: ";
    rosidl_generator_traits::value_to_yaml(msg.highway_scene, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvInfo & msg,
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

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }

  // member: env_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_lines.size() == 0) {
      out << "env_lines: []\n";
    } else {
      out << "env_lines:\n";
      for (auto item : msg.env_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: env_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_objects.size() == 0) {
      out << "env_objects: []\n";
    } else {
      out << "env_objects:\n";
      for (auto item : msg.env_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: env_signals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_signals.size() == 0) {
      out << "env_signals: []\n";
    } else {
      out << "env_signals:\n";
      for (auto item : msg.env_signals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: junction_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.junction_box.size() == 0) {
      out << "junction_box: []\n";
    } else {
      out << "junction_box:\n";
      for (auto item : msg.junction_box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: env_start_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "env_start_header:\n";
    to_block_style_yaml(msg.env_start_header, out, indentation + 2);
  }

  // member: map_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_header:\n";
    to_block_style_yaml(msg.map_header, out, indentation + 2);
  }

  // member: map_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.map_mode, out);
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

  // member: navi_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_index: ";
    rosidl_generator_traits::value_to_yaml(msg.navi_index, out);
    out << "\n";
  }

  // member: has_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_map: ";
    rosidl_generator_traits::value_to_yaml(msg.has_map, out);
    out << "\n";
  }

  // member: passable_space
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.passable_space.size() == 0) {
      out << "passable_space: []\n";
    } else {
      out << "passable_space:\n";
      for (auto item : msg.passable_space) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: law_space
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.law_space.size() == 0) {
      out << "law_space: []\n";
    } else {
      out << "law_space:\n";
      for (auto item : msg.law_space) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: roadline_final
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roadline_final.size() == 0) {
      out << "roadline_final: []\n";
    } else {
      out << "roadline_final:\n";
      for (auto item : msg.roadline_final) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: roadline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roadline.size() == 0) {
      out << "roadline: []\n";
    } else {
      out << "roadline:\n";
      for (auto item : msg.roadline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: law_space_merged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.law_space_merged.size() == 0) {
      out << "law_space_merged: []\n";
    } else {
      out << "law_space_merged:\n";
      for (auto item : msg.law_space_merged) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: meg_map_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meg_map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.meg_map_mode, out);
    out << "\n";
  }

  // member: channel_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_valid, out);
    out << "\n";
  }

  // member: dist_sd_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_sd_junction: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_sd_junction, out);
    out << "\n";
  }

  // member: hdair_driveline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hdair_driveline.size() == 0) {
      out << "hdair_driveline: []\n";
    } else {
      out << "hdair_driveline:\n";
      for (auto item : msg.hdair_driveline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ownership
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ownership: ";
    rosidl_generator_traits::value_to_yaml(msg.ownership, out);
    out << "\n";
  }

  // member: road_boundaries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.road_boundaries.size() == 0) {
      out << "road_boundaries: []\n";
    } else {
      out << "road_boundaries:\n";
      for (auto item : msg.road_boundaries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: scenario_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scenario_info.size() == 0) {
      out << "scenario_info: []\n";
    } else {
      out << "scenario_info:\n";
      for (auto item : msg.scenario_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: highway_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "highway_scene: ";
    rosidl_generator_traits::value_to_yaml(msg.highway_scene, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvInfo & msg, bool use_flow_style = false)
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

}  // namespace environment_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use environment_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_model_msgs::msg::EnvInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvInfo & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvInfo>()
{
  return "environment_model_msgs::msg::EnvInfo";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvInfo>()
{
  return "environment_model_msgs/msg/EnvInfo";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::EnvInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__TRAITS_HPP_
