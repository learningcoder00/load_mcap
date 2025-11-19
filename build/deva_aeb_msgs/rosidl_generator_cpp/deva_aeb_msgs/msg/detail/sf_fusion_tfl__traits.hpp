// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTFL.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTFL & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: relevancy
  {
    out << "relevancy: ";
    rosidl_generator_traits::value_to_yaml(msg.relevancy, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << ", ";
  }

  // member: confi
  {
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << ", ";
  }

  // member: flashstatus
  {
    out << "flashstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.flashstatus, out);
    out << ", ";
  }

  // member: background
  {
    out << "background: ";
    rosidl_generator_traits::value_to_yaml(msg.background, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: poslgt
  {
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << ", ";
  }

  // member: poslat
  {
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTFL & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime: ";
    rosidl_generator_traits::value_to_yaml(msg.lifetime, out);
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

  // member: relevancy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relevancy: ";
    rosidl_generator_traits::value_to_yaml(msg.relevancy, out);
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

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: confi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
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

  // member: background
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "background: ";
    rosidl_generator_traits::value_to_yaml(msg.background, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: poslgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslgt: ";
    rosidl_generator_traits::value_to_yaml(msg.poslgt, out);
    out << "\n";
  }

  // member: poslat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslat: ";
    rosidl_generator_traits::value_to_yaml(msg.poslat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTFL & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFusionTFL & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionTFL & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionTFL>()
{
  return "deva_aeb_msgs::msg::SFFusionTFL";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionTFL>()
{
  return "deva_aeb_msgs/msg/SFFusionTFL";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionTFL>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionTFL>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionTFL>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__TRAITS_HPP_
