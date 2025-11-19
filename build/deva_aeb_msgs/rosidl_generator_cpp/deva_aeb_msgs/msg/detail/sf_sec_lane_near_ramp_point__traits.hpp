// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFSecLaneNearRampPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFSecLaneNearRampPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: posx
  {
    out << "posx: ";
    rosidl_generator_traits::value_to_yaml(msg.posx, out);
    out << ", ";
  }

  // member: posy
  {
    out << "posy: ";
    rosidl_generator_traits::value_to_yaml(msg.posy, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: reserved
  {
    if (msg.reserved.size() == 0) {
      out << "reserved: []";
    } else {
      out << "reserved: [";
      size_t pending_items = msg.reserved.size();
      for (auto item : msg.reserved) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SFSecLaneNearRampPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posx: ";
    rosidl_generator_traits::value_to_yaml(msg.posx, out);
    out << "\n";
  }

  // member: posy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posy: ";
    rosidl_generator_traits::value_to_yaml(msg.posy, out);
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

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved.size() == 0) {
      out << "reserved: []\n";
    } else {
      out << "reserved:\n";
      for (auto item : msg.reserved) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFSecLaneNearRampPoint & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFSecLaneNearRampPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFSecLaneNearRampPoint & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>()
{
  return "deva_aeb_msgs::msg::SFSecLaneNearRampPoint";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>()
{
  return "deva_aeb_msgs/msg/SFSecLaneNearRampPoint";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFSecLaneNearRampPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__TRAITS_HPP_
