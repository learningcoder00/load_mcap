// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obslist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionObstacleList & msg,
  std::ostream & out)
{
  out << "{";
  // member: obslist
  {
    if (msg.obslist.size() == 0) {
      out << "obslist: []";
    } else {
      out << "obslist: [";
      size_t pending_items = msg.obslist.size();
      for (auto item : msg.obslist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: validsize
  {
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
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
  const SFFusionObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obslist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obslist.size() == 0) {
      out << "obslist: []\n";
    } else {
      out << "obslist:\n";
      for (auto item : msg.obslist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: validsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
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

inline std::string to_yaml(const SFFusionObstacleList & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFFusionObstacleList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionObstacleList & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionObstacleList>()
{
  return "deva_aeb_msgs::msg::SFFusionObstacleList";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionObstacleList>()
{
  return "deva_aeb_msgs/msg/SFFusionObstacleList";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionObstacleList>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFFusionObstacle>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionObstacleList>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFFusionObstacle>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionObstacleList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE_LIST__TRAITS_HPP_
