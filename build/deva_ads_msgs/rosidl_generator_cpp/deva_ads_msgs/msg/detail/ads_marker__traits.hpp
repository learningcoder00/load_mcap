// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__TRAITS_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_ads_msgs/msg/detail/ads_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'detail'
#include "deva_ads_msgs/msg/detail/ads_info__traits.hpp"

namespace deva_ads_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdsMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: clickable
  {
    out << "clickable: ";
    rosidl_generator_traits::value_to_yaml(msg.clickable, out);
    out << ", ";
  }

  // member: detail
  {
    if (msg.detail.size() == 0) {
      out << "detail: []";
    } else {
      out << "detail: [";
      size_t pending_items = msg.detail.size();
      for (auto item : msg.detail) {
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
  const AdsMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: clickable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clickable: ";
    rosidl_generator_traits::value_to_yaml(msg.clickable, out);
    out << "\n";
  }

  // member: detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detail.size() == 0) {
      out << "detail: []\n";
    } else {
      out << "detail:\n";
      for (auto item : msg.detail) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdsMarker & msg, bool use_flow_style = false)
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

}  // namespace deva_ads_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_ads_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_ads_msgs::msg::AdsMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_ads_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_ads_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_ads_msgs::msg::AdsMarker & msg)
{
  return deva_ads_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_ads_msgs::msg::AdsMarker>()
{
  return "deva_ads_msgs::msg::AdsMarker";
}

template<>
inline const char * name<deva_ads_msgs::msg::AdsMarker>()
{
  return "deva_ads_msgs/msg/AdsMarker";
}

template<>
struct has_fixed_size<deva_ads_msgs::msg::AdsMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_ads_msgs::msg::AdsMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_ads_msgs::msg::AdsMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__TRAITS_HPP_
