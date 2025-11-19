// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/adb_traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdbTrafficSign & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: conf
  {
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << ", ";
  }

  // member: parsing_conf
  {
    out << "parsing_conf: ";
    rosidl_generator_traits::value_to_yaml(msg.parsing_conf, out);
    out << ", ";
  }

  // member: track_info
  {
    out << "track_info: ";
    rosidl_generator_traits::value_to_yaml(msg.track_info, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: life_time
  {
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: horizon_left_angle
  {
    out << "horizon_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_left_angle, out);
    out << ", ";
  }

  // member: horizon_right_angle
  {
    out << "horizon_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_right_angle, out);
    out << ", ";
  }

  // member: vertical_bottom_angle
  {
    out << "vertical_bottom_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_bottom_angle, out);
    out << ", ";
  }

  // member: vertical_top_angle
  {
    out << "vertical_top_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_top_angle, out);
    out << ", ";
  }

  // member: extra_infos
  {
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []";
    } else {
      out << "extra_infos: [";
      size_t pending_items = msg.extra_infos.size();
      for (auto item : msg.extra_infos) {
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
  const AdbTrafficSign & msg,
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

  // member: conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conf: ";
    rosidl_generator_traits::value_to_yaml(msg.conf, out);
    out << "\n";
  }

  // member: parsing_conf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parsing_conf: ";
    rosidl_generator_traits::value_to_yaml(msg.parsing_conf, out);
    out << "\n";
  }

  // member: track_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_info: ";
    rosidl_generator_traits::value_to_yaml(msg.track_info, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: life_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.life_time, out);
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

  // member: horizon_left_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizon_left_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_left_angle, out);
    out << "\n";
  }

  // member: horizon_right_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizon_right_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_right_angle, out);
    out << "\n";
  }

  // member: vertical_bottom_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_bottom_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_bottom_angle, out);
    out << "\n";
  }

  // member: vertical_top_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_top_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_top_angle, out);
    out << "\n";
  }

  // member: extra_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []\n";
    } else {
      out << "extra_infos:\n";
      for (auto item : msg.extra_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdbTrafficSign & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::AdbTrafficSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::AdbTrafficSign & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::AdbTrafficSign>()
{
  return "deva_perception_msgs::msg::AdbTrafficSign";
}

template<>
inline const char * name<deva_perception_msgs::msg::AdbTrafficSign>()
{
  return "deva_perception_msgs/msg/AdbTrafficSign";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::AdbTrafficSign>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::AdbTrafficSign>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::AdbTrafficSign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__TRAITS_HPP_
