// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__functions.h"
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

#include "deva_aeb_msgs/msg/detail/lane_fst_info__functions.h"  // clsle, clsri
#include "deva_aeb_msgs/msg/detail/lane_sec_info__functions.h"  // secclsle, secclsri, thiclsle, thiclsri
#include "deva_aeb_msgs/msg/detail/rear_lane_info__functions.h"  // rearclsle, rearclsri, rearsecclsle, rearsecclsri, rearthiclsle, rearthiclsri

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneFstInfo)();
size_t get_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo)();
size_t get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo)();


using _SFFusionLaneMkrList__ros_msg_type = deva_aeb_msgs__msg__SFFusionLaneMkrList;

static bool _SFFusionLaneMkrList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFFusionLaneMkrList__ros_msg_type * ros_message = static_cast<const _SFFusionLaneMkrList__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr << ros_message->framenum;
  }

  // Field name: lanechg
  {
    cdr << ros_message->lanechg;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: distostopline
  {
    cdr << ros_message->distostopline;
  }

  // Field name: clsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneFstInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->clsle, cdr))
    {
      return false;
    }
  }

  // Field name: clsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneFstInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->clsri, cdr))
    {
      return false;
    }
  }

  // Field name: secclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->secclsle, cdr))
    {
      return false;
    }
  }

  // Field name: secclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->secclsri, cdr))
    {
      return false;
    }
  }

  // Field name: thiclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->thiclsle, cdr))
    {
      return false;
    }
  }

  // Field name: thiclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->thiclsri, cdr))
    {
      return false;
    }
  }

  // Field name: rearclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearclsle, cdr))
    {
      return false;
    }
  }

  // Field name: rearclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearclsri, cdr))
    {
      return false;
    }
  }

  // Field name: rearsecclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearsecclsle, cdr))
    {
      return false;
    }
  }

  // Field name: rearsecclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearsecclsri, cdr))
    {
      return false;
    }
  }

  // Field name: rearthiclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearthiclsle, cdr))
    {
      return false;
    }
  }

  // Field name: rearthiclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rearthiclsri, cdr))
    {
      return false;
    }
  }

  // Field name: isambiguouslinepatternleft
  {
    cdr << ros_message->isambiguouslinepatternleft;
  }

  // Field name: isambiguouslinepatternright
  {
    cdr << ros_message->isambiguouslinepatternright;
  }

  // Field name: cmpforvisnyaw
  {
    cdr << ros_message->cmpforvisnyaw;
  }

  return true;
}

static bool _SFFusionLaneMkrList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFFusionLaneMkrList__ros_msg_type * ros_message = static_cast<_SFFusionLaneMkrList__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: framenum
  {
    cdr >> ros_message->framenum;
  }

  // Field name: lanechg
  {
    cdr >> ros_message->lanechg;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: distostopline
  {
    cdr >> ros_message->distostopline;
  }

  // Field name: clsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneFstInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->clsle))
    {
      return false;
    }
  }

  // Field name: clsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneFstInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->clsri))
    {
      return false;
    }
  }

  // Field name: secclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->secclsle))
    {
      return false;
    }
  }

  // Field name: secclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->secclsri))
    {
      return false;
    }
  }

  // Field name: thiclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->thiclsle))
    {
      return false;
    }
  }

  // Field name: thiclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, LaneSecInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->thiclsri))
    {
      return false;
    }
  }

  // Field name: rearclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearclsle))
    {
      return false;
    }
  }

  // Field name: rearclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearclsri))
    {
      return false;
    }
  }

  // Field name: rearsecclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearsecclsle))
    {
      return false;
    }
  }

  // Field name: rearsecclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearsecclsri))
    {
      return false;
    }
  }

  // Field name: rearthiclsle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearthiclsle))
    {
      return false;
    }
  }

  // Field name: rearthiclsri
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, RearLaneInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rearthiclsri))
    {
      return false;
    }
  }

  // Field name: isambiguouslinepatternleft
  {
    cdr >> ros_message->isambiguouslinepatternleft;
  }

  // Field name: isambiguouslinepatternright
  {
    cdr >> ros_message->isambiguouslinepatternright;
  }

  // Field name: cmpforvisnyaw
  {
    cdr >> ros_message->cmpforvisnyaw;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFFusionLaneMkrList__ros_msg_type * ros_message = static_cast<const _SFFusionLaneMkrList__ros_msg_type *>(untyped_ros_message);
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
  // field.name lanechg
  {
    size_t item_size = sizeof(ros_message->lanechg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distostopline
  {
    size_t item_size = sizeof(ros_message->distostopline);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
    &(ros_message->clsle), current_alignment);
  // field.name clsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
    &(ros_message->clsri), current_alignment);
  // field.name secclsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
    &(ros_message->secclsle), current_alignment);
  // field.name secclsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
    &(ros_message->secclsri), current_alignment);
  // field.name thiclsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
    &(ros_message->thiclsle), current_alignment);
  // field.name thiclsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
    &(ros_message->thiclsri), current_alignment);
  // field.name rearclsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearclsle), current_alignment);
  // field.name rearclsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearclsri), current_alignment);
  // field.name rearsecclsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearsecclsle), current_alignment);
  // field.name rearsecclsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearsecclsri), current_alignment);
  // field.name rearthiclsle

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearthiclsle), current_alignment);
  // field.name rearthiclsri

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
    &(ros_message->rearthiclsri), current_alignment);
  // field.name isambiguouslinepatternleft
  {
    size_t item_size = sizeof(ros_message->isambiguouslinepatternleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isambiguouslinepatternright
  {
    size_t item_size = sizeof(ros_message->isambiguouslinepatternright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmpforvisnyaw
  {
    size_t item_size = sizeof(ros_message->cmpforvisnyaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFFusionLaneMkrList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
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
  // member: lanechg
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
  // member: distostopline
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: clsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: clsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneFstInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: secclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: secclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: thiclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: thiclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__LaneSecInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearsecclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearsecclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearthiclsle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rearthiclsri
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__RearLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: isambiguouslinepatternleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isambiguouslinepatternright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmpforvisnyaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs__msg__SFFusionLaneMkrList;
    is_plain =
      (
      offsetof(DataType, cmpforvisnyaw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFFusionLaneMkrList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFFusionLaneMkrList = {
  "deva_aeb_msgs::msg",
  "SFFusionLaneMkrList",
  _SFFusionLaneMkrList__cdr_serialize,
  _SFFusionLaneMkrList__cdr_deserialize,
  _SFFusionLaneMkrList__get_serialized_size,
  _SFFusionLaneMkrList__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionLaneMkrList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFFusionLaneMkrList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionLaneMkrList)() {
  return &_SFFusionLaneMkrList__type_support;
}

#if defined(__cplusplus)
}
#endif
