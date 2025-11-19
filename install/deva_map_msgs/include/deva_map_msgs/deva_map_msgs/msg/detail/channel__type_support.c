// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/channel__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/channel__functions.h"
#include "deva_map_msgs/msg/detail/channel__struct.h"


// Include directives for member types
// Member `current_lane_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `laneinfo`
#include "deva_map_msgs/msg/channel_lane_info.h"
// Member `laneinfo`
#include "deva_map_msgs/msg/detail/channel_lane_info__rosidl_typesupport_introspection_c.h"
// Member `middle_line`
// Member `reference_line_vec`
#include "deva_map_msgs/msg/channel_lane_line.h"
// Member `middle_line`
// Member `reference_line_vec`
#include "deva_map_msgs/msg/detail/channel_lane_line__rosidl_typesupport_introspection_c.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/channel_lane_marking.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/detail/channel_lane_marking__rosidl_typesupport_introspection_c.h"
// Member `object_info`
#include "deva_map_msgs/msg/channel_object_info.h"
// Member `object_info`
#include "deva_map_msgs/msg/detail/channel_object_info__rosidl_typesupport_introspection_c.h"
// Member `signal_info`
#include "deva_map_msgs/msg/channel_signal_info.h"
// Member `signal_info`
#include "deva_map_msgs/msg/detail/channel_signal_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__Channel__init(message_memory);
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_fini_function(void * message_memory)
{
  deva_map_msgs__msg__Channel__fini(message_memory);
}

size_t deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__reference_line_vec(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelLaneLine__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__reference_line_vec(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelLaneLine__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__reference_line_vec(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelLaneLine__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__reference_line_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelLaneLine * item =
    ((const deva_map_msgs__msg__ChannelLaneLine *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__reference_line_vec(untyped_member, index));
  deva_map_msgs__msg__ChannelLaneLine * value =
    (deva_map_msgs__msg__ChannelLaneLine *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__reference_line_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelLaneLine * item =
    ((deva_map_msgs__msg__ChannelLaneLine *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__reference_line_vec(untyped_member, index));
  const deva_map_msgs__msg__ChannelLaneLine * value =
    (const deva_map_msgs__msg__ChannelLaneLine *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__reference_line_vec(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelLaneLine__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneLine__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelLaneLine__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelLaneLine__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__object_info(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__object_info(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__object_info(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__object_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelObjectInfo * item =
    ((const deva_map_msgs__msg__ChannelObjectInfo *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__object_info(untyped_member, index));
  deva_map_msgs__msg__ChannelObjectInfo * value =
    (deva_map_msgs__msg__ChannelObjectInfo *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__object_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelObjectInfo * item =
    ((deva_map_msgs__msg__ChannelObjectInfo *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__object_info(untyped_member, index));
  const deva_map_msgs__msg__ChannelObjectInfo * value =
    (const deva_map_msgs__msg__ChannelObjectInfo *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__object_info(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelObjectInfo__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__signal_info(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelSignalInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelSignalInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__signal_info(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelSignalInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelSignalInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__signal_info(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelSignalInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelSignalInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__signal_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelSignalInfo * item =
    ((const deva_map_msgs__msg__ChannelSignalInfo *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__signal_info(untyped_member, index));
  deva_map_msgs__msg__ChannelSignalInfo * value =
    (deva_map_msgs__msg__ChannelSignalInfo *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__signal_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelSignalInfo * item =
    ((deva_map_msgs__msg__ChannelSignalInfo *)
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__signal_info(untyped_member, index));
  const deva_map_msgs__msg__ChannelSignalInfo * value =
    (const deva_map_msgs__msg__ChannelSignalInfo *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__signal_info(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelSignalInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelSignalInfo__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelSignalInfo__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelSignalInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[15] = {
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_on_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, is_on_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "errcode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, errcode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, current_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, channel_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, lane_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laneinfo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, laneinfo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "middle_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, middle_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_line_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, reference_line_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__reference_line_vec,  // size() function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__reference_line_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__reference_line_vec,  // get(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__reference_line_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__reference_line_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__reference_line_vec  // resize(index) function pointer
  },
  {
    "left_marking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, left_marking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_marking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, right_marking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_channel_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, left_channel_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_channel_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, right_channel_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, object_info),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__object_info,  // size() function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__object_info,  // get_const(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__object_info,  // get(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__object_info,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__object_info,  // assign(index, value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__object_info  // resize(index) function pointer
  },
  {
    "signal_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__Channel, signal_info),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__size_function__Channel__signal_info,  // size() function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_const_function__Channel__signal_info,  // get_const(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__get_function__Channel__signal_info,  // get(index) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__fetch_function__Channel__signal_info,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__assign_function__Channel__signal_info,  // assign(index, value) function pointer
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__resize_function__Channel__signal_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "Channel",  // message name
  15,  // number of fields
  sizeof(deva_map_msgs__msg__Channel),
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array,  // message members
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, Channel)() {
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneInfo)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneLine)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneLine)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneMarking)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneMarking)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelObjectInfo)();
  deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelSignalInfo)();
  if (!deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__Channel__rosidl_typesupport_introspection_c__Channel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
