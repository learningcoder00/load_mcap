// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
// Member 'feature_point_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'lane_group_id_type'
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__traits.hpp"
// Member 'lane_restricts'
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LANE & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: lane_group_id_type
  {
    out << "lane_group_id_type: ";
    to_flow_style_yaml(msg.lane_group_id_type, out);
    out << ", ";
  }

  // member: feature_point_id_s
  {
    if (msg.feature_point_id_s.size() == 0) {
      out << "feature_point_id_s: []";
    } else {
      out << "feature_point_id_s: [";
      size_t pending_items = msg.feature_point_id_s.size();
      for (auto item : msg.feature_point_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: lane_type
  {
    if (msg.lane_type.size() == 0) {
      out << "lane_type: []";
    } else {
      out << "lane_type: [";
      size_t pending_items = msg.lane_type.size();
      for (auto item : msg.lane_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_border_types
  {
    if (msg.left_border_types.size() == 0) {
      out << "left_border_types: []";
    } else {
      out << "left_border_types: [";
      size_t pending_items = msg.left_border_types.size();
      for (auto item : msg.left_border_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_border_types
  {
    if (msg.right_border_types.size() == 0) {
      out << "right_border_types: []";
    } else {
      out << "right_border_types: [";
      size_t pending_items = msg.right_border_types.size();
      for (auto item : msg.right_border_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_border_colors
  {
    if (msg.left_border_colors.size() == 0) {
      out << "left_border_colors: []";
    } else {
      out << "left_border_colors: [";
      size_t pending_items = msg.left_border_colors.size();
      for (auto item : msg.left_border_colors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_border_colors
  {
    if (msg.right_border_colors.size() == 0) {
      out << "right_border_colors: []";
    } else {
      out << "right_border_colors: [";
      size_t pending_items = msg.right_border_colors.size();
      for (auto item : msg.right_border_colors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: change_type
  {
    out << "change_type: ";
    rosidl_generator_traits::value_to_yaml(msg.change_type, out);
    out << ", ";
  }

  // member: lane_width
  {
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << ", ";
  }

  // member: lane_start_width
  {
    out << "lane_start_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_start_width, out);
    out << ", ";
  }

  // member: lane_end_width
  {
    out << "lane_end_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_end_width, out);
    out << ", ";
  }

  // member: seq_num
  {
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << ", ";
  }

  // member: previous_id_s
  {
    if (msg.previous_id_s.size() == 0) {
      out << "previous_id_s: []";
    } else {
      out << "previous_id_s: [";
      size_t pending_items = msg.previous_id_s.size();
      for (auto item : msg.previous_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: next_id_s
  {
    if (msg.next_id_s.size() == 0) {
      out << "next_id_s: []";
    } else {
      out << "next_id_s: [";
      size_t pending_items = msg.next_id_s.size();
      for (auto item : msg.next_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lsl_type
  {
    out << "lsl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lsl_type, out);
    out << ", ";
  }

  // member: arrows
  {
    if (msg.arrows.size() == 0) {
      out << "arrows: []";
    } else {
      out << "arrows: [";
      size_t pending_items = msg.arrows.size();
      for (auto item : msg.arrows) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_restricts
  {
    if (msg.lane_restricts.size() == 0) {
      out << "lane_restricts: []";
    } else {
      out << "lane_restricts: [";
      size_t pending_items = msg.lane_restricts.size();
      for (auto item : msg.lane_restricts) {
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
  const LANE & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: lane_group_id_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_group_id_type:\n";
    to_block_style_yaml(msg.lane_group_id_type, out, indentation + 2);
  }

  // member: feature_point_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_point_id_s.size() == 0) {
      out << "feature_point_id_s: []\n";
    } else {
      out << "feature_point_id_s:\n";
      for (auto item : msg.feature_point_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_type.size() == 0) {
      out << "lane_type: []\n";
    } else {
      out << "lane_type:\n";
      for (auto item : msg.lane_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_border_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_border_types.size() == 0) {
      out << "left_border_types: []\n";
    } else {
      out << "left_border_types:\n";
      for (auto item : msg.left_border_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_border_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_border_types.size() == 0) {
      out << "right_border_types: []\n";
    } else {
      out << "right_border_types:\n";
      for (auto item : msg.right_border_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left_border_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_border_colors.size() == 0) {
      out << "left_border_colors: []\n";
    } else {
      out << "left_border_colors:\n";
      for (auto item : msg.left_border_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_border_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_border_colors.size() == 0) {
      out << "right_border_colors: []\n";
    } else {
      out << "right_border_colors:\n";
      for (auto item : msg.right_border_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: change_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_type: ";
    rosidl_generator_traits::value_to_yaml(msg.change_type, out);
    out << "\n";
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_width, out);
    out << "\n";
  }

  // member: lane_start_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_start_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_start_width, out);
    out << "\n";
  }

  // member: lane_end_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_end_width: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_end_width, out);
    out << "\n";
  }

  // member: seq_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_num: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_num, out);
    out << "\n";
  }

  // member: previous_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.previous_id_s.size() == 0) {
      out << "previous_id_s: []\n";
    } else {
      out << "previous_id_s:\n";
      for (auto item : msg.previous_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: next_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.next_id_s.size() == 0) {
      out << "next_id_s: []\n";
    } else {
      out << "next_id_s:\n";
      for (auto item : msg.next_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lsl_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lsl_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lsl_type, out);
    out << "\n";
  }

  // member: arrows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arrows.size() == 0) {
      out << "arrows: []\n";
    } else {
      out << "arrows:\n";
      for (auto item : msg.arrows) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lane_restricts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_restricts.size() == 0) {
      out << "lane_restricts: []\n";
    } else {
      out << "lane_restricts:\n";
      for (auto item : msg.lane_restricts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LANE & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LANE & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LANE & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LANE>()
{
  return "deva_gaode_routing_msgs::msg::LANE";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LANE>()
{
  return "deva_gaode_routing_msgs/msg/LANE";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LANE>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LANE>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LANE>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
