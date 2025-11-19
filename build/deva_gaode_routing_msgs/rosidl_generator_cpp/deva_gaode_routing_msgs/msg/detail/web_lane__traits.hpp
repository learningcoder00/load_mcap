// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'callback_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: actual_turn
  {
    if (msg.actual_turn.size() == 0) {
      out << "actual_turn: []";
    } else {
      out << "actual_turn: [";
      size_t pending_items = msg.actual_turn.size();
      for (auto item : msg.actual_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_turn
  {
    if (msg.navi_turn.size() == 0) {
      out << "navi_turn: []";
    } else {
      out << "navi_turn: [";
      size_t pending_items = msg.navi_turn.size();
      for (auto item : msg.navi_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: optimal_turn
  {
    if (msg.optimal_turn.size() == 0) {
      out << "optimal_turn: []";
    } else {
      out << "optimal_turn: [";
      size_t pending_items = msg.optimal_turn.size();
      for (auto item : msg.optimal_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_exten_turn
  {
    if (msg.actual_exten_turn.size() == 0) {
      out << "actual_exten_turn: []";
    } else {
      out << "actual_exten_turn: [";
      size_t pending_items = msg.actual_exten_turn.size();
      for (auto item : msg.actual_exten_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: exten_turn
  {
    if (msg.exten_turn.size() == 0) {
      out << "exten_turn: []";
    } else {
      out << "exten_turn: [";
      size_t pending_items = msg.exten_turn.size();
      for (auto item : msg.exten_turn) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual_turn_type
  {
    if (msg.actual_turn_type.size() == 0) {
      out << "actual_turn_type: []";
    } else {
      out << "actual_turn_type: [";
      size_t pending_items = msg.actual_turn_type.size();
      for (auto item : msg.actual_turn_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: navi_turn_type
  {
    if (msg.navi_turn_type.size() == 0) {
      out << "navi_turn_type: []";
    } else {
      out << "navi_turn_type: [";
      size_t pending_items = msg.navi_turn_type.size();
      for (auto item : msg.navi_turn_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: road_idx
  {
    out << "road_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.road_idx, out);
    out << ", ";
  }

  // member: step_idx
  {
    out << "step_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.step_idx, out);
    out << ", ";
  }

  // member: md5
  {
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << ", ";
  }

  // member: callback_point
  {
    out << "callback_point: ";
    to_flow_style_yaml(msg.callback_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: actual_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_turn.size() == 0) {
      out << "actual_turn: []\n";
    } else {
      out << "actual_turn:\n";
      for (auto item : msg.actual_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navi_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.navi_turn.size() == 0) {
      out << "navi_turn: []\n";
    } else {
      out << "navi_turn:\n";
      for (auto item : msg.navi_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: optimal_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.optimal_turn.size() == 0) {
      out << "optimal_turn: []\n";
    } else {
      out << "optimal_turn:\n";
      for (auto item : msg.optimal_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_exten_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_exten_turn.size() == 0) {
      out << "actual_exten_turn: []\n";
    } else {
      out << "actual_exten_turn:\n";
      for (auto item : msg.actual_exten_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: exten_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exten_turn.size() == 0) {
      out << "exten_turn: []\n";
    } else {
      out << "exten_turn:\n";
      for (auto item : msg.exten_turn) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual_turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual_turn_type.size() == 0) {
      out << "actual_turn_type: []\n";
    } else {
      out << "actual_turn_type:\n";
      for (auto item : msg.actual_turn_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: navi_turn_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.navi_turn_type.size() == 0) {
      out << "navi_turn_type: []\n";
    } else {
      out << "navi_turn_type:\n";
      for (auto item : msg.navi_turn_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: road_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.road_idx, out);
    out << "\n";
  }

  // member: step_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.step_idx, out);
    out << "\n";
  }

  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << "\n";
  }

  // member: callback_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "callback_point:\n";
    to_block_style_yaml(msg.callback_point, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebLane & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebLane & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebLane>()
{
  return "deva_gaode_routing_msgs::msg::WebLane";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebLane>()
{
  return "deva_gaode_routing_msgs/msg/WebLane";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LANE__TRAITS_HPP_
