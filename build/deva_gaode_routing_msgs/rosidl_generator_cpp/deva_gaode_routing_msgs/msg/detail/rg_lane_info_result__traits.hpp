// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'additional_lane_info'
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__traits.hpp"
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGLaneInfoResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: raw_link_id
  {
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << ", ";
  }

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

  // member: rg_lane_result_property
  {
    if (msg.rg_lane_result_property.size() == 0) {
      out << "rg_lane_result_property: []";
    } else {
      out << "rg_lane_result_property: [";
      size_t pending_items = msg.rg_lane_result_property.size();
      for (auto item : msg.rg_lane_result_property) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: recommend
  {
    if (msg.recommend.size() == 0) {
      out << "recommend: []";
    } else {
      out << "recommend: [";
      size_t pending_items = msg.recommend.size();
      for (auto item : msg.recommend) {
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
    out << ", ";
  }

  // member: additional_lane_info
  {
    if (msg.additional_lane_info.size() == 0) {
      out << "additional_lane_info: []";
    } else {
      out << "additional_lane_info: [";
      size_t pending_items = msg.additional_lane_info.size();
      for (auto item : msg.additional_lane_info) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_info_raw_link_ids
  {
    if (msg.lane_info_raw_link_ids.size() == 0) {
      out << "lane_info_raw_link_ids: []";
    } else {
      out << "lane_info_raw_link_ids: [";
      size_t pending_items = msg.lane_info_raw_link_ids.size();
      for (auto item : msg.lane_info_raw_link_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGLaneInfoResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: raw_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_link_id, out);
    out << "\n";
  }

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

  // member: rg_lane_result_property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rg_lane_result_property.size() == 0) {
      out << "rg_lane_result_property: []\n";
    } else {
      out << "rg_lane_result_property:\n";
      for (auto item : msg.rg_lane_result_property) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: recommend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.recommend.size() == 0) {
      out << "recommend: []\n";
    } else {
      out << "recommend:\n";
      for (auto item : msg.recommend) {
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

  // member: additional_lane_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_lane_info.size() == 0) {
      out << "additional_lane_info: []\n";
    } else {
      out << "additional_lane_info:\n";
      for (auto item : msg.additional_lane_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_info_raw_link_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_info_raw_link_ids.size() == 0) {
      out << "lane_info_raw_link_ids: []\n";
    } else {
      out << "lane_info_raw_link_ids:\n";
      for (auto item : msg.lane_info_raw_link_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGLaneInfoResult & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RGLaneInfoResult & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RGLaneInfoResult>()
{
  return "deva_gaode_routing_msgs::msg::RGLaneInfoResult";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RGLaneInfoResult>()
{
  return "deva_gaode_routing_msgs/msg/RGLaneInfoResult";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RGLaneInfoResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RGLaneInfoResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RGLaneInfoResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__TRAITS_HPP_
