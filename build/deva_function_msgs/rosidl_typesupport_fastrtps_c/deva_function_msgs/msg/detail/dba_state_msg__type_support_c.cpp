// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/dba_state_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/dba_state_msg__struct.h"
#include "deva_function_msgs/msg/detail/dba_state_msg__functions.h"
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


using _DbaStateMsg__ros_msg_type = deva_function_msgs__msg__DbaStateMsg;

static bool _DbaStateMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DbaStateMsg__ros_msg_type * ros_message = static_cast<const _DbaStateMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_timestamp
  {
    cdr << ros_message->publish_timestamp;
  }

  // Field name: epb_state
  {
    cdr << ros_message->epb_state;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: acc_enable
  {
    cdr << (ros_message->acc_enable ? true : false);
  }

  // Field name: brake_enable
  {
    cdr << (ros_message->brake_enable ? true : false);
  }

  // Field name: door_open_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->door_open_state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: turn_lamp_lever_state
  {
    cdr << ros_message->turn_lamp_lever_state;
  }

  // Field name: late_enable
  {
    cdr << (ros_message->late_enable ? true : false);
  }

  // Field name: late_driveover
  {
    cdr << (ros_message->late_driveover ? true : false);
  }

  // Field name: longit_enable
  {
    cdr << (ros_message->longit_enable ? true : false);
  }

  // Field name: longit_driveover
  {
    cdr << (ros_message->longit_driveover ? true : false);
  }

  // Field name: gear
  {
    cdr << ros_message->gear;
  }

  // Field name: belt
  {
    size_t size = 5;
    auto array_ptr = ros_message->belt;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: save_map
  {
    cdr << (ros_message->save_map ? true : false);
  }

  // Field name: slot_id
  {
    cdr << ros_message->slot_id;
  }

  // Field name: park_out_direction
  {
    cdr << ros_message->park_out_direction;
  }

  // Field name: run_mode
  {
    cdr << ros_message->run_mode;
  }

  return true;
}

static bool _DbaStateMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DbaStateMsg__ros_msg_type * ros_message = static_cast<_DbaStateMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_timestamp
  {
    cdr >> ros_message->publish_timestamp;
  }

  // Field name: epb_state
  {
    cdr >> ros_message->epb_state;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: acc_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_enable = tmp ? true : false;
  }

  // Field name: brake_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_enable = tmp ? true : false;
  }

  // Field name: door_open_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->door_open_state;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: turn_lamp_lever_state
  {
    cdr >> ros_message->turn_lamp_lever_state;
  }

  // Field name: late_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->late_enable = tmp ? true : false;
  }

  // Field name: late_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->late_driveover = tmp ? true : false;
  }

  // Field name: longit_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_enable = tmp ? true : false;
  }

  // Field name: longit_driveover
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->longit_driveover = tmp ? true : false;
  }

  // Field name: gear
  {
    cdr >> ros_message->gear;
  }

  // Field name: belt
  {
    size_t size = 5;
    auto array_ptr = ros_message->belt;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: save_map
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->save_map = tmp ? true : false;
  }

  // Field name: slot_id
  {
    cdr >> ros_message->slot_id;
  }

  // Field name: park_out_direction
  {
    cdr >> ros_message->park_out_direction;
  }

  // Field name: run_mode
  {
    cdr >> ros_message->run_mode;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__DbaStateMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DbaStateMsg__ros_msg_type * ros_message = static_cast<const _DbaStateMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name publish_timestamp
  {
    size_t item_size = sizeof(ros_message->publish_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epb_state
  {
    size_t item_size = sizeof(ros_message->epb_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_enable
  {
    size_t item_size = sizeof(ros_message->acc_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_enable
  {
    size_t item_size = sizeof(ros_message->brake_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_open_state
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->door_open_state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_lamp_lever_state
  {
    size_t item_size = sizeof(ros_message->turn_lamp_lever_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_enable
  {
    size_t item_size = sizeof(ros_message->late_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name late_driveover
  {
    size_t item_size = sizeof(ros_message->late_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_enable
  {
    size_t item_size = sizeof(ros_message->longit_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longit_driveover
  {
    size_t item_size = sizeof(ros_message->longit_driveover);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear
  {
    size_t item_size = sizeof(ros_message->gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name belt
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->belt;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name save_map
  {
    size_t item_size = sizeof(ros_message->save_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slot_id
  {
    size_t item_size = sizeof(ros_message->slot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name park_out_direction
  {
    size_t item_size = sizeof(ros_message->park_out_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name run_mode
  {
    size_t item_size = sizeof(ros_message->run_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DbaStateMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__DbaStateMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__DbaStateMsg(
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

  // member: publish_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: epb_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_open_state
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_lamp_lever_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: late_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: late_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: longit_driveover
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: belt
  {
    size_t array_size = 5;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: save_map
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: slot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: park_out_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: run_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs__msg__DbaStateMsg;
    is_plain =
      (
      offsetof(DataType, run_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DbaStateMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__DbaStateMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DbaStateMsg = {
  "deva_function_msgs::msg",
  "DbaStateMsg",
  _DbaStateMsg__cdr_serialize,
  _DbaStateMsg__cdr_deserialize,
  _DbaStateMsg__get_serialized_size,
  _DbaStateMsg__max_serialized_size
};

static rosidl_message_type_support_t _DbaStateMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DbaStateMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, DbaStateMsg)() {
  return &_DbaStateMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
