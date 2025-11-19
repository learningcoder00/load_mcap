// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RVLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/rv_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__traits.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RVLight & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: light_type
  {
    out << "light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.light_type, out);
    out << ", ";
  }

  // member: heading_type
  {
    out << "heading_type: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_type, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << ", ";
  }

  // member: sign_occ_type
  {
    out << "sign_occ_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_occ_type, out);
    out << ", ";
  }

  // member: sign_trun_type
  {
    out << "sign_trun_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_trun_type, out);
    out << ", ";
  }

  // member: extra_infos
  {
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []";
    } else {
      out << "extra_infos: [";
      size_t pending_items = msg.extra_infos.size();
      for (auto item : msg.extra_infos) {
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
  const RVLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle:\n";
    to_block_style_yaml(msg.obstacle, out, indentation + 2);
  }

  // member: light_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_type: ";
    rosidl_generator_traits::value_to_yaml(msg.light_type, out);
    out << "\n";
  }

  // member: heading_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_type: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_type, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }

  // member: sign_occ_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_occ_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_occ_type, out);
    out << "\n";
  }

  // member: sign_trun_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_trun_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_trun_type, out);
    out << "\n";
  }

  // member: extra_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_infos.size() == 0) {
      out << "extra_infos: []\n";
    } else {
      out << "extra_infos:\n";
      for (auto item : msg.extra_infos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RVLight & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::RVLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RVLight & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RVLight>()
{
  return "deva_perception_msgs::msg::RVLight";
}

template<>
inline const char * name<deva_perception_msgs::msg::RVLight>()
{
  return "deva_perception_msgs/msg/RVLight";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RVLight>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RVLight>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::RVLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__TRAITS_HPP_
