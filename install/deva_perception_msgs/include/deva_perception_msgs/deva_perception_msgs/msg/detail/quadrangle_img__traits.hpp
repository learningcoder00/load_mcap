// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadrangleImg & msg,
  std::ostream & out)
{
  out << "{";
  // member: imglupointposu
  {
    out << "imglupointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imglupointposu, out);
    out << ", ";
  }

  // member: imglupointposv
  {
    out << "imglupointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imglupointposv, out);
    out << ", ";
  }

  // member: imgrupointposu
  {
    out << "imgrupointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrupointposu, out);
    out << ", ";
  }

  // member: imgrupointposv
  {
    out << "imgrupointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrupointposv, out);
    out << ", ";
  }

  // member: imgrdpointposu
  {
    out << "imgrdpointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrdpointposu, out);
    out << ", ";
  }

  // member: imgrdpointposv
  {
    out << "imgrdpointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrdpointposv, out);
    out << ", ";
  }

  // member: imgldpointposu
  {
    out << "imgldpointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgldpointposu, out);
    out << ", ";
  }

  // member: imgldpointposv
  {
    out << "imgldpointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgldpointposv, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadrangleImg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imglupointposu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imglupointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imglupointposu, out);
    out << "\n";
  }

  // member: imglupointposv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imglupointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imglupointposv, out);
    out << "\n";
  }

  // member: imgrupointposu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgrupointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrupointposu, out);
    out << "\n";
  }

  // member: imgrupointposv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgrupointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrupointposv, out);
    out << "\n";
  }

  // member: imgrdpointposu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgrdpointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrdpointposu, out);
    out << "\n";
  }

  // member: imgrdpointposv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgrdpointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgrdpointposv, out);
    out << "\n";
  }

  // member: imgldpointposu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgldpointposu: ";
    rosidl_generator_traits::value_to_yaml(msg.imgldpointposu, out);
    out << "\n";
  }

  // member: imgldpointposv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imgldpointposv: ";
    rosidl_generator_traits::value_to_yaml(msg.imgldpointposv, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadrangleImg & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::QuadrangleImg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::QuadrangleImg & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::QuadrangleImg>()
{
  return "deva_perception_msgs::msg::QuadrangleImg";
}

template<>
inline const char * name<deva_perception_msgs::msg::QuadrangleImg>()
{
  return "deva_perception_msgs/msg/QuadrangleImg";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::QuadrangleImg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::QuadrangleImg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::QuadrangleImg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__TRAITS_HPP_
