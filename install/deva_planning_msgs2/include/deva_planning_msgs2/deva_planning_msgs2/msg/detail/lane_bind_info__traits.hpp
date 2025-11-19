// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'binded_obs'
#include "deva_planning_msgs2/msg/detail/u_int2_string__traits.hpp"
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__traits.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneBindInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: ref_id
  {
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << ", ";
  }

  // member: binded_obs
  {
    if (msg.binded_obs.size() == 0) {
      out << "binded_obs: []";
    } else {
      out << "binded_obs: [";
      size_t pending_items = msg.binded_obs.size();
      for (auto item : msg.binded_obs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sl_boundary
  {
    if (msg.sl_boundary.size() == 0) {
      out << "sl_boundary: []";
    } else {
      out << "sl_boundary: [";
      size_t pending_items = msg.sl_boundary.size();
      for (auto item : msg.sl_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scalable_flags
  {
    if (msg.scalable_flags.size() == 0) {
      out << "scalable_flags: []";
    } else {
      out << "scalable_flags: [";
      size_t pending_items = msg.scalable_flags.size();
      for (auto item : msg.scalable_flags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scalable_multimap
  {
    if (msg.scalable_multimap.size() == 0) {
      out << "scalable_multimap: []";
    } else {
      out << "scalable_multimap: [";
      size_t pending_items = msg.scalable_multimap.size();
      for (auto item : msg.scalable_multimap) {
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
  const LaneBindInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ref_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_id, out);
    out << "\n";
  }

  // member: binded_obs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.binded_obs.size() == 0) {
      out << "binded_obs: []\n";
    } else {
      out << "binded_obs:\n";
      for (auto item : msg.binded_obs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sl_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sl_boundary.size() == 0) {
      out << "sl_boundary: []\n";
    } else {
      out << "sl_boundary:\n";
      for (auto item : msg.sl_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: scalable_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scalable_flags.size() == 0) {
      out << "scalable_flags: []\n";
    } else {
      out << "scalable_flags:\n";
      for (auto item : msg.scalable_flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: scalable_multimap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scalable_multimap.size() == 0) {
      out << "scalable_multimap: []\n";
    } else {
      out << "scalable_multimap:\n";
      for (auto item : msg.scalable_multimap) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneBindInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::LaneBindInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::LaneBindInfo & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::LaneBindInfo>()
{
  return "deva_planning_msgs2::msg::LaneBindInfo";
}

template<>
inline const char * name<deva_planning_msgs2::msg::LaneBindInfo>()
{
  return "deva_planning_msgs2/msg/LaneBindInfo";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::LaneBindInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::LaneBindInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::LaneBindInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__TRAITS_HPP_
