// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/StitchData.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/stitch_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/stitch_data__struct.h"
#include "deva_planning_msgs2/msg/detail/stitch_data__functions.h"
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


using _StitchData__ros_msg_type = deva_planning_msgs2__msg__StitchData;

static bool _StitchData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StitchData__ros_msg_type * ros_message = static_cast<const _StitchData__ros_msg_type *>(untyped_ros_message);
  // Field name: stitch_mode
  {
    cdr << ros_message->stitch_mode;
  }

  // Field name: planner_mode
  {
    cdr << ros_message->planner_mode;
  }

  // Field name: actual_planner_mode
  {
    cdr << ros_message->actual_planner_mode;
  }

  // Field name: current_x
  {
    cdr << ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr << ros_message->current_y;
  }

  // Field name: stitch_s
  {
    cdr << ros_message->stitch_s;
  }

  // Field name: stitch_l
  {
    cdr << ros_message->stitch_l;
  }

  // Field name: stitch_x
  {
    cdr << ros_message->stitch_x;
  }

  // Field name: stitch_y
  {
    cdr << ros_message->stitch_y;
  }

  // Field name: stitch_z
  {
    cdr << ros_message->stitch_z;
  }

  // Field name: stitch_heading
  {
    cdr << ros_message->stitch_heading;
  }

  // Field name: stitch_alpha
  {
    cdr << ros_message->stitch_alpha;
  }

  // Field name: stitch_v
  {
    cdr << ros_message->stitch_v;
  }

  // Field name: stitch_steer
  {
    cdr << ros_message->stitch_steer;
  }

  return true;
}

static bool _StitchData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StitchData__ros_msg_type * ros_message = static_cast<_StitchData__ros_msg_type *>(untyped_ros_message);
  // Field name: stitch_mode
  {
    cdr >> ros_message->stitch_mode;
  }

  // Field name: planner_mode
  {
    cdr >> ros_message->planner_mode;
  }

  // Field name: actual_planner_mode
  {
    cdr >> ros_message->actual_planner_mode;
  }

  // Field name: current_x
  {
    cdr >> ros_message->current_x;
  }

  // Field name: current_y
  {
    cdr >> ros_message->current_y;
  }

  // Field name: stitch_s
  {
    cdr >> ros_message->stitch_s;
  }

  // Field name: stitch_l
  {
    cdr >> ros_message->stitch_l;
  }

  // Field name: stitch_x
  {
    cdr >> ros_message->stitch_x;
  }

  // Field name: stitch_y
  {
    cdr >> ros_message->stitch_y;
  }

  // Field name: stitch_z
  {
    cdr >> ros_message->stitch_z;
  }

  // Field name: stitch_heading
  {
    cdr >> ros_message->stitch_heading;
  }

  // Field name: stitch_alpha
  {
    cdr >> ros_message->stitch_alpha;
  }

  // Field name: stitch_v
  {
    cdr >> ros_message->stitch_v;
  }

  // Field name: stitch_steer
  {
    cdr >> ros_message->stitch_steer;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t get_serialized_size_deva_planning_msgs2__msg__StitchData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StitchData__ros_msg_type * ros_message = static_cast<const _StitchData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stitch_mode
  {
    size_t item_size = sizeof(ros_message->stitch_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planner_mode
  {
    size_t item_size = sizeof(ros_message->planner_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_planner_mode
  {
    size_t item_size = sizeof(ros_message->actual_planner_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_x
  {
    size_t item_size = sizeof(ros_message->current_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_y
  {
    size_t item_size = sizeof(ros_message->current_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_s
  {
    size_t item_size = sizeof(ros_message->stitch_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_l
  {
    size_t item_size = sizeof(ros_message->stitch_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_x
  {
    size_t item_size = sizeof(ros_message->stitch_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_y
  {
    size_t item_size = sizeof(ros_message->stitch_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_z
  {
    size_t item_size = sizeof(ros_message->stitch_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_heading
  {
    size_t item_size = sizeof(ros_message->stitch_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_alpha
  {
    size_t item_size = sizeof(ros_message->stitch_alpha);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_v
  {
    size_t item_size = sizeof(ros_message->stitch_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stitch_steer
  {
    size_t item_size = sizeof(ros_message->stitch_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StitchData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__StitchData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__StitchData(
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

  // member: stitch_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: planner_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actual_planner_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_alpha
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stitch_steer
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
    using DataType = deva_planning_msgs2__msg__StitchData;
    is_plain =
      (
      offsetof(DataType, stitch_steer) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StitchData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__StitchData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StitchData = {
  "deva_planning_msgs2::msg",
  "StitchData",
  _StitchData__cdr_serialize,
  _StitchData__cdr_deserialize,
  _StitchData__get_serialized_size,
  _StitchData__max_serialized_size
};

static rosidl_message_type_support_t _StitchData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StitchData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, StitchData)() {
  return &_StitchData__type_support;
}

#if defined(__cplusplus)
}
#endif
