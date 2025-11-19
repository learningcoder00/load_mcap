// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/reference_channal__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/reference_channal__functions.h"
#include "deva_map_msgs/msg/detail/reference_channal__struct.h"


// Include directives for member types
// Member `middle_line`
#include "deva_map_msgs/msg/channel_lane_line.h"
// Member `middle_line`
#include "deva_map_msgs/msg/detail/channel_lane_line__rosidl_typesupport_introspection_c.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/channel_lane_marking.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/detail/channel_lane_marking__rosidl_typesupport_introspection_c.h"
// Member `object_infos`
#include "deva_map_msgs/msg/channel_object_info.h"
// Member `object_infos`
#include "deva_map_msgs/msg/detail/channel_object_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__ReferenceChannal__init(message_memory);
}

void deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_fini_function(void * message_memory)
{
  deva_map_msgs__msg__ReferenceChannal__fini(message_memory);
}

size_t deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__size_function__ReferenceChannal__object_infos(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_const_function__ReferenceChannal__object_infos(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (const deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_function__ReferenceChannal__object_infos(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__fetch_function__ReferenceChannal__object_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelObjectInfo * item =
    ((const deva_map_msgs__msg__ChannelObjectInfo *)
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_const_function__ReferenceChannal__object_infos(untyped_member, index));
  deva_map_msgs__msg__ChannelObjectInfo * value =
    (deva_map_msgs__msg__ChannelObjectInfo *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__assign_function__ReferenceChannal__object_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelObjectInfo * item =
    ((deva_map_msgs__msg__ChannelObjectInfo *)
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_function__ReferenceChannal__object_infos(untyped_member, index));
  const deva_map_msgs__msg__ChannelObjectInfo * value =
    (const deva_map_msgs__msg__ChannelObjectInfo *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__resize_function__ReferenceChannal__object_infos(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelObjectInfo__Sequence * member =
    (deva_map_msgs__msg__ChannelObjectInfo__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelObjectInfo__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array[7] = {
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ReferenceChannal, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence_coefficient",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ReferenceChannal, confidence_coefficient),  // bytes offset in struct
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
    offsetof(deva_map_msgs__msg__ReferenceChannal, channel_idx),  // bytes offset in struct
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
    offsetof(deva_map_msgs__msg__ReferenceChannal, middle_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_marking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ReferenceChannal, left_marking),  // bytes offset in struct
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
    offsetof(deva_map_msgs__msg__ReferenceChannal, right_marking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ReferenceChannal, object_infos),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__size_function__ReferenceChannal__object_infos,  // size() function pointer
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_const_function__ReferenceChannal__object_infos,  // get_const(index) function pointer
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__get_function__ReferenceChannal__object_infos,  // get(index) function pointer
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__fetch_function__ReferenceChannal__object_infos,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__assign_function__ReferenceChannal__object_infos,  // assign(index, value) function pointer
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__resize_function__ReferenceChannal__object_infos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "ReferenceChannal",  // message name
  7,  // number of fields
  sizeof(deva_map_msgs__msg__ReferenceChannal),
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array,  // message members
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ReferenceChannal)() {
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneLine)();
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneMarking)();
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneMarking)();
  deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelObjectInfo)();
  if (!deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__ReferenceChannal__rosidl_typesupport_introspection_c__ReferenceChannal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
