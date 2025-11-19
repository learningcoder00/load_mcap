// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'm_via_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__traits.hpp"
// Member 'm_energy_consume'
#include "deva_navi_msgs/msg/detail/energy_consume_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ElecPathInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: m_is_elec_route
  {
    out << "m_is_elec_route: ";
    rosidl_generator_traits::value_to_yaml(msg.m_is_elec_route, out);
    out << ", ";
  }

  // member: m_link_consume_size_word
  {
    out << "m_link_consume_size_word: ";
    rosidl_generator_traits::value_to_yaml(msg.m_link_consume_size_word, out);
    out << ", ";
  }

  // member: m_traffic_info
  {
    out << "m_traffic_info: ";
    rosidl_generator_traits::value_to_yaml(msg.m_traffic_info, out);
    out << ", ";
  }

  // member: m_energy_unit
  {
    out << "m_energy_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.m_energy_unit, out);
    out << ", ";
  }

  // member: m_path_flag
  {
    out << "m_path_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.m_path_flag, out);
    out << ", ";
  }

  // member: m_energy_sum
  {
    out << "m_energy_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.m_energy_sum, out);
    out << ", ";
  }

  // member: m_link_num
  {
    out << "m_link_num: ";
    rosidl_generator_traits::value_to_yaml(msg.m_link_num, out);
    out << ", ";
  }

  // member: m_link_consume
  {
    if (msg.m_link_consume.size() == 0) {
      out << "m_link_consume: []";
    } else {
      out << "m_link_consume: [";
      size_t pending_items = msg.m_link_consume.size();
      for (auto item : msg.m_link_consume) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_link_distance
  {
    if (msg.m_link_distance.size() == 0) {
      out << "m_link_distance: []";
    } else {
      out << "m_link_distance: [";
      size_t pending_items = msg.m_link_distance.size();
      for (auto item : msg.m_link_distance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_via_info
  {
    if (msg.m_via_info.size() == 0) {
      out << "m_via_info: []";
    } else {
      out << "m_via_info: [";
      size_t pending_items = msg.m_via_info.size();
      for (auto item : msg.m_via_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m_energy_consume
  {
    out << "m_energy_consume: ";
    to_flow_style_yaml(msg.m_energy_consume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ElecPathInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: m_is_elec_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_is_elec_route: ";
    rosidl_generator_traits::value_to_yaml(msg.m_is_elec_route, out);
    out << "\n";
  }

  // member: m_link_consume_size_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_link_consume_size_word: ";
    rosidl_generator_traits::value_to_yaml(msg.m_link_consume_size_word, out);
    out << "\n";
  }

  // member: m_traffic_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_traffic_info: ";
    rosidl_generator_traits::value_to_yaml(msg.m_traffic_info, out);
    out << "\n";
  }

  // member: m_energy_unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_energy_unit: ";
    rosidl_generator_traits::value_to_yaml(msg.m_energy_unit, out);
    out << "\n";
  }

  // member: m_path_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_path_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.m_path_flag, out);
    out << "\n";
  }

  // member: m_energy_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_energy_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.m_energy_sum, out);
    out << "\n";
  }

  // member: m_link_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_link_num: ";
    rosidl_generator_traits::value_to_yaml(msg.m_link_num, out);
    out << "\n";
  }

  // member: m_link_consume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.m_link_consume.size() == 0) {
      out << "m_link_consume: []\n";
    } else {
      out << "m_link_consume:\n";
      for (auto item : msg.m_link_consume) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m_link_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.m_link_distance.size() == 0) {
      out << "m_link_distance: []\n";
    } else {
      out << "m_link_distance:\n";
      for (auto item : msg.m_link_distance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m_via_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.m_via_info.size() == 0) {
      out << "m_via_info: []\n";
    } else {
      out << "m_via_info:\n";
      for (auto item : msg.m_via_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: m_energy_consume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_energy_consume:\n";
    to_block_style_yaml(msg.m_energy_consume, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ElecPathInfoProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::ElecPathInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::ElecPathInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::ElecPathInfoProto>()
{
  return "deva_navi_msgs::msg::ElecPathInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::ElecPathInfoProto>()
{
  return "deva_navi_msgs/msg/ElecPathInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::ElecPathInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::ElecPathInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::ElecPathInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__TRAITS_HPP_
