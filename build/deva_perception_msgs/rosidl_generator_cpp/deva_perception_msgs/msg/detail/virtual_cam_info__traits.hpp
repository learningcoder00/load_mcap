// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualCamInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: cam_name
  {
    out << "cam_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_name, out);
    out << ", ";
  }

  // member: resolution
  {
    if (msg.resolution.size() == 0) {
      out << "resolution: []";
    } else {
      out << "resolution: [";
      size_t pending_items = msg.resolution.size();
      for (auto item : msg.resolution) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distort_model
  {
    out << "distort_model: ";
    rosidl_generator_traits::value_to_yaml(msg.distort_model, out);
    out << ", ";
  }

  // member: ori_intrinsic
  {
    if (msg.ori_intrinsic.size() == 0) {
      out << "ori_intrinsic: []";
    } else {
      out << "ori_intrinsic: [";
      size_t pending_items = msg.ori_intrinsic.size();
      for (auto item : msg.ori_intrinsic) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vir_intrinsic
  {
    if (msg.vir_intrinsic.size() == 0) {
      out << "vir_intrinsic: []";
    } else {
      out << "vir_intrinsic: [";
      size_t pending_items = msg.vir_intrinsic.size();
      for (auto item : msg.vir_intrinsic) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ori_extrinsic
  {
    if (msg.ori_extrinsic.size() == 0) {
      out << "ori_extrinsic: []";
    } else {
      out << "ori_extrinsic: [";
      size_t pending_items = msg.ori_extrinsic.size();
      for (auto item : msg.ori_extrinsic) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vir_extrinsic
  {
    if (msg.vir_extrinsic.size() == 0) {
      out << "vir_extrinsic: []";
    } else {
      out << "vir_extrinsic: [";
      size_t pending_items = msg.vir_extrinsic.size();
      for (auto item : msg.vir_extrinsic) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mapx
  {
    if (msg.mapx.size() == 0) {
      out << "mapx: []";
    } else {
      out << "mapx: [";
      size_t pending_items = msg.mapx.size();
      for (auto item : msg.mapx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mapy
  {
    if (msg.mapy.size() == 0) {
      out << "mapy: []";
    } else {
      out << "mapy: [";
      size_t pending_items = msg.mapy.size();
      for (auto item : msg.mapy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pinhole_intrinsic
  {
    if (msg.pinhole_intrinsic.size() == 0) {
      out << "pinhole_intrinsic: []";
    } else {
      out << "pinhole_intrinsic: [";
      size_t pending_items = msg.pinhole_intrinsic.size();
      for (auto item : msg.pinhole_intrinsic) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: crops
  {
    if (msg.crops.size() == 0) {
      out << "crops: []";
    } else {
      out << "crops: [";
      size_t pending_items = msg.crops.size();
      for (auto item : msg.crops) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_size
  {
    if (msg.input_size.size() == 0) {
      out << "input_size: []";
    } else {
      out << "input_size: [";
      size_t pending_items = msg.input_size.size();
      for (auto item : msg.input_size) {
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
  const VirtualCamInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cam_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_name: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_name, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resolution.size() == 0) {
      out << "resolution: []\n";
    } else {
      out << "resolution:\n";
      for (auto item : msg.resolution) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distort_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distort_model: ";
    rosidl_generator_traits::value_to_yaml(msg.distort_model, out);
    out << "\n";
  }

  // member: ori_intrinsic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ori_intrinsic.size() == 0) {
      out << "ori_intrinsic: []\n";
    } else {
      out << "ori_intrinsic:\n";
      for (auto item : msg.ori_intrinsic) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vir_intrinsic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vir_intrinsic.size() == 0) {
      out << "vir_intrinsic: []\n";
    } else {
      out << "vir_intrinsic:\n";
      for (auto item : msg.vir_intrinsic) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ori_extrinsic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ori_extrinsic.size() == 0) {
      out << "ori_extrinsic: []\n";
    } else {
      out << "ori_extrinsic:\n";
      for (auto item : msg.ori_extrinsic) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vir_extrinsic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vir_extrinsic.size() == 0) {
      out << "vir_extrinsic: []\n";
    } else {
      out << "vir_extrinsic:\n";
      for (auto item : msg.vir_extrinsic) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mapx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mapx.size() == 0) {
      out << "mapx: []\n";
    } else {
      out << "mapx:\n";
      for (auto item : msg.mapx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mapy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mapy.size() == 0) {
      out << "mapy: []\n";
    } else {
      out << "mapy:\n";
      for (auto item : msg.mapy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pinhole_intrinsic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pinhole_intrinsic.size() == 0) {
      out << "pinhole_intrinsic: []\n";
    } else {
      out << "pinhole_intrinsic:\n";
      for (auto item : msg.pinhole_intrinsic) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: crops
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crops.size() == 0) {
      out << "crops: []\n";
    } else {
      out << "crops:\n";
      for (auto item : msg.crops) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_size.size() == 0) {
      out << "input_size: []\n";
    } else {
      out << "input_size:\n";
      for (auto item : msg.input_size) {
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

inline std::string to_yaml(const VirtualCamInfo & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::VirtualCamInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::VirtualCamInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::VirtualCamInfo>()
{
  return "deva_perception_msgs::msg::VirtualCamInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::VirtualCamInfo>()
{
  return "deva_perception_msgs/msg/VirtualCamInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::VirtualCamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::VirtualCamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::VirtualCamInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__TRAITS_HPP_
