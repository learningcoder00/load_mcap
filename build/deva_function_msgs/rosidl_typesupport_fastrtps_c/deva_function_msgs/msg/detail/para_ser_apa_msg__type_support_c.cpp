// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/ParaSerApaMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/para_ser_apa_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/para_ser_apa_msg__struct.h"
#include "deva_function_msgs/msg/detail/para_ser_apa_msg__functions.h"
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


using _ParaSerApaMsg__ros_msg_type = deva_function_msgs__msg__ParaSerApaMsg;

static bool _ParaSerApaMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParaSerApaMsg__ros_msg_type * ros_message = static_cast<const _ParaSerApaMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_timestamp
  {
    cdr << ros_message->publish_timestamp;
  }

  // Field name: apa_switch_setting_result
  {
    cdr << ros_message->apa_switch_setting_result;
  }

  // Field name: rpa_switch_setting_result
  {
    cdr << ros_message->rpa_switch_setting_result;
  }

  // Field name: summon_switch_setting_result
  {
    cdr << ros_message->summon_switch_setting_result;
  }

  return true;
}

static bool _ParaSerApaMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParaSerApaMsg__ros_msg_type * ros_message = static_cast<_ParaSerApaMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: publish_timestamp
  {
    cdr >> ros_message->publish_timestamp;
  }

  // Field name: apa_switch_setting_result
  {
    cdr >> ros_message->apa_switch_setting_result;
  }

  // Field name: rpa_switch_setting_result
  {
    cdr >> ros_message->rpa_switch_setting_result;
  }

  // Field name: summon_switch_setting_result
  {
    cdr >> ros_message->summon_switch_setting_result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__ParaSerApaMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParaSerApaMsg__ros_msg_type * ros_message = static_cast<const _ParaSerApaMsg__ros_msg_type *>(untyped_ros_message);
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
  // field.name apa_switch_setting_result
  {
    size_t item_size = sizeof(ros_message->apa_switch_setting_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpa_switch_setting_result
  {
    size_t item_size = sizeof(ros_message->rpa_switch_setting_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name summon_switch_setting_result
  {
    size_t item_size = sizeof(ros_message->summon_switch_setting_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParaSerApaMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__ParaSerApaMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__ParaSerApaMsg(
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
  // member: apa_switch_setting_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rpa_switch_setting_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: summon_switch_setting_result
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
    using DataType = deva_function_msgs__msg__ParaSerApaMsg;
    is_plain =
      (
      offsetof(DataType, summon_switch_setting_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParaSerApaMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__ParaSerApaMsg(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParaSerApaMsg = {
  "deva_function_msgs::msg",
  "ParaSerApaMsg",
  _ParaSerApaMsg__cdr_serialize,
  _ParaSerApaMsg__cdr_deserialize,
  _ParaSerApaMsg__get_serialized_size,
  _ParaSerApaMsg__max_serialized_size
};

static rosidl_message_type_support_t _ParaSerApaMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParaSerApaMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, ParaSerApaMsg)() {
  return &_ParaSerApaMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
