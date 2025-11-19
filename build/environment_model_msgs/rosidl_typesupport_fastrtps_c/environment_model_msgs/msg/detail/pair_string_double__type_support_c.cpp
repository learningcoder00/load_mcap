// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/PairStringDouble.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/pair_string_double__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/pair_string_double__struct.h"
#include "environment_model_msgs/msg/detail/pair_string_double__functions.h"
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

#include "rosidl_runtime_c/string.h"  // first
#include "rosidl_runtime_c/string_functions.h"  // first

// forward declare type support functions


using _PairStringDouble__ros_msg_type = environment_model_msgs__msg__PairStringDouble;

static bool _PairStringDouble__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PairStringDouble__ros_msg_type * ros_message = static_cast<const _PairStringDouble__ros_msg_type *>(untyped_ros_message);
  // Field name: first
  {
    const rosidl_runtime_c__String * str = &ros_message->first;
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

  // Field name: second
  {
    cdr << ros_message->second;
  }

  return true;
}

static bool _PairStringDouble__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PairStringDouble__ros_msg_type * ros_message = static_cast<_PairStringDouble__ros_msg_type *>(untyped_ros_message);
  // Field name: first
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->first.data) {
      rosidl_runtime_c__String__init(&ros_message->first);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->first,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'first'\n");
      return false;
    }
  }

  // Field name: second
  {
    cdr >> ros_message->second;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__PairStringDouble(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PairStringDouble__ros_msg_type * ros_message = static_cast<const _PairStringDouble__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name first
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first.size + 1);
  // field.name second
  {
    size_t item_size = sizeof(ros_message->second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PairStringDouble__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__PairStringDouble(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__PairStringDouble(
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

  // member: first
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
  // member: second
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
    using DataType = environment_model_msgs__msg__PairStringDouble;
    is_plain =
      (
      offsetof(DataType, second) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PairStringDouble__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__PairStringDouble(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PairStringDouble = {
  "environment_model_msgs::msg",
  "PairStringDouble",
  _PairStringDouble__cdr_serialize,
  _PairStringDouble__cdr_deserialize,
  _PairStringDouble__get_serialized_size,
  _PairStringDouble__max_serialized_size
};

static rosidl_message_type_support_t _PairStringDouble__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PairStringDouble,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, PairStringDouble)() {
  return &_PairStringDouble__type_support;
}

#if defined(__cplusplus)
}
#endif
