// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/USTBoundary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/ust_boundary__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/ust_boundary__functions.h"
#include "deva_perception_msgs/msg/detail/ust_boundary__struct.h"


// Include directives for member types
// Member `line_segments`
#include "deva_perception_msgs/msg/edge_line_segment.h"
// Member `line_segments`
#include "deva_perception_msgs/msg/detail/edge_line_segment__rosidl_typesupport_introspection_c.h"
// Member `equation_curves`
#include "deva_perception_msgs/msg/edge_equation_curve.h"
// Member `equation_curves`
#include "deva_perception_msgs/msg/detail/edge_equation_curve__rosidl_typesupport_introspection_c.h"
// Member `disperse_curves`
#include "deva_perception_msgs/msg/edge_disperse_curve.h"
// Member `disperse_curves`
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__rosidl_typesupport_introspection_c.h"
// Member `corner_points`
#include "geometry_msgs/msg/point.h"
// Member `corner_points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `waylink`
#include "deva_perception_msgs/msg/way_link.h"
// Member `waylink`
#include "deva_perception_msgs/msg/detail/way_link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__USTBoundary__init(message_memory);
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__USTBoundary__fini(message_memory);
}

size_t deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__line_segments(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__EdgeLineSegment__Sequence * member =
    (const deva_perception_msgs__msg__EdgeLineSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__line_segments(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__EdgeLineSegment__Sequence * member =
    (const deva_perception_msgs__msg__EdgeLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__line_segments(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__EdgeLineSegment__Sequence * member =
    (deva_perception_msgs__msg__EdgeLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__line_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__EdgeLineSegment * item =
    ((const deva_perception_msgs__msg__EdgeLineSegment *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__line_segments(untyped_member, index));
  deva_perception_msgs__msg__EdgeLineSegment * value =
    (deva_perception_msgs__msg__EdgeLineSegment *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__line_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__EdgeLineSegment * item =
    ((deva_perception_msgs__msg__EdgeLineSegment *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__line_segments(untyped_member, index));
  const deva_perception_msgs__msg__EdgeLineSegment * value =
    (const deva_perception_msgs__msg__EdgeLineSegment *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__line_segments(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__EdgeLineSegment__Sequence * member =
    (deva_perception_msgs__msg__EdgeLineSegment__Sequence *)(untyped_member);
  deva_perception_msgs__msg__EdgeLineSegment__Sequence__fini(member);
  return deva_perception_msgs__msg__EdgeLineSegment__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__equation_curves(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__EdgeEquationCurve__Sequence * member =
    (const deva_perception_msgs__msg__EdgeEquationCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__equation_curves(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__EdgeEquationCurve__Sequence * member =
    (const deva_perception_msgs__msg__EdgeEquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__equation_curves(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence * member =
    (deva_perception_msgs__msg__EdgeEquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__equation_curves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__EdgeEquationCurve * item =
    ((const deva_perception_msgs__msg__EdgeEquationCurve *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__equation_curves(untyped_member, index));
  deva_perception_msgs__msg__EdgeEquationCurve * value =
    (deva_perception_msgs__msg__EdgeEquationCurve *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__equation_curves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__EdgeEquationCurve * item =
    ((deva_perception_msgs__msg__EdgeEquationCurve *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__equation_curves(untyped_member, index));
  const deva_perception_msgs__msg__EdgeEquationCurve * value =
    (const deva_perception_msgs__msg__EdgeEquationCurve *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__equation_curves(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence * member =
    (deva_perception_msgs__msg__EdgeEquationCurve__Sequence *)(untyped_member);
  deva_perception_msgs__msg__EdgeEquationCurve__Sequence__fini(member);
  return deva_perception_msgs__msg__EdgeEquationCurve__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__disperse_curves(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__EdgeDisperseCurve__Sequence * member =
    (const deva_perception_msgs__msg__EdgeDisperseCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__disperse_curves(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__EdgeDisperseCurve__Sequence * member =
    (const deva_perception_msgs__msg__EdgeDisperseCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__disperse_curves(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence * member =
    (deva_perception_msgs__msg__EdgeDisperseCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__disperse_curves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__EdgeDisperseCurve * item =
    ((const deva_perception_msgs__msg__EdgeDisperseCurve *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__disperse_curves(untyped_member, index));
  deva_perception_msgs__msg__EdgeDisperseCurve * value =
    (deva_perception_msgs__msg__EdgeDisperseCurve *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__disperse_curves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__EdgeDisperseCurve * item =
    ((deva_perception_msgs__msg__EdgeDisperseCurve *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__disperse_curves(untyped_member, index));
  const deva_perception_msgs__msg__EdgeDisperseCurve * value =
    (const deva_perception_msgs__msg__EdgeDisperseCurve *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__disperse_curves(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence * member =
    (deva_perception_msgs__msg__EdgeDisperseCurve__Sequence *)(untyped_member);
  deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__fini(member);
  return deva_perception_msgs__msg__EdgeDisperseCurve__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__corner_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__corner_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__corner_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__corner_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__corner_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__corner_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__corner_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__corner_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, id),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__USTBoundary, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segment_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, segment_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, line_segments),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__line_segments,  // size() function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__line_segments,  // get_const(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__line_segments,  // get(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__line_segments,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__line_segments,  // assign(index, value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__line_segments  // resize(index) function pointer
  },
  {
    "equation_curves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, equation_curves),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__equation_curves,  // size() function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__equation_curves,  // get_const(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__equation_curves,  // get(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__equation_curves,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__equation_curves,  // assign(index, value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__equation_curves  // resize(index) function pointer
  },
  {
    "disperse_curves",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, disperse_curves),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__disperse_curves,  // size() function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__disperse_curves,  // get_const(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__disperse_curves,  // get(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__disperse_curves,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__disperse_curves,  // assign(index, value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__disperse_curves  // resize(index) function pointer
  },
  {
    "corner_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, corner_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__size_function__USTBoundary__corner_points,  // size() function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_const_function__USTBoundary__corner_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__get_function__USTBoundary__corner_points,  // get(index) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__fetch_function__USTBoundary__corner_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__assign_function__USTBoundary__corner_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__resize_function__USTBoundary__corner_points  // resize(index) function pointer
  },
  {
    "waylink",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, waylink),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_stable_tracked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__USTBoundary, is_stable_tracked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "USTBoundary",  // message name
  9,  // number of fields
  sizeof(deva_perception_msgs__msg__USTBoundary),
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array,  // message members
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, USTBoundary)() {
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, EdgeLineSegment)();
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, EdgeEquationCurve)();
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, EdgeDisperseCurve)();
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, WayLink)();
  if (!deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__USTBoundary__rosidl_typesupport_introspection_c__USTBoundary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
