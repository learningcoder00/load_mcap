// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ref_line'
#include "deva_map_msgs/msg/detail/path_point__traits.hpp"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AvpSubLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: ref_line
  {
    if (msg.ref_line.size() == 0) {
      out << "ref_line: []";
    } else {
      out << "ref_line: [";
      size_t pending_items = msg.ref_line.size();
      for (auto item : msg.ref_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drivable_boundary
  {
    if (msg.drivable_boundary.size() == 0) {
      out << "drivable_boundary: []";
    } else {
      out << "drivable_boundary: [";
      size_t pending_items = msg.drivable_boundary.size();
      for (auto item : msg.drivable_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: successor_lane_ids
  {
    if (msg.successor_lane_ids.size() == 0) {
      out << "successor_lane_ids: []";
    } else {
      out << "successor_lane_ids: [";
      size_t pending_items = msg.successor_lane_ids.size();
      for (auto item : msg.successor_lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_lane_ids
  {
    if (msg.left_lane_ids.size() == 0) {
      out << "left_lane_ids: []";
    } else {
      out << "left_lane_ids: [";
      size_t pending_items = msg.left_lane_ids.size();
      for (auto item : msg.left_lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_lane_ids
  {
    if (msg.right_lane_ids.size() == 0) {
      out << "right_lane_ids: []";
    } else {
      out << "right_lane_ids: [";
      size_t pending_items = msg.right_lane_ids.size();
      for (auto item : msg.right_lane_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AvpSubLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: ref_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ref_line.size() == 0) {
      out << "ref_line: []\n";
    } else {
      out << "ref_line:\n";
      for (auto item : msg.ref_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: drivable_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drivable_boundary.size() == 0) {
      out << "drivable_boundary: []\n";
    } else {
      out << "drivable_boundary:\n";
      for (auto item : msg.drivable_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: successor_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.successor_lane_ids.size() == 0) {
      out << "successor_lane_ids: []\n";
    } else {
      out << "successor_lane_ids:\n";
      for (auto item : msg.successor_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_lane_ids.size() == 0) {
      out << "left_lane_ids: []\n";
    } else {
      out << "left_lane_ids:\n";
      for (auto item : msg.left_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_lane_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_lane_ids.size() == 0) {
      out << "right_lane_ids: []\n";
    } else {
      out << "right_lane_ids:\n";
      for (auto item : msg.right_lane_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AvpSubLane & msg, bool use_flow_style = false)
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

}  // namespace deva_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_map_msgs::msg::AvpSubLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::AvpSubLane & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::AvpSubLane>()
{
  return "deva_map_msgs::msg::AvpSubLane";
}

template<>
inline const char * name<deva_map_msgs::msg::AvpSubLane>()
{
  return "deva_map_msgs/msg/AvpSubLane";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::AvpSubLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::AvpSubLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::AvpSubLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_LANE__TRAITS_HPP_
