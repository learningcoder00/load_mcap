// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_lane__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_lane__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.h"


// Include directives for member types
// Member `actual_turn`
// Member `navi_turn`
// Member `optimal_turn`
// Member `actual_exten_turn`
// Member `exten_turn`
// Member `actual_turn_type`
// Member `navi_turn_type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"
// Member `callback_point`
#include "deva_gaode_routing_msgs/msg/web_point.h"
// Member `callback_point`
#include "deva_gaode_routing_msgs/msg/detail/web_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebLane__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebLane__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_turn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_turn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_turn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_turn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__navi_turn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__navi_turn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__navi_turn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__navi_turn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__optimal_turn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__optimal_turn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__optimal_turn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__optimal_turn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__optimal_turn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__optimal_turn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__optimal_turn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__optimal_turn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_exten_turn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_exten_turn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_exten_turn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_exten_turn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_exten_turn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_exten_turn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_exten_turn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_exten_turn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__exten_turn(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__exten_turn(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__exten_turn(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__exten_turn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__exten_turn(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__exten_turn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__exten_turn(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__exten_turn(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_turn_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_turn_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn_type(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_turn_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn_type(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_turn_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__navi_turn_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__navi_turn_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn_type(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__navi_turn_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn_type(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__navi_turn_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_member_array[12] = {
  {
    "lane_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, actual_turn),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_turn,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_turn,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_turn,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_turn  // resize(index) function pointer
  },
  {
    "navi_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, navi_turn),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__navi_turn,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__navi_turn,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__navi_turn,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__navi_turn  // resize(index) function pointer
  },
  {
    "optimal_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, optimal_turn),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__optimal_turn,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__optimal_turn,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__optimal_turn,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__optimal_turn,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__optimal_turn,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__optimal_turn  // resize(index) function pointer
  },
  {
    "actual_exten_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, actual_exten_turn),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_exten_turn,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_exten_turn,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_exten_turn,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_exten_turn,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_exten_turn,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_exten_turn  // resize(index) function pointer
  },
  {
    "exten_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, exten_turn),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__exten_turn,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__exten_turn,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__exten_turn,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__exten_turn,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__exten_turn,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__exten_turn  // resize(index) function pointer
  },
  {
    "actual_turn_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, actual_turn_type),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__actual_turn_type,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__actual_turn_type,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__actual_turn_type,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__actual_turn_type,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__actual_turn_type,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__actual_turn_type  // resize(index) function pointer
  },
  {
    "navi_turn_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, navi_turn_type),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__size_function__WebLane__navi_turn_type,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_const_function__WebLane__navi_turn_type,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__get_function__WebLane__navi_turn_type,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__fetch_function__WebLane__navi_turn_type,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__assign_function__WebLane__navi_turn_type,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__resize_function__WebLane__navi_turn_type  // resize(index) function pointer
  },
  {
    "road_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, road_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, step_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "md5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, md5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "callback_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLane, callback_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebLane",  // message name
  12,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebLane),
  deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLane)() {
  deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  if (!deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebLane__rosidl_typesupport_introspection_c__WebLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
