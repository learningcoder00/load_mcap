// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__functions.h"
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


using _SFCrosswalk__ros_msg_type = deva_aeb_msgs__msg__SFCrosswalk;

static bool _SFCrosswalk__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFCrosswalk__ros_msg_type * ros_message = static_cast<const _SFCrosswalk__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: lupointposlgt
  {
    cdr << ros_message->lupointposlgt;
  }

  // Field name: lupointposlat
  {
    cdr << ros_message->lupointposlat;
  }

  // Field name: rupointposlgt
  {
    cdr << ros_message->rupointposlgt;
  }

  // Field name: rupointposlat
  {
    cdr << ros_message->rupointposlat;
  }

  // Field name: rdpointposlgt
  {
    cdr << ros_message->rdpointposlgt;
  }

  // Field name: rdpointposlat
  {
    cdr << ros_message->rdpointposlat;
  }

  // Field name: ldpointposlgt
  {
    cdr << ros_message->ldpointposlgt;
  }

  // Field name: ldpointposlat
  {
    cdr << ros_message->ldpointposlat;
  }

  // Field name: confi
  {
    cdr << ros_message->confi;
  }

  // Field name: reserved
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SFCrosswalk__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFCrosswalk__ros_msg_type * ros_message = static_cast<_SFCrosswalk__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: lupointposlgt
  {
    cdr >> ros_message->lupointposlgt;
  }

  // Field name: lupointposlat
  {
    cdr >> ros_message->lupointposlat;
  }

  // Field name: rupointposlgt
  {
    cdr >> ros_message->rupointposlgt;
  }

  // Field name: rupointposlat
  {
    cdr >> ros_message->rupointposlat;
  }

  // Field name: rdpointposlgt
  {
    cdr >> ros_message->rdpointposlgt;
  }

  // Field name: rdpointposlat
  {
    cdr >> ros_message->rdpointposlat;
  }

  // Field name: ldpointposlgt
  {
    cdr >> ros_message->ldpointposlgt;
  }

  // Field name: ldpointposlat
  {
    cdr >> ros_message->ldpointposlat;
  }

  // Field name: confi
  {
    cdr >> ros_message->confi;
  }

  // Field name: reserved
  {
    size_t size = 3;
    auto array_ptr = ros_message->reserved;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFCrosswalk(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFCrosswalk__ros_msg_type * ros_message = static_cast<const _SFCrosswalk__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lupointposlgt
  {
    size_t item_size = sizeof(ros_message->lupointposlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lupointposlat
  {
    size_t item_size = sizeof(ros_message->lupointposlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rupointposlgt
  {
    size_t item_size = sizeof(ros_message->rupointposlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rupointposlat
  {
    size_t item_size = sizeof(ros_message->rupointposlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rdpointposlgt
  {
    size_t item_size = sizeof(ros_message->rdpointposlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rdpointposlat
  {
    size_t item_size = sizeof(ros_message->rdpointposlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ldpointposlgt
  {
    size_t item_size = sizeof(ros_message->ldpointposlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ldpointposlat
  {
    size_t item_size = sizeof(ros_message->ldpointposlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confi
  {
    size_t item_size = sizeof(ros_message->confi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->reserved;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFCrosswalk__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFCrosswalk(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFCrosswalk(
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

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lupointposlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lupointposlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rupointposlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rupointposlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rdpointposlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rdpointposlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ldpointposlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ldpointposlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: confi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs__msg__SFCrosswalk;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFCrosswalk__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFCrosswalk(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFCrosswalk = {
  "deva_aeb_msgs::msg",
  "SFCrosswalk",
  _SFCrosswalk__cdr_serialize,
  _SFCrosswalk__cdr_deserialize,
  _SFCrosswalk__get_serialized_size,
  _SFCrosswalk__max_serialized_size
};

static rosidl_message_type_support_t _SFCrosswalk__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFCrosswalk,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFCrosswalk)() {
  return &_SFCrosswalk__type_support;
}

#if defined(__cplusplus)
}
#endif
