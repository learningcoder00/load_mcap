// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/Entrance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/entrance__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/entrance__functions.h"
#include "deva_perception_msgs/msg/detail/entrance__struct.h"


// Include directives for member types
// Member `points`
// Member `direction`
#include "geometry_msgs/msg/point.h"
// Member `points`
// Member `direction`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__Entrance__init(message_memory);
}

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__Entrance__fini(message_memory);
}

size_t deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__size_function__Entrance__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__fetch_function__Entrance__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__assign_function__Entrance__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__resize_function__Entrance__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__size_function__Entrance__direction(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__direction(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__direction(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__fetch_function__Entrance__direction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__direction(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__assign_function__Entrance__direction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__direction(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__resize_function__Entrance__direction(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Entrance, id),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__Entrance, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Entrance, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Entrance, points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__size_function__Entrance__points,  // size() function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__points,  // get_const(index) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__points,  // get(index) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__fetch_function__Entrance__points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__assign_function__Entrance__points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__resize_function__Entrance__points  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Entrance, direction),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__size_function__Entrance__direction,  // size() function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_const_function__Entrance__direction,  // get_const(index) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__get_function__Entrance__direction,  // get(index) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__fetch_function__Entrance__direction,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__assign_function__Entrance__direction,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__resize_function__Entrance__direction  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "Entrance",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs__msg__Entrance),
  deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_member_array,  // message members
  deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Entrance)() {
  deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__Entrance__rosidl_typesupport_introspection_c__Entrance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
