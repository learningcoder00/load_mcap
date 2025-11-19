// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__traits.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__traits.hpp"
// Member 'lane_infos'
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__traits.hpp"
// Member 'lane_topos'
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KLaneMetaInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_link_id
  {
    out << "in_link_id: ";
    to_flow_style_yaml(msg.in_link_id, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    to_flow_style_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: pass_link_id_s
  {
    out << "pass_link_id_s: ";
    to_flow_style_yaml(msg.pass_link_id_s, out);
    out << ", ";
  }

  // member: lane_num
  {
    out << "lane_num: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num, out);
    out << ", ";
  }

  // member: lane_num_left
  {
    out << "lane_num_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_left, out);
    out << ", ";
  }

  // member: lane_num_right
  {
    out << "lane_num_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_right, out);
    out << ", ";
  }

  // member: lane_infos
  {
    if (msg.lane_infos.size() == 0) {
      out << "lane_infos: []";
    } else {
      out << "lane_infos: [";
      size_t pending_items = msg.lane_infos.size();
      for (auto item : msg.lane_infos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_topos
  {
    if (msg.lane_topos.size() == 0) {
      out << "lane_topos: []";
    } else {
      out << "lane_topos: [";
      size_t pending_items = msg.lane_topos.size();
      for (auto item : msg.lane_topos) {
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
  const KLaneMetaInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_link_id:\n";
    to_block_style_yaml(msg.in_link_id, out, indentation + 2);
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id:\n";
    to_block_style_yaml(msg.node_id, out, indentation + 2);
  }

  // member: pass_link_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_link_id_s:\n";
    to_block_style_yaml(msg.pass_link_id_s, out, indentation + 2);
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

  // member: lane_num_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_left: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_left, out);
    out << "\n";
  }

  // member: lane_num_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_num_right: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_num_right, out);
    out << "\n";
  }

  // member: lane_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_infos.size() == 0) {
      out << "lane_infos: []\n";
    } else {
      out << "lane_infos:\n";
      for (auto item : msg.lane_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_topos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_topos.size() == 0) {
      out << "lane_topos: []\n";
    } else {
      out << "lane_topos:\n";
      for (auto item : msg.lane_topos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KLaneMetaInfo & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::KLaneMetaInfo & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::KLaneMetaInfo>()
{
  return "deva_gaode_routing_msgs::msg::KLaneMetaInfo";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::KLaneMetaInfo>()
{
  return "deva_gaode_routing_msgs/msg/KLaneMetaInfo";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::KLaneMetaInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::KLaneMetaInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::KLaneMetaInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LANE_META_INFO__TRAITS_HPP_
