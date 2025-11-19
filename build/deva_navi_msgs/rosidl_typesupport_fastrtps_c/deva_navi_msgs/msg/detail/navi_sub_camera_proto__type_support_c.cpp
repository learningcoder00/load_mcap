// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__struct.h"
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // speed
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // speed

// forward declare type support functions


using _NaviSubCameraProto__ros_msg_type = deva_navi_msgs__msg__NaviSubCameraProto;

static bool _NaviSubCameraProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NaviSubCameraProto__ros_msg_type * ros_message = static_cast<const _NaviSubCameraProto__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_type
  {
    cdr << ros_message->sub_type;
  }

  // Field name: make_sound
  {
    cdr << ros_message->make_sound;
  }

  // Field name: camera_id
  {
    cdr << ros_message->camera_id;
  }

  // Field name: busway_time_enable
  {
    cdr << ros_message->busway_time_enable;
  }

  // Field name: penalty
  {
    cdr << ros_message->penalty;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: is_new
  {
    cdr << (ros_message->is_new ? true : false);
  }

  // Field name: is_variable_speed
  {
    cdr << (ros_message->is_variable_speed ? true : false);
  }

  // Field name: is_match
  {
    cdr << (ros_message->is_match ? true : false);
  }

  // Field name: is_special
  {
    cdr << (ros_message->is_special ? true : false);
  }

  // Field name: speed
  {
    size_t size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _NaviSubCameraProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NaviSubCameraProto__ros_msg_type * ros_message = static_cast<_NaviSubCameraProto__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_type
  {
    cdr >> ros_message->sub_type;
  }

  // Field name: make_sound
  {
    cdr >> ros_message->make_sound;
  }

  // Field name: camera_id
  {
    cdr >> ros_message->camera_id;
  }

  // Field name: busway_time_enable
  {
    cdr >> ros_message->busway_time_enable;
  }

  // Field name: penalty
  {
    cdr >> ros_message->penalty;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  // Field name: is_new
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_new = tmp ? true : false;
  }

  // Field name: is_variable_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_variable_speed = tmp ? true : false;
  }

  // Field name: is_match
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_match = tmp ? true : false;
  }

  // Field name: is_special
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_special = tmp ? true : false;
  }

  // Field name: speed
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->speed.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->speed);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->speed, size)) {
      fprintf(stderr, "failed to create array for field 'speed'");
      return false;
    }
    auto array_ptr = ros_message->speed.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NaviSubCameraProto__ros_msg_type * ros_message = static_cast<const _NaviSubCameraProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sub_type
  {
    size_t item_size = sizeof(ros_message->sub_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name make_sound
  {
    size_t item_size = sizeof(ros_message->make_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_id
  {
    size_t item_size = sizeof(ros_message->camera_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name busway_time_enable
  {
    size_t item_size = sizeof(ros_message->busway_time_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name penalty
  {
    size_t item_size = sizeof(ros_message->penalty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_new
  {
    size_t item_size = sizeof(ros_message->is_new);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_variable_speed
  {
    size_t item_size = sizeof(ros_message->is_variable_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_match
  {
    size_t item_size = sizeof(ros_message->is_match);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_special
  {
    size_t item_size = sizeof(ros_message->is_special);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t array_size = ros_message->speed.size;
    auto array_ptr = ros_message->speed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NaviSubCameraProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
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

  // member: sub_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: make_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: camera_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: busway_time_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: penalty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_new
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_variable_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_match
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_special
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__NaviSubCameraProto;
    is_plain =
      (
      offsetof(DataType, speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NaviSubCameraProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__NaviSubCameraProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NaviSubCameraProto = {
  "deva_navi_msgs::msg",
  "NaviSubCameraProto",
  _NaviSubCameraProto__cdr_serialize,
  _NaviSubCameraProto__cdr_deserialize,
  _NaviSubCameraProto__get_serialized_size,
  _NaviSubCameraProto__max_serialized_size
};

static rosidl_message_type_support_t _NaviSubCameraProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NaviSubCameraProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviSubCameraProto)() {
  return &_NaviSubCameraProto__type_support;
}

#if defined(__cplusplus)
}
#endif
