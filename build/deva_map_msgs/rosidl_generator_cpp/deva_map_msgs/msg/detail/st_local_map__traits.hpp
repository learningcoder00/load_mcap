// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/st_local_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'channels'
#include "deva_map_msgs/msg/detail/channel__traits.hpp"
// Member 'reference_channals'
#include "deva_map_msgs/msg/detail/reference_channal__traits.hpp"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__traits.hpp"
// Member 'signals'
#include "deva_perception_msgs/msg/detail/signal__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const STLocalMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: channels
  {
    if (msg.channels.size() == 0) {
      out << "channels: []";
    } else {
      out << "channels: [";
      size_t pending_items = msg.channels.size();
      for (auto item : msg.channels) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference_channals
  {
    if (msg.reference_channals.size() == 0) {
      out << "reference_channals: []";
    } else {
      out << "reference_channals: [";
      size_t pending_items = msg.reference_channals.size();
      for (auto item : msg.reference_channals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstacles
  {
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []";
    } else {
      out << "obstacles: [";
      size_t pending_items = msg.obstacles.size();
      for (auto item : msg.obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: signals
  {
    if (msg.signals.size() == 0) {
      out << "signals: []";
    } else {
      out << "signals: [";
      size_t pending_items = msg.signals.size();
      for (auto item : msg.signals) {
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
  const STLocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channels.size() == 0) {
      out << "channels: []\n";
    } else {
      out << "channels:\n";
      for (auto item : msg.channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reference_channals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_channals.size() == 0) {
      out << "reference_channals: []\n";
    } else {
      out << "reference_channals:\n";
      for (auto item : msg.reference_channals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacles.size() == 0) {
      out << "obstacles: []\n";
    } else {
      out << "obstacles:\n";
      for (auto item : msg.obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: signals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signals.size() == 0) {
      out << "signals: []\n";
    } else {
      out << "signals:\n";
      for (auto item : msg.signals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const STLocalMap & msg, bool use_flow_style = false)
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
  const deva_map_msgs::msg::STLocalMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::STLocalMap & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::STLocalMap>()
{
  return "deva_map_msgs::msg::STLocalMap";
}

template<>
inline const char * name<deva_map_msgs::msg::STLocalMap>()
{
  return "deva_map_msgs/msg/STLocalMap";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::STLocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::STLocalMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::STLocalMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__TRAITS_HPP_
