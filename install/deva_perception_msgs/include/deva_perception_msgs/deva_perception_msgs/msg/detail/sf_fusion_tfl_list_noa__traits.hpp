// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'tfllist'
// Member 'tfllist_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__traits.hpp"
// Member 'pop_tfllist'
#include "deva_perception_msgs/msg/detail/po_ptflnoa__traits.hpp"
// Member 'pop_fs_tfllist'
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__traits.hpp"
// Member 'e2e_traffic_det_maps'
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__traits.hpp"
// Member 'tracked_traffic_e2e_stable_maps'
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__traits.hpp"
// Member 'rount_info'
#include "deva_perception_msgs/msg/detail/traffic_rount__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFFusionTFLListNOA & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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

  // member: tflcount
  {
    out << "tflcount: ";
    rosidl_generator_traits::value_to_yaml(msg.tflcount, out);
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

  // member: tfllist
  {
    if (msg.tfllist.size() == 0) {
      out << "tfllist: []";
    } else {
      out << "tfllist: [";
      size_t pending_items = msg.tfllist.size();
      for (auto item : msg.tfllist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: validsize
  {
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
    out << ", ";
  }

  // member: tfllist_all
  {
    if (msg.tfllist_all.size() == 0) {
      out << "tfllist_all: []";
    } else {
      out << "tfllist_all: [";
      size_t pending_items = msg.tfllist_all.size();
      for (auto item : msg.tfllist_all) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: all_validsize
  {
    out << "all_validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.all_validsize, out);
    out << ", ";
  }

  // member: pop_tfllist
  {
    if (msg.pop_tfllist.size() == 0) {
      out << "pop_tfllist: []";
    } else {
      out << "pop_tfllist: [";
      size_t pending_items = msg.pop_tfllist.size();
      for (auto item : msg.pop_tfllist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pop_lightnum
  {
    out << "pop_lightnum: ";
    rosidl_generator_traits::value_to_yaml(msg.pop_lightnum, out);
    out << ", ";
  }

  // member: pop_fs_tfllist
  {
    if (msg.pop_fs_tfllist.size() == 0) {
      out << "pop_fs_tfllist: []";
    } else {
      out << "pop_fs_tfllist: [";
      size_t pending_items = msg.pop_fs_tfllist.size();
      for (auto item : msg.pop_fs_tfllist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pop_fs_lightnum
  {
    out << "pop_fs_lightnum: ";
    rosidl_generator_traits::value_to_yaml(msg.pop_fs_lightnum, out);
    out << ", ";
  }

  // member: e2e_traffic_det_maps
  {
    if (msg.e2e_traffic_det_maps.size() == 0) {
      out << "e2e_traffic_det_maps: []";
    } else {
      out << "e2e_traffic_det_maps: [";
      size_t pending_items = msg.e2e_traffic_det_maps.size();
      for (auto item : msg.e2e_traffic_det_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracked_traffic_e2e_stable_maps
  {
    if (msg.tracked_traffic_e2e_stable_maps.size() == 0) {
      out << "tracked_traffic_e2e_stable_maps: []";
    } else {
      out << "tracked_traffic_e2e_stable_maps: [";
      size_t pending_items = msg.tracked_traffic_e2e_stable_maps.size();
      for (auto item : msg.tracked_traffic_e2e_stable_maps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tracked_traffic_e2ebc
  {
    out << "tracked_traffic_e2ebc: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_traffic_e2ebc, out);
    out << ", ";
  }

  // member: tracked_traffic_e2ebc_stable
  {
    out << "tracked_traffic_e2ebc_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_traffic_e2ebc_stable, out);
    out << ", ";
  }

  // member: rount_info
  {
    out << "rount_info: ";
    to_flow_style_yaml(msg.rount_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFFusionTFLListNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
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

  // member: tflcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tflcount: ";
    rosidl_generator_traits::value_to_yaml(msg.tflcount, out);
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

  // member: tfllist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tfllist.size() == 0) {
      out << "tfllist: []\n";
    } else {
      out << "tfllist:\n";
      for (auto item : msg.tfllist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: validsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.validsize, out);
    out << "\n";
  }

  // member: tfllist_all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tfllist_all.size() == 0) {
      out << "tfllist_all: []\n";
    } else {
      out << "tfllist_all:\n";
      for (auto item : msg.tfllist_all) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: all_validsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_validsize: ";
    rosidl_generator_traits::value_to_yaml(msg.all_validsize, out);
    out << "\n";
  }

  // member: pop_tfllist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pop_tfllist.size() == 0) {
      out << "pop_tfllist: []\n";
    } else {
      out << "pop_tfllist:\n";
      for (auto item : msg.pop_tfllist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pop_lightnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pop_lightnum: ";
    rosidl_generator_traits::value_to_yaml(msg.pop_lightnum, out);
    out << "\n";
  }

  // member: pop_fs_tfllist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pop_fs_tfllist.size() == 0) {
      out << "pop_fs_tfllist: []\n";
    } else {
      out << "pop_fs_tfllist:\n";
      for (auto item : msg.pop_fs_tfllist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pop_fs_lightnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pop_fs_lightnum: ";
    rosidl_generator_traits::value_to_yaml(msg.pop_fs_lightnum, out);
    out << "\n";
  }

  // member: e2e_traffic_det_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.e2e_traffic_det_maps.size() == 0) {
      out << "e2e_traffic_det_maps: []\n";
    } else {
      out << "e2e_traffic_det_maps:\n";
      for (auto item : msg.e2e_traffic_det_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tracked_traffic_e2e_stable_maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracked_traffic_e2e_stable_maps.size() == 0) {
      out << "tracked_traffic_e2e_stable_maps: []\n";
    } else {
      out << "tracked_traffic_e2e_stable_maps:\n";
      for (auto item : msg.tracked_traffic_e2e_stable_maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tracked_traffic_e2ebc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_traffic_e2ebc: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_traffic_e2ebc, out);
    out << "\n";
  }

  // member: tracked_traffic_e2ebc_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_traffic_e2ebc_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_traffic_e2ebc_stable, out);
    out << "\n";
  }

  // member: rount_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rount_info:\n";
    to_block_style_yaml(msg.rount_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFFusionTFLListNOA & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::SFFusionTFLListNOA & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::SFFusionTFLListNOA>()
{
  return "deva_perception_msgs::msg::SFFusionTFLListNOA";
}

template<>
inline const char * name<deva_perception_msgs::msg::SFFusionTFLListNOA>()
{
  return "deva_perception_msgs/msg/SFFusionTFLListNOA";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::SFFusionTFLListNOA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::SFFusionTFLListNOA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::SFFusionTFLListNOA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__TRAITS_HPP_
