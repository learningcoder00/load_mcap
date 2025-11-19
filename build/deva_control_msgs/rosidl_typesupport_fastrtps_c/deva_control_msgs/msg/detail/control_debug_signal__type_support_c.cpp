// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_debug_signal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_control_msgs/msg/detail/control_debug_signal__struct.h"
#include "deva_control_msgs/msg/detail/control_debug_signal__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ControlDebugSignal__ros_msg_type = deva_control_msgs__msg__ControlDebugSignal;

static bool _ControlDebugSignal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ControlDebugSignal__ros_msg_type * ros_message = static_cast<const _ControlDebugSignal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: c0_val
  {
    cdr << ros_message->c0_val;
  }

  // Field name: c1_val
  {
    cdr << ros_message->c1_val;
  }

  // Field name: c2_val
  {
    cdr << ros_message->c2_val;
  }

  // Field name: station_error
  {
    cdr << ros_message->station_error;
  }

  // Field name: speed_offset
  {
    cdr << ros_message->speed_offset;
  }

  // Field name: speed_target
  {
    cdr << ros_message->speed_target;
  }

  // Field name: speed_current
  {
    cdr << ros_message->speed_current;
  }

  // Field name: speed_error
  {
    cdr << ros_message->speed_error;
  }

  // Field name: preview_steer_error
  {
    cdr << ros_message->preview_steer_error;
  }

  // Field name: preview_speed_target
  {
    cdr << ros_message->preview_speed_target;
  }

  // Field name: distance_error
  {
    cdr << ros_message->distance_error;
  }

  // Field name: angle_error
  {
    cdr << ros_message->angle_error;
  }

  // Field name: debug_signal_4
  {
    cdr << ros_message->debug_signal_4;
  }

  // Field name: debug_signal_5
  {
    cdr << ros_message->debug_signal_5;
  }

  // Field name: debug_signal_6
  {
    cdr << ros_message->debug_signal_6;
  }

  // Field name: debug_signal_7
  {
    cdr << ros_message->debug_signal_7;
  }

  // Field name: debug_signal_8
  {
    cdr << ros_message->debug_signal_8;
  }

  // Field name: debug_signal_9
  {
    cdr << ros_message->debug_signal_9;
  }

  return true;
}

static bool _ControlDebugSignal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ControlDebugSignal__ros_msg_type * ros_message = static_cast<_ControlDebugSignal__ros_msg_type *>(untyped_ros_message);
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

  // Field name: c0_val
  {
    cdr >> ros_message->c0_val;
  }

  // Field name: c1_val
  {
    cdr >> ros_message->c1_val;
  }

  // Field name: c2_val
  {
    cdr >> ros_message->c2_val;
  }

  // Field name: station_error
  {
    cdr >> ros_message->station_error;
  }

  // Field name: speed_offset
  {
    cdr >> ros_message->speed_offset;
  }

  // Field name: speed_target
  {
    cdr >> ros_message->speed_target;
  }

  // Field name: speed_current
  {
    cdr >> ros_message->speed_current;
  }

  // Field name: speed_error
  {
    cdr >> ros_message->speed_error;
  }

  // Field name: preview_steer_error
  {
    cdr >> ros_message->preview_steer_error;
  }

  // Field name: preview_speed_target
  {
    cdr >> ros_message->preview_speed_target;
  }

  // Field name: distance_error
  {
    cdr >> ros_message->distance_error;
  }

  // Field name: angle_error
  {
    cdr >> ros_message->angle_error;
  }

  // Field name: debug_signal_4
  {
    cdr >> ros_message->debug_signal_4;
  }

  // Field name: debug_signal_5
  {
    cdr >> ros_message->debug_signal_5;
  }

  // Field name: debug_signal_6
  {
    cdr >> ros_message->debug_signal_6;
  }

  // Field name: debug_signal_7
  {
    cdr >> ros_message->debug_signal_7;
  }

  // Field name: debug_signal_8
  {
    cdr >> ros_message->debug_signal_8;
  }

  // Field name: debug_signal_9
  {
    cdr >> ros_message->debug_signal_9;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t get_serialized_size_deva_control_msgs__msg__ControlDebugSignal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControlDebugSignal__ros_msg_type * ros_message = static_cast<const _ControlDebugSignal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name c0_val
  {
    size_t item_size = sizeof(ros_message->c0_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c1_val
  {
    size_t item_size = sizeof(ros_message->c1_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c2_val
  {
    size_t item_size = sizeof(ros_message->c2_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station_error
  {
    size_t item_size = sizeof(ros_message->station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_offset
  {
    size_t item_size = sizeof(ros_message->speed_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_target
  {
    size_t item_size = sizeof(ros_message->speed_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_current
  {
    size_t item_size = sizeof(ros_message->speed_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_error
  {
    size_t item_size = sizeof(ros_message->speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_steer_error
  {
    size_t item_size = sizeof(ros_message->preview_steer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preview_speed_target
  {
    size_t item_size = sizeof(ros_message->preview_speed_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_error
  {
    size_t item_size = sizeof(ros_message->distance_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_error
  {
    size_t item_size = sizeof(ros_message->angle_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_4
  {
    size_t item_size = sizeof(ros_message->debug_signal_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_5
  {
    size_t item_size = sizeof(ros_message->debug_signal_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_6
  {
    size_t item_size = sizeof(ros_message->debug_signal_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_7
  {
    size_t item_size = sizeof(ros_message->debug_signal_7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_8
  {
    size_t item_size = sizeof(ros_message->debug_signal_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug_signal_9
  {
    size_t item_size = sizeof(ros_message->debug_signal_9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ControlDebugSignal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_control_msgs__msg__ControlDebugSignal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_control_msgs
size_t max_serialized_size_deva_control_msgs__msg__ControlDebugSignal(
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
  // member: c0_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c1_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: c2_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_steer_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preview_speed_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angle_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: debug_signal_9
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
    using DataType = deva_control_msgs__msg__ControlDebugSignal;
    is_plain =
      (
      offsetof(DataType, debug_signal_9) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ControlDebugSignal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_control_msgs__msg__ControlDebugSignal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControlDebugSignal = {
  "deva_control_msgs::msg",
  "ControlDebugSignal",
  _ControlDebugSignal__cdr_serialize,
  _ControlDebugSignal__cdr_deserialize,
  _ControlDebugSignal__get_serialized_size,
  _ControlDebugSignal__max_serialized_size
};

static rosidl_message_type_support_t _ControlDebugSignal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControlDebugSignal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_control_msgs, msg, ControlDebugSignal)() {
  return &_ControlDebugSignal__type_support;
}

#if defined(__cplusplus)
}
#endif
