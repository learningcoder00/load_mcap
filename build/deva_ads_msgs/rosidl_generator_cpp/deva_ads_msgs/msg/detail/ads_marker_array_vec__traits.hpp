// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__TRAITS_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ads_marker_arrays'
#include "deva_ads_msgs/msg/detail/ads_marker_array__traits.hpp"

namespace deva_ads_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdsMarkerArrayVec & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: stream
  {
    out << "stream: ";
    rosidl_generator_traits::value_to_yaml(msg.stream, out);
    out << ", ";
  }

  // member: marker_type
  {
    out << "marker_type: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_type, out);
    out << ", ";
  }

  // member: ads_marker_arrays
  {
    if (msg.ads_marker_arrays.size() == 0) {
      out << "ads_marker_arrays: []";
    } else {
      out << "ads_marker_arrays: [";
      size_t pending_items = msg.ads_marker_arrays.size();
      for (auto item : msg.ads_marker_arrays) {
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
  const AdsMarkerArrayVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: stream
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream: ";
    rosidl_generator_traits::value_to_yaml(msg.stream, out);
    out << "\n";
  }

  // member: marker_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_type: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_type, out);
    out << "\n";
  }

  // member: ads_marker_arrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ads_marker_arrays.size() == 0) {
      out << "ads_marker_arrays: []\n";
    } else {
      out << "ads_marker_arrays:\n";
      for (auto item : msg.ads_marker_arrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdsMarkerArrayVec & msg, bool use_flow_style = false)
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
  const deva_ads_msgs::msg::AdsMarkerArrayVec & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_ads_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_ads_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_ads_msgs::msg::AdsMarkerArrayVec & msg)
{
  return deva_ads_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_ads_msgs::msg::AdsMarkerArrayVec>()
{
  return "deva_ads_msgs::msg::AdsMarkerArrayVec";
}

template<>
inline const char * name<deva_ads_msgs::msg::AdsMarkerArrayVec>()
{
  return "deva_ads_msgs/msg/AdsMarkerArrayVec";
}

template<>
struct has_fixed_size<deva_ads_msgs::msg::AdsMarkerArrayVec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_ads_msgs::msg::AdsMarkerArrayVec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_ads_msgs::msg::AdsMarkerArrayVec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__TRAITS_HPP_
