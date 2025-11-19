// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "deva_navi_msgs/msg/detail/group_time_range_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadFacilityProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: speed_limit
  {
    if (msg.speed_limit.size() == 0) {
      out << "speed_limit: []";
    } else {
      out << "speed_limit: [";
      size_t pending_items = msg.speed_limit.size();
      for (auto item : msg.speed_limit) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dist_to_end
  {
    out << "dist_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_end, out);
    out << ", ";
  }

  // member: valid_lane
  {
    out << "valid_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_lane, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: time_range
  {
    if (msg.time_range.size() == 0) {
      out << "time_range: []";
    } else {
      out << "time_range: [";
      size_t pending_items = msg.time_range.size();
      for (auto item : msg.time_range) {
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
  const RoadFacilityProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_limit.size() == 0) {
      out << "speed_limit: []\n";
    } else {
      out << "speed_limit:\n";
      for (auto item : msg.speed_limit) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dist_to_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_end: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_end, out);
    out << "\n";
  }

  // member: valid_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_lane, out);
    out << "\n";
  }

  // member: lane_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << "\n";
  }

  // member: time_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.time_range.size() == 0) {
      out << "time_range: []\n";
    } else {
      out << "time_range:\n";
      for (auto item : msg.time_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadFacilityProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::RoadFacilityProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::RoadFacilityProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::RoadFacilityProto>()
{
  return "deva_navi_msgs::msg::RoadFacilityProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::RoadFacilityProto>()
{
  return "deva_navi_msgs/msg/RoadFacilityProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::RoadFacilityProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::RoadFacilityProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::RoadFacilityProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__TRAITS_HPP_
