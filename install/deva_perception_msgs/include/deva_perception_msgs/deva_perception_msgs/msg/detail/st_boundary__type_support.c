// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/st_boundary__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/st_boundary__functions.h"
#include "deva_perception_msgs/msg/detail/st_boundary__struct.h"


// Include directives for member types
// Member `equation_curves`
// Member `extend_equation_curve`
#include "deva_common_msgs/msg/equation_curve.h"
// Member `equation_curves`
// Member `extend_equation_curve`
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_introspection_c.h"
// Member `disperse_curve`
// Member `extend_disperse_curve`
#include "geometry_msgs/msg/point.h"
// Member `disperse_curve`
// Member `extend_disperse_curve`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `lane_type`
#include "deva_perception_msgs/msg/lane_type.h"
// Member `lane_type`
#include "deva_perception_msgs/msg/detail/lane_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__STBoundary__init(message_memory);
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__STBoundary__fini(message_memory);
}

size_t deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__equation_curves(
  const void * untyped_member)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__equation_curves(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__equation_curves(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__equation_curves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__EquationCurve * item =
    ((const deva_common_msgs__msg__EquationCurve *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__equation_curves(untyped_member, index));
  deva_common_msgs__msg__EquationCurve * value =
    (deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__equation_curves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__EquationCurve * item =
    ((deva_common_msgs__msg__EquationCurve *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__equation_curves(untyped_member, index));
  const deva_common_msgs__msg__EquationCurve * value =
    (const deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__equation_curves(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  deva_common_msgs__msg__EquationCurve__Sequence__fini(member);
  return deva_common_msgs__msg__EquationCurve__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__disperse_curve(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__disperse_curve(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__disperse_curve(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__disperse_curve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__disperse_curve(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__disperse_curve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__disperse_curve(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__disperse_curve(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__extend_disperse_curve(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__extend_disperse_curve(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__extend_disperse_curve(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__extend_disperse_curve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__extend_disperse_curve(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__extend_disperse_curve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__extend_disperse_curve(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__extend_disperse_curve(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__lane_type(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__LaneType__Sequence * member =
    (const deva_perception_msgs__msg__LaneType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__lane_type(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__LaneType__Sequence * member =
    (const deva_perception_msgs__msg__LaneType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__lane_type(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__LaneType__Sequence * member =
    (deva_perception_msgs__msg__LaneType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__lane_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__LaneType * item =
    ((const deva_perception_msgs__msg__LaneType *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__lane_type(untyped_member, index));
  deva_perception_msgs__msg__LaneType * value =
    (deva_perception_msgs__msg__LaneType *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__lane_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__LaneType * item =
    ((deva_perception_msgs__msg__LaneType *)
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__lane_type(untyped_member, index));
  const deva_perception_msgs__msg__LaneType * value =
    (const deva_perception_msgs__msg__LaneType *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__lane_type(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__LaneType__Sequence * member =
    (deva_perception_msgs__msg__LaneType__Sequence *)(untyped_member);
  deva_perception_msgs__msg__LaneType__Sequence__fini(member);
  return deva_perception_msgs__msg__LaneType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[16] = {
  {
    "has_equation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, has_equation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equation_curves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, equation_curves),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__equation_curves,  // size() function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__equation_curves,  // get_const(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__equation_curves,  // get(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__equation_curves,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__equation_curves,  // assign(index, value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__equation_curves  // resize(index) function pointer
  },
  {
    "has_disperse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, has_disperse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disperse_curve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, disperse_curve),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__disperse_curve,  // size() function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__disperse_curve,  // get_const(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__disperse_curve,  // get(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__disperse_curve,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__disperse_curve,  // assign(index, value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__disperse_curve  // resize(index) function pointer
  },
  {
    "has_extend_equation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, has_extend_equation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extend_equation_curve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, extend_equation_curve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_extend_disperse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, has_extend_disperse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extend_disperse_curve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, extend_disperse_curve),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__extend_disperse_curve,  // size() function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__extend_disperse_curve,  // get_const(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__extend_disperse_curve,  // get(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__extend_disperse_curve,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__extend_disperse_curve,  // assign(index, value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__extend_disperse_curve  // resize(index) function pointer
  },
  {
    "lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, lane_type),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__size_function__STBoundary__lane_type,  // size() function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_const_function__STBoundary__lane_type,  // get_const(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__get_function__STBoundary__lane_type,  // get(index) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__fetch_function__STBoundary__lane_type,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__assign_function__STBoundary__lane_type,  // assign(index, value) function pointer
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__resize_function__STBoundary__lane_type  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, left_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, right_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, reserve),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_track_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__STBoundary, global_track_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "STBoundary",  // message name
  16,  // number of fields
  sizeof(deva_perception_msgs__msg__STBoundary),
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array,  // message members
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, STBoundary)() {
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, LaneType)();
  if (!deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__STBoundary__rosidl_typesupport_introspection_c__STBoundary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
