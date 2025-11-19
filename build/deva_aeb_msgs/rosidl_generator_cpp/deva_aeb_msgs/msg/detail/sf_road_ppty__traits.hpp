// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFRoadPpty & msg,
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

  // member: lanewidth
  {
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
    out << ", ";
  }

  // member: offslat
  {
    out << "offslat: ";
    rosidl_generator_traits::value_to_yaml(msg.offslat, out);
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
    out << ", ";
  }

  // member: crvtrate
  {
    if (msg.crvtrate.size() == 0) {
      out << "crvtrate: []";
    } else {
      out << "crvtrate: [";
      size_t pending_items = msg.crvtrate.size();
      for (auto item : msg.crvtrate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: crvtratevalidsize
  {
    out << "crvtratevalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.crvtratevalidsize, out);
    out << ", ";
  }

  // member: seglen
  {
    if (msg.seglen.size() == 0) {
      out << "seglen: []";
    } else {
      out << "seglen: [";
      size_t pending_items = msg.seglen.size();
      for (auto item : msg.seglen) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: seglenvalidsize
  {
    out << "seglenvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.seglenvalidsize, out);
    out << ", ";
  }

  // member: strtd
  {
    out << "strtd: ";
    rosidl_generator_traits::value_to_yaml(msg.strtd, out);
    out << ", ";
  }

  // member: vld
  {
    out << "vld: ";
    rosidl_generator_traits::value_to_yaml(msg.vld, out);
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

  // member: titohiqly
  {
    if (msg.titohiqly.size() == 0) {
      out << "titohiqly: []";
    } else {
      out << "titohiqly: [";
      size_t pending_items = msg.titohiqly.size();
      for (auto item : msg.titohiqly) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: titohiqlyvalidsize
  {
    out << "titohiqlyvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.titohiqlyvalidsize, out);
    out << ", ";
  }

  // member: objidtitohiqly
  {
    if (msg.objidtitohiqly.size() == 0) {
      out << "objidtitohiqly: []";
    } else {
      out << "objidtitohiqly: [";
      size_t pending_items = msg.objidtitohiqly.size();
      for (auto item : msg.objidtitohiqly) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: objidtitohiqlyvalidsize
  {
    out << "objidtitohiqlyvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.objidtitohiqlyvalidsize, out);
    out << ", ";
  }

  // member: distancewithlowconfidence
  {
    out << "distancewithlowconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.distancewithlowconfidence, out);
    out << ", ";
  }

  // member: distancewithhiahconfidence
  {
    out << "distancewithhiahconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.distancewithhiahconfidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFRoadPpty & msg,
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

  // member: lanewidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
    out << "\n";
  }

  // member: offslat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offslat: ";
    rosidl_generator_traits::value_to_yaml(msg.offslat, out);
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

  // member: crvtrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crvtrate.size() == 0) {
      out << "crvtrate: []\n";
    } else {
      out << "crvtrate:\n";
      for (auto item : msg.crvtrate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: crvtratevalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crvtratevalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.crvtratevalidsize, out);
    out << "\n";
  }

  // member: seglen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.seglen.size() == 0) {
      out << "seglen: []\n";
    } else {
      out << "seglen:\n";
      for (auto item : msg.seglen) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: seglenvalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seglenvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.seglenvalidsize, out);
    out << "\n";
  }

  // member: strtd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strtd: ";
    rosidl_generator_traits::value_to_yaml(msg.strtd, out);
    out << "\n";
  }

  // member: vld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vld: ";
    rosidl_generator_traits::value_to_yaml(msg.vld, out);
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

  // member: titohiqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.titohiqly.size() == 0) {
      out << "titohiqly: []\n";
    } else {
      out << "titohiqly:\n";
      for (auto item : msg.titohiqly) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: titohiqlyvalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "titohiqlyvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.titohiqlyvalidsize, out);
    out << "\n";
  }

  // member: objidtitohiqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objidtitohiqly.size() == 0) {
      out << "objidtitohiqly: []\n";
    } else {
      out << "objidtitohiqly:\n";
      for (auto item : msg.objidtitohiqly) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: objidtitohiqlyvalidsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objidtitohiqlyvalidsize: ";
    rosidl_generator_traits::value_to_yaml(msg.objidtitohiqlyvalidsize, out);
    out << "\n";
  }

  // member: distancewithlowconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distancewithlowconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.distancewithlowconfidence, out);
    out << "\n";
  }

  // member: distancewithhiahconfidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distancewithhiahconfidence: ";
    rosidl_generator_traits::value_to_yaml(msg.distancewithhiahconfidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFRoadPpty & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::SFRoadPpty & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFRoadPpty & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFRoadPpty>()
{
  return "deva_aeb_msgs::msg::SFRoadPpty";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFRoadPpty>()
{
  return "deva_aeb_msgs/msg/SFRoadPpty";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFRoadPpty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFRoadPpty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFRoadPpty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_ROAD_PPTY__TRAITS_HPP_
