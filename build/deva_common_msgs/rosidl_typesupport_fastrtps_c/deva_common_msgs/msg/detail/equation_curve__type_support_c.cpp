// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"
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


using _EquationCurve__ros_msg_type = deva_common_msgs__msg__EquationCurve;

static bool _EquationCurve__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EquationCurve__ros_msg_type * ros_message = static_cast<const _EquationCurve__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: a3
  {
    cdr << ros_message->a3;
  }

  // Field name: a2
  {
    cdr << ros_message->a2;
  }

  // Field name: a1
  {
    cdr << ros_message->a1;
  }

  // Field name: a0
  {
    cdr << ros_message->a0;
  }

  // Field name: b3
  {
    cdr << ros_message->b3;
  }

  // Field name: b2
  {
    cdr << ros_message->b2;
  }

  // Field name: b1
  {
    cdr << ros_message->b1;
  }

  // Field name: b0
  {
    cdr << ros_message->b0;
  }

  // Field name: c3
  {
    cdr << ros_message->c3;
  }

  // Field name: c2
  {
    cdr << ros_message->c2;
  }

  // Field name: c1
  {
    cdr << ros_message->c1;
  }

  // Field name: c0
  {
    cdr << ros_message->c0;
  }

  // Field name: s_start
  {
    cdr << ros_message->s_start;
  }

  // Field name: s_end
  {
    cdr << ros_message->s_end;
  }

  return true;
}

static bool _EquationCurve__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EquationCurve__ros_msg_type * ros_message = static_cast<_EquationCurve__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: a3
  {
    cdr >> ros_message->a3;
  }

  // Field name: a2
  {
    cdr >> ros_message->a2;
  }

  // Field name: a1
  {
    cdr >> ros_message->a1;
  }

  // Field name: a0
  {
    cdr >> ros_message->a0;
  }

  // Field name: b3
  {
    cdr >> ros_message->b3;
  }

  // Field name: b2
  {
    cdr >> ros_message->b2;
  }

  // Field name: b1
  {
    cdr >> ros_message->b1;
  }

  // Field name: b0
  {
    cdr >> ros_message->b0;
  }

  // Field name: c3
  {
    cdr >> ros_message->c3;
  }

  // Field name: c2
  {
    cdr >> ros_message->c2;
  }

  // Field name: c1
  {
    cdr >> ros_message->c1;
  }

  // Field name: c0
  {
    cdr >> ros_message->c0;
  }

  // Field name: s_start
  {
    cdr >> ros_message->s_start;
  }

  // Field name: s_end
  {
    cdr >> ros_message->s_end;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_common_msgs
size_t get_serialized_size_deva_common_msgs__msg__EquationCurve(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EquationCurve__ros_msg_type * ros_message = static_cast<const _EquationCurve__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a3
  {
    size_t item_size = sizeof(ros_message->a3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a2
  {
    size_t item_size = sizeof(ros_message->a2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a1
  {
    size_t item_size = sizeof(ros_message->a1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a0
  {
    size_t item_size = sizeof(ros_message->a0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b3
  {
    size_t item_size = sizeof(ros_message->b3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b2
  {
    size_t item_size = sizeof(ros_message->b2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b1
  {
    size_t item_size = sizeof(ros_message->b1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b0
  {
    size_t item_size = sizeof(ros_message->b0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c3
  {
    size_t item_size = sizeof(ros_message->c3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c2
  {
    size_t item_size = sizeof(ros_message->c2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c1
  {
    size_t item_size = sizeof(ros_message->c1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c0
  {
    size_t item_size = sizeof(ros_message->c0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_start
  {
    size_t item_size = sizeof(ros_message->s_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_end
  {
    size_t item_size = sizeof(ros_message->s_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EquationCurve__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_common_msgs__msg__EquationCurve(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_common_msgs
size_t max_serialized_size_deva_common_msgs__msg__EquationCurve(
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

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: a3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: s_start
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: s_end
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
    using DataType = deva_common_msgs__msg__EquationCurve;
    is_plain =
      (
      offsetof(DataType, s_end) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EquationCurve__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_common_msgs__msg__EquationCurve(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EquationCurve = {
  "deva_common_msgs::msg",
  "EquationCurve",
  _EquationCurve__cdr_serialize,
  _EquationCurve__cdr_deserialize,
  _EquationCurve__get_serialized_size,
  _EquationCurve__max_serialized_size
};

static rosidl_message_type_support_t _EquationCurve__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EquationCurve,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, EquationCurve)() {
  return &_EquationCurve__type_support;
}

#if defined(__cplusplus)
}
#endif
