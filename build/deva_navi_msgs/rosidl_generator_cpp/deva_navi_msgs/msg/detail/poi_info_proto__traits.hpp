// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'real_pos'
// Member 'navi_pos'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__traits.hpp"
// Member 'charge_info'
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const POIInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: real_pos
  {
    out << "real_pos: ";
    to_flow_style_yaml(msg.real_pos, out);
    out << ", ";
  }

  // member: navi_pos
  {
    out << "navi_pos: ";
    to_flow_style_yaml(msg.navi_pos, out);
    out << ", ";
  }

  // member: sigshelter
  {
    out << "sigshelter: ";
    rosidl_generator_traits::value_to_yaml(msg.sigshelter, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: road_id
  {
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << ", ";
  }

  // member: poi_id
  {
    out << "poi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: floor_name
  {
    out << "floor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.floor_name, out);
    out << ", ";
  }

  // member: parent_name
  {
    out << "parent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_name, out);
    out << ", ";
  }

  // member: parent_simple_name
  {
    out << "parent_simple_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_simple_name, out);
    out << ", ";
  }

  // member: angel
  {
    out << "angel: ";
    rosidl_generator_traits::value_to_yaml(msg.angel, out);
    out << ", ";
  }

  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parent_id
  {
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
    out << ", ";
  }

  // member: parent_rel
  {
    out << "parent_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_rel, out);
    out << ", ";
  }

  // member: type_code
  {
    out << "type_code: ";
    rosidl_generator_traits::value_to_yaml(msg.type_code, out);
    out << ", ";
  }

  // member: from_jump
  {
    out << "from_jump: ";
    rosidl_generator_traits::value_to_yaml(msg.from_jump, out);
    out << ", ";
  }

  // member: overhead
  {
    out << "overhead: ";
    rosidl_generator_traits::value_to_yaml(msg.overhead, out);
    out << ", ";
  }

  // member: point_cnt
  {
    out << "point_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cnt, out);
    out << ", ";
  }

  // member: check_point_link_id
  {
    out << "check_point_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.check_point_link_id, out);
    out << ", ";
  }

  // member: overhead_back_alt_diff
  {
    out << "overhead_back_alt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.overhead_back_alt_diff, out);
    out << ", ";
  }

  // member: floor
  {
    out << "floor: ";
    rosidl_generator_traits::value_to_yaml(msg.floor, out);
    out << ", ";
  }

  // member: extend_info_flag
  {
    out << "extend_info_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.extend_info_flag, out);
    out << ", ";
  }

  // member: src_app
  {
    out << "src_app: ";
    rosidl_generator_traits::value_to_yaml(msg.src_app, out);
    out << ", ";
  }

  // member: charge_info
  {
    out << "charge_info: ";
    to_flow_style_yaml(msg.charge_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const POIInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: real_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "real_pos:\n";
    to_block_style_yaml(msg.real_pos, out, indentation + 2);
  }

  // member: navi_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_pos:\n";
    to_block_style_yaml(msg.navi_pos, out, indentation + 2);
  }

  // member: sigshelter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigshelter: ";
    rosidl_generator_traits::value_to_yaml(msg.sigshelter, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: road_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << "\n";
  }

  // member: poi_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poi_id: ";
    rosidl_generator_traits::value_to_yaml(msg.poi_id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: floor_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "floor_name: ";
    rosidl_generator_traits::value_to_yaml(msg.floor_name, out);
    out << "\n";
  }

  // member: parent_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_name, out);
    out << "\n";
  }

  // member: parent_simple_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_simple_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_simple_name, out);
    out << "\n";
  }

  // member: angel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angel: ";
    rosidl_generator_traits::value_to_yaml(msg.angel, out);
    out << "\n";
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
    out << "\n";
  }

  // member: parent_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_rel, out);
    out << "\n";
  }

  // member: type_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_code: ";
    rosidl_generator_traits::value_to_yaml(msg.type_code, out);
    out << "\n";
  }

  // member: from_jump
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_jump: ";
    rosidl_generator_traits::value_to_yaml(msg.from_jump, out);
    out << "\n";
  }

  // member: overhead
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overhead: ";
    rosidl_generator_traits::value_to_yaml(msg.overhead, out);
    out << "\n";
  }

  // member: point_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.point_cnt, out);
    out << "\n";
  }

  // member: check_point_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_point_link_id: ";
    rosidl_generator_traits::value_to_yaml(msg.check_point_link_id, out);
    out << "\n";
  }

  // member: overhead_back_alt_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overhead_back_alt_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.overhead_back_alt_diff, out);
    out << "\n";
  }

  // member: floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "floor: ";
    rosidl_generator_traits::value_to_yaml(msg.floor, out);
    out << "\n";
  }

  // member: extend_info_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extend_info_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.extend_info_flag, out);
    out << "\n";
  }

  // member: src_app
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "src_app: ";
    rosidl_generator_traits::value_to_yaml(msg.src_app, out);
    out << "\n";
  }

  // member: charge_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_info:\n";
    to_block_style_yaml(msg.charge_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const POIInfoProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::POIInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::POIInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::POIInfoProto>()
{
  return "deva_navi_msgs::msg::POIInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::POIInfoProto>()
{
  return "deva_navi_msgs/msg/POIInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::POIInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::POIInfoProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::POIInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__TRAITS_HPP_
