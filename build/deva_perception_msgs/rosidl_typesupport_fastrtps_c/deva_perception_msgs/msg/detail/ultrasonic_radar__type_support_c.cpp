// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__struct.h"
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__functions.h"
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

#include "rosidl_runtime_c/string.h"  // radar_name, radar_type
#include "rosidl_runtime_c/string_functions.h"  // radar_name, radar_type

// forward declare type support functions


using _UltrasonicRadar__ros_msg_type = deva_perception_msgs__msg__UltrasonicRadar;

static bool _UltrasonicRadar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UltrasonicRadar__ros_msg_type * ros_message = static_cast<const _UltrasonicRadar__ros_msg_type *>(untyped_ros_message);
  // Field name: radar_identify_id
  {
    cdr << ros_message->radar_identify_id;
  }

  // Field name: radar_name
  {
    const rosidl_runtime_c__String * str = &ros_message->radar_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: radar_type
  {
    const rosidl_runtime_c__String * str = &ros_message->radar_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: radar_state
  {
    cdr << (ros_message->radar_state ? true : false);
  }

  // Field name: radar_tx_status
  {
    cdr << (ros_message->radar_tx_status ? true : false);
  }

  // Field name: radar_rx_status
  {
    cdr << (ros_message->radar_rx_status ? true : false);
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: max_radar_distance
  {
    cdr << ros_message->max_radar_distance;
  }

  // Field name: radar_distance
  {
    cdr << ros_message->radar_distance;
  }

  // Field name: radar_distance_vaild
  {
    cdr << (ros_message->radar_distance_vaild ? true : false);
  }

  return true;
}

static bool _UltrasonicRadar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UltrasonicRadar__ros_msg_type * ros_message = static_cast<_UltrasonicRadar__ros_msg_type *>(untyped_ros_message);
  // Field name: radar_identify_id
  {
    cdr >> ros_message->radar_identify_id;
  }

  // Field name: radar_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->radar_name.data) {
      rosidl_runtime_c__String__init(&ros_message->radar_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->radar_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'radar_name'\n");
      return false;
    }
  }

  // Field name: radar_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->radar_type.data) {
      rosidl_runtime_c__String__init(&ros_message->radar_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->radar_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'radar_type'\n");
      return false;
    }
  }

  // Field name: radar_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_state = tmp ? true : false;
  }

  // Field name: radar_tx_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_tx_status = tmp ? true : false;
  }

  // Field name: radar_rx_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_rx_status = tmp ? true : false;
  }

  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: max_radar_distance
  {
    cdr >> ros_message->max_radar_distance;
  }

  // Field name: radar_distance
  {
    cdr >> ros_message->radar_distance;
  }

  // Field name: radar_distance_vaild
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_distance_vaild = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__UltrasonicRadar(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UltrasonicRadar__ros_msg_type * ros_message = static_cast<const _UltrasonicRadar__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name radar_identify_id
  {
    size_t item_size = sizeof(ros_message->radar_identify_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->radar_name.size + 1);
  // field.name radar_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->radar_type.size + 1);
  // field.name radar_state
  {
    size_t item_size = sizeof(ros_message->radar_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_tx_status
  {
    size_t item_size = sizeof(ros_message->radar_tx_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_rx_status
  {
    size_t item_size = sizeof(ros_message->radar_rx_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_radar_distance
  {
    size_t item_size = sizeof(ros_message->max_radar_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_distance
  {
    size_t item_size = sizeof(ros_message->radar_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_distance_vaild
  {
    size_t item_size = sizeof(ros_message->radar_distance_vaild);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UltrasonicRadar__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__UltrasonicRadar(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__UltrasonicRadar(
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

  // member: radar_identify_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: radar_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: radar_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_tx_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_rx_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_radar_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: radar_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: radar_distance_vaild
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
    using DataType = deva_perception_msgs__msg__UltrasonicRadar;
    is_plain =
      (
      offsetof(DataType, radar_distance_vaild) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UltrasonicRadar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__UltrasonicRadar(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UltrasonicRadar = {
  "deva_perception_msgs::msg",
  "UltrasonicRadar",
  _UltrasonicRadar__cdr_serialize,
  _UltrasonicRadar__cdr_deserialize,
  _UltrasonicRadar__get_serialized_size,
  _UltrasonicRadar__max_serialized_size
};

static rosidl_message_type_support_t _UltrasonicRadar__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UltrasonicRadar,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, UltrasonicRadar)() {
  return &_UltrasonicRadar__type_support;
}

#if defined(__cplusplus)
}
#endif
