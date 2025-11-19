// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_id'
// Member 'left_lane_marking_ids'
// Member 'right_lane_marking_ids'
// Member 'lane_successor_lane_ids'
// Member 'lane_predecessor_lane_ids'
// Member 'lane_referenced_roadobject_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'lane_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    to_flow_style_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: lane_seq_num
  {
    out << "lane_seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_seq_num, out);
    out << ", ";
  }

  // member: lane_type
  {
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << ", ";
  }

  // member: lane_speed_limit
  {
    out << "lane_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_speed_limit, out);
    out << ", ";
  }

  // member: lane_max_width
  {
    out << "lane_max_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_max_width, out);
    out << ", ";
  }

  // member: lane_min_width
  {
    out << "lane_min_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_min_width, out);
    out << ", ";
  }

  // member: left_lane_marking_ids
  {
    if (msg.left_lane_marking_ids.size() == 0) {
      out << "left_lane_marking_ids: []";
    } else {
      out << "left_lane_marking_ids: [";
      size_t pending_items = msg.left_lane_marking_ids.size();
      for (auto item : msg.left_lane_marking_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_lane_marking_ids
  {
    if (msg.right_lane_marking_ids.size() == 0) {
      out << "right_lane_marking_ids: []";
    } else {
      out << "right_lane_marking_ids: [";
      size_t pending_items = msg.right_lane_marking_ids.size();
      for (auto item : msg.right_lane_marking_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_adas
  {
    out << "lane_adas: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_adas, out);
    out << ", ";
  }

  // member: lane_length
  {
    out << "lane_length: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_length, out);
    out << ", ";
  }

  // member: lane_turn_direction
  {
    out << "lane_turn_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_turn_direction, out);
    out << ", ";
  }

  // member: lane_confidence
  {
    out << "lane_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_confidence, out);
    out << ", ";
  }

  // member: lane_travel_direction
  {
    out << "lane_travel_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_travel_direction, out);
    out << ", ";
  }

  // member: lane_empir_speed
  {
    out << "lane_empir_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_empir_speed, out);
    out << ", ";
  }

  // member: lane_empir_traj_count
  {
    out << "lane_empir_traj_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_empir_traj_count, out);
    out << ", ";
  }

  // member: lane_host_link_id
  {
    out << "lane_host_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_host_link_id, out);
    out << ", ";
  }

  // member: lane_host_link_type
  {
    out << "lane_host_link_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_host_link_type, out);
    out << ", ";
  }

  // member: lane_successor_lane_ids
  {
    if (msg.lane_successor_lane_ids.size() == 0) {
      out << "lane_successor_lane_ids: []";
    } else {
      out << "lane_successor_lane_ids: [";
      size_t pending_items = msg.lane_successor_lane_ids.size();
      for (auto item : msg.lane_successor_lane_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_predecessor_lane_ids
  {
    if (msg.lane_predecessor_lane_ids.size() == 0) {
      out << "lane_predecessor_lane_ids: []";
    } else {
      out << "lane_predecessor_lane_ids: [";
      size_t pending_items = msg.lane_predecessor_lane_ids.size();
      for (auto item : msg.lane_predecessor_lane_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_referenced_roadobject_ids
  {
    if (msg.lane_referenced_roadobject_ids.size() == 0) {
      out << "lane_referenced_roadobject_ids: []";
    } else {
      out << "lane_referenced_roadobject_ids: [";
      size_t pending_items = msg.lane_referenced_roadobject_ids.size();
      for (auto item : msg.lane_referenced_roadobject_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_coordinates
  {
    if (msg.lane_coordinates.size() == 0) {
      out << "lane_coordinates: []";
    } else {
      out << "lane_coordinates: [";
      size_t pending_items = msg.lane_coordinates.size();
      for (auto item : msg.lane_coordinates) {
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
  const J6mLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id:\n";
    to_block_style_yaml(msg.lane_id, out, indentation + 2);
  }

  // member: lane_seq_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_seq_num, out);
    out << "\n";
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: lane_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_speed_limit, out);
    out << "\n";
  }

  // member: lane_max_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_max_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_max_width, out);
    out << "\n";
  }

  // member: lane_min_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_min_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_min_width, out);
    out << "\n";
  }

  // member: left_lane_marking_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_lane_marking_ids.size() == 0) {
      out << "left_lane_marking_ids: []\n";
    } else {
      out << "left_lane_marking_ids:\n";
      for (auto item : msg.left_lane_marking_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_lane_marking_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_lane_marking_ids.size() == 0) {
      out << "right_lane_marking_ids: []\n";
    } else {
      out << "right_lane_marking_ids:\n";
      for (auto item : msg.right_lane_marking_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_adas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_adas: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_adas, out);
    out << "\n";
  }

  // member: lane_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_length: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_length, out);
    out << "\n";
  }

  // member: lane_turn_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_turn_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_turn_direction, out);
    out << "\n";
  }

  // member: lane_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_confidence, out);
    out << "\n";
  }

  // member: lane_travel_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_travel_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_travel_direction, out);
    out << "\n";
  }

  // member: lane_empir_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_empir_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_empir_speed, out);
    out << "\n";
  }

  // member: lane_empir_traj_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_empir_traj_count: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_empir_traj_count, out);
    out << "\n";
  }

  // member: lane_host_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_host_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_host_link_id, out);
    out << "\n";
  }

  // member: lane_host_link_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_host_link_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_host_link_type, out);
    out << "\n";
  }

  // member: lane_successor_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_successor_lane_ids.size() == 0) {
      out << "lane_successor_lane_ids: []\n";
    } else {
      out << "lane_successor_lane_ids:\n";
      for (auto item : msg.lane_successor_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_predecessor_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_predecessor_lane_ids.size() == 0) {
      out << "lane_predecessor_lane_ids: []\n";
    } else {
      out << "lane_predecessor_lane_ids:\n";
      for (auto item : msg.lane_predecessor_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_referenced_roadobject_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_referenced_roadobject_ids.size() == 0) {
      out << "lane_referenced_roadobject_ids: []\n";
    } else {
      out << "lane_referenced_roadobject_ids:\n";
      for (auto item : msg.lane_referenced_roadobject_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_coordinates.size() == 0) {
      out << "lane_coordinates: []\n";
    } else {
      out << "lane_coordinates:\n";
      for (auto item : msg.lane_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mLane & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::J6mLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mLane & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mLane>()
{
  return "deva_gaode_routing_msgs::msg::J6mLane";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mLane>()
{
  return "deva_gaode_routing_msgs/msg/J6mLane";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__TRAITS_HPP_
