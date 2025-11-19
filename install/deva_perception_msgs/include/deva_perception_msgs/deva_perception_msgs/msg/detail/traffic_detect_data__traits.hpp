// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'f120trafficobjects'
// Member 'f30trafficobjects'
#include "deva_perception_msgs/msg/detail/traffic_object__traits.hpp"
// Member 'e2eobjects'
#include "deva_perception_msgs/msg/detail/e2e_result__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficDetectData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: abs_vel_x
  {
    out << "abs_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_x, out);
    out << ", ";
  }

  // member: abs_acc_x
  {
    out << "abs_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_x, out);
    out << ", ";
  }

  // member: vel_motion
  {
    out << "vel_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_motion, out);
    out << ", ";
  }

  // member: acc_motion
  {
    out << "acc_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_motion, out);
    out << ", ";
  }

  // member: f120_object_num
  {
    out << "f120_object_num: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_object_num, out);
    out << ", ";
  }

  // member: f30_object_num
  {
    out << "f30_object_num: ";
    rosidl_generator_traits::value_to_yaml(msg.f30_object_num, out);
    out << ", ";
  }

  // member: f120trafficobjects
  {
    if (msg.f120trafficobjects.size() == 0) {
      out << "f120trafficobjects: []";
    } else {
      out << "f120trafficobjects: [";
      size_t pending_items = msg.f120trafficobjects.size();
      for (auto item : msg.f120trafficobjects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: f30trafficobjects
  {
    if (msg.f30trafficobjects.size() == 0) {
      out << "f30trafficobjects: []";
    } else {
      out << "f30trafficobjects: [";
      size_t pending_items = msg.f30trafficobjects.size();
      for (auto item : msg.f30trafficobjects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: e2eobjects
  {
    out << "e2eobjects: ";
    to_flow_style_yaml(msg.e2eobjects, out);
    out << ", ";
  }

  // member: time_of_day
  {
    out << "time_of_day: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_day, out);
    out << ", ";
  }

  // member: reserved
  {
    if (msg.reserved.size() == 0) {
      out << "reserved: []";
    } else {
      out << "reserved: [";
      size_t pending_items = msg.reserved.size();
      for (auto item : msg.reserved) {
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
  const TrafficDetectData & msg,
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

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: abs_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_vel_x, out);
    out << "\n";
  }

  // member: abs_acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_acc_x, out);
    out << "\n";
  }

  // member: vel_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_motion, out);
    out << "\n";
  }

  // member: acc_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_motion, out);
    out << "\n";
  }

  // member: f120_object_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f120_object_num: ";
    rosidl_generator_traits::value_to_yaml(msg.f120_object_num, out);
    out << "\n";
  }

  // member: f30_object_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f30_object_num: ";
    rosidl_generator_traits::value_to_yaml(msg.f30_object_num, out);
    out << "\n";
  }

  // member: f120trafficobjects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f120trafficobjects.size() == 0) {
      out << "f120trafficobjects: []\n";
    } else {
      out << "f120trafficobjects:\n";
      for (auto item : msg.f120trafficobjects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: f30trafficobjects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f30trafficobjects.size() == 0) {
      out << "f30trafficobjects: []\n";
    } else {
      out << "f30trafficobjects:\n";
      for (auto item : msg.f30trafficobjects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: e2eobjects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e2eobjects:\n";
    to_block_style_yaml(msg.e2eobjects, out, indentation + 2);
  }

  // member: time_of_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_day: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_day, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved.size() == 0) {
      out << "reserved: []\n";
    } else {
      out << "reserved:\n";
      for (auto item : msg.reserved) {
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

inline std::string to_yaml(const TrafficDetectData & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::TrafficDetectData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::TrafficDetectData & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::TrafficDetectData>()
{
  return "deva_perception_msgs::msg::TrafficDetectData";
}

template<>
inline const char * name<deva_perception_msgs::msg::TrafficDetectData>()
{
  return "deva_perception_msgs/msg/TrafficDetectData";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::TrafficDetectData>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value && has_fixed_size<deva_perception_msgs::msg::E2eResult>::value && has_fixed_size<deva_perception_msgs::msg::TrafficObject>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::TrafficDetectData>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value && has_bounded_size<deva_perception_msgs::msg::E2eResult>::value && has_bounded_size<deva_perception_msgs::msg::TrafficObject>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::TrafficDetectData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__TRAITS_HPP_
