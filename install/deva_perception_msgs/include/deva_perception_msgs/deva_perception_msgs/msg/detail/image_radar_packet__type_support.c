// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/ImageRadarPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/image_radar_packet__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/image_radar_packet__functions.h"
#include "deva_perception_msgs/msg/detail/image_radar_packet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__ImageRadarPacket__init(message_memory);
}

void deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__ImageRadarPacket__fini(message_memory);
}

size_t deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__size_function__ImageRadarPacket__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_const_function__ImageRadarPacket__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_function__ImageRadarPacket__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__fetch_function__ImageRadarPacket__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_const_function__ImageRadarPacket__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__assign_function__ImageRadarPacket__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_function__ImageRadarPacket__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__resize_function__ImageRadarPacket__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ImageRadarPacket, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ImageRadarPacket, data),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__size_function__ImageRadarPacket__data,  // size() function pointer
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_const_function__ImageRadarPacket__data,  // get_const(index) function pointer
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__get_function__ImageRadarPacket__data,  // get(index) function pointer
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__fetch_function__ImageRadarPacket__data,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__assign_function__ImageRadarPacket__data,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__resize_function__ImageRadarPacket__data  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ImageRadarPacket, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ImageRadarPacket, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_bigendian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ImageRadarPacket, is_bigendian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "ImageRadarPacket",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs__msg__ImageRadarPacket),
  deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_member_array,  // message members
  deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ImageRadarPacket)() {
  deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__ImageRadarPacket__rosidl_typesupport_introspection_c__ImageRadarPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
