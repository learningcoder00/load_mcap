// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFObjEstimn & msg,
  std::ostream & out)
{
  out << "{";
  // member: posnlgt
  {
    out << "posnlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgt, out);
    out << ", ";
  }

  // member: posnlat
  {
    out << "posnlat: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlat, out);
    out << ", ";
  }

  // member: spd
  {
    out << "spd: ";
    rosidl_generator_traits::value_to_yaml(msg.spd, out);
    out << ", ";
  }

  // member: vlgt
  {
    out << "vlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgt, out);
    out << ", ";
  }

  // member: vlat
  {
    out << "vlat: ";
    rosidl_generator_traits::value_to_yaml(msg.vlat, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: algt
  {
    out << "algt: ";
    rosidl_generator_traits::value_to_yaml(msg.algt, out);
    out << ", ";
  }

  // member: alat
  {
    out << "alat: ";
    rosidl_generator_traits::value_to_yaml(msg.alat, out);
    out << ", ";
  }

  // member: agdir
  {
    out << "agdir: ";
    rosidl_generator_traits::value_to_yaml(msg.agdir, out);
    out << ", ";
  }

  // member: crvt
  {
    out << "crvt: ";
    rosidl_generator_traits::value_to_yaml(msg.crvt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFObjEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posnlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgt, out);
    out << "\n";
  }

  // member: posnlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlat: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlat, out);
    out << "\n";
  }

  // member: spd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd: ";
    rosidl_generator_traits::value_to_yaml(msg.spd, out);
    out << "\n";
  }

  // member: vlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.vlgt, out);
    out << "\n";
  }

  // member: vlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vlat: ";
    rosidl_generator_traits::value_to_yaml(msg.vlat, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
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

  // member: alat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alat: ";
    rosidl_generator_traits::value_to_yaml(msg.alat, out);
    out << "\n";
  }

  // member: agdir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agdir: ";
    rosidl_generator_traits::value_to_yaml(msg.agdir, out);
    out << "\n";
  }

  // member: crvt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crvt: ";
    rosidl_generator_traits::value_to_yaml(msg.crvt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFObjEstimn & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFObjEstimn & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFObjEstimn & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFObjEstimn>()
{
  return "deva_aeb_msgs::msg::SFObjEstimn";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFObjEstimn>()
{
  return "deva_aeb_msgs/msg/SFObjEstimn";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFObjEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFObjEstimn>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFObjEstimn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN__TRAITS_HPP_
