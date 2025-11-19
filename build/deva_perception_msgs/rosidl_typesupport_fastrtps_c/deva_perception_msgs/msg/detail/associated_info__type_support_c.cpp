// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/associated_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/associated_info__struct.h"
#include "deva_perception_msgs/msg/detail/associated_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // associated_id
#include "rosidl_runtime_c/string_functions.h"  // associated_id

// forward declare type support functions


using _AssociatedInfo__ros_msg_type = deva_perception_msgs__msg__AssociatedInfo;

static bool _AssociatedInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AssociatedInfo__ros_msg_type * ros_message = static_cast<const _AssociatedInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: associated_type
  {
    cdr << ros_message->associated_type;
  }

  // Field name: associated_id
  {
    const rosidl_runtime_c__String * str = &ros_message->associated_id;
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

  return true;
}

static bool _AssociatedInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AssociatedInfo__ros_msg_type * ros_message = static_cast<_AssociatedInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: associated_type
  {
    cdr >> ros_message->associated_type;
  }

  // Field name: associated_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->associated_id.data) {
      rosidl_runtime_c__String__init(&ros_message->associated_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->associated_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'associated_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__AssociatedInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AssociatedInfo__ros_msg_type * ros_message = static_cast<const _AssociatedInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name associated_type
  {
    size_t item_size = sizeof(ros_message->associated_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name associated_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->associated_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AssociatedInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__AssociatedInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__AssociatedInfo(
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

  // member: associated_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: associated_id
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs__msg__AssociatedInfo;
    is_plain =
      (
      offsetof(DataType, associated_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AssociatedInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__AssociatedInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AssociatedInfo = {
  "deva_perception_msgs::msg",
  "AssociatedInfo",
  _AssociatedInfo__cdr_serialize,
  _AssociatedInfo__cdr_deserialize,
  _AssociatedInfo__get_serialized_size,
  _AssociatedInfo__max_serialized_size
};

static rosidl_message_type_support_t _AssociatedInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AssociatedInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, AssociatedInfo)() {
  return &_AssociatedInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
