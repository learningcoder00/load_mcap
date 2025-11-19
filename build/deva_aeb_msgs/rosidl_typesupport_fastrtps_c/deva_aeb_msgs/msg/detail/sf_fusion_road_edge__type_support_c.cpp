// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__functions.h"
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

#include "deva_aeb_msgs/msg/detail/road_info__functions.h"  // frontleft, frontright, rearleft, rearright

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__RoadInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__RoadInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo)();


using _SFFusionRoadEdge__ros_msg_type = deva_aeb_msgs__msg__SFFusionRoadEdge;

static bool _SFFusionRoadEdge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionRoadEdge__ros_msg_type * ros_message = static_cast<const _SFFusionRoadEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr << ros_message->framenum;
  }

  // Field name: frontleft
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->frontleft, cdr))
    {
      return false;
    }
  }

  // Field name: frontright
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->frontright, cdr))
    {
      return false;
    }
  }

  // Field name: rearleft
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearleft, cdr))
    {
      return false;
    }
  }

  // Field name: rearright
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearright, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SFFusionRoadEdge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionRoadEdge__ros_msg_type * ros_message = static_cast<_SFFusionRoadEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr >> ros_message->framenum;
  }

  // Field name: frontleft
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->frontleft))
    {
      return false;
    }
  }

  // Field name: frontright
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->frontright))
    {
      return false;
    }
  }

  // Field name: rearleft
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearleft))
    {
      return false;
    }
  }

  // Field name: rearright
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RoadInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearright))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionRoadEdge__ros_msg_type * ros_message = static_cast<const _SFFusionRoadEdge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name framenum
  {
    size_t item_size = sizeof(ros_message->framenum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frontleft

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RoadInfo(
    &(ros_message->frontleft), current_alignment);
  // field.name frontright

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RoadInfo(
    &(ros_message->frontright), current_alignment);
  // field.name rearleft

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RoadInfo(
    &(ros_message->rearleft), current_alignment);
  // field.name rearright

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RoadInfo(
    &(ros_message->rearright), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionRoadEdge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: framenum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: frontleft
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RoadInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: frontright
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RoadInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearleft
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RoadInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearright
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RoadInfo(
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
    using DataType = deva_aeb_msgs__msg__SFFusionRoadEdge;
    is_plain =
      (
      offsetof(DataType, rearright) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionRoadEdge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionRoadEdge = {
  "deva_aeb_msgs::msg",
  "SFFusionRoadEdge",
  _SFFusionRoadEdge__cdr_serialize,
  _SFFusionRoadEdge__cdr_deserialize,
  _SFFusionRoadEdge__get_serialized_size,
  _SFFusionRoadEdge__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionRoadEdge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionRoadEdge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadEdge)() {
  return &_SFFusionRoadEdge__type_support;
}

#if defined(__cplusplus)
}
#endif
