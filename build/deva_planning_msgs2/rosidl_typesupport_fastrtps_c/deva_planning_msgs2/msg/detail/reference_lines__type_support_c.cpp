// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/reference_lines__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/reference_lines__struct.h"
#include "deva_planning_msgs2/msg/detail/reference_lines__functions.h"
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

#include "deva_planning_msgs2/msg/detail/reference_line__functions.h"  // reference_lines
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, ReferenceLine)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ReferenceLines__ros_msg_type = deva_planning_msgs2__msg__ReferenceLines;

static bool _ReferenceLines__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReferenceLines__ros_msg_type * ros_message = static_cast<const _ReferenceLines__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: reference_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, ReferenceLine
      )()->data);
    size_t size = ros_message->reference_lines.size;
    auto array_ptr = ros_message->reference_lines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: curr_id
  {
    cdr << ros_message->curr_id;
  }

  // Field name: tar_id
  {
    cdr << ros_message->tar_id;
  }

  // Field name: curr_model_id
  {
    cdr << ros_message->curr_model_id;
  }

  // Field name: curr_line_virtual
  {
    cdr << (ros_message->curr_line_virtual ? true : false);
  }

  // Field name: curr_left_nums
  {
    cdr << ros_message->curr_left_nums;
  }

  // Field name: curr_right_nums
  {
    cdr << ros_message->curr_right_nums;
  }

  return true;
}

static bool _ReferenceLines__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReferenceLines__ros_msg_type * ros_message = static_cast<_ReferenceLines__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: reference_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, ReferenceLine
      )()->data);
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

    if (ros_message->reference_lines.data) {
      deva_planning_msgs2__msg__ReferenceLine__Sequence__fini(&ros_message->reference_lines);
    }
    if (!deva_planning_msgs2__msg__ReferenceLine__Sequence__init(&ros_message->reference_lines, size)) {
      fprintf(stderr, "failed to create array for field 'reference_lines'");
      return false;
    }
    auto array_ptr = ros_message->reference_lines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: curr_id
  {
    cdr >> ros_message->curr_id;
  }

  // Field name: tar_id
  {
    cdr >> ros_message->tar_id;
  }

  // Field name: curr_model_id
  {
    cdr >> ros_message->curr_model_id;
  }

  // Field name: curr_line_virtual
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->curr_line_virtual = tmp ? true : false;
  }

  // Field name: curr_left_nums
  {
    cdr >> ros_message->curr_left_nums;
  }

  // Field name: curr_right_nums
  {
    cdr >> ros_message->curr_right_nums;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t get_serialized_size_deva_planning_msgs2__msg__ReferenceLines(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReferenceLines__ros_msg_type * ros_message = static_cast<const _ReferenceLines__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name reference_lines
  {
    size_t array_size = ros_message->reference_lines.size;
    auto array_ptr = ros_message->reference_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name curr_id
  {
    size_t item_size = sizeof(ros_message->curr_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tar_id
  {
    size_t item_size = sizeof(ros_message->tar_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_model_id
  {
    size_t item_size = sizeof(ros_message->curr_model_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_line_virtual
  {
    size_t item_size = sizeof(ros_message->curr_line_virtual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_left_nums
  {
    size_t item_size = sizeof(ros_message->curr_left_nums);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curr_right_nums
  {
    size_t item_size = sizeof(ros_message->curr_right_nums);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReferenceLines__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__ReferenceLines(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__ReferenceLines(
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
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reference_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: curr_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tar_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curr_model_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curr_line_virtual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: curr_left_nums
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curr_right_nums
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
    using DataType = deva_planning_msgs2__msg__ReferenceLines;
    is_plain =
      (
      offsetof(DataType, curr_right_nums) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ReferenceLines__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__ReferenceLines(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReferenceLines = {
  "deva_planning_msgs2::msg",
  "ReferenceLines",
  _ReferenceLines__cdr_serialize,
  _ReferenceLines__cdr_deserialize,
  _ReferenceLines__get_serialized_size,
  _ReferenceLines__max_serialized_size
};

static rosidl_message_type_support_t _ReferenceLines__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReferenceLines,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, ReferenceLines)() {
  return &_ReferenceLines__type_support;
}

#if defined(__cplusplus)
}
#endif
