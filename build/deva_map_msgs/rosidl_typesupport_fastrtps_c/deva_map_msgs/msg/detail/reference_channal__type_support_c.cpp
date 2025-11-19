// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/reference_channal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_map_msgs/msg/detail/reference_channal__struct.h"
#include "deva_map_msgs/msg/detail/reference_channal__functions.h"
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

#include "deva_map_msgs/msg/detail/channel_lane_line__functions.h"  // middle_line
#include "deva_map_msgs/msg/detail/channel_lane_marking__functions.h"  // left_marking, right_marking
#include "deva_map_msgs/msg/detail/channel_object_info__functions.h"  // object_infos

// forward declare type support functions
size_t get_serialized_size_deva_map_msgs__msg__ChannelLaneLine(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelLaneLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneLine)();
size_t get_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneMarking)();
size_t get_serialized_size_deva_map_msgs__msg__ChannelObjectInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_map_msgs__msg__ChannelObjectInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelObjectInfo)();


using _ReferenceChannal__ros_msg_type = deva_map_msgs__msg__ReferenceChannal;

static bool _ReferenceChannal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReferenceChannal__ros_msg_type * ros_message = static_cast<const _ReferenceChannal__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    cdr << (ros_message->available ? true : false);
  }

  // Field name: confidence_coefficient
  {
    cdr << ros_message->confidence_coefficient;
  }

  // Field name: channel_idx
  {
    cdr << ros_message->channel_idx;
  }

  // Field name: middle_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneLine
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->middle_line, cdr))
    {
      return false;
    }
  }

  // Field name: left_marking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneMarking
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_marking, cdr))
    {
      return false;
    }
  }

  // Field name: right_marking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneMarking
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_marking, cdr))
    {
      return false;
    }
  }

  // Field name: object_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelObjectInfo
      )()->data);
    size_t size = ros_message->object_infos.size;
    auto array_ptr = ros_message->object_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ReferenceChannal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReferenceChannal__ros_msg_type * ros_message = static_cast<_ReferenceChannal__ros_msg_type *>(untyped_ros_message);
  // Field name: available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->available = tmp ? true : false;
  }

  // Field name: confidence_coefficient
  {
    cdr >> ros_message->confidence_coefficient;
  }

  // Field name: channel_idx
  {
    cdr >> ros_message->channel_idx;
  }

  // Field name: middle_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneLine
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->middle_line))
    {
      return false;
    }
  }

  // Field name: left_marking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneMarking
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_marking))
    {
      return false;
    }
  }

  // Field name: right_marking
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelLaneMarking
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_marking))
    {
      return false;
    }
  }

  // Field name: object_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ChannelObjectInfo
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

    if (ros_message->object_infos.data) {
      deva_map_msgs__msg__ChannelObjectInfo__Sequence__fini(&ros_message->object_infos);
    }
    if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(&ros_message->object_infos, size)) {
      fprintf(stderr, "failed to create array for field 'object_infos'");
      return false;
    }
    auto array_ptr = ros_message->object_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t get_serialized_size_deva_map_msgs__msg__ReferenceChannal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReferenceChannal__ros_msg_type * ros_message = static_cast<const _ReferenceChannal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name available
  {
    size_t item_size = sizeof(ros_message->available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence_coefficient
  {
    size_t item_size = sizeof(ros_message->confidence_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_idx
  {
    size_t item_size = sizeof(ros_message->channel_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name middle_line

  current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelLaneLine(
    &(ros_message->middle_line), current_alignment);
  // field.name left_marking

  current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
    &(ros_message->left_marking), current_alignment);
  // field.name right_marking

  current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
    &(ros_message->right_marking), current_alignment);
  // field.name object_infos
  {
    size_t array_size = ros_message->object_infos.size;
    auto array_ptr = ros_message->object_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_map_msgs__msg__ChannelObjectInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReferenceChannal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_map_msgs__msg__ReferenceChannal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_map_msgs
size_t max_serialized_size_deva_map_msgs__msg__ReferenceChannal(
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

  // member: available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confidence_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: channel_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: middle_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_map_msgs__msg__ChannelLaneLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: left_marking
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: right_marking
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_map_msgs__msg__ChannelLaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: object_infos
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
        max_serialized_size_deva_map_msgs__msg__ChannelObjectInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_map_msgs__msg__ReferenceChannal;
    is_plain =
      (
      offsetof(DataType, object_infos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ReferenceChannal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_map_msgs__msg__ReferenceChannal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReferenceChannal = {
  "deva_map_msgs::msg",
  "ReferenceChannal",
  _ReferenceChannal__cdr_serialize,
  _ReferenceChannal__cdr_deserialize,
  _ReferenceChannal__get_serialized_size,
  _ReferenceChannal__max_serialized_size
};

static rosidl_message_type_support_t _ReferenceChannal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReferenceChannal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_map_msgs, msg, ReferenceChannal)() {
  return &_ReferenceChannal__type_support;
}

#if defined(__cplusplus)
}
#endif
