// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sllist'
#include "deva_aeb_msgs/msg/detail/sf_stopline__traits.hpp"
// Member 'cwlist'
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__traits.hpp"
// Member 'ralist'
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionRoadSignList & msg,
  std::ostream & out)
{
  out << "{";
  // member: sllist
  {
    if (msg.sllist.size() == 0) {
      out << "sllist: []";
    } else {
      out << "sllist: [";
      size_t pending_items = msg.sllist.size();
      for (auto item : msg.sllist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cwlist
  {
    if (msg.cwlist.size() == 0) {
      out << "cwlist: []";
    } else {
      out << "cwlist: [";
      size_t pending_items = msg.cwlist.size();
      for (auto item : msg.cwlist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ralist
  {
    if (msg.ralist.size() == 0) {
      out << "ralist: []";
    } else {
      out << "ralist: [";
      size_t pending_items = msg.ralist.size();
      for (auto item : msg.ralist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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

  // member: cwcount
  {
    out << "cwcount: ";
    rosidl_generator_traits::value_to_yaml(msg.cwcount, out);
    out << ", ";
  }

  // member: racount
  {
    out << "racount: ";
    rosidl_generator_traits::value_to_yaml(msg.racount, out);
    out << ", ";
  }

  // member: slvalidsize
  {
    out << "slvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.slvalidsize, out);
    out << ", ";
  }

  // member: cwvalidsize
  {
    out << "cwvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.cwvalidsize, out);
    out << ", ";
  }

  // member: ravalidsize
  {
    out << "ravalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.ravalidsize, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionRoadSignList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sllist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sllist.size() == 0) {
      out << "sllist: []\n";
    } else {
      out << "sllist:\n";
      for (auto item : msg.sllist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cwlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cwlist.size() == 0) {
      out << "cwlist: []\n";
    } else {
      out << "cwlist:\n";
      for (auto item : msg.cwlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ralist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ralist.size() == 0) {
      out << "ralist: []\n";
    } else {
      out << "ralist:\n";
      for (auto item : msg.ralist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

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

  // member: cwcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cwcount: ";
    rosidl_generator_traits::value_to_yaml(msg.cwcount, out);
    out << "\n";
  }

  // member: racount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "racount: ";
    rosidl_generator_traits::value_to_yaml(msg.racount, out);
    out << "\n";
  }

  // member: slvalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.slvalidsize, out);
    out << "\n";
  }

  // member: cwvalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cwvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.cwvalidsize, out);
    out << "\n";
  }

  // member: ravalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ravalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.ravalidsize, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionRoadSignList & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFFusionRoadSignList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFFusionRoadSignList & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFFusionRoadSignList>()
{
  return "deva_aeb_msgs::msg::SFFusionRoadSignList";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFFusionRoadSignList>()
{
  return "deva_aeb_msgs/msg/SFFusionRoadSignList";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFFusionRoadSignList>
  : std::integral_constant<bool, has_fixed_size<deva_aeb_msgs::msg::SFCrosswalk>::value && has_fixed_size<deva_aeb_msgs::msg::SFRoadArrow>::value && has_fixed_size<deva_aeb_msgs::msg::SFStopline>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFFusionRoadSignList>
  : std::integral_constant<bool, has_bounded_size<deva_aeb_msgs::msg::SFCrosswalk>::value && has_bounded_size<deva_aeb_msgs::msg::SFRoadArrow>::value && has_bounded_size<deva_aeb_msgs::msg::SFStopline>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFFusionRoadSignList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__TRAITS_HPP_
