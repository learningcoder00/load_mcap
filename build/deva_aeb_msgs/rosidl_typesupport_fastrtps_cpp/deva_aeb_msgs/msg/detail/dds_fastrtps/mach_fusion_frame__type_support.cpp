// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_aeb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::MachFusionFrame & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: frame_id
  cdr << ros_message.frame_id;
  // Member: rv_timestamp
  cdr << ros_message.rv_timestamp;
  // Member: bev_timestamp
  cdr << ros_message.bev_timestamp;
  // Member: front_radar_timestamp
  cdr << ros_message.front_radar_timestamp;
  // Member: front_right_radar_timestamp
  cdr << ros_message.front_right_radar_timestamp;
  // Member: front_left_radar_timestamp
  cdr << ros_message.front_left_radar_timestamp;
  // Member: back_left_radar_timestamp
  cdr << ros_message.back_left_radar_timestamp;
  // Member: back_right_radar_timestamp
  cdr << ros_message.back_right_radar_timestamp;
  // Member: lidar_timestamp
  cdr << ros_message.lidar_timestamp;
  // Member: ins_timestamp
  cdr << ros_message.ins_timestamp;
  // Member: rfu2camera_pose
  {
    cdr << ros_message.rfu2camera_pose;
  }
  // Member: ego2camera_pose
  {
    cdr << ros_message.ego2camera_pose;
  }
  // Member: rfu_ego_pose_matirx
  {
    cdr << ros_message.rfu_ego_pose_matirx;
  }
  // Member: rfu_imu_pose_matirx
  {
    cdr << ros_message.rfu_imu_pose_matirx;
  }
  // Member: ego_world_pose_matirx
  {
    cdr << ros_message.ego_world_pose_matirx;
  }
  // Member: camera_k_matrix
  {
    cdr << ros_message.camera_k_matrix;
  }
  // Member: imu_world_translation
  {
    cdr << ros_message.imu_world_translation;
  }
  // Member: imu_world_rotation
  {
    cdr << ros_message.imu_world_rotation;
  }
  // Member: rfu2camera_pose_front
  {
    cdr << ros_message.rfu2camera_pose_front;
  }
  // Member: rfu2camera_pose_front_left
  {
    cdr << ros_message.rfu2camera_pose_front_left;
  }
  // Member: rfu2camera_pose_front_right
  {
    cdr << ros_message.rfu2camera_pose_front_right;
  }
  // Member: rfu2camera_pose_back
  {
    cdr << ros_message.rfu2camera_pose_back;
  }
  // Member: rfu2camera_pose_back_left
  {
    cdr << ros_message.rfu2camera_pose_back_left;
  }
  // Member: rfu2camera_pose_back_right
  {
    cdr << ros_message.rfu2camera_pose_back_right;
  }
  // Member: vehile_report_time
  cdr << ros_message.vehile_report_time;
  // Member: reserve1
  cdr << ros_message.reserve1;
  // Member: reserve2
  cdr << ros_message.reserve2;
  // Member: reserve3
  cdr << ros_message.reserve3;
  // Member: reserve4
  cdr << ros_message.reserve4;
  // Member: reserve5
  cdr << ros_message.reserve5;
  // Member: reserve6
  cdr << ros_message.reserve6;
  // Member: reserve7
  cdr << ros_message.reserve7;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::MachFusionFrame & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: frame_id
  cdr >> ros_message.frame_id;

  // Member: rv_timestamp
  cdr >> ros_message.rv_timestamp;

  // Member: bev_timestamp
  cdr >> ros_message.bev_timestamp;

  // Member: front_radar_timestamp
  cdr >> ros_message.front_radar_timestamp;

  // Member: front_right_radar_timestamp
  cdr >> ros_message.front_right_radar_timestamp;

  // Member: front_left_radar_timestamp
  cdr >> ros_message.front_left_radar_timestamp;

  // Member: back_left_radar_timestamp
  cdr >> ros_message.back_left_radar_timestamp;

  // Member: back_right_radar_timestamp
  cdr >> ros_message.back_right_radar_timestamp;

  // Member: lidar_timestamp
  cdr >> ros_message.lidar_timestamp;

  // Member: ins_timestamp
  cdr >> ros_message.ins_timestamp;

  // Member: rfu2camera_pose
  {
    cdr >> ros_message.rfu2camera_pose;
  }

  // Member: ego2camera_pose
  {
    cdr >> ros_message.ego2camera_pose;
  }

  // Member: rfu_ego_pose_matirx
  {
    cdr >> ros_message.rfu_ego_pose_matirx;
  }

  // Member: rfu_imu_pose_matirx
  {
    cdr >> ros_message.rfu_imu_pose_matirx;
  }

  // Member: ego_world_pose_matirx
  {
    cdr >> ros_message.ego_world_pose_matirx;
  }

  // Member: camera_k_matrix
  {
    cdr >> ros_message.camera_k_matrix;
  }

  // Member: imu_world_translation
  {
    cdr >> ros_message.imu_world_translation;
  }

  // Member: imu_world_rotation
  {
    cdr >> ros_message.imu_world_rotation;
  }

  // Member: rfu2camera_pose_front
  {
    cdr >> ros_message.rfu2camera_pose_front;
  }

  // Member: rfu2camera_pose_front_left
  {
    cdr >> ros_message.rfu2camera_pose_front_left;
  }

  // Member: rfu2camera_pose_front_right
  {
    cdr >> ros_message.rfu2camera_pose_front_right;
  }

  // Member: rfu2camera_pose_back
  {
    cdr >> ros_message.rfu2camera_pose_back;
  }

  // Member: rfu2camera_pose_back_left
  {
    cdr >> ros_message.rfu2camera_pose_back_left;
  }

  // Member: rfu2camera_pose_back_right
  {
    cdr >> ros_message.rfu2camera_pose_back_right;
  }

  // Member: vehile_report_time
  cdr >> ros_message.vehile_report_time;

  // Member: reserve1
  cdr >> ros_message.reserve1;

  // Member: reserve2
  cdr >> ros_message.reserve2;

  // Member: reserve3
  cdr >> ros_message.reserve3;

  // Member: reserve4
  cdr >> ros_message.reserve4;

  // Member: reserve5
  cdr >> ros_message.reserve5;

  // Member: reserve6
  cdr >> ros_message.reserve6;

  // Member: reserve7
  cdr >> ros_message.reserve7;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::MachFusionFrame & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: frame_id
  {
    size_t item_size = sizeof(ros_message.frame_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rv_timestamp
  {
    size_t item_size = sizeof(ros_message.rv_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bev_timestamp
  {
    size_t item_size = sizeof(ros_message.bev_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_radar_timestamp
  {
    size_t item_size = sizeof(ros_message.front_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_right_radar_timestamp
  {
    size_t item_size = sizeof(ros_message.front_right_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_left_radar_timestamp
  {
    size_t item_size = sizeof(ros_message.front_left_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_left_radar_timestamp
  {
    size_t item_size = sizeof(ros_message.back_left_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_right_radar_timestamp
  {
    size_t item_size = sizeof(ros_message.back_right_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar_timestamp
  {
    size_t item_size = sizeof(ros_message.lidar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ins_timestamp
  {
    size_t item_size = sizeof(ros_message.ins_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego2camera_pose
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.ego2camera_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu_ego_pose_matirx
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.rfu_ego_pose_matirx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu_imu_pose_matirx
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.rfu_imu_pose_matirx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego_world_pose_matirx
  {
    size_t array_size = 16;
    size_t item_size = sizeof(ros_message.ego_world_pose_matirx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_k_matrix
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.camera_k_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_world_translation
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.imu_world_translation[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_world_rotation
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.imu_world_rotation[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_front
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_front[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_front_left
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_front_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_front_right
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_front_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_back
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_back[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_back_left
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_back_left[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rfu2camera_pose_back_right
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.rfu2camera_pose_back_right[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehile_report_time
  {
    size_t item_size = sizeof(ros_message.vehile_report_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve1
  {
    size_t item_size = sizeof(ros_message.reserve1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve2
  {
    size_t item_size = sizeof(ros_message.reserve2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve3
  {
    size_t item_size = sizeof(ros_message.reserve3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve4
  {
    size_t item_size = sizeof(ros_message.reserve4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve5
  {
    size_t item_size = sizeof(ros_message.reserve5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve6
  {
    size_t item_size = sizeof(ros_message.reserve6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve7
  {
    size_t item_size = sizeof(ros_message.reserve7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_MachFusionFrame(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: frame_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rv_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bev_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_right_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: front_left_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: back_left_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: back_right_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lidar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ins_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ego2camera_pose
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu_ego_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu_imu_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ego_world_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: camera_k_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_world_translation
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_world_rotation
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_front
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_front_left
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_front_right
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_back
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_back_left
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rfu2camera_pose_back_right
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vehile_report_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reserve7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs::msg::MachFusionFrame;
    is_plain =
      (
      offsetof(DataType, reserve7) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MachFusionFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::MachFusionFrame *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MachFusionFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::MachFusionFrame *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MachFusionFrame__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::MachFusionFrame *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MachFusionFrame__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MachFusionFrame(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MachFusionFrame__callbacks = {
  "deva_aeb_msgs::msg",
  "MachFusionFrame",
  _MachFusionFrame__cdr_serialize,
  _MachFusionFrame__cdr_deserialize,
  _MachFusionFrame__get_serialized_size,
  _MachFusionFrame__max_serialized_size
};

static rosidl_message_type_support_t _MachFusionFrame__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MachFusionFrame__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::MachFusionFrame>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_MachFusionFrame__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, MachFusionFrame)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_MachFusionFrame__handle;
}

#ifdef __cplusplus
}
#endif
