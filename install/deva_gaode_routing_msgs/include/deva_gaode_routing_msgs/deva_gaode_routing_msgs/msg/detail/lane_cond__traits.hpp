// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneCond & msg,
  std::ostream & out)
{
  out << "{";
  // member: laneinfo_cond
  {
    out << "laneinfo_cond: ";
    rosidl_generator_traits::value_to_yaml(msg.laneinfo_cond, out);
    out << ", ";
  }

  // member: link_direction
  {
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << ", ";
  }

  // member: date
  {
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << ", ";
  }

  // member: vehicles
  {
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []";
    } else {
      out << "vehicles: [";
      size_t pending_items = msg.vehicles.size();
      for (auto item : msg.vehicles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: special_times
  {
    if (msg.special_times.size() == 0) {
      out << "special_times: []";
    } else {
      out << "special_times: [";
      size_t pending_items = msg.special_times.size();
      for (auto item : msg.special_times) {
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
  const LaneCond & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneinfo_cond
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneinfo_cond: ";
    rosidl_generator_traits::value_to_yaml(msg.laneinfo_cond, out);
    out << "\n";
  }

  // member: link_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.link_direction, out);
    out << "\n";
  }

  // member: date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date: ";
    rosidl_generator_traits::value_to_yaml(msg.date, out);
    out << "\n";
  }

  // member: vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicles.size() == 0) {
      out << "vehicles: []\n";
    } else {
      out << "vehicles:\n";
      for (auto item : msg.vehicles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: special_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.special_times.size() == 0) {
      out << "special_times: []\n";
    } else {
      out << "special_times:\n";
      for (auto item : msg.special_times) {
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

inline std::string to_yaml(const LaneCond & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LaneCond & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LaneCond & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LaneCond>()
{
  return "deva_gaode_routing_msgs::msg::LaneCond";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LaneCond>()
{
  return "deva_gaode_routing_msgs/msg/LaneCond";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LaneCond>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LaneCond>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LaneCond>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__TRAITS_HPP_
