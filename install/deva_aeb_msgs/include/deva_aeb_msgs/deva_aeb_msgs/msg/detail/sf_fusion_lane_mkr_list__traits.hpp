// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'clsle'
// Member 'clsri'
#include "deva_aeb_msgs/msg/detail/lane_fst_info__traits.hpp"
// Member 'secclsle'
// Member 'secclsri'
// Member 'thiclsle'
// Member 'thiclsri'
#include "deva_aeb_msgs/msg/detail/lane_sec_info__traits.hpp"
// Member 'rearclsle'
// Member 'rearclsri'
// Member 'rearsecclsle'
// Member 'rearsecclsri'
// Member 'rearthiclsle'
// Member 'rearthiclsri'
#include "deva_aeb_msgs/msg/detail/rear_lane_info__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionLaneMkrList & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: framenum
  {
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << ", ";
  }

  // member: lanechg
  {
    out << "lanechg: ";
    rosidl_generator_traits::value_to_yaml(msg.lanechg, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: distostopline
  {
    out << "distostopline: ";
    rosidl_generator_traits::value_to_yaml(msg.distostopline, out);
    out << ", ";
  }

  // member: clsle
  {
    out << "clsle: ";
    to_flow_style_yaml(msg.clsle, out);
    out << ", ";
  }

  // member: clsri
  {
    out << "clsri: ";
    to_flow_style_yaml(msg.clsri, out);
    out << ", ";
  }

  // member: secclsle
  {
    out << "secclsle: ";
    to_flow_style_yaml(msg.secclsle, out);
    out << ", ";
  }

  // member: secclsri
  {
    out << "secclsri: ";
    to_flow_style_yaml(msg.secclsri, out);
    out << ", ";
  }

  // member: thiclsle
  {
    out << "thiclsle: ";
    to_flow_style_yaml(msg.thiclsle, out);
    out << ", ";
  }

  // member: thiclsri
  {
    out << "thiclsri: ";
    to_flow_style_yaml(msg.thiclsri, out);
    out << ", ";
  }

  // member: rearclsle
  {
    out << "rearclsle: ";
    to_flow_style_yaml(msg.rearclsle, out);
    out << ", ";
  }

  // member: rearclsri
  {
    out << "rearclsri: ";
    to_flow_style_yaml(msg.rearclsri, out);
    out << ", ";
  }

  // member: rearsecclsle
  {
    out << "rearsecclsle: ";
    to_flow_style_yaml(msg.rearsecclsle, out);
    out << ", ";
  }

  // member: rearsecclsri
  {
    out << "rearsecclsri: ";
    to_flow_style_yaml(msg.rearsecclsri, out);
    out << ", ";
  }

  // member: rearthiclsle
  {
    out << "rearthiclsle: ";
    to_flow_style_yaml(msg.rearthiclsle, out);
    out << ", ";
  }

  // member: rearthiclsri
  {
    out << "rearthiclsri: ";
    to_flow_style_yaml(msg.rearthiclsri, out);
    out << ", ";
  }

  // member: isambiguouslinepatternleft
  {
    out << "isambiguouslinepatternleft: ";
    rosidl_generator_traits::value_to_yaml(msg.isambiguouslinepatternleft, out);
    out << ", ";
  }

  // member: isambiguouslinepatternright
  {
    out << "isambiguouslinepatternright: ";
    rosidl_generator_traits::value_to_yaml(msg.isambiguouslinepatternright, out);
    out << ", ";
  }

  // member: cmpforvisnyaw
  {
    out << "cmpforvisnyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cmpforvisnyaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionLaneMkrList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: framenum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framenum: ";
    rosidl_generator_traits::value_to_yaml(msg.framenum, out);
    out << "\n";
  }

  // member: lanechg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanechg: ";
    rosidl_generator_traits::value_to_yaml(msg.lanechg, out);
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

  // member: distostopline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distostopline: ";
    rosidl_generator_traits::value_to_yaml(msg.distostopline, out);
    out << "\n";
  }

  // member: clsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clsle:\n";
    to_block_style_yaml(msg.clsle, out, indentation + 2);
  }

  // member: clsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clsri:\n";
    to_block_style_yaml(msg.clsri, out, indentation + 2);
  }

  // member: secclsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secclsle:\n";
    to_block_style_yaml(msg.secclsle, out, indentation + 2);
  }

  // member: secclsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secclsri:\n";
    to_block_style_yaml(msg.secclsri, out, indentation + 2);
  }

  // member: thiclsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thiclsle:\n";
    to_block_style_yaml(msg.thiclsle, out, indentation + 2);
  }

  // member: thiclsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thiclsri:\n";
    to_block_style_yaml(msg.thiclsri, out, indentation + 2);
  }

  // member: rearclsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearclsle:\n";
    to_block_style_yaml(msg.rearclsle, out, indentation + 2);
  }

  // member: rearclsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearclsri:\n";
    to_block_style_yaml(msg.rearclsri, out, indentation + 2);
  }

  // member: rearsecclsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearsecclsle:\n";
    to_block_style_yaml(msg.rearsecclsle, out, indentation + 2);
  }

  // member: rearsecclsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearsecclsri:\n";
    to_block_style_yaml(msg.rearsecclsri, out, indentation + 2);
  }

  // member: rearthiclsle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearthiclsle:\n";
    to_block_style_yaml(msg.rearthiclsle, out, indentation + 2);
  }

  // member: rearthiclsri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rearthiclsri:\n";
    to_block_style_yaml(msg.rearthiclsri, out, indentation + 2);
  }

  // member: isambiguouslinepatternleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isambiguouslinepatternleft: ";
    rosidl_generator_traits::value_to_yaml(msg.isambiguouslinepatternleft, out);
    out << "\n";
  }

  // member: isambiguouslinepatternright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isambiguouslinepatternright: ";
    rosidl_generator_traits::value_to_yaml(msg.isambiguouslinepatternright, out);
    out << "\n";
  }

  // member: cmpforvisnyaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmpforvisnyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cmpforvisnyaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionLaneMkrList & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFusionLaneMkrList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionLaneMkrList & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionLaneMkrList>()
{
  return "deva_aeb_msgs::msg::SFFusionLaneMkrList";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionLaneMkrList>()
{
  return "deva_aeb_msgs/msg/SFFusionLaneMkrList";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionLaneMkrList>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::LaneFstInfo>::value && has_fixed_size<deva_aeb_msgs::msg::LaneSecInfo>::value && has_fixed_size<deva_aeb_msgs::msg::RearLaneInfo>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionLaneMkrList>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::LaneFstInfo>::value && has_bounded_size<deva_aeb_msgs::msg::LaneSecInfo>::value && has_bounded_size<deva_aeb_msgs::msg::RearLaneInfo>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionLaneMkrList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__TRAITS_HPP_
