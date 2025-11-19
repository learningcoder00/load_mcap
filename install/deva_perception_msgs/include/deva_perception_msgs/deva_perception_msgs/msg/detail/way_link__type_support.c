// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/way_link__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/way_link__functions.h"
#include "deva_perception_msgs/msg/detail/way_link__struct.h"


// Include directives for member types
// Member `car_coord_points`
#include "geometry_msgs/msg/point.h"
// Member `car_coord_points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `corner_points_idx`
// Member `point_confidences`
// Member `corner_confidences`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/point2d.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__WayLink__init(message_memory);
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__WayLink__fini(message_memory);
}

size_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__car_coord_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__car_coord_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__car_coord_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__car_coord_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__car_coord_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__car_coord_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__car_coord_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__car_coord_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__corner_points_idx(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_points_idx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_points_idx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__corner_points_idx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_points_idx(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__corner_points_idx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_points_idx(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__corner_points_idx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__point_confidences(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__point_confidences(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__point_confidences(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__point_confidences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__point_confidences(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__point_confidences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__point_confidences(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__point_confidences(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__corner_confidences(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_confidences(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_confidences(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__corner_confidences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_confidences(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__corner_confidences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_confidences(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__corner_confidences(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__pixel_points(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__pixel_points(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__pixel_points(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__pixel_points(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__pixel_points(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__pixel_points(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_member_array[5] = {
  {
    "car_coord_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__WayLink, car_coord_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__car_coord_points,  // size() function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__car_coord_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__car_coord_points,  // get(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__car_coord_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__car_coord_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__car_coord_points  // resize(index) function pointer
  },
  {
    "corner_points_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__WayLink, corner_points_idx),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__corner_points_idx,  // size() function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_points_idx,  // get_const(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_points_idx,  // get(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__corner_points_idx,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__corner_points_idx,  // assign(index, value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__corner_points_idx  // resize(index) function pointer
  },
  {
    "point_confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__WayLink, point_confidences),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__point_confidences,  // size() function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__point_confidences,  // get_const(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__point_confidences,  // get(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__point_confidences,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__point_confidences,  // assign(index, value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__point_confidences  // resize(index) function pointer
  },
  {
    "corner_confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__WayLink, corner_confidences),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__corner_confidences,  // size() function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__corner_confidences,  // get_const(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__corner_confidences,  // get(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__corner_confidences,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__corner_confidences,  // assign(index, value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__corner_confidences  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__WayLink, pixel_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__size_function__WayLink__pixel_points,  // size() function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_const_function__WayLink__pixel_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__get_function__WayLink__pixel_points,  // get(index) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__fetch_function__WayLink__pixel_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__assign_function__WayLink__pixel_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__resize_function__WayLink__pixel_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "WayLink",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs__msg__WayLink),
  deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_member_array,  // message members
  deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, WayLink)() {
  deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  if (!deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__WayLink__rosidl_typesupport_introspection_c__WayLink_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
