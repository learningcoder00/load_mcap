// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/road_boundary__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/road_boundary__functions.h"
#include "environment_model_msgs/msg/detail/road_boundary__struct.h"


// Include directives for member types
// Member `left_physical_bound_line`
// Member `right_physical_bound_line`
// Member `left_law_bound_line`
// Member `right_law_bound_line`
#include "environment_model_msgs/msg/boundary_point.h"
// Member `left_physical_bound_line`
// Member `right_physical_bound_line`
// Member `left_law_bound_line`
// Member `right_law_bound_line`
#include "environment_model_msgs/msg/detail/boundary_point__rosidl_typesupport_introspection_c.h"
// Member `isolated_obj_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__RoadBoundary__init(message_memory);
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_fini_function(void * message_memory)
{
  environment_model_msgs__msg__RoadBoundary__fini(message_memory);
}

size_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__left_physical_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_physical_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_physical_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__left_physical_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__BoundaryPoint * item =
    ((const environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_physical_bound_line(untyped_member, index));
  environment_model_msgs__msg__BoundaryPoint * value =
    (environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__left_physical_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__BoundaryPoint * item =
    ((environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_physical_bound_line(untyped_member, index));
  const environment_model_msgs__msg__BoundaryPoint * value =
    (const environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__left_physical_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(member);
  return environment_model_msgs__msg__BoundaryPoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__right_physical_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_physical_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_physical_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__right_physical_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__BoundaryPoint * item =
    ((const environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_physical_bound_line(untyped_member, index));
  environment_model_msgs__msg__BoundaryPoint * value =
    (environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__right_physical_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__BoundaryPoint * item =
    ((environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_physical_bound_line(untyped_member, index));
  const environment_model_msgs__msg__BoundaryPoint * value =
    (const environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__right_physical_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(member);
  return environment_model_msgs__msg__BoundaryPoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__left_law_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_law_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_law_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__left_law_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__BoundaryPoint * item =
    ((const environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_law_bound_line(untyped_member, index));
  environment_model_msgs__msg__BoundaryPoint * value =
    (environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__left_law_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__BoundaryPoint * item =
    ((environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_law_bound_line(untyped_member, index));
  const environment_model_msgs__msg__BoundaryPoint * value =
    (const environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__left_law_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(member);
  return environment_model_msgs__msg__BoundaryPoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__right_law_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_law_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (const environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_law_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__right_law_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__BoundaryPoint * item =
    ((const environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_law_bound_line(untyped_member, index));
  environment_model_msgs__msg__BoundaryPoint * value =
    (environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__right_law_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__BoundaryPoint * item =
    ((environment_model_msgs__msg__BoundaryPoint *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_law_bound_line(untyped_member, index));
  const environment_model_msgs__msg__BoundaryPoint * value =
    (const environment_model_msgs__msg__BoundaryPoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__right_law_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__BoundaryPoint__Sequence * member =
    (environment_model_msgs__msg__BoundaryPoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(member);
  return environment_model_msgs__msg__BoundaryPoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__isolated_obj_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__isolated_obj_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__isolated_obj_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__isolated_obj_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__isolated_obj_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__isolated_obj_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__isolated_obj_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__isolated_obj_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array[6] = {
  {
    "left_physical_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, left_physical_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__left_physical_bound_line,  // size() function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_physical_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_physical_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__left_physical_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__left_physical_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__left_physical_bound_line  // resize(index) function pointer
  },
  {
    "right_physical_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, right_physical_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__right_physical_bound_line,  // size() function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_physical_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_physical_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__right_physical_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__right_physical_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__right_physical_bound_line  // resize(index) function pointer
  },
  {
    "left_law_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, left_law_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__left_law_bound_line,  // size() function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__left_law_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__left_law_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__left_law_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__left_law_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__left_law_bound_line  // resize(index) function pointer
  },
  {
    "right_law_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, right_law_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__right_law_bound_line,  // size() function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__right_law_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__right_law_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__right_law_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__right_law_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__right_law_bound_line  // resize(index) function pointer
  },
  {
    "feature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, feature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "isolated_obj_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__RoadBoundary, isolated_obj_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__size_function__RoadBoundary__isolated_obj_ids,  // size() function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_const_function__RoadBoundary__isolated_obj_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__get_function__RoadBoundary__isolated_obj_ids,  // get(index) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__fetch_function__RoadBoundary__isolated_obj_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__assign_function__RoadBoundary__isolated_obj_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__resize_function__RoadBoundary__isolated_obj_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "RoadBoundary",  // message name
  6,  // number of fields
  sizeof(environment_model_msgs__msg__RoadBoundary),
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array,  // message members
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, RoadBoundary)() {
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, BoundaryPoint)();
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, BoundaryPoint)();
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, BoundaryPoint)();
  environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, BoundaryPoint)();
  if (!environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__RoadBoundary__rosidl_typesupport_introspection_c__RoadBoundary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
