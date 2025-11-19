// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'region'
#include "deva_perception_msgs/msg/detail/traffic_region__traits.hpp"
// Member 'tsquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__traits.hpp"
// Member 'tsquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTSNOA & msg,
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

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
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

  // member: is_ramp
  {
    out << "is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp, out);
    out << ", ";
  }

  // member: region
  {
    out << "region: ";
    to_flow_style_yaml(msg.region, out);
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
    out << ", ";
  }

  // member: tsquadranglevcs
  {
    out << "tsquadranglevcs: ";
    to_flow_style_yaml(msg.tsquadranglevcs, out);
    out << ", ";
  }

  // member: tsquadrangleimg
  {
    out << "tsquadrangleimg: ";
    to_flow_style_yaml(msg.tsquadrangleimg, out);
    out << ", ";
  }

  // member: utmx
  {
    out << "utmx: ";
    rosidl_generator_traits::value_to_yaml(msg.utmx, out);
    out << ", ";
  }

  // member: utmy
  {
    out << "utmy: ";
    rosidl_generator_traits::value_to_yaml(msg.utmy, out);
    out << ", ";
  }

  // member: utmz
  {
    out << "utmz: ";
    rosidl_generator_traits::value_to_yaml(msg.utmz, out);
    out << ", ";
  }

  // member: pole
  {
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTSNOA & msg,
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

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
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

  // member: is_ramp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_ramp: ";
    rosidl_generator_traits::value_to_yaml(msg.is_ramp, out);
    out << "\n";
  }

  // member: region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region:\n";
    to_block_style_yaml(msg.region, out, indentation + 2);
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

  // member: tsquadranglevcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsquadranglevcs:\n";
    to_block_style_yaml(msg.tsquadranglevcs, out, indentation + 2);
  }

  // member: tsquadrangleimg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsquadrangleimg:\n";
    to_block_style_yaml(msg.tsquadrangleimg, out, indentation + 2);
  }

  // member: utmx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmx: ";
    rosidl_generator_traits::value_to_yaml(msg.utmx, out);
    out << "\n";
  }

  // member: utmy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmy: ";
    rosidl_generator_traits::value_to_yaml(msg.utmy, out);
    out << "\n";
  }

  // member: utmz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utmz: ";
    rosidl_generator_traits::value_to_yaml(msg.utmz, out);
    out << "\n";
  }

  // member: pole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pole: ";
    rosidl_generator_traits::value_to_yaml(msg.pole, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTSNOA & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::SFFusionTSNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::SFFusionTSNOA & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::SFFusionTSNOA>()
{
  return "deva_perception_msgs::msg::SFFusionTSNOA";
}

template<>
inline const char * name<deva_perception_msgs::msg::SFFusionTSNOA>()
{
  return "deva_perception_msgs/msg/SFFusionTSNOA";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::SFFusionTSNOA>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::QuadrangleImg>::value && has_fixed_size<deva_perception_msgs::msg::QuadrangleVcs>::value && has_fixed_size<deva_perception_msgs::msg::TrafficRegion>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::SFFusionTSNOA>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::QuadrangleImg>::value && has_bounded_size<deva_perception_msgs::msg::QuadrangleVcs>::value && has_bounded_size<deva_perception_msgs::msg::TrafficRegion>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::SFFusionTSNOA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__TRAITS_HPP_
