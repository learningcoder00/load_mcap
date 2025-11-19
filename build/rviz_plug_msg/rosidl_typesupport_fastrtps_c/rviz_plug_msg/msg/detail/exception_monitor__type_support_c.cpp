// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice
#include "rviz_plug_msg/msg/detail/exception_monitor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rviz_plug_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rviz_plug_msg/msg/detail/exception_monitor__struct.h"
#include "rviz_plug_msg/msg/detail/exception_monitor__functions.h"
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

#include "rosidl_runtime_c/string.h"  // exception_content
#include "rosidl_runtime_c/string_functions.h"  // exception_content

// forward declare type support functions


using _ExceptionMonitor__ros_msg_type = rviz_plug_msg__msg__ExceptionMonitor;

static bool _ExceptionMonitor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ExceptionMonitor__ros_msg_type * ros_message = static_cast<const _ExceptionMonitor__ros_msg_type *>(untyped_ros_message);
  // Field name: exception_content
  {
    size_t size = ros_message->exception_content.size;
    auto array_ptr = ros_message->exception_content.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _ExceptionMonitor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ExceptionMonitor__ros_msg_type * ros_message = static_cast<_ExceptionMonitor__ros_msg_type *>(untyped_ros_message);
  // Field name: exception_content
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

    if (ros_message->exception_content.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->exception_content);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->exception_content, size)) {
      fprintf(stderr, "failed to create array for field 'exception_content'");
      return false;
    }
    auto array_ptr = ros_message->exception_content.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'exception_content'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_plug_msg
size_t get_serialized_size_rviz_plug_msg__msg__ExceptionMonitor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExceptionMonitor__ros_msg_type * ros_message = static_cast<const _ExceptionMonitor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name exception_content
  {
    size_t array_size = ros_message->exception_content.size;
    auto array_ptr = ros_message->exception_content.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ExceptionMonitor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rviz_plug_msg__msg__ExceptionMonitor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rviz_plug_msg
size_t max_serialized_size_rviz_plug_msg__msg__ExceptionMonitor(
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

  // member: exception_content
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
    using DataType = rviz_plug_msg__msg__ExceptionMonitor;
    is_plain =
      (
      offsetof(DataType, exception_content) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ExceptionMonitor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rviz_plug_msg__msg__ExceptionMonitor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExceptionMonitor = {
  "rviz_plug_msg::msg",
  "ExceptionMonitor",
  _ExceptionMonitor__cdr_serialize,
  _ExceptionMonitor__cdr_deserialize,
  _ExceptionMonitor__get_serialized_size,
  _ExceptionMonitor__max_serialized_size
};

static rosidl_message_type_support_t _ExceptionMonitor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExceptionMonitor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rviz_plug_msg, msg, ExceptionMonitor)() {
  return &_ExceptionMonitor__type_support;
}

#if defined(__cplusplus)
}
#endif
