// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGAdditionalLaneInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: arrow
  {
    if (msg.arrow.size() == 0) {
      out << "arrow: []";
    } else {
      out << "arrow: [";
      size_t pending_items = msg.arrow.size();
      for (auto item : msg.arrow) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flag
  {
    if (msg.flag.size() == 0) {
      out << "flag: []";
    } else {
      out << "flag: [";
      size_t pending_items = msg.flag.size();
      for (auto item : msg.flag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rg_add_lane_property
  {
    if (msg.rg_add_lane_property.size() == 0) {
      out << "rg_add_lane_property: []";
    } else {
      out << "rg_add_lane_property: [";
      size_t pending_items = msg.rg_add_lane_property.size();
      for (auto item : msg.rg_add_lane_property) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: active_time
  {
    out << "active_time: ";
    rosidl_generator_traits::value_to_yaml(msg.active_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGAdditionalLaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arrow.size() == 0) {
      out << "arrow: []\n";
    } else {
      out << "arrow:\n";
      for (auto item : msg.arrow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flag.size() == 0) {
      out << "flag: []\n";
    } else {
      out << "flag:\n";
      for (auto item : msg.flag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rg_add_lane_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_add_lane_property.size() == 0) {
      out << "rg_add_lane_property: []\n";
    } else {
      out << "rg_add_lane_property:\n";
      for (auto item : msg.rg_add_lane_property) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: active_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_time: ";
    rosidl_generator_traits::value_to_yaml(msg.active_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGAdditionalLaneInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>()
{
  return "deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>()
{
  return "deva_gaode_routing_msgs/msg/RGAdditionalLaneInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_ADDITIONAL_LANE_INFO__TRAITS_HPP_
