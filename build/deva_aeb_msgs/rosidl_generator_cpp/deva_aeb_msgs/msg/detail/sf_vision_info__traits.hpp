// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFVisionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: cornerx
  {
    out << "cornerx: ";
    rosidl_generator_traits::value_to_yaml(msg.cornerx, out);
    out << ", ";
  }

  // member: cornery
  {
    out << "cornery: ";
    rosidl_generator_traits::value_to_yaml(msg.cornery, out);
    out << ", ";
  }

  // member: distinlane
  {
    out << "distinlane: ";
    rosidl_generator_traits::value_to_yaml(msg.distinlane, out);
    out << ", ";
  }

  // member: objcutinflag
  {
    out << "objcutinflag: ";
    rosidl_generator_traits::value_to_yaml(msg.objcutinflag, out);
    out << ", ";
  }

  // member: objcutinlanetype
  {
    out << "objcutinlanetype: ";
    rosidl_generator_traits::value_to_yaml(msg.objcutinlanetype, out);
    out << ", ";
  }

  // member: reserved
  {
    if (msg.reserved.size() == 0) {
      out << "reserved: []";
    } else {
      out << "reserved: [";
      size_t pending_items = msg.reserved.size();
      for (auto item : msg.reserved) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: visionposx
  {
    out << "visionposx: ";
    rosidl_generator_traits::value_to_yaml(msg.visionposx, out);
    out << ", ";
  }

  // member: visionposy
  {
    out << "visionposy: ";
    rosidl_generator_traits::value_to_yaml(msg.visionposy, out);
    out << ", ";
  }

  // member: laneassignment
  {
    out << "laneassignment: ";
    rosidl_generator_traits::value_to_yaml(msg.laneassignment, out);
    out << ", ";
  }

  // member: iscipv
  {
    out << "iscipv: ";
    rosidl_generator_traits::value_to_yaml(msg.iscipv, out);
    out << ", ";
  }

  // member: mtncatergory
  {
    out << "mtncatergory: ";
    rosidl_generator_traits::value_to_yaml(msg.mtncatergory, out);
    out << ", ";
  }

  // member: mtnstatus
  {
    out << "mtnstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.mtnstatus, out);
    out << ", ";
  }

  // member: distconvergence
  {
    out << "distconvergence: ";
    rosidl_generator_traits::value_to_yaml(msg.distconvergence, out);
    out << ", ";
  }

  // member: coverdproperty
  {
    out << "coverdproperty: ";
    rosidl_generator_traits::value_to_yaml(msg.coverdproperty, out);
    out << ", ";
  }

  // member: unstable
  {
    out << "unstable: ";
    rosidl_generator_traits::value_to_yaml(msg.unstable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFVisionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cornerx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cornerx: ";
    rosidl_generator_traits::value_to_yaml(msg.cornerx, out);
    out << "\n";
  }

  // member: cornery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cornery: ";
    rosidl_generator_traits::value_to_yaml(msg.cornery, out);
    out << "\n";
  }

  // member: distinlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distinlane: ";
    rosidl_generator_traits::value_to_yaml(msg.distinlane, out);
    out << "\n";
  }

  // member: objcutinflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objcutinflag: ";
    rosidl_generator_traits::value_to_yaml(msg.objcutinflag, out);
    out << "\n";
  }

  // member: objcutinlanetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objcutinlanetype: ";
    rosidl_generator_traits::value_to_yaml(msg.objcutinlanetype, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved.size() == 0) {
      out << "reserved: []\n";
    } else {
      out << "reserved:\n";
      for (auto item : msg.reserved) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: visionposx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visionposx: ";
    rosidl_generator_traits::value_to_yaml(msg.visionposx, out);
    out << "\n";
  }

  // member: visionposy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visionposy: ";
    rosidl_generator_traits::value_to_yaml(msg.visionposy, out);
    out << "\n";
  }

  // member: laneassignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneassignment: ";
    rosidl_generator_traits::value_to_yaml(msg.laneassignment, out);
    out << "\n";
  }

  // member: iscipv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iscipv: ";
    rosidl_generator_traits::value_to_yaml(msg.iscipv, out);
    out << "\n";
  }

  // member: mtncatergory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mtncatergory: ";
    rosidl_generator_traits::value_to_yaml(msg.mtncatergory, out);
    out << "\n";
  }

  // member: mtnstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mtnstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.mtnstatus, out);
    out << "\n";
  }

  // member: distconvergence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distconvergence: ";
    rosidl_generator_traits::value_to_yaml(msg.distconvergence, out);
    out << "\n";
  }

  // member: coverdproperty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverdproperty: ";
    rosidl_generator_traits::value_to_yaml(msg.coverdproperty, out);
    out << "\n";
  }

  // member: unstable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unstable: ";
    rosidl_generator_traits::value_to_yaml(msg.unstable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFVisionInfo & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFVisionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFVisionInfo & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFVisionInfo>()
{
  return "deva_aeb_msgs::msg::SFVisionInfo";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFVisionInfo>()
{
  return "deva_aeb_msgs/msg/SFVisionInfo";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFVisionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFVisionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFVisionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__TRAITS_HPP_
