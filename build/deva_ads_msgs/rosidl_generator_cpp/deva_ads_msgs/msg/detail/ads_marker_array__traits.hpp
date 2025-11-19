// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__TRAITS_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'markers'
#include "deva_ads_msgs/msg/detail/ads_marker__traits.hpp"

namespace deva_ads_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdsMarkerArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: uuid
  {
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << ", ";
  }

  // member: classes
  {
    out << "classes: ";
    rosidl_generator_traits::value_to_yaml(msg.classes, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: markers
  {
    if (msg.markers.size() == 0) {
      out << "markers: []";
    } else {
      out << "markers: [";
      size_t pending_items = msg.markers.size();
      for (auto item : msg.markers) {
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
  const AdsMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.uuid, out);
    out << "\n";
  }

  // member: classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classes: ";
    rosidl_generator_traits::value_to_yaml(msg.classes, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markers.size() == 0) {
      out << "markers: []\n";
    } else {
      out << "markers:\n";
      for (auto item : msg.markers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdsMarkerArray & msg, bool use_flow_style = false)
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
  const deva_ads_msgs::msg::AdsMarkerArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_ads_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_ads_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_ads_msgs::msg::AdsMarkerArray & msg)
{
  return deva_ads_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_ads_msgs::msg::AdsMarkerArray>()
{
  return "deva_ads_msgs::msg::AdsMarkerArray";
}

template<>
inline const char * name<deva_ads_msgs::msg::AdsMarkerArray>()
{
  return "deva_ads_msgs/msg/AdsMarkerArray";
}

template<>
struct has_fixed_size<deva_ads_msgs::msg::AdsMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_ads_msgs::msg::AdsMarkerArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_ads_msgs::msg::AdsMarkerArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__TRAITS_HPP_
