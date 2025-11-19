// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/env_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'env_points'
#include "environment_model_msgs/msg/detail/env_point__traits.hpp"
// Member 'last_ids'
// Member 'perception_ids'
// Member 'channel_id'
#include "environment_model_msgs/msg/detail/pair_int__traits.hpp"
// Member 'merge_pos'
#include "environment_model_msgs/msg/detail/pair_double_int__traits.hpp"
// Member 'left_ids_map'
// Member 'right_ids_map'
// Member 'overwide_pairs'
#include "environment_model_msgs/msg/detail/map_ids__traits.hpp"
// Member 'road_struct_type'
#include "environment_model_msgs/msg/detail/road_struct_type__traits.hpp"
// Member 'signal_infos'
#include "environment_model_msgs/msg/detail/pair_string__traits.hpp"
// Member 'object_infos'
#include "environment_model_msgs/msg/detail/pair_string_double__traits.hpp"
// Member 'navi_score'
#include "environment_model_msgs/msg/detail/navi_score__traits.hpp"
// Member 'virtual_line_infos'
#include "environment_model_msgs/msg/detail/virtual_line_info__traits.hpp"
// Member 'left_road_bound_line'
// Member 'right_road_bound_line'
#include "environment_model_msgs/msg/detail/vec2d__traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnvLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: env_points
  {
    if (msg.env_points.size() == 0) {
      out << "env_points: []";
    } else {
      out << "env_points: [";
      size_t pending_items = msg.env_points.size();
      for (auto item : msg.env_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: last_ids
  {
    if (msg.last_ids.size() == 0) {
      out << "last_ids: []";
    } else {
      out << "last_ids: [";
      size_t pending_items = msg.last_ids.size();
      for (auto item : msg.last_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: perception_ids
  {
    out << "perception_ids: ";
    to_flow_style_yaml(msg.perception_ids, out);
    out << ", ";
  }

  // member: ego_s
  {
    out << "ego_s: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_s, out);
    out << ", ";
  }

  // member: ego_l
  {
    out << "ego_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_l, out);
    out << ", ";
  }

  // member: is_on_road
  {
    out << "is_on_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_road, out);
    out << ", ";
  }

  // member: routing_status
  {
    out << "routing_status: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_status, out);
    out << ", ";
  }

  // member: is_reverse
  {
    out << "is_reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse, out);
    out << ", ";
  }

  // member: enum_turn_scenario
  {
    out << "enum_turn_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_turn_scenario, out);
    out << ", ";
  }

  // member: merge_lines
  {
    if (msg.merge_lines.size() == 0) {
      out << "merge_lines: []";
    } else {
      out << "merge_lines: [";
      size_t pending_items = msg.merge_lines.size();
      for (auto item : msg.merge_lines) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: split_lines
  {
    if (msg.split_lines.size() == 0) {
      out << "split_lines: []";
    } else {
      out << "split_lines: [";
      size_t pending_items = msg.split_lines.size();
      for (auto item : msg.split_lines) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: merge_pos
  {
    if (msg.merge_pos.size() == 0) {
      out << "merge_pos: []";
    } else {
      out << "merge_pos: [";
      size_t pending_items = msg.merge_pos.size();
      for (auto item : msg.merge_pos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lk_lines
  {
    if (msg.lk_lines.size() == 0) {
      out << "lk_lines: []";
    } else {
      out << "lk_lines: [";
      size_t pending_items = msg.lk_lines.size();
      for (auto item : msg.lk_lines) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_ids_map
  {
    if (msg.left_ids_map.size() == 0) {
      out << "left_ids_map: []";
    } else {
      out << "left_ids_map: [";
      size_t pending_items = msg.left_ids_map.size();
      for (auto item : msg.left_ids_map) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_ids_map
  {
    if (msg.right_ids_map.size() == 0) {
      out << "right_ids_map: []";
    } else {
      out << "right_ids_map: [";
      size_t pending_items = msg.right_ids_map.size();
      for (auto item : msg.right_ids_map) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enum_road_struct_type
  {
    out << "enum_road_struct_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_road_struct_type, out);
    out << ", ";
  }

  // member: road_struct_type
  {
    out << "road_struct_type: ";
    to_flow_style_yaml(msg.road_struct_type, out);
    out << ", ";
  }

  // member: signal_infos
  {
    if (msg.signal_infos.size() == 0) {
      out << "signal_infos: []";
    } else {
      out << "signal_infos: [";
      size_t pending_items = msg.signal_infos.size();
      for (auto item : msg.signal_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_infos
  {
    if (msg.object_infos.size() == 0) {
      out << "object_infos: []";
    } else {
      out << "object_infos: [";
      size_t pending_items = msg.object_infos.size();
      for (auto item : msg.object_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_score
  {
    out << "navi_score: ";
    to_flow_style_yaml(msg.navi_score, out);
    out << ", ";
  }

  // member: virtual_line_infos
  {
    if (msg.virtual_line_infos.size() == 0) {
      out << "virtual_line_infos: []";
    } else {
      out << "virtual_line_infos: [";
      size_t pending_items = msg.virtual_line_infos.size();
      for (auto item : msg.virtual_line_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_road_bound_line
  {
    if (msg.left_road_bound_line.size() == 0) {
      out << "left_road_bound_line: []";
    } else {
      out << "left_road_bound_line: [";
      size_t pending_items = msg.left_road_bound_line.size();
      for (auto item : msg.left_road_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_road_bound_line
  {
    if (msg.right_road_bound_line.size() == 0) {
      out << "right_road_bound_line: []";
    } else {
      out << "right_road_bound_line: [";
      size_t pending_items = msg.right_road_bound_line.size();
      for (auto item : msg.right_road_bound_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_offset
  {
    out << "lane_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_offset, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: lane_sequence
  {
    if (msg.lane_sequence.size() == 0) {
      out << "lane_sequence: []";
    } else {
      out << "lane_sequence: [";
      size_t pending_items = msg.lane_sequence.size();
      for (auto item : msg.lane_sequence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_seq_id
  {
    out << "lane_seq_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_seq_id, out);
    out << ", ";
  }

  // member: channel_id
  {
    out << "channel_id: ";
    to_flow_style_yaml(msg.channel_id, out);
    out << ", ";
  }

  // member: virtual_line_to
  {
    out << "virtual_line_to: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_line_to, out);
    out << ", ";
  }

  // member: midd_line_id
  {
    out << "midd_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.midd_line_id, out);
    out << ", ";
  }

  // member: overwide_pairs
  {
    if (msg.overwide_pairs.size() == 0) {
      out << "overwide_pairs: []";
    } else {
      out << "overwide_pairs: [";
      size_t pending_items = msg.overwide_pairs.size();
      for (auto item : msg.overwide_pairs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: usemdriver
  {
    out << "usemdriver: ";
    rosidl_generator_traits::value_to_yaml(msg.usemdriver, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnvLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: env_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.env_points.size() == 0) {
      out << "env_points: []\n";
    } else {
      out << "env_points:\n";
      for (auto item : msg.env_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: last_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.last_ids.size() == 0) {
      out << "last_ids: []\n";
    } else {
      out << "last_ids:\n";
      for (auto item : msg.last_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: perception_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_ids:\n";
    to_block_style_yaml(msg.perception_ids, out, indentation + 2);
  }

  // member: ego_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_s: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_s, out);
    out << "\n";
  }

  // member: ego_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ego_l: ";
    rosidl_generator_traits::value_to_yaml(msg.ego_l, out);
    out << "\n";
  }

  // member: is_on_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_on_road: ";
    rosidl_generator_traits::value_to_yaml(msg.is_on_road, out);
    out << "\n";
  }

  // member: routing_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routing_status: ";
    rosidl_generator_traits::value_to_yaml(msg.routing_status, out);
    out << "\n";
  }

  // member: is_reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.is_reverse, out);
    out << "\n";
  }

  // member: enum_turn_scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_turn_scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_turn_scenario, out);
    out << "\n";
  }

  // member: merge_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.merge_lines.size() == 0) {
      out << "merge_lines: []\n";
    } else {
      out << "merge_lines:\n";
      for (auto item : msg.merge_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: split_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.split_lines.size() == 0) {
      out << "split_lines: []\n";
    } else {
      out << "split_lines:\n";
      for (auto item : msg.split_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: merge_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.merge_pos.size() == 0) {
      out << "merge_pos: []\n";
    } else {
      out << "merge_pos:\n";
      for (auto item : msg.merge_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lk_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lk_lines.size() == 0) {
      out << "lk_lines: []\n";
    } else {
      out << "lk_lines:\n";
      for (auto item : msg.lk_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_ids_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_ids_map.size() == 0) {
      out << "left_ids_map: []\n";
    } else {
      out << "left_ids_map:\n";
      for (auto item : msg.left_ids_map) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_ids_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_ids_map.size() == 0) {
      out << "right_ids_map: []\n";
    } else {
      out << "right_ids_map:\n";
      for (auto item : msg.right_ids_map) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: enum_road_struct_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enum_road_struct_type: ";
    rosidl_generator_traits::value_to_yaml(msg.enum_road_struct_type, out);
    out << "\n";
  }

  // member: road_struct_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_struct_type:\n";
    to_block_style_yaml(msg.road_struct_type, out, indentation + 2);
  }

  // member: signal_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signal_infos.size() == 0) {
      out << "signal_infos: []\n";
    } else {
      out << "signal_infos:\n";
      for (auto item : msg.signal_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: object_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_infos.size() == 0) {
      out << "object_infos: []\n";
    } else {
      out << "object_infos:\n";
      for (auto item : msg.object_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: navi_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_score:\n";
    to_block_style_yaml(msg.navi_score, out, indentation + 2);
  }

  // member: virtual_line_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.virtual_line_infos.size() == 0) {
      out << "virtual_line_infos: []\n";
    } else {
      out << "virtual_line_infos:\n";
      for (auto item : msg.virtual_line_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_road_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_road_bound_line.size() == 0) {
      out << "left_road_bound_line: []\n";
    } else {
      out << "left_road_bound_line:\n";
      for (auto item : msg.left_road_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_road_bound_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_road_bound_line.size() == 0) {
      out << "right_road_bound_line: []\n";
    } else {
      out << "right_road_bound_line:\n";
      for (auto item : msg.right_road_bound_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_offset, out);
    out << "\n";
  }

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: lane_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_sequence.size() == 0) {
      out << "lane_sequence: []\n";
    } else {
      out << "lane_sequence:\n";
      for (auto item : msg.lane_sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_seq_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_seq_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_seq_id, out);
    out << "\n";
  }

  // member: channel_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_id:\n";
    to_block_style_yaml(msg.channel_id, out, indentation + 2);
  }

  // member: virtual_line_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "virtual_line_to: ";
    rosidl_generator_traits::value_to_yaml(msg.virtual_line_to, out);
    out << "\n";
  }

  // member: midd_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "midd_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.midd_line_id, out);
    out << "\n";
  }

  // member: overwide_pairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.overwide_pairs.size() == 0) {
      out << "overwide_pairs: []\n";
    } else {
      out << "overwide_pairs:\n";
      for (auto item : msg.overwide_pairs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: usemdriver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usemdriver: ";
    rosidl_generator_traits::value_to_yaml(msg.usemdriver, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnvLine & msg, bool use_flow_style = false)
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
  const environment_model_msgs::msg::EnvLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::EnvLine & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::EnvLine>()
{
  return "environment_model_msgs::msg::EnvLine";
}

template<>
inline const char * name<environment_model_msgs::msg::EnvLine>()
{
  return "environment_model_msgs/msg/EnvLine";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::EnvLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::EnvLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<environment_model_msgs::msg::EnvLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__TRAITS_HPP_
