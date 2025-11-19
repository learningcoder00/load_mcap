// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTS.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTS & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: dstlgttoeve
  {
    out << "dstlgttoeve: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoeve, out);
    out << ", ";
  }

  // member: dstlattoeve
  {
    out << "dstlattoeve: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlattoeve, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: electcsgn
  {
    out << "electcsgn: ";
    rosidl_generator_traits::value_to_yaml(msg.electcsgn, out);
    out << ", ";
  }

  // member: lanelocn
  {
    out << "lanelocn: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelocn, out);
    out << ", ";
  }

  // member: locn
  {
    out << "locn: ";
    rosidl_generator_traits::value_to_yaml(msg.locn, out);
    out << ", ";
  }

  // member: rlvc
  {
    out << "rlvc: ";
    rosidl_generator_traits::value_to_yaml(msg.rlvc, out);
    out << ", ";
  }

  // member: notrlvres
  {
    out << "notrlvres: ";
    rosidl_generator_traits::value_to_yaml(msg.notrlvres, out);
    out << ", ";
  }

  // member: qly
  {
    out << "qly: ";
    rosidl_generator_traits::value_to_yaml(msg.qly, out);
    out << ", ";
  }

  // member: typ
  {
    out << "typ: ";
    rosidl_generator_traits::value_to_yaml(msg.typ, out);
    out << ", ";
  }

  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: spplinfoval
  {
    out << "spplinfoval: ";
    rosidl_generator_traits::value_to_yaml(msg.spplinfoval, out);
    out << ", ";
  }

  // member: spplinfotype
  {
    out << "spplinfotype: ";
    rosidl_generator_traits::value_to_yaml(msg.spplinfotype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTS & msg,
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

  // member: dstlgttoeve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dstlgttoeve: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlgttoeve, out);
    out << "\n";
  }

  // member: dstlattoeve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dstlattoeve: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlattoeve, out);
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

  // member: electcsgn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "electcsgn: ";
    rosidl_generator_traits::value_to_yaml(msg.electcsgn, out);
    out << "\n";
  }

  // member: lanelocn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanelocn: ";
    rosidl_generator_traits::value_to_yaml(msg.lanelocn, out);
    out << "\n";
  }

  // member: locn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "locn: ";
    rosidl_generator_traits::value_to_yaml(msg.locn, out);
    out << "\n";
  }

  // member: rlvc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlvc: ";
    rosidl_generator_traits::value_to_yaml(msg.rlvc, out);
    out << "\n";
  }

  // member: notrlvres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notrlvres: ";
    rosidl_generator_traits::value_to_yaml(msg.notrlvres, out);
    out << "\n";
  }

  // member: qly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qly: ";
    rosidl_generator_traits::value_to_yaml(msg.qly, out);
    out << "\n";
  }

  // member: typ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typ: ";
    rosidl_generator_traits::value_to_yaml(msg.typ, out);
    out << "\n";
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
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

  // member: spplinfoval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spplinfoval: ";
    rosidl_generator_traits::value_to_yaml(msg.spplinfoval, out);
    out << "\n";
  }

  // member: spplinfotype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spplinfotype: ";
    rosidl_generator_traits::value_to_yaml(msg.spplinfotype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTS & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFusionTS & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionTS & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionTS>()
{
  return "deva_aeb_msgs::msg::SFFusionTS";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionTS>()
{
  return "deva_aeb_msgs/msg/SFFusionTS";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionTS>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionTS>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionTS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TS__TRAITS_HPP_
