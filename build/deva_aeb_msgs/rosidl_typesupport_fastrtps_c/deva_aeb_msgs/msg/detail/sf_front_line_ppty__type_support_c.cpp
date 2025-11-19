// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__functions.h"
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


// forward declare type support functions


using _SFFrontLinePpty__ros_msg_type = deva_aeb_msgs__msg__SFFrontLinePpty;

static bool _SFFrontLinePpty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFrontLinePpty__ros_msg_type * ros_message = static_cast<const _SFFrontLinePpty__ros_msg_type *>(untyped_ros_message);
  // Field name: drvrpfmncmonqly
  {
    cdr << ros_message->drvrpfmncmonqly;
  }

  // Field name: lanekeepaidqly
  {
    cdr << ros_message->lanekeepaidqly;
  }

  // Field name: trfcjamassiqly
  {
    cdr << ros_message->trfcjamassiqly;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: tunqly
  {
    cdr << ros_message->tunqly;
  }

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: lifetime
  {
    cdr << ros_message->lifetime;
  }

  return true;
}

static bool _SFFrontLinePpty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFrontLinePpty__ros_msg_type * ros_message = static_cast<_SFFrontLinePpty__ros_msg_type *>(untyped_ros_message);
  // Field name: drvrpfmncmonqly
  {
    cdr >> ros_message->drvrpfmncmonqly;
  }

  // Field name: lanekeepaidqly
  {
    cdr >> ros_message->lanekeepaidqly;
  }

  // Field name: trfcjamassiqly
  {
    cdr >> ros_message->trfcjamassiqly;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: tunqly
  {
    cdr >> ros_message->tunqly;
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: lifetime
  {
    cdr >> ros_message->lifetime;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFFrontLinePpty(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFrontLinePpty__ros_msg_type * ros_message = static_cast<const _SFFrontLinePpty__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name drvrpfmncmonqly
  {
    size_t item_size = sizeof(ros_message->drvrpfmncmonqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanekeepaidqly
  {
    size_t item_size = sizeof(ros_message->lanekeepaidqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trfcjamassiqly
  {
    size_t item_size = sizeof(ros_message->trfcjamassiqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tunqly
  {
    size_t item_size = sizeof(ros_message->tunqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lifetime
  {
    size_t item_size = sizeof(ros_message->lifetime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFrontLinePpty__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFFrontLinePpty(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFFrontLinePpty(
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

  // member: drvrpfmncmonqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanekeepaidqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trfcjamassiqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tunqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lifetime
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
    using DataType = deva_aeb_msgs__msg__SFFrontLinePpty;
    is_plain =
      (
      offsetof(DataType, lifetime) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFrontLinePpty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFFrontLinePpty(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFrontLinePpty = {
  "deva_aeb_msgs::msg",
  "SFFrontLinePpty",
  _SFFrontLinePpty__cdr_serialize,
  _SFFrontLinePpty__cdr_deserialize,
  _SFFrontLinePpty__get_serialized_size,
  _SFFrontLinePpty__max_serialized_size
};

static rosidl_message_type_support_t _SFFrontLinePpty__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFrontLinePpty,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFrontLinePpty)() {
  return &_SFFrontLinePpty__type_support;
}

#if defined(__cplusplus)
}
#endif
