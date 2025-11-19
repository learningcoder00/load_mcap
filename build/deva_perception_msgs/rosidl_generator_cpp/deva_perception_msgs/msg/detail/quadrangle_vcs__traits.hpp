// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadrangleVcs & msg,
  std::ostream & out)
{
  out << "{";
  // member: leftuppointx
  {
    out << "leftuppointx: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointx, out);
    out << ", ";
  }

  // member: leftuppointy
  {
    out << "leftuppointy: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointy, out);
    out << ", ";
  }

  // member: leftuppointz
  {
    out << "leftuppointz: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointz, out);
    out << ", ";
  }

  // member: rightuppointx
  {
    out << "rightuppointx: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointx, out);
    out << ", ";
  }

  // member: rightuppointy
  {
    out << "rightuppointy: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointy, out);
    out << ", ";
  }

  // member: rightuppointz
  {
    out << "rightuppointz: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointz, out);
    out << ", ";
  }

  // member: rightdownpointx
  {
    out << "rightdownpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointx, out);
    out << ", ";
  }

  // member: rightdownpointy
  {
    out << "rightdownpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointy, out);
    out << ", ";
  }

  // member: rightdownpointz
  {
    out << "rightdownpointz: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointz, out);
    out << ", ";
  }

  // member: leftdownpointx
  {
    out << "leftdownpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointx, out);
    out << ", ";
  }

  // member: leftdownpointy
  {
    out << "leftdownpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointy, out);
    out << ", ";
  }

  // member: leftdownpointz
  {
    out << "leftdownpointz: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadrangleVcs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leftuppointx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftuppointx: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointx, out);
    out << "\n";
  }

  // member: leftuppointy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftuppointy: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointy, out);
    out << "\n";
  }

  // member: leftuppointz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftuppointz: ";
    rosidl_generator_traits::value_to_yaml(msg.leftuppointz, out);
    out << "\n";
  }

  // member: rightuppointx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightuppointx: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointx, out);
    out << "\n";
  }

  // member: rightuppointy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightuppointy: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointy, out);
    out << "\n";
  }

  // member: rightuppointz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightuppointz: ";
    rosidl_generator_traits::value_to_yaml(msg.rightuppointz, out);
    out << "\n";
  }

  // member: rightdownpointx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightdownpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointx, out);
    out << "\n";
  }

  // member: rightdownpointy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightdownpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointy, out);
    out << "\n";
  }

  // member: rightdownpointz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rightdownpointz: ";
    rosidl_generator_traits::value_to_yaml(msg.rightdownpointz, out);
    out << "\n";
  }

  // member: leftdownpointx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftdownpointx: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointx, out);
    out << "\n";
  }

  // member: leftdownpointy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftdownpointy: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointy, out);
    out << "\n";
  }

  // member: leftdownpointz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leftdownpointz: ";
    rosidl_generator_traits::value_to_yaml(msg.leftdownpointz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadrangleVcs & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::QuadrangleVcs & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::QuadrangleVcs & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::QuadrangleVcs>()
{
  return "deva_perception_msgs::msg::QuadrangleVcs";
}

template<>
inline const char * name<deva_perception_msgs::msg::QuadrangleVcs>()
{
  return "deva_perception_msgs/msg/QuadrangleVcs";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::QuadrangleVcs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::QuadrangleVcs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::QuadrangleVcs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__TRAITS_HPP_
