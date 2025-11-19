// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/obstacle_timestamp__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/obstacle_timestamp__functions.h"
#include "deva_perception_msgs/msg/detail/obstacle_timestamp__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `radar_timestamps`
// Member `camera_timestamps`
// Member `lidar_timestamp`
// Member `loc_timestamp`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__ObstacleTimestamp__init(message_memory);
}

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__ObstacleTimestamp__fini(message_memory);
}

size_t deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__size_function__ObstacleTimestamp__radar_timestamps(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__radar_timestamps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__radar_timestamps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__fetch_function__ObstacleTimestamp__radar_timestamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__radar_timestamps(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__assign_function__ObstacleTimestamp__radar_timestamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__radar_timestamps(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__resize_function__ObstacleTimestamp__radar_timestamps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__size_function__ObstacleTimestamp__camera_timestamps(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__camera_timestamps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__camera_timestamps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__fetch_function__ObstacleTimestamp__camera_timestamps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__camera_timestamps(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__assign_function__ObstacleTimestamp__camera_timestamps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__camera_timestamps(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__resize_function__ObstacleTimestamp__camera_timestamps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleTimestamp, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radar_timestamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleTimestamp, radar_timestamps),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__size_function__ObstacleTimestamp__radar_timestamps,  // size() function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__radar_timestamps,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__radar_timestamps,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__fetch_function__ObstacleTimestamp__radar_timestamps,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__assign_function__ObstacleTimestamp__radar_timestamps,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__resize_function__ObstacleTimestamp__radar_timestamps  // resize(index) function pointer
  },
  {
    "camera_timestamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleTimestamp, camera_timestamps),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__size_function__ObstacleTimestamp__camera_timestamps,  // size() function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_const_function__ObstacleTimestamp__camera_timestamps,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__get_function__ObstacleTimestamp__camera_timestamps,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__fetch_function__ObstacleTimestamp__camera_timestamps,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__assign_function__ObstacleTimestamp__camera_timestamps,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__resize_function__ObstacleTimestamp__camera_timestamps  // resize(index) function pointer
  },
  {
    "lidar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleTimestamp, lidar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loc_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleTimestamp, loc_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "ObstacleTimestamp",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs__msg__ObstacleTimestamp),
  deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_member_array,  // message members
  deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ObstacleTimestamp)() {
  deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__ObstacleTimestamp__rosidl_typesupport_introspection_c__ObstacleTimestamp_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
