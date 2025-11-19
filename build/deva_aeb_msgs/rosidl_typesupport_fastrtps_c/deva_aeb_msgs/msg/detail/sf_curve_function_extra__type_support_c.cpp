// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__functions.h"
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

#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__functions.h"  // estimn

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__SFLaneEstimn(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFLaneEstimn(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFLaneEstimn)();


using _SFCurveFunctionExtra__ros_msg_type = deva_aeb_msgs__msg__SFCurveFunctionExtra;

static bool _SFCurveFunctionExtra__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFCurveFunctionExtra__ros_msg_type * ros_message = static_cast<const _SFCurveFunctionExtra__ros_msg_type *>(untyped_ros_message);
  // Field name: poslgt
  {
    cdr << ros_message->poslgt;
  }

  // Field name: poslat
  {
    cdr << ros_message->poslat;
  }

  // Field name: estimn
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFLaneEstimn
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->estimn, cdr))
    {
      return false;
    }
  }

  // Field name: extrapointtype
  {
    cdr << ros_message->extrapointtype;
  }

  // Field name: lanemkrtype
  {
    cdr << ros_message->lanemkrtype;
  }

  // Field name: confi
  {
    cdr << ros_message->confi;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  return true;
}

static bool _SFCurveFunctionExtra__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFCurveFunctionExtra__ros_msg_type * ros_message = static_cast<_SFCurveFunctionExtra__ros_msg_type *>(untyped_ros_message);
  // Field name: poslgt
  {
    cdr >> ros_message->poslgt;
  }

  // Field name: poslat
  {
    cdr >> ros_message->poslat;
  }

  // Field name: estimn
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFLaneEstimn
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->estimn))
    {
      return false;
    }
  }

  // Field name: extrapointtype
  {
    cdr >> ros_message->extrapointtype;
  }

  // Field name: lanemkrtype
  {
    cdr >> ros_message->lanemkrtype;
  }

  // Field name: confi
  {
    cdr >> ros_message->confi;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFCurveFunctionExtra(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFCurveFunctionExtra__ros_msg_type * ros_message = static_cast<const _SFCurveFunctionExtra__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name poslgt
  {
    size_t item_size = sizeof(ros_message->poslgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poslat
  {
    size_t item_size = sizeof(ros_message->poslat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estimn

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFLaneEstimn(
    &(ros_message->estimn), current_alignment);
  // field.name extrapointtype
  {
    size_t item_size = sizeof(ros_message->extrapointtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanemkrtype
  {
    size_t item_size = sizeof(ros_message->lanemkrtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confi
  {
    size_t item_size = sizeof(ros_message->confi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFCurveFunctionExtra__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFCurveFunctionExtra(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFCurveFunctionExtra(
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

  // member: poslgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: poslat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: estimn
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFLaneEstimn(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: extrapointtype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanemkrtype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reserved
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
    using DataType = deva_aeb_msgs__msg__SFCurveFunctionExtra;
    is_plain =
      (
      offsetof(DataType, reserved) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFCurveFunctionExtra__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFCurveFunctionExtra(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFCurveFunctionExtra = {
  "deva_aeb_msgs::msg",
  "SFCurveFunctionExtra",
  _SFCurveFunctionExtra__cdr_serialize,
  _SFCurveFunctionExtra__cdr_deserialize,
  _SFCurveFunctionExtra__get_serialized_size,
  _SFCurveFunctionExtra__max_serialized_size
};

static rosidl_message_type_support_t _SFCurveFunctionExtra__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFCurveFunctionExtra,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFCurveFunctionExtra)() {
  return &_SFCurveFunctionExtra__type_support;
}

#if defined(__cplusplus)
}
#endif
