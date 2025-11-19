// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _MachFusionFrame__ros_msg_type = deva_aeb_msgs__msg__MachFusionFrame;

static bool _MachFusionFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MachFusionFrame__ros_msg_type * ros_message = static_cast<const _MachFusionFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: frame_id
  {
    cdr << ros_message->frame_id;
  }

  // Field name: rv_timestamp
  {
    cdr << ros_message->rv_timestamp;
  }

  // Field name: bev_timestamp
  {
    cdr << ros_message->bev_timestamp;
  }

  // Field name: front_radar_timestamp
  {
    cdr << ros_message->front_radar_timestamp;
  }

  // Field name: front_right_radar_timestamp
  {
    cdr << ros_message->front_right_radar_timestamp;
  }

  // Field name: front_left_radar_timestamp
  {
    cdr << ros_message->front_left_radar_timestamp;
  }

  // Field name: back_left_radar_timestamp
  {
    cdr << ros_message->back_left_radar_timestamp;
  }

  // Field name: back_right_radar_timestamp
  {
    cdr << ros_message->back_right_radar_timestamp;
  }

  // Field name: lidar_timestamp
  {
    cdr << ros_message->lidar_timestamp;
  }

  // Field name: ins_timestamp
  {
    cdr << ros_message->ins_timestamp;
  }

  // Field name: rfu2camera_pose
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ego2camera_pose
  {
    size_t size = 7;
    auto array_ptr = ros_message->ego2camera_pose;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu_ego_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->rfu_ego_pose_matirx;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu_imu_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->rfu_imu_pose_matirx;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ego_world_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->ego_world_pose_matirx;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: camera_k_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->camera_k_matrix;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: imu_world_translation
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_world_translation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: imu_world_rotation
  {
    size_t size = 4;
    auto array_ptr = ros_message->imu_world_rotation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front_left
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_left;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front_right
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_right;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back_left
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_left;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back_right
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_right;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vehile_report_time
  {
    cdr << ros_message->vehile_report_time;
  }

  // Field name: reserve1
  {
    cdr << ros_message->reserve1;
  }

  // Field name: reserve2
  {
    cdr << ros_message->reserve2;
  }

  // Field name: reserve3
  {
    cdr << ros_message->reserve3;
  }

  // Field name: reserve4
  {
    cdr << ros_message->reserve4;
  }

  // Field name: reserve5
  {
    cdr << ros_message->reserve5;
  }

  // Field name: reserve6
  {
    cdr << ros_message->reserve6;
  }

  // Field name: reserve7
  {
    cdr << ros_message->reserve7;
  }

  return true;
}

static bool _MachFusionFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MachFusionFrame__ros_msg_type * ros_message = static_cast<_MachFusionFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: frame_id
  {
    cdr >> ros_message->frame_id;
  }

  // Field name: rv_timestamp
  {
    cdr >> ros_message->rv_timestamp;
  }

  // Field name: bev_timestamp
  {
    cdr >> ros_message->bev_timestamp;
  }

  // Field name: front_radar_timestamp
  {
    cdr >> ros_message->front_radar_timestamp;
  }

  // Field name: front_right_radar_timestamp
  {
    cdr >> ros_message->front_right_radar_timestamp;
  }

  // Field name: front_left_radar_timestamp
  {
    cdr >> ros_message->front_left_radar_timestamp;
  }

  // Field name: back_left_radar_timestamp
  {
    cdr >> ros_message->back_left_radar_timestamp;
  }

  // Field name: back_right_radar_timestamp
  {
    cdr >> ros_message->back_right_radar_timestamp;
  }

  // Field name: lidar_timestamp
  {
    cdr >> ros_message->lidar_timestamp;
  }

  // Field name: ins_timestamp
  {
    cdr >> ros_message->ins_timestamp;
  }

  // Field name: rfu2camera_pose
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ego2camera_pose
  {
    size_t size = 7;
    auto array_ptr = ros_message->ego2camera_pose;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu_ego_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->rfu_ego_pose_matirx;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu_imu_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->rfu_imu_pose_matirx;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ego_world_pose_matirx
  {
    size_t size = 16;
    auto array_ptr = ros_message->ego_world_pose_matirx;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: camera_k_matrix
  {
    size_t size = 9;
    auto array_ptr = ros_message->camera_k_matrix;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: imu_world_translation
  {
    size_t size = 3;
    auto array_ptr = ros_message->imu_world_translation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: imu_world_rotation
  {
    size_t size = 4;
    auto array_ptr = ros_message->imu_world_rotation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front_left
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_left;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_front_right
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_right;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back_left
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_left;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rfu2camera_pose_back_right
  {
    size_t size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_right;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vehile_report_time
  {
    cdr >> ros_message->vehile_report_time;
  }

  // Field name: reserve1
  {
    cdr >> ros_message->reserve1;
  }

  // Field name: reserve2
  {
    cdr >> ros_message->reserve2;
  }

  // Field name: reserve3
  {
    cdr >> ros_message->reserve3;
  }

  // Field name: reserve4
  {
    cdr >> ros_message->reserve4;
  }

  // Field name: reserve5
  {
    cdr >> ros_message->reserve5;
  }

  // Field name: reserve6
  {
    cdr >> ros_message->reserve6;
  }

  // Field name: reserve7
  {
    cdr >> ros_message->reserve7;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__MachFusionFrame(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MachFusionFrame__ros_msg_type * ros_message = static_cast<const _MachFusionFrame__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name frame_id
  {
    size_t item_size = sizeof(ros_message->frame_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rv_timestamp
  {
    size_t item_size = sizeof(ros_message->rv_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bev_timestamp
  {
    size_t item_size = sizeof(ros_message->bev_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_radar_timestamp
  {
    size_t item_size = sizeof(ros_message->front_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right_radar_timestamp
  {
    size_t item_size = sizeof(ros_message->front_right_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left_radar_timestamp
  {
    size_t item_size = sizeof(ros_message->front_left_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_left_radar_timestamp
  {
    size_t item_size = sizeof(ros_message->back_left_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_right_radar_timestamp
  {
    size_t item_size = sizeof(ros_message->back_right_radar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lidar_timestamp
  {
    size_t item_size = sizeof(ros_message->lidar_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ins_timestamp
  {
    size_t item_size = sizeof(ros_message->ins_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego2camera_pose
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->ego2camera_pose;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu_ego_pose_matirx
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->rfu_ego_pose_matirx;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu_imu_pose_matirx
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->rfu_imu_pose_matirx;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_world_pose_matirx
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->ego_world_pose_matirx;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_k_matrix
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->camera_k_matrix;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_world_translation
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->imu_world_translation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_world_rotation
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->imu_world_rotation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_front
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_front_left
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_front_right
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_front_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_back
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_back_left
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_left;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfu2camera_pose_back_right
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->rfu2camera_pose_back_right;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehile_report_time
  {
    size_t item_size = sizeof(ros_message->vehile_report_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve1
  {
    size_t item_size = sizeof(ros_message->reserve1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve2
  {
    size_t item_size = sizeof(ros_message->reserve2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve3
  {
    size_t item_size = sizeof(ros_message->reserve3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve4
  {
    size_t item_size = sizeof(ros_message->reserve4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve5
  {
    size_t item_size = sizeof(ros_message->reserve5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve6
  {
    size_t item_size = sizeof(ros_message->reserve6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve7
  {
    size_t item_size = sizeof(ros_message->reserve7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MachFusionFrame__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__MachFusionFrame(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__MachFusionFrame(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: frame_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rv_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bev_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_right_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_left_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: back_left_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: back_right_radar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lidar_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ins_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ego2camera_pose
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu_ego_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu_imu_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ego_world_pose_matirx
  {
    size_t array_size = 16;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: camera_k_matrix
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_world_translation
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_world_rotation
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_front
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_front_left
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_front_right
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_back
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_back_left
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfu2camera_pose_back_right
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehile_report_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve7
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
    using DataType = deva_aeb_msgs__msg__MachFusionFrame;
    is_plain =
      (
      offsetof(DataType, reserve7) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MachFusionFrame__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__MachFusionFrame(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MachFusionFrame = {
  "deva_aeb_msgs::msg",
  "MachFusionFrame",
  _MachFusionFrame__cdr_serialize,
  _MachFusionFrame__cdr_deserialize,
  _MachFusionFrame__get_serialized_size,
  _MachFusionFrame__max_serialized_size
};

static rosidl_message_type_support_t _MachFusionFrame__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MachFusionFrame,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, MachFusionFrame)() {
  return &_MachFusionFrame__type_support;
}

#if defined(__cplusplus)
}
#endif
