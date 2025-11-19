// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/energy_consume_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.h"
#include "deva_navi_msgs/msg/detail/energy_consume_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/energy_end_point_proto__functions.h"  // energy_end_point
#include "rosidl_runtime_c/primitives_sequence.h"  // vehiclechargeleft
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // vehiclechargeleft

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__EnergyEndPointProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__EnergyEndPointProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyEndPointProto)();


using _EnergyConsumeProto__ros_msg_type = deva_navi_msgs__msg__EnergyConsumeProto;

static bool _EnergyConsumeProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnergyConsumeProto__ros_msg_type * ros_message = static_cast<const _EnergyConsumeProto__ros_msg_type *>(untyped_ros_message);
  // Field name: energy_end_flag
  {
    cdr << (ros_message->energy_end_flag ? true : false);
  }

  // Field name: energy_end_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyEndPointProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->energy_end_point, cdr))
    {
      return false;
    }
  }

  // Field name: vehiclechargeleft
  {
    size_t size = ros_message->vehiclechargeleft.size;
    auto array_ptr = ros_message->vehiclechargeleft.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EnergyConsumeProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnergyConsumeProto__ros_msg_type * ros_message = static_cast<_EnergyConsumeProto__ros_msg_type *>(untyped_ros_message);
  // Field name: energy_end_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->energy_end_flag = tmp ? true : false;
  }

  // Field name: energy_end_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyEndPointProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->energy_end_point))
    {
      return false;
    }
  }

  // Field name: vehiclechargeleft
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

    if (ros_message->vehiclechargeleft.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->vehiclechargeleft);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->vehiclechargeleft, size)) {
      fprintf(stderr, "failed to create array for field 'vehiclechargeleft'");
      return false;
    }
    auto array_ptr = ros_message->vehiclechargeleft.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnergyConsumeProto__ros_msg_type * ros_message = static_cast<const _EnergyConsumeProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name energy_end_flag
  {
    size_t item_size = sizeof(ros_message->energy_end_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name energy_end_point

  current_alignment += get_serialized_size_deva_navi_msgs__msg__EnergyEndPointProto(
    &(ros_message->energy_end_point), current_alignment);
  // field.name vehiclechargeleft
  {
    size_t array_size = ros_message->vehiclechargeleft.size;
    auto array_ptr = ros_message->vehiclechargeleft.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnergyConsumeProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
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

  // member: energy_end_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: energy_end_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__EnergyEndPointProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: vehiclechargeleft
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__EnergyConsumeProto;
    is_plain =
      (
      offsetof(DataType, vehiclechargeleft) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnergyConsumeProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnergyConsumeProto = {
  "deva_navi_msgs::msg",
  "EnergyConsumeProto",
  _EnergyConsumeProto__cdr_serialize,
  _EnergyConsumeProto__cdr_deserialize,
  _EnergyConsumeProto__get_serialized_size,
  _EnergyConsumeProto__max_serialized_size
};

static rosidl_message_type_support_t _EnergyConsumeProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnergyConsumeProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyConsumeProto)() {
  return &_EnergyConsumeProto__type_support;
}

#if defined(__cplusplus)
}
#endif
