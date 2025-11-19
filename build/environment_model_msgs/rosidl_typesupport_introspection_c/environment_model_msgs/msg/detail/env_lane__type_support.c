// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_lane__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_lane__functions.h"
#include "environment_model_msgs/msg/detail/env_lane__struct.h"


// Include directives for member types
// Member `coords`
// Member `extends`
// Member `left_boundary`
// Member `right_boundary`
#include "environment_model_msgs/msg/vec2d.h"
// Member `coords`
// Member `extends`
// Member `left_boundary`
// Member `right_boundary`
#include "environment_model_msgs/msg/detail/vec2d__rosidl_typesupport_introspection_c.h"
// Member `left_neibors`
// Member `right_neibors`
#include "environment_model_msgs/msg/map_ids.h"
// Member `left_neibors`
// Member `right_neibors`
#include "environment_model_msgs/msg/detail/map_ids__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvLane__init(message_memory);
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvLane__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__coords(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__coords(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__coords(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__coords(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__coords(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__coords(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__extends(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__extends(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__extends(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__extends(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__extends(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__extends(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__extends(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__extends(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__left_boundary(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_boundary(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_boundary(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__left_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_boundary(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__left_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_boundary(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__left_boundary(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__right_boundary(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_boundary(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_boundary(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__right_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_boundary(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__right_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_boundary(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__right_boundary(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__left_neibors(
  const void * untyped_member)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_neibors(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_neibors(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__left_neibors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__MapIds * item =
    ((const environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_neibors(untyped_member, index));
  environment_model_msgs__msg__MapIds * value =
    (environment_model_msgs__msg__MapIds *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__left_neibors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__MapIds * item =
    ((environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_neibors(untyped_member, index));
  const environment_model_msgs__msg__MapIds * value =
    (const environment_model_msgs__msg__MapIds *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__left_neibors(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  environment_model_msgs__msg__MapIds__Sequence__fini(member);
  return environment_model_msgs__msg__MapIds__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__right_neibors(
  const void * untyped_member)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_neibors(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_neibors(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__right_neibors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__MapIds * item =
    ((const environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_neibors(untyped_member, index));
  environment_model_msgs__msg__MapIds * value =
    (environment_model_msgs__msg__MapIds *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__right_neibors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__MapIds * item =
    ((environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_neibors(untyped_member, index));
  const environment_model_msgs__msg__MapIds * value =
    (const environment_model_msgs__msg__MapIds *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__right_neibors(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  environment_model_msgs__msg__MapIds__Sequence__fini(member);
  return environment_model_msgs__msg__MapIds__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coords",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, coords),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__coords,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__coords,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__coords,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__coords,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__coords,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__coords  // resize(index) function pointer
  },
  {
    "extends",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, extends),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__extends,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__extends,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__extends,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__extends,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__extends,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__extends  // resize(index) function pointer
  },
  {
    "left_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, left_boundary),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__left_boundary,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_boundary,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_boundary,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__left_boundary,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__left_boundary,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__left_boundary  // resize(index) function pointer
  },
  {
    "right_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, right_boundary),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__right_boundary,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_boundary,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_boundary,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__right_boundary,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__right_boundary,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__right_boundary  // resize(index) function pointer
  },
  {
    "left_neibors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, left_neibors),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__left_neibors,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__left_neibors,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__left_neibors,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__left_neibors,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__left_neibors,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__left_neibors  // resize(index) function pointer
  },
  {
    "right_neibors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLane, right_neibors),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__size_function__EnvLane__right_neibors,  // size() function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_const_function__EnvLane__right_neibors,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__get_function__EnvLane__right_neibors,  // get(index) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__fetch_function__EnvLane__right_neibors,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__assign_function__EnvLane__right_neibors,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__resize_function__EnvLane__right_neibors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvLane",  // message name
  7,  // number of fields
  sizeof(environment_model_msgs__msg__EnvLane),
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array,  // message members
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLane)() {
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, MapIds)();
  environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, MapIds)();
  if (!environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvLane__rosidl_typesupport_introspection_c__EnvLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
