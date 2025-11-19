// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'feature_point_id_s'
// Member 'feature_point_id_s_by_link_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__traits.hpp"
// Member 'feature_point_id_by_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeaturePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: feature_point_id_s
  {
    if (msg.feature_point_id_s.size() == 0) {
      out << "feature_point_id_s: []";
    } else {
      out << "feature_point_id_s: [";
      size_t pending_items = msg.feature_point_id_s.size();
      for (auto item : msg.feature_point_id_s) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_point_id_s_by_link_id
  {
    if (msg.feature_point_id_s_by_link_id.size() == 0) {
      out << "feature_point_id_s_by_link_id: []";
    } else {
      out << "feature_point_id_s_by_link_id: [";
      size_t pending_items = msg.feature_point_id_s_by_link_id.size();
      for (auto item : msg.feature_point_id_s_by_link_id) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_point_id_by_id
  {
    out << "feature_point_id_by_id: ";
    to_flow_style_yaml(msg.feature_point_id_by_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeaturePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feature_point_id_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_point_id_s.size() == 0) {
      out << "feature_point_id_s: []\n";
    } else {
      out << "feature_point_id_s:\n";
      for (auto item : msg.feature_point_id_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature_point_id_s_by_link_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_point_id_s_by_link_id.size() == 0) {
      out << "feature_point_id_s_by_link_id: []\n";
    } else {
      out << "feature_point_id_s_by_link_id:\n";
      for (auto item : msg.feature_point_id_s_by_link_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: feature_point_id_by_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature_point_id_by_id:\n";
    to_block_style_yaml(msg.feature_point_id_by_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeaturePoint & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::FeaturePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::FeaturePoint & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::FeaturePoint>()
{
  return "deva_gaode_routing_msgs::msg::FeaturePoint";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::FeaturePoint>()
{
  return "deva_gaode_routing_msgs/msg/FeaturePoint";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::FeaturePoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::FeaturePoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::FeaturePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__TRAITS_HPP_
