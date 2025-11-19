// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__struct.h"
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__functions.h"
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


using _AvpRefLineTreePoint__ros_msg_type = deva_planning_msgs__msg__AvpRefLineTreePoint;

static bool _AvpRefLineTreePoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AvpRefLineTreePoint__ros_msg_type * ros_message = static_cast<const _AvpRefLineTreePoint__ros_msg_type *>(untyped_ros_message);
  // Field name: idx
  {
    cdr << ros_message->idx;
  }

  // Field name: directory
  {
    cdr << ros_message->directory;
  }

  // Field name: center_n
  {
    cdr << ros_message->center_n;
  }

  // Field name: center_point_x
  {
    cdr << ros_message->center_point_x;
  }

  // Field name: center_point_y
  {
    cdr << ros_message->center_point_y;
  }

  // Field name: center_point_z
  {
    cdr << ros_message->center_point_z;
  }

  // Field name: left_n
  {
    cdr << ros_message->left_n;
  }

  // Field name: right_n
  {
    cdr << ros_message->right_n;
  }

  // Field name: left_x
  {
    cdr << ros_message->left_x;
  }

  // Field name: left_y
  {
    cdr << ros_message->left_y;
  }

  // Field name: left_z
  {
    cdr << ros_message->left_z;
  }

  // Field name: right_x
  {
    cdr << ros_message->right_x;
  }

  // Field name: right_y
  {
    cdr << ros_message->right_y;
  }

  // Field name: right_z
  {
    cdr << ros_message->right_z;
  }

  return true;
}

static bool _AvpRefLineTreePoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AvpRefLineTreePoint__ros_msg_type * ros_message = static_cast<_AvpRefLineTreePoint__ros_msg_type *>(untyped_ros_message);
  // Field name: idx
  {
    cdr >> ros_message->idx;
  }

  // Field name: directory
  {
    cdr >> ros_message->directory;
  }

  // Field name: center_n
  {
    cdr >> ros_message->center_n;
  }

  // Field name: center_point_x
  {
    cdr >> ros_message->center_point_x;
  }

  // Field name: center_point_y
  {
    cdr >> ros_message->center_point_y;
  }

  // Field name: center_point_z
  {
    cdr >> ros_message->center_point_z;
  }

  // Field name: left_n
  {
    cdr >> ros_message->left_n;
  }

  // Field name: right_n
  {
    cdr >> ros_message->right_n;
  }

  // Field name: left_x
  {
    cdr >> ros_message->left_x;
  }

  // Field name: left_y
  {
    cdr >> ros_message->left_y;
  }

  // Field name: left_z
  {
    cdr >> ros_message->left_z;
  }

  // Field name: right_x
  {
    cdr >> ros_message->right_x;
  }

  // Field name: right_y
  {
    cdr >> ros_message->right_y;
  }

  // Field name: right_z
  {
    cdr >> ros_message->right_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t get_serialized_size_deva_planning_msgs__msg__AvpRefLineTreePoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AvpRefLineTreePoint__ros_msg_type * ros_message = static_cast<const _AvpRefLineTreePoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name idx
  {
    size_t item_size = sizeof(ros_message->idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name directory
  {
    size_t item_size = sizeof(ros_message->directory);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_n
  {
    size_t item_size = sizeof(ros_message->center_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_point_x
  {
    size_t item_size = sizeof(ros_message->center_point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_point_y
  {
    size_t item_size = sizeof(ros_message->center_point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_point_z
  {
    size_t item_size = sizeof(ros_message->center_point_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_n
  {
    size_t item_size = sizeof(ros_message->left_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_n
  {
    size_t item_size = sizeof(ros_message->right_n);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_x
  {
    size_t item_size = sizeof(ros_message->left_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_y
  {
    size_t item_size = sizeof(ros_message->left_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_z
  {
    size_t item_size = sizeof(ros_message->left_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_x
  {
    size_t item_size = sizeof(ros_message->right_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_y
  {
    size_t item_size = sizeof(ros_message->right_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_z
  {
    size_t item_size = sizeof(ros_message->right_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AvpRefLineTreePoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs__msg__AvpRefLineTreePoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t max_serialized_size_deva_planning_msgs__msg__AvpRefLineTreePoint(
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

  // member: idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: directory
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: center_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: center_point_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: center_point_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: center_point_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_n
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_z
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
    using DataType = deva_planning_msgs__msg__AvpRefLineTreePoint;
    is_plain =
      (
      offsetof(DataType, right_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AvpRefLineTreePoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs__msg__AvpRefLineTreePoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AvpRefLineTreePoint = {
  "deva_planning_msgs::msg",
  "AvpRefLineTreePoint",
  _AvpRefLineTreePoint__cdr_serialize,
  _AvpRefLineTreePoint__cdr_deserialize,
  _AvpRefLineTreePoint__get_serialized_size,
  _AvpRefLineTreePoint__max_serialized_size
};

static rosidl_message_type_support_t _AvpRefLineTreePoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AvpRefLineTreePoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, AvpRefLineTreePoint)() {
  return &_AvpRefLineTreePoint__type_support;
}

#if defined(__cplusplus)
}
#endif
