// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/PoPFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoPFusionTFLNOA & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: flashstatus
  {
    out << "flashstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.flashstatus, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoPFusionTFLNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
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

  // member: flashstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flashstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.flashstatus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoPFusionTFLNOA & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::PoPFusionTFLNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::PoPFusionTFLNOA & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::PoPFusionTFLNOA>()
{
  return "deva_perception_msgs::msg::PoPFusionTFLNOA";
}

template<>
inline const char * name<deva_perception_msgs::msg::PoPFusionTFLNOA>()
{
  return "deva_perception_msgs/msg/PoPFusionTFLNOA";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::PoPFusionTFLNOA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::PoPFusionTFLNOA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::PoPFusionTFLNOA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__TRAITS_HPP_
