// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionTSList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__functions.h"
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

#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__functions.h"  // trafficsign

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTS)();


using _SFFusionTSList__ros_msg_type = deva_aeb_msgs__msg__SFFusionTSList;

static bool _SFFusionTSList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionTSList__ros_msg_type * ros_message = static_cast<const _SFFusionTSList__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr << ros_message->framenum;
  }

  // Field name: reversed
  {
    size_t size = 3;
    auto array_ptr = ros_message->reversed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: trafficsign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTS
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->trafficsign;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: validsize
  {
    cdr << ros_message->validsize;
  }

  return true;
}

static bool _SFFusionTSList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionTSList__ros_msg_type * ros_message = static_cast<_SFFusionTSList__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr >> ros_message->framenum;
  }

  // Field name: reversed
  {
    size_t size = 3;
    auto array_ptr = ros_message->reversed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: trafficsign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTS
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->trafficsign;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: validsize
  {
    cdr >> ros_message->validsize;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionTSList__ros_msg_type * ros_message = static_cast<const _SFFusionTSList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name framenum
  {
    size_t item_size = sizeof(ros_message->framenum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reversed
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reversed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trafficsign
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->trafficsign;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name validsize
  {
    size_t item_size = sizeof(ros_message->validsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionTSList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: framenum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reversed
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trafficsign
  {
    size_t array_size = 8;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionTS(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: validsize
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
    using DataType = deva_aeb_msgs__msg__SFFusionTSList;
    is_plain =
      (
      offsetof(DataType, validsize) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionTSList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFFusionTSList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionTSList = {
  "deva_aeb_msgs::msg",
  "SFFusionTSList",
  _SFFusionTSList__cdr_serialize,
  _SFFusionTSList__cdr_deserialize,
  _SFFusionTSList__get_serialized_size,
  _SFFusionTSList__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionTSList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionTSList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionTSList)() {
  return &_SFFusionTSList__type_support;
}

#if defined(__cplusplus)
}
#endif
