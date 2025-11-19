// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_cam_sts__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/mach_cam_sts__struct.h"
#include "deva_function_msgs/msg/detail/mach_cam_sts__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _MachCamSts__ros_msg_type = deva_function_msgs__msg__MachCamSts;

static bool _MachCamSts__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MachCamSts__ros_msg_type * ros_message = static_cast<const _MachCamSts__ros_msg_type *>(untyped_ros_message);
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

  // Field name: trip_reset_sync_req_msg_asdm
  {
    cdr << ros_message->trip_reset_sync_req_msg_asdm;
  }

  // Field name: cam_sts_cam_cam_heatr_actv
  {
    cdr << ros_message->cam_sts_cam_cam_heatr_actv;
  }

  // Field name: cam_sts_cam_frnt_blkd1
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd1;
  }

  // Field name: cam_sts_cam_frnt_blkd2
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd2;
  }

  // Field name: cam_sts_cam_frnt_blkd3
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd3;
  }

  // Field name: cam_sts_cam_frnt_blkd4
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd4;
  }

  // Field name: cam_sts_cam_frnt_blkd5
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd5;
  }

  // Field name: cam_sts_cam_frnt_blkd6
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd6;
  }

  // Field name: cam_sts_cam_frnt_blkd7
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd7;
  }

  // Field name: cam_sts_cam_frnt_blkd8
  {
    cdr << ros_message->cam_sts_cam_frnt_blkd8;
  }

  // Field name: cam_sts_cam_frnt_cal_not_strtd
  {
    cdr << ros_message->cam_sts_cam_frnt_cal_not_strtd;
  }

  // Field name: cam_sts_cam_miss_com
  {
    cdr << ros_message->cam_sts_cam_miss_com;
  }

  // Field name: cam_status0
  {
    cdr << ros_message->cam_status0;
  }

  // Field name: hmi_re_cam_sts0
  {
    cdr << ros_message->hmi_re_cam_sts0;
  }

  // Field name: frnt_side_cam_le_sts0
  {
    cdr << ros_message->frnt_side_cam_le_sts0;
  }

  // Field name: frnt_side_cam_ri_sts0
  {
    cdr << ros_message->frnt_side_cam_ri_sts0;
  }

  // Field name: re_side_cam_le_sts0
  {
    cdr << ros_message->re_side_cam_le_sts0;
  }

  // Field name: re_side_cam_ri_sts0
  {
    cdr << ros_message->re_side_cam_ri_sts0;
  }

  return true;
}

static bool _MachCamSts__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MachCamSts__ros_msg_type * ros_message = static_cast<_MachCamSts__ros_msg_type *>(untyped_ros_message);
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

  // Field name: trip_reset_sync_req_msg_asdm
  {
    cdr >> ros_message->trip_reset_sync_req_msg_asdm;
  }

  // Field name: cam_sts_cam_cam_heatr_actv
  {
    cdr >> ros_message->cam_sts_cam_cam_heatr_actv;
  }

  // Field name: cam_sts_cam_frnt_blkd1
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd1;
  }

  // Field name: cam_sts_cam_frnt_blkd2
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd2;
  }

  // Field name: cam_sts_cam_frnt_blkd3
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd3;
  }

  // Field name: cam_sts_cam_frnt_blkd4
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd4;
  }

  // Field name: cam_sts_cam_frnt_blkd5
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd5;
  }

  // Field name: cam_sts_cam_frnt_blkd6
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd6;
  }

  // Field name: cam_sts_cam_frnt_blkd7
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd7;
  }

  // Field name: cam_sts_cam_frnt_blkd8
  {
    cdr >> ros_message->cam_sts_cam_frnt_blkd8;
  }

  // Field name: cam_sts_cam_frnt_cal_not_strtd
  {
    cdr >> ros_message->cam_sts_cam_frnt_cal_not_strtd;
  }

  // Field name: cam_sts_cam_miss_com
  {
    cdr >> ros_message->cam_sts_cam_miss_com;
  }

  // Field name: cam_status0
  {
    cdr >> ros_message->cam_status0;
  }

  // Field name: hmi_re_cam_sts0
  {
    cdr >> ros_message->hmi_re_cam_sts0;
  }

  // Field name: frnt_side_cam_le_sts0
  {
    cdr >> ros_message->frnt_side_cam_le_sts0;
  }

  // Field name: frnt_side_cam_ri_sts0
  {
    cdr >> ros_message->frnt_side_cam_ri_sts0;
  }

  // Field name: re_side_cam_le_sts0
  {
    cdr >> ros_message->re_side_cam_le_sts0;
  }

  // Field name: re_side_cam_ri_sts0
  {
    cdr >> ros_message->re_side_cam_ri_sts0;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__MachCamSts(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MachCamSts__ros_msg_type * ros_message = static_cast<const _MachCamSts__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name trip_reset_sync_req_msg_asdm
  {
    size_t item_size = sizeof(ros_message->trip_reset_sync_req_msg_asdm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_cam_heatr_actv
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_cam_heatr_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd1
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd2
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd3
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd4
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd5
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd6
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd7
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_blkd8
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_blkd8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_frnt_cal_not_strtd
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_frnt_cal_not_strtd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_sts_cam_miss_com
  {
    size_t item_size = sizeof(ros_message->cam_sts_cam_miss_com);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cam_status0
  {
    size_t item_size = sizeof(ros_message->cam_status0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_re_cam_sts0
  {
    size_t item_size = sizeof(ros_message->hmi_re_cam_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message->frnt_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frnt_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message->frnt_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name re_side_cam_le_sts0
  {
    size_t item_size = sizeof(ros_message->re_side_cam_le_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name re_side_cam_ri_sts0
  {
    size_t item_size = sizeof(ros_message->re_side_cam_ri_sts0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MachCamSts__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__MachCamSts(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__MachCamSts(
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
  // member: trip_reset_sync_req_msg_asdm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: cam_sts_cam_cam_heatr_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_blkd8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_frnt_cal_not_strtd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_sts_cam_miss_com
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cam_status0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_re_cam_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frnt_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: re_side_cam_le_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: re_side_cam_ri_sts0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs__msg__MachCamSts;
    is_plain =
      (
      offsetof(DataType, re_side_cam_ri_sts0) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MachCamSts__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__MachCamSts(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MachCamSts = {
  "deva_function_msgs::msg",
  "MachCamSts",
  _MachCamSts__cdr_serialize,
  _MachCamSts__cdr_deserialize,
  _MachCamSts__get_serialized_size,
  _MachCamSts__max_serialized_size
};

static rosidl_message_type_support_t _MachCamSts__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MachCamSts,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, MachCamSts)() {
  return &_MachCamSts__type_support;
}

#if defined(__cplusplus)
}
#endif
