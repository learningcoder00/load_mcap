// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/RadarObjectMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/radar_object_message__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/radar_object_message__functions.h"
#include "deva_perception_msgs/msg/detail/radar_object_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "deva_perception_msgs/msg/radar_status.h"
// Member `status`
#include "deva_perception_msgs/msg/detail/radar_status__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "deva_perception_msgs/msg/radar_object_info.h"
// Member `objects`
#include "deva_perception_msgs/msg/detail/radar_object_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__RadarObjectMessage__init(message_memory);
}

void deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__RadarObjectMessage__fini(message_memory);
}

size_t deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__size_function__RadarObjectMessage__objects(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__RadarObjectInfo__Sequence * member =
    (const deva_perception_msgs__msg__RadarObjectInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_const_function__RadarObjectMessage__objects(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__RadarObjectInfo__Sequence * member =
    (const deva_perception_msgs__msg__RadarObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_function__RadarObjectMessage__objects(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__RadarObjectInfo__Sequence * member =
    (deva_perception_msgs__msg__RadarObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__fetch_function__RadarObjectMessage__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__RadarObjectInfo * item =
    ((const deva_perception_msgs__msg__RadarObjectInfo *)
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_const_function__RadarObjectMessage__objects(untyped_member, index));
  deva_perception_msgs__msg__RadarObjectInfo * value =
    (deva_perception_msgs__msg__RadarObjectInfo *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__assign_function__RadarObjectMessage__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__RadarObjectInfo * item =
    ((deva_perception_msgs__msg__RadarObjectInfo *)
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_function__RadarObjectMessage__objects(untyped_member, index));
  const deva_perception_msgs__msg__RadarObjectInfo * value =
    (const deva_perception_msgs__msg__RadarObjectInfo *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__resize_function__RadarObjectMessage__objects(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__RadarObjectInfo__Sequence * member =
    (deva_perception_msgs__msg__RadarObjectInfo__Sequence *)(untyped_member);
  deva_perception_msgs__msg__RadarObjectInfo__Sequence__fini(member);
  return deva_perception_msgs__msg__RadarObjectInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RadarObjectMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RadarObjectMessage, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RadarObjectMessage, objects),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__size_function__RadarObjectMessage__objects,  // size() function pointer
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_const_function__RadarObjectMessage__objects,  // get_const(index) function pointer
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__get_function__RadarObjectMessage__objects,  // get(index) function pointer
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__fetch_function__RadarObjectMessage__objects,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__assign_function__RadarObjectMessage__objects,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__resize_function__RadarObjectMessage__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "RadarObjectMessage",  // message name
  3,  // number of fields
  sizeof(deva_perception_msgs__msg__RadarObjectMessage),
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_member_array,  // message members
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RadarObjectMessage)() {
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RadarStatus)();
  deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RadarObjectInfo)();
  if (!deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__RadarObjectMessage__rosidl_typesupport_introspection_c__RadarObjectMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
