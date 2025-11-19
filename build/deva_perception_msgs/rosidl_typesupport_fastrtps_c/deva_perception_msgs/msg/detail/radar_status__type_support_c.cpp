// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/radar_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/radar_status__struct.h"
#include "deva_perception_msgs/msg/detail/radar_status__functions.h"
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


using _RadarStatus__ros_msg_type = deva_perception_msgs__msg__RadarStatus;

static bool _RadarStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarStatus__ros_msg_type * ros_message = static_cast<const _RadarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: num_detection
  {
    cdr << ros_message->num_detection;
  }

  // Field name: num_object
  {
    cdr << ros_message->num_object;
  }

  // Field name: status_enable
  {
    cdr << ros_message->status_enable;
  }

  // Field name: status_faulty
  {
    cdr << ros_message->status_faulty;
  }

  // Field name: status_latency
  {
    cdr << ros_message->status_latency;
  }

  // Field name: status_safety_fault
  {
    cdr << ros_message->status_safety_fault;
  }

  // Field name: timestamp_h
  {
    cdr << ros_message->timestamp_h;
  }

  // Field name: timestamp_l
  {
    cdr << ros_message->timestamp_l;
  }

  // Field name: vdy_velocity
  {
    cdr << ros_message->vdy_velocity;
  }

  // Field name: vdy_yawrate
  {
    cdr << ros_message->vdy_yawrate;
  }

  // Field name: vdy_timestamp
  {
    cdr << ros_message->vdy_timestamp;
  }

  return true;
}

static bool _RadarStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarStatus__ros_msg_type * ros_message = static_cast<_RadarStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: num_detection
  {
    cdr >> ros_message->num_detection;
  }

  // Field name: num_object
  {
    cdr >> ros_message->num_object;
  }

  // Field name: status_enable
  {
    cdr >> ros_message->status_enable;
  }

  // Field name: status_faulty
  {
    cdr >> ros_message->status_faulty;
  }

  // Field name: status_latency
  {
    cdr >> ros_message->status_latency;
  }

  // Field name: status_safety_fault
  {
    cdr >> ros_message->status_safety_fault;
  }

  // Field name: timestamp_h
  {
    cdr >> ros_message->timestamp_h;
  }

  // Field name: timestamp_l
  {
    cdr >> ros_message->timestamp_l;
  }

  // Field name: vdy_velocity
  {
    cdr >> ros_message->vdy_velocity;
  }

  // Field name: vdy_yawrate
  {
    cdr >> ros_message->vdy_yawrate;
  }

  // Field name: vdy_timestamp
  {
    cdr >> ros_message->vdy_timestamp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__RadarStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarStatus__ros_msg_type * ros_message = static_cast<const _RadarStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_detection
  {
    size_t item_size = sizeof(ros_message->num_detection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_object
  {
    size_t item_size = sizeof(ros_message->num_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_enable
  {
    size_t item_size = sizeof(ros_message->status_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_faulty
  {
    size_t item_size = sizeof(ros_message->status_faulty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_latency
  {
    size_t item_size = sizeof(ros_message->status_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_safety_fault
  {
    size_t item_size = sizeof(ros_message->status_safety_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_h
  {
    size_t item_size = sizeof(ros_message->timestamp_h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_l
  {
    size_t item_size = sizeof(ros_message->timestamp_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vdy_velocity
  {
    size_t item_size = sizeof(ros_message->vdy_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vdy_yawrate
  {
    size_t item_size = sizeof(ros_message->vdy_yawrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vdy_timestamp
  {
    size_t item_size = sizeof(ros_message->vdy_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__RadarStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__RadarStatus(
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

  // member: num_detection
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_object
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_faulty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_safety_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp_h
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vdy_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vdy_yawrate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vdy_timestamp
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
    using DataType = deva_perception_msgs__msg__RadarStatus;
    is_plain =
      (
      offsetof(DataType, vdy_timestamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__RadarStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarStatus = {
  "deva_perception_msgs::msg",
  "RadarStatus",
  _RadarStatus__cdr_serialize,
  _RadarStatus__cdr_deserialize,
  _RadarStatus__get_serialized_size,
  _RadarStatus__max_serialized_size
};

static rosidl_message_type_support_t _RadarStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, RadarStatus)() {
  return &_RadarStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
