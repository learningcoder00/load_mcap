// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane_arrayv2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lane_array'
#include "deva_perception_msgs/msg/detail/lanev2__traits.hpp"
// Member 'crosswalk_array'
#include "deva_perception_msgs/msg/detail/crosswalk__traits.hpp"
// Member 'steering_arrow_array'
#include "deva_perception_msgs/msg/detail/steering_arrow__traits.hpp"
// Member 'noparking_zone_array'
#include "deva_perception_msgs/msg/detail/noparking_zone__traits.hpp"
// Member 'partition_zone_array'
#include "deva_perception_msgs/msg/detail/partition_zone__traits.hpp"
// Member 'center_line_array'
#include "deva_perception_msgs/msg/detail/percept_center_line__traits.hpp"
// Member 'entrance_array'
#include "deva_perception_msgs/msg/detail/entrance__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneArrayv2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vehicle_left_lane_id
  {
    out << "vehicle_left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_left_lane_id, out);
    out << ", ";
  }

  // member: vehicle_right_lane_id
  {
    out << "vehicle_right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_right_lane_id, out);
    out << ", ";
  }

  // member: lane_array
  {
    if (msg.lane_array.size() == 0) {
      out << "lane_array: []";
    } else {
      out << "lane_array: [";
      size_t pending_items = msg.lane_array.size();
      for (auto item : msg.lane_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: crosswalk_array
  {
    if (msg.crosswalk_array.size() == 0) {
      out << "crosswalk_array: []";
    } else {
      out << "crosswalk_array: [";
      size_t pending_items = msg.crosswalk_array.size();
      for (auto item : msg.crosswalk_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: steering_arrow_array
  {
    if (msg.steering_arrow_array.size() == 0) {
      out << "steering_arrow_array: []";
    } else {
      out << "steering_arrow_array: [";
      size_t pending_items = msg.steering_arrow_array.size();
      for (auto item : msg.steering_arrow_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: noparking_zone_array
  {
    if (msg.noparking_zone_array.size() == 0) {
      out << "noparking_zone_array: []";
    } else {
      out << "noparking_zone_array: [";
      size_t pending_items = msg.noparking_zone_array.size();
      for (auto item : msg.noparking_zone_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: partition_zone_array
  {
    if (msg.partition_zone_array.size() == 0) {
      out << "partition_zone_array: []";
    } else {
      out << "partition_zone_array: [";
      size_t pending_items = msg.partition_zone_array.size();
      for (auto item : msg.partition_zone_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: center_line_array
  {
    if (msg.center_line_array.size() == 0) {
      out << "center_line_array: []";
    } else {
      out << "center_line_array: [";
      size_t pending_items = msg.center_line_array.size();
      for (auto item : msg.center_line_array) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: entrance_array
  {
    if (msg.entrance_array.size() == 0) {
      out << "entrance_array: []";
    } else {
      out << "entrance_array: [";
      size_t pending_items = msg.entrance_array.size();
      for (auto item : msg.entrance_array) {
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
  const LaneArrayv2 & msg,
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

  // member: vehicle_left_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_left_lane_id, out);
    out << "\n";
  }

  // member: vehicle_right_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_right_lane_id, out);
    out << "\n";
  }

  // member: lane_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_array.size() == 0) {
      out << "lane_array: []\n";
    } else {
      out << "lane_array:\n";
      for (auto item : msg.lane_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: crosswalk_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crosswalk_array.size() == 0) {
      out << "crosswalk_array: []\n";
    } else {
      out << "crosswalk_array:\n";
      for (auto item : msg.crosswalk_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: steering_arrow_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steering_arrow_array.size() == 0) {
      out << "steering_arrow_array: []\n";
    } else {
      out << "steering_arrow_array:\n";
      for (auto item : msg.steering_arrow_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: noparking_zone_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.noparking_zone_array.size() == 0) {
      out << "noparking_zone_array: []\n";
    } else {
      out << "noparking_zone_array:\n";
      for (auto item : msg.noparking_zone_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: partition_zone_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.partition_zone_array.size() == 0) {
      out << "partition_zone_array: []\n";
    } else {
      out << "partition_zone_array:\n";
      for (auto item : msg.partition_zone_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: center_line_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.center_line_array.size() == 0) {
      out << "center_line_array: []\n";
    } else {
      out << "center_line_array:\n";
      for (auto item : msg.center_line_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: entrance_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entrance_array.size() == 0) {
      out << "entrance_array: []\n";
    } else {
      out << "entrance_array:\n";
      for (auto item : msg.entrance_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneArrayv2 & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::LaneArrayv2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::LaneArrayv2 & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::LaneArrayv2>()
{
  return "deva_perception_msgs::msg::LaneArrayv2";
}

template<>
inline const char * name<deva_perception_msgs::msg::LaneArrayv2>()
{
  return "deva_perception_msgs/msg/LaneArrayv2";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::LaneArrayv2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::LaneArrayv2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::LaneArrayv2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__TRAITS_HPP_
