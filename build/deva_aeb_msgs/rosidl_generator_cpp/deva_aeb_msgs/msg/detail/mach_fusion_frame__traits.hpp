// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachFusionFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: rv_timestamp
  {
    out << "rv_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.rv_timestamp, out);
    out << ", ";
  }

  // member: bev_timestamp
  {
    out << "bev_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.bev_timestamp, out);
    out << ", ";
  }

  // member: front_radar_timestamp
  {
    out << "front_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_timestamp, out);
    out << ", ";
  }

  // member: front_right_radar_timestamp
  {
    out << "front_right_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_radar_timestamp, out);
    out << ", ";
  }

  // member: front_left_radar_timestamp
  {
    out << "front_left_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_radar_timestamp, out);
    out << ", ";
  }

  // member: back_left_radar_timestamp
  {
    out << "back_left_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_radar_timestamp, out);
    out << ", ";
  }

  // member: back_right_radar_timestamp
  {
    out << "back_right_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_radar_timestamp, out);
    out << ", ";
  }

  // member: lidar_timestamp
  {
    out << "lidar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_timestamp, out);
    out << ", ";
  }

  // member: ins_timestamp
  {
    out << "ins_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_timestamp, out);
    out << ", ";
  }

  // member: rfu2camera_pose
  {
    if (msg.rfu2camera_pose.size() == 0) {
      out << "rfu2camera_pose: []";
    } else {
      out << "rfu2camera_pose: [";
      size_t pending_items = msg.rfu2camera_pose.size();
      for (auto item : msg.rfu2camera_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ego2camera_pose
  {
    if (msg.ego2camera_pose.size() == 0) {
      out << "ego2camera_pose: []";
    } else {
      out << "ego2camera_pose: [";
      size_t pending_items = msg.ego2camera_pose.size();
      for (auto item : msg.ego2camera_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu_ego_pose_matirx
  {
    if (msg.rfu_ego_pose_matirx.size() == 0) {
      out << "rfu_ego_pose_matirx: []";
    } else {
      out << "rfu_ego_pose_matirx: [";
      size_t pending_items = msg.rfu_ego_pose_matirx.size();
      for (auto item : msg.rfu_ego_pose_matirx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu_imu_pose_matirx
  {
    if (msg.rfu_imu_pose_matirx.size() == 0) {
      out << "rfu_imu_pose_matirx: []";
    } else {
      out << "rfu_imu_pose_matirx: [";
      size_t pending_items = msg.rfu_imu_pose_matirx.size();
      for (auto item : msg.rfu_imu_pose_matirx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ego_world_pose_matirx
  {
    if (msg.ego_world_pose_matirx.size() == 0) {
      out << "ego_world_pose_matirx: []";
    } else {
      out << "ego_world_pose_matirx: [";
      size_t pending_items = msg.ego_world_pose_matirx.size();
      for (auto item : msg.ego_world_pose_matirx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: camera_k_matrix
  {
    if (msg.camera_k_matrix.size() == 0) {
      out << "camera_k_matrix: []";
    } else {
      out << "camera_k_matrix: [";
      size_t pending_items = msg.camera_k_matrix.size();
      for (auto item : msg.camera_k_matrix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_world_translation
  {
    if (msg.imu_world_translation.size() == 0) {
      out << "imu_world_translation: []";
    } else {
      out << "imu_world_translation: [";
      size_t pending_items = msg.imu_world_translation.size();
      for (auto item : msg.imu_world_translation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: imu_world_rotation
  {
    if (msg.imu_world_rotation.size() == 0) {
      out << "imu_world_rotation: []";
    } else {
      out << "imu_world_rotation: [";
      size_t pending_items = msg.imu_world_rotation.size();
      for (auto item : msg.imu_world_rotation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_front
  {
    if (msg.rfu2camera_pose_front.size() == 0) {
      out << "rfu2camera_pose_front: []";
    } else {
      out << "rfu2camera_pose_front: [";
      size_t pending_items = msg.rfu2camera_pose_front.size();
      for (auto item : msg.rfu2camera_pose_front) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_front_left
  {
    if (msg.rfu2camera_pose_front_left.size() == 0) {
      out << "rfu2camera_pose_front_left: []";
    } else {
      out << "rfu2camera_pose_front_left: [";
      size_t pending_items = msg.rfu2camera_pose_front_left.size();
      for (auto item : msg.rfu2camera_pose_front_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_front_right
  {
    if (msg.rfu2camera_pose_front_right.size() == 0) {
      out << "rfu2camera_pose_front_right: []";
    } else {
      out << "rfu2camera_pose_front_right: [";
      size_t pending_items = msg.rfu2camera_pose_front_right.size();
      for (auto item : msg.rfu2camera_pose_front_right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_back
  {
    if (msg.rfu2camera_pose_back.size() == 0) {
      out << "rfu2camera_pose_back: []";
    } else {
      out << "rfu2camera_pose_back: [";
      size_t pending_items = msg.rfu2camera_pose_back.size();
      for (auto item : msg.rfu2camera_pose_back) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_back_left
  {
    if (msg.rfu2camera_pose_back_left.size() == 0) {
      out << "rfu2camera_pose_back_left: []";
    } else {
      out << "rfu2camera_pose_back_left: [";
      size_t pending_items = msg.rfu2camera_pose_back_left.size();
      for (auto item : msg.rfu2camera_pose_back_left) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rfu2camera_pose_back_right
  {
    if (msg.rfu2camera_pose_back_right.size() == 0) {
      out << "rfu2camera_pose_back_right: []";
    } else {
      out << "rfu2camera_pose_back_right: [";
      size_t pending_items = msg.rfu2camera_pose_back_right.size();
      for (auto item : msg.rfu2camera_pose_back_right) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vehile_report_time
  {
    out << "vehile_report_time: ";
    rosidl_generator_traits::value_to_yaml(msg.vehile_report_time, out);
    out << ", ";
  }

  // member: reserve1
  {
    out << "reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve1, out);
    out << ", ";
  }

  // member: reserve2
  {
    out << "reserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve2, out);
    out << ", ";
  }

  // member: reserve3
  {
    out << "reserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve3, out);
    out << ", ";
  }

  // member: reserve4
  {
    out << "reserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve4, out);
    out << ", ";
  }

  // member: reserve5
  {
    out << "reserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve5, out);
    out << ", ";
  }

  // member: reserve6
  {
    out << "reserve6: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve6, out);
    out << ", ";
  }

  // member: reserve7
  {
    out << "reserve7: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve7, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachFusionFrame & msg,
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

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: rv_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rv_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.rv_timestamp, out);
    out << "\n";
  }

  // member: bev_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bev_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.bev_timestamp, out);
    out << "\n";
  }

  // member: front_radar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_radar_timestamp, out);
    out << "\n";
  }

  // member: front_right_radar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_radar_timestamp, out);
    out << "\n";
  }

  // member: front_left_radar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_radar_timestamp, out);
    out << "\n";
  }

  // member: back_left_radar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_left_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_left_radar_timestamp, out);
    out << "\n";
  }

  // member: back_right_radar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_right_radar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.back_right_radar_timestamp, out);
    out << "\n";
  }

  // member: lidar_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_timestamp, out);
    out << "\n";
  }

  // member: ins_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_timestamp, out);
    out << "\n";
  }

  // member: rfu2camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose.size() == 0) {
      out << "rfu2camera_pose: []\n";
    } else {
      out << "rfu2camera_pose:\n";
      for (auto item : msg.rfu2camera_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ego2camera_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego2camera_pose.size() == 0) {
      out << "ego2camera_pose: []\n";
    } else {
      out << "ego2camera_pose:\n";
      for (auto item : msg.ego2camera_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu_ego_pose_matirx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu_ego_pose_matirx.size() == 0) {
      out << "rfu_ego_pose_matirx: []\n";
    } else {
      out << "rfu_ego_pose_matirx:\n";
      for (auto item : msg.rfu_ego_pose_matirx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu_imu_pose_matirx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu_imu_pose_matirx.size() == 0) {
      out << "rfu_imu_pose_matirx: []\n";
    } else {
      out << "rfu_imu_pose_matirx:\n";
      for (auto item : msg.rfu_imu_pose_matirx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ego_world_pose_matirx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ego_world_pose_matirx.size() == 0) {
      out << "ego_world_pose_matirx: []\n";
    } else {
      out << "ego_world_pose_matirx:\n";
      for (auto item : msg.ego_world_pose_matirx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: camera_k_matrix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_k_matrix.size() == 0) {
      out << "camera_k_matrix: []\n";
    } else {
      out << "camera_k_matrix:\n";
      for (auto item : msg.camera_k_matrix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_world_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_world_translation.size() == 0) {
      out << "imu_world_translation: []\n";
    } else {
      out << "imu_world_translation:\n";
      for (auto item : msg.imu_world_translation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: imu_world_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.imu_world_rotation.size() == 0) {
      out << "imu_world_rotation: []\n";
    } else {
      out << "imu_world_rotation:\n";
      for (auto item : msg.imu_world_rotation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_front.size() == 0) {
      out << "rfu2camera_pose_front: []\n";
    } else {
      out << "rfu2camera_pose_front:\n";
      for (auto item : msg.rfu2camera_pose_front) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_front_left.size() == 0) {
      out << "rfu2camera_pose_front_left: []\n";
    } else {
      out << "rfu2camera_pose_front_left:\n";
      for (auto item : msg.rfu2camera_pose_front_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_front_right.size() == 0) {
      out << "rfu2camera_pose_front_right: []\n";
    } else {
      out << "rfu2camera_pose_front_right:\n";
      for (auto item : msg.rfu2camera_pose_front_right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_back
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_back.size() == 0) {
      out << "rfu2camera_pose_back: []\n";
    } else {
      out << "rfu2camera_pose_back:\n";
      for (auto item : msg.rfu2camera_pose_back) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_back_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_back_left.size() == 0) {
      out << "rfu2camera_pose_back_left: []\n";
    } else {
      out << "rfu2camera_pose_back_left:\n";
      for (auto item : msg.rfu2camera_pose_back_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rfu2camera_pose_back_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rfu2camera_pose_back_right.size() == 0) {
      out << "rfu2camera_pose_back_right: []\n";
    } else {
      out << "rfu2camera_pose_back_right:\n";
      for (auto item : msg.rfu2camera_pose_back_right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vehile_report_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehile_report_time: ";
    rosidl_generator_traits::value_to_yaml(msg.vehile_report_time, out);
    out << "\n";
  }

  // member: reserve1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve1, out);
    out << "\n";
  }

  // member: reserve2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve2, out);
    out << "\n";
  }

  // member: reserve3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve3, out);
    out << "\n";
  }

  // member: reserve4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve4, out);
    out << "\n";
  }

  // member: reserve5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve5, out);
    out << "\n";
  }

  // member: reserve6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve6: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve6, out);
    out << "\n";
  }

  // member: reserve7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve7: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve7, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachFusionFrame & msg, bool use_flow_style = false)
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
  const deva_aeb_msgs::msg::MachFusionFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::MachFusionFrame & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::MachFusionFrame>()
{
  return "deva_aeb_msgs::msg::MachFusionFrame";
}

template<>
inline const char * name<deva_aeb_msgs::msg::MachFusionFrame>()
{
  return "deva_aeb_msgs/msg/MachFusionFrame";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::MachFusionFrame>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::MachFusionFrame>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_aeb_msgs::msg::MachFusionFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__TRAITS_HPP_
