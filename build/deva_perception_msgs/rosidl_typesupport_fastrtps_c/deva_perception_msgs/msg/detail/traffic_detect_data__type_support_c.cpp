// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_detect_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__functions.h"
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
#include "deva_perception_msgs/msg/detail/e2e_result__functions.h"  // e2eobjects
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"  // f120trafficobjects, f30trafficobjects

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();
size_t get_serialized_size_deva_perception_msgs__msg__E2eResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__E2eResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eResult)();
size_t get_serialized_size_deva_perception_msgs__msg__TrafficObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_perception_msgs__msg__TrafficObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject)();


using _TrafficDetectData__ros_msg_type = deva_perception_msgs__msg__TrafficDetectData;

static bool _TrafficDetectData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficDetectData__ros_msg_type * ros_message = static_cast<const _TrafficDetectData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: framenum
  {
    cdr << ros_message->framenum;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: abs_vel_x
  {
    cdr << ros_message->abs_vel_x;
  }

  // Field name: abs_acc_x
  {
    cdr << ros_message->abs_acc_x;
  }

  // Field name: vel_motion
  {
    cdr << ros_message->vel_motion;
  }

  // Field name: acc_motion
  {
    cdr << ros_message->acc_motion;
  }

  // Field name: f120_object_num
  {
    cdr << ros_message->f120_object_num;
  }

  // Field name: f30_object_num
  {
    cdr << ros_message->f30_object_num;
  }

  // Field name: f120trafficobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject
      )()->data);
    size_t size = 64;
    auto array_ptr = ros_message->f120trafficobjects;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: f30trafficobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject
      )()->data);
    size_t size = 64;
    auto array_ptr = ros_message->f30trafficobjects;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: e2eobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eResult
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->e2eobjects, cdr))
    {
      return false;
    }
  }

  // Field name: time_of_day
  {
    cdr << ros_message->time_of_day;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TrafficDetectData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficDetectData__ros_msg_type * ros_message = static_cast<_TrafficDetectData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: framenum
  {
    cdr >> ros_message->framenum;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: abs_vel_x
  {
    cdr >> ros_message->abs_vel_x;
  }

  // Field name: abs_acc_x
  {
    cdr >> ros_message->abs_acc_x;
  }

  // Field name: vel_motion
  {
    cdr >> ros_message->vel_motion;
  }

  // Field name: acc_motion
  {
    cdr >> ros_message->acc_motion;
  }

  // Field name: f120_object_num
  {
    cdr >> ros_message->f120_object_num;
  }

  // Field name: f30_object_num
  {
    cdr >> ros_message->f30_object_num;
  }

  // Field name: f120trafficobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject
      )()->data);
    size_t size = 64;
    auto array_ptr = ros_message->f120trafficobjects;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: f30trafficobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficObject
      )()->data);
    size_t size = 64;
    auto array_ptr = ros_message->f30trafficobjects;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: e2eobjects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, E2eResult
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->e2eobjects))
    {
      return false;
    }
  }

  // Field name: time_of_day
  {
    cdr >> ros_message->time_of_day;
  }

  // Field name: reserved
  {
    size_t size = 2;
    auto array_ptr = ros_message->reserved;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__TrafficDetectData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficDetectData__ros_msg_type * ros_message = static_cast<const _TrafficDetectData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name framenum
  {
    size_t item_size = sizeof(ros_message->framenum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_vel_x
  {
    size_t item_size = sizeof(ros_message->abs_vel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_acc_x
  {
    size_t item_size = sizeof(ros_message->abs_acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_motion
  {
    size_t item_size = sizeof(ros_message->vel_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_motion
  {
    size_t item_size = sizeof(ros_message->acc_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f120_object_num
  {
    size_t item_size = sizeof(ros_message->f120_object_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f30_object_num
  {
    size_t item_size = sizeof(ros_message->f30_object_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f120trafficobjects
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->f120trafficobjects;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficObject(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name f30trafficobjects
  {
    size_t array_size = 64;
    auto array_ptr = ros_message->f30trafficobjects;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_perception_msgs__msg__TrafficObject(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name e2eobjects

  current_alignment += get_serialized_size_deva_perception_msgs__msg__E2eResult(
    &(ros_message->e2eobjects), current_alignment);
  // field.name time_of_day
  {
    size_t item_size = sizeof(ros_message->time_of_day);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->reserved;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficDetectData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__TrafficDetectData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__TrafficDetectData(
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
  // member: framenum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: abs_vel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: abs_acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f120_object_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f30_object_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f120trafficobjects
  {
    size_t array_size = 64;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: f30trafficobjects
  {
    size_t array_size = 64;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__TrafficObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: e2eobjects
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_perception_msgs__msg__E2eResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: time_of_day
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs__msg__TrafficDetectData;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrafficDetectData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__TrafficDetectData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficDetectData = {
  "deva_perception_msgs::msg",
  "TrafficDetectData",
  _TrafficDetectData__cdr_serialize,
  _TrafficDetectData__cdr_deserialize,
  _TrafficDetectData__get_serialized_size,
  _TrafficDetectData__max_serialized_size
};

static rosidl_message_type_support_t _TrafficDetectData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficDetectData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, TrafficDetectData)() {
  return &_TrafficDetectData__type_support;
}

#if defined(__cplusplus)
}
#endif
