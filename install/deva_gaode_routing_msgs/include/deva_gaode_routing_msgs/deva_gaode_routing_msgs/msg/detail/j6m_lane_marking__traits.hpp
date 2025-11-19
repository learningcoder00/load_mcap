// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lane_marking_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'lane_marking_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const J6mLaneMarking & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_marking_id
  {
    out << "lane_marking_id: ";
    to_flow_style_yaml(msg.lane_marking_id, out);
    out << ", ";
  }

  // member: lane_marking_type
  {
    out << "lane_marking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_type, out);
    out << ", ";
  }

  // member: lane_marking_length
  {
    out << "lane_marking_length: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_length, out);
    out << ", ";
  }

  // member: lane_marking_order_number
  {
    out << "lane_marking_order_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_order_number, out);
    out << ", ";
  }

  // member: lane_marking_offset
  {
    out << "lane_marking_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_offset, out);
    out << ", ";
  }

  // member: lane_marking_color
  {
    out << "lane_marking_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_color, out);
    out << ", ";
  }

  // member: lane_marking_confidence
  {
    out << "lane_marking_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_confidence, out);
    out << ", ";
  }

  // member: lane_marking_coordinates
  {
    if (msg.lane_marking_coordinates.size() == 0) {
      out << "lane_marking_coordinates: []";
    } else {
      out << "lane_marking_coordinates: [";
      size_t pending_items = msg.lane_marking_coordinates.size();
      for (auto item : msg.lane_marking_coordinates) {
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
  const J6mLaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_marking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_id:\n";
    to_block_style_yaml(msg.lane_marking_id, out, indentation + 2);
  }

  // member: lane_marking_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_type: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_type, out);
    out << "\n";
  }

  // member: lane_marking_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_length: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_length, out);
    out << "\n";
  }

  // member: lane_marking_order_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_order_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_order_number, out);
    out << "\n";
  }

  // member: lane_marking_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_offset, out);
    out << "\n";
  }

  // member: lane_marking_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_color: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_color, out);
    out << "\n";
  }

  // member: lane_marking_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_marking_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_marking_confidence, out);
    out << "\n";
  }

  // member: lane_marking_coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_marking_coordinates.size() == 0) {
      out << "lane_marking_coordinates: []\n";
    } else {
      out << "lane_marking_coordinates:\n";
      for (auto item : msg.lane_marking_coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const J6mLaneMarking & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::J6mLaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::J6mLaneMarking & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::J6mLaneMarking>()
{
  return "deva_gaode_routing_msgs::msg::J6mLaneMarking";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::J6mLaneMarking>()
{
  return "deva_gaode_routing_msgs/msg/J6mLaneMarking";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::J6mLaneMarking>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::J6mLaneMarking>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::J6mLaneMarking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__TRAITS_HPP_
