// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/local_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'st_map'
#include "deva_map_msgs/msg/detail/st_local_map__traits.hpp"
// Member 'ust_map'
#include "deva_perception_msgs/msg/detail/ust_boundary__traits.hpp"
// Member 'avp_map'
#include "deva_map_msgs/msg/detail/avp_local_map__traits.hpp"
// Member 'sensor_header'
#include "deva_map_msgs/msg/detail/local_map_header__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: map_version
  {
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: map_mode
  {
    out << "map_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.map_mode, out);
    out << ", ";
  }

  // member: is_localization_mode
  {
    out << "is_localization_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_localization_mode, out);
    out << ", ";
  }

  // member: st_map
  {
    out << "st_map: ";
    to_flow_style_yaml(msg.st_map, out);
    out << ", ";
  }

  // member: ust_map
  {
    if (msg.ust_map.size() == 0) {
      out << "ust_map: []";
    } else {
      out << "ust_map: [";
      size_t pending_items = msg.ust_map.size();
      for (auto item : msg.ust_map) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: avp_map
  {
    out << "avp_map: ";
    to_flow_style_yaml(msg.avp_map, out);
    out << ", ";
  }

  // member: sensor_header
  {
    out << "sensor_header: ";
    to_flow_style_yaml(msg.sensor_header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalMap & msg,
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

  // member: map_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_version: ";
    rosidl_generator_traits::value_to_yaml(msg.map_version, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
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

  // member: is_localization_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_localization_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.is_localization_mode, out);
    out << "\n";
  }

  // member: st_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "st_map:\n";
    to_block_style_yaml(msg.st_map, out, indentation + 2);
  }

  // member: ust_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ust_map.size() == 0) {
      out << "ust_map: []\n";
    } else {
      out << "ust_map:\n";
      for (auto item : msg.ust_map) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: avp_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avp_map:\n";
    to_block_style_yaml(msg.avp_map, out, indentation + 2);
  }

  // member: sensor_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_header:\n";
    to_block_style_yaml(msg.sensor_header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalMap & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::LocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::LocalMap & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::LocalMap>()
{
  return "deva_map_msgs::msg::LocalMap";
}

template<>
inline const char * name<deva_map_msgs::msg::LocalMap>()
{
  return "deva_map_msgs/msg/LocalMap";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::LocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::LocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::LocalMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__TRAITS_HPP_
