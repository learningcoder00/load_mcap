// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/virtual_line_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"
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

#include "environment_model_msgs/msg/detail/pair_double__functions.h"  // e2e_pair
#include "environment_model_msgs/msg/detail/pair_int__functions.h"  // ori_ids
#include "rosidl_runtime_c/string.h"  // exit_lane_id
#include "rosidl_runtime_c/string_functions.h"  // exit_lane_id

// forward declare type support functions
size_t get_serialized_size_environment_model_msgs__msg__PairDouble(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairDouble(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDouble)();
size_t get_serialized_size_environment_model_msgs__msg__PairInt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__PairInt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt)();


using _VirtualLineInfo__ros_msg_type = environment_model_msgs__msg__VirtualLineInfo;

static bool _VirtualLineInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VirtualLineInfo__ros_msg_type * ros_message = static_cast<const _VirtualLineInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: enum_vlane_type
  {
    cdr << ros_message->enum_vlane_type;
  }

  // Field name: virtual_score
  {
    cdr << ros_message->virtual_score;
  }

  // Field name: ori_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ori_ids, cdr))
    {
      return false;
    }
  }

  // Field name: e2e_pair
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDouble
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->e2e_pair, cdr))
    {
      return false;
    }
  }

  // Field name: exit_lane_id
  {
    const rosidl_runtime_c__String * str = &ros_message->exit_lane_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: exit_seq_id
  {
    cdr << ros_message->exit_seq_id;
  }

  return true;
}

static bool _VirtualLineInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VirtualLineInfo__ros_msg_type * ros_message = static_cast<_VirtualLineInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: enum_vlane_type
  {
    cdr >> ros_message->enum_vlane_type;
  }

  // Field name: virtual_score
  {
    cdr >> ros_message->virtual_score;
  }

  // Field name: ori_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairInt
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ori_ids))
    {
      return false;
    }
  }

  // Field name: e2e_pair
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairDouble
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->e2e_pair))
    {
      return false;
    }
  }

  // Field name: exit_lane_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->exit_lane_id.data) {
      rosidl_runtime_c__String__init(&ros_message->exit_lane_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->exit_lane_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'exit_lane_id'\n");
      return false;
    }
  }

  // Field name: exit_seq_id
  {
    cdr >> ros_message->exit_seq_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VirtualLineInfo__ros_msg_type * ros_message = static_cast<const _VirtualLineInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enum_vlane_type
  {
    size_t item_size = sizeof(ros_message->enum_vlane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name virtual_score
  {
    size_t item_size = sizeof(ros_message->virtual_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori_ids

  current_alignment += get_serialized_size_environment_model_msgs__msg__PairInt(
    &(ros_message->ori_ids), current_alignment);
  // field.name e2e_pair

  current_alignment += get_serialized_size_environment_model_msgs__msg__PairDouble(
    &(ros_message->e2e_pair), current_alignment);
  // field.name exit_lane_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->exit_lane_id.size + 1);
  // field.name exit_seq_id
  {
    size_t item_size = sizeof(ros_message->exit_seq_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VirtualLineInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
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

  // member: enum_vlane_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: virtual_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ori_ids
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__PairInt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: e2e_pair
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__PairDouble(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: exit_lane_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: exit_seq_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_model_msgs__msg__VirtualLineInfo;
    is_plain =
      (
      offsetof(DataType, exit_seq_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VirtualLineInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__VirtualLineInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VirtualLineInfo = {
  "environment_model_msgs::msg",
  "VirtualLineInfo",
  _VirtualLineInfo__cdr_serialize,
  _VirtualLineInfo__cdr_deserialize,
  _VirtualLineInfo__get_serialized_size,
  _VirtualLineInfo__max_serialized_size
};

static rosidl_message_type_support_t _VirtualLineInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VirtualLineInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, VirtualLineInfo)() {
  return &_VirtualLineInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
