// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/lane_line2d__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/lane_line2d__functions.h"
#include "deva_perception_msgs/msg/detail/lane_line2d__struct.h"


// Include directives for member types
// Member `pixel_points`
#include "deva_common_msgs/msg/point2d.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"
// Member `curve_line_coeffs`
#include "deva_perception_msgs/msg/curve_coef.h"
// Member `curve_line_coeffs`
#include "deva_perception_msgs/msg/detail/curve_coef__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__LaneLine2d__init(message_memory);
}

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__LaneLine2d__fini(message_memory);
}

size_t deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__size_function__LaneLine2d__pixel_points(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__pixel_points(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__pixel_points(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__fetch_function__LaneLine2d__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__pixel_points(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__assign_function__LaneLine2d__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__pixel_points(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__resize_function__LaneLine2d__pixel_points(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__size_function__LaneLine2d__curve_line_coeffs(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__CurveCoef__Sequence * member =
    (const deva_perception_msgs__msg__CurveCoef__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__curve_line_coeffs(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__CurveCoef__Sequence * member =
    (const deva_perception_msgs__msg__CurveCoef__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__curve_line_coeffs(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__CurveCoef__Sequence * member =
    (deva_perception_msgs__msg__CurveCoef__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__fetch_function__LaneLine2d__curve_line_coeffs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__CurveCoef * item =
    ((const deva_perception_msgs__msg__CurveCoef *)
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__curve_line_coeffs(untyped_member, index));
  deva_perception_msgs__msg__CurveCoef * value =
    (deva_perception_msgs__msg__CurveCoef *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__assign_function__LaneLine2d__curve_line_coeffs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__CurveCoef * item =
    ((deva_perception_msgs__msg__CurveCoef *)
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__curve_line_coeffs(untyped_member, index));
  const deva_perception_msgs__msg__CurveCoef * value =
    (const deva_perception_msgs__msg__CurveCoef *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__resize_function__LaneLine2d__curve_line_coeffs(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__CurveCoef__Sequence * member =
    (deva_perception_msgs__msg__CurveCoef__Sequence *)(untyped_member);
  deva_perception_msgs__msg__CurveCoef__Sequence__fini(member);
  return deva_perception_msgs__msg__CurveCoef__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_member_array[10] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, left_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, right_lane_id),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__LaneLine2d, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, num_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, lane_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, lane_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_property",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, lane_property),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, pixel_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__size_function__LaneLine2d__pixel_points,  // size() function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__pixel_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__pixel_points,  // get(index) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__fetch_function__LaneLine2d__pixel_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__assign_function__LaneLine2d__pixel_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__resize_function__LaneLine2d__pixel_points  // resize(index) function pointer
  },
  {
    "curve_line_coeffs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneLine2d, curve_line_coeffs),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__size_function__LaneLine2d__curve_line_coeffs,  // size() function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_const_function__LaneLine2d__curve_line_coeffs,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__get_function__LaneLine2d__curve_line_coeffs,  // get(index) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__fetch_function__LaneLine2d__curve_line_coeffs,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__assign_function__LaneLine2d__curve_line_coeffs,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__resize_function__LaneLine2d__curve_line_coeffs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "LaneLine2d",  // message name
  10,  // number of fields
  sizeof(deva_perception_msgs__msg__LaneLine2d),
  deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_member_array,  // message members
  deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, LaneLine2d)() {
  deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, CurveCoef)();
  if (!deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__LaneLine2d__rosidl_typesupport_introspection_c__LaneLine2d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
