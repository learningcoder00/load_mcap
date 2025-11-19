// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFVehSelf & msg,
  std::ostream & out)
{
  out << "{";
  // member: vlgt
  {
    out << "vlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgt, out);
    out << ", ";
  }

  // member: vlgtcmpfac
  {
    out << "vlgtcmpfac: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgtcmpfac, out);
    out << ", ";
  }

  // member: algt
  {
    out << "algt: ";
    rosidl_generator_traits::value_to_yaml(msg.algt, out);
    out << ", ";
  }

  // member: algtraw
  {
    out << "algtraw: ";
    rosidl_generator_traits::value_to_yaml(msg.algtraw, out);
    out << ", ";
  }

  // member: alatraw
  {
    out << "alatraw: ";
    rosidl_generator_traits::value_to_yaml(msg.alatraw, out);
    out << ", ";
  }

  // member: yawrate
  {
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << ", ";
  }

  // member: yawrateraw
  {
    out << "yawrateraw: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateraw, out);
    out << ", ";
  }

  // member: posnlgtdelta
  {
    out << "posnlgtdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgtdelta, out);
    out << ", ";
  }

  // member: posnlatdelta
  {
    out << "posnlatdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlatdelta, out);
    out << ", ";
  }

  // member: agdirdelta
  {
    out << "agdirdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.agdirdelta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFVehSelf & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgt, out);
    out << "\n";
  }

  // member: vlgtcmpfac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vlgtcmpfac: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgtcmpfac, out);
    out << "\n";
  }

  // member: algt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algt: ";
    rosidl_generator_traits::value_to_yaml(msg.algt, out);
    out << "\n";
  }

  // member: algtraw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "algtraw: ";
    rosidl_generator_traits::value_to_yaml(msg.algtraw, out);
    out << "\n";
  }

  // member: alatraw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alatraw: ";
    rosidl_generator_traits::value_to_yaml(msg.alatraw, out);
    out << "\n";
  }

  // member: yawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << "\n";
  }

  // member: yawrateraw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrateraw: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrateraw, out);
    out << "\n";
  }

  // member: posnlgtdelta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlgtdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgtdelta, out);
    out << "\n";
  }

  // member: posnlatdelta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlatdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlatdelta, out);
    out << "\n";
  }

  // member: agdirdelta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agdirdelta: ";
    rosidl_generator_traits::value_to_yaml(msg.agdirdelta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFVehSelf & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFVehSelf & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFVehSelf & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFVehSelf>()
{
  return "deva_aeb_msgs::msg::SFVehSelf";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFVehSelf>()
{
  return "deva_aeb_msgs/msg/SFVehSelf";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFVehSelf>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFVehSelf>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFVehSelf>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__TRAITS_HPP_
