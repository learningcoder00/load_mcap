// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__struct.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__functions.h"
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

#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__functions.h"  // fusionlanemkrlist
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__functions.h"  // fusionroadedge
#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionLaneMkrList)();
size_t get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadEdge)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _FusionInfoForAEBLaneAndEdge__ros_msg_type = deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge;

static bool _FusionInfoForAEBLaneAndEdge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FusionInfoForAEBLaneAndEdge__ros_msg_type * ros_message = static_cast<const _FusionInfoForAEBLaneAndEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: fusionlanemkrlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionLaneMkrList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusionlanemkrlist, cdr))
    {
      return false;
    }
  }

  // Field name: fusionroadedge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadEdge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->fusionroadedge, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FusionInfoForAEBLaneAndEdge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FusionInfoForAEBLaneAndEdge__ros_msg_type * ros_message = static_cast<_FusionInfoForAEBLaneAndEdge__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: fusionlanemkrlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionLaneMkrList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusionlanemkrlist))
    {
      return false;
    }
  }

  // Field name: fusionroadedge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFFusionRoadEdge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->fusionroadedge))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FusionInfoForAEBLaneAndEdge__ros_msg_type * ros_message = static_cast<const _FusionInfoForAEBLaneAndEdge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name fusionlanemkrlist

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
    &(ros_message->fusionlanemkrlist), current_alignment);
  // field.name fusionroadedge

  current_alignment += get_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
    &(ros_message->fusionroadedge), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FusionInfoForAEBLaneAndEdge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge(
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
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusionlanemkrlist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionLaneMkrList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: fusionroadedge
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_aeb_msgs__msg__SFFusionRoadEdge(
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
    using DataType = deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge;
    is_plain =
      (
      offsetof(DataType, fusionroadedge) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FusionInfoForAEBLaneAndEdge__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FusionInfoForAEBLaneAndEdge = {
  "deva_aeb_msgs::msg",
  "FusionInfoForAEBLaneAndEdge",
  _FusionInfoForAEBLaneAndEdge__cdr_serialize,
  _FusionInfoForAEBLaneAndEdge__cdr_deserialize,
  _FusionInfoForAEBLaneAndEdge__get_serialized_size,
  _FusionInfoForAEBLaneAndEdge__max_serialized_size
};

static rosidl_message_type_support_t _FusionInfoForAEBLaneAndEdge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FusionInfoForAEBLaneAndEdge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, FusionInfoForAEBLaneAndEdge)() {
  return &_FusionInfoForAEBLaneAndEdge__type_support;
}

#if defined(__cplusplus)
}
#endif
