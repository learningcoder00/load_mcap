// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'out_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'lane_conds'
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneTopo & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_arrow
  {
    out << "lane_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_arrow, out);
    out << ", ";
  }

  // member: lane_flag
  {
    out << "lane_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_flag, out);
    out << ", ";
  }

  // member: bus_flag
  {
    out << "bus_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_flag, out);
    out << ", ";
  }

  // member: out_link_ids
  {
    if (msg.out_link_ids.size() == 0) {
      out << "out_link_ids: []";
    } else {
      out << "out_link_ids: [";
      size_t pending_items = msg.out_link_ids.size();
      for (auto item : msg.out_link_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_conds
  {
    if (msg.lane_conds.size() == 0) {
      out << "lane_conds: []";
    } else {
      out << "lane_conds: [";
      size_t pending_items = msg.lane_conds.size();
      for (auto item : msg.lane_conds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: laneinfo_cond
  {
    out << "laneinfo_cond: ";
    rosidl_generator_traits::value_to_yaml(msg.laneinfo_cond, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
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
    out << "vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicles, out);
    out << ", ";
  }

  // member: special_times
  {
    out << "special_times: ";
    rosidl_generator_traits::value_to_yaml(msg.special_times, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneTopo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_arrow: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_arrow, out);
    out << "\n";
  }

  // member: lane_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_flag, out);
    out << "\n";
  }

  // member: bus_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_flag, out);
    out << "\n";
  }

  // member: out_link_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.out_link_ids.size() == 0) {
      out << "out_link_ids: []\n";
    } else {
      out << "out_link_ids:\n";
      for (auto item : msg.out_link_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_conds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_conds.size() == 0) {
      out << "lane_conds: []\n";
    } else {
      out << "lane_conds:\n";
      for (auto item : msg.lane_conds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: laneinfo_cond
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneinfo_cond: ";
    rosidl_generator_traits::value_to_yaml(msg.laneinfo_cond, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
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
    out << "vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicles, out);
    out << "\n";
  }

  // member: special_times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "special_times: ";
    rosidl_generator_traits::value_to_yaml(msg.special_times, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneTopo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::LaneTopo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::LaneTopo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::LaneTopo>()
{
  return "deva_gaode_routing_msgs::msg::LaneTopo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::LaneTopo>()
{
  return "deva_gaode_routing_msgs/msg/LaneTopo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::LaneTopo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::LaneTopo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::LaneTopo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__TRAITS_HPP_
