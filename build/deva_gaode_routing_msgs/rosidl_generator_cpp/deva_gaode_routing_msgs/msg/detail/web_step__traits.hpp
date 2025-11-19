// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebStep.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'roads'
#include "deva_gaode_routing_msgs/msg/detail/web_road__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebStep & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: roads
  {
    if (msg.roads.size() == 0) {
      out << "roads: []";
    } else {
      out << "roads: [";
      size_t pending_items = msg.roads.size();
      for (auto item : msg.roads) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_light_count
  {
    out << "traffic_light_count: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_count, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: forward_direction
  {
    out << "forward_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_direction, out);
    out << ", ";
  }

  // member: forward_type
  {
    out << "forward_type: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_type, out);
    out << ", ";
  }

  // member: main_action
  {
    out << "main_action: ";
    rosidl_generator_traits::value_to_yaml(msg.main_action, out);
    out << ", ";
  }

  // member: assistant_action
  {
    out << "assistant_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assistant_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebStep & msg,
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

  // member: roads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.roads.size() == 0) {
      out << "roads: []\n";
    } else {
      out << "roads:\n";
      for (auto item : msg.roads) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traffic_light_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_light_count: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_light_count, out);
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

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: forward_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_direction, out);
    out << "\n";
  }

  // member: forward_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forward_type: ";
    rosidl_generator_traits::value_to_yaml(msg.forward_type, out);
    out << "\n";
  }

  // member: main_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_action: ";
    rosidl_generator_traits::value_to_yaml(msg.main_action, out);
    out << "\n";
  }

  // member: assistant_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assistant_action: ";
    rosidl_generator_traits::value_to_yaml(msg.assistant_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebStep & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::WebStep & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebStep & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebStep>()
{
  return "deva_gaode_routing_msgs::msg::WebStep";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebStep>()
{
  return "deva_gaode_routing_msgs/msg/WebStep";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebStep>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebStep>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebStep>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__TRAITS_HPP_
