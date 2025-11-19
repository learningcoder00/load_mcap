// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/channel_lane_marking__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/channel_lane_marking__functions.h"
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.h"


// Include directives for member types
// Member `marking_equation_vec`
#include "deva_common_msgs/msg/equation_curve.h"
// Member `marking_equation_vec`
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_introspection_c.h"
// Member `marking_type_vec`
#include "deva_map_msgs/msg/channel_marking_type.h"
// Member `marking_type_vec`
#include "deva_map_msgs/msg/detail/channel_marking_type__rosidl_typesupport_introspection_c.h"
// Member `marking_point_vec`
#include "deva_common_msgs/msg/point2d.h"
// Member `marking_point_vec`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__ChannelLaneMarking__init(message_memory);
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_fini_function(void * message_memory)
{
  deva_map_msgs__msg__ChannelLaneMarking__fini(message_memory);
}

size_t deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_equation_vec(
  const void * untyped_member)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_equation_vec(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_equation_vec(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_equation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__EquationCurve * item =
    ((const deva_common_msgs__msg__EquationCurve *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_equation_vec(untyped_member, index));
  deva_common_msgs__msg__EquationCurve * value =
    (deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_equation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__EquationCurve * item =
    ((deva_common_msgs__msg__EquationCurve *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_equation_vec(untyped_member, index));
  const deva_common_msgs__msg__EquationCurve * value =
    (const deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_equation_vec(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  deva_common_msgs__msg__EquationCurve__Sequence__fini(member);
  return deva_common_msgs__msg__EquationCurve__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_type_vec(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelMarkingType__Sequence * member =
    (const deva_map_msgs__msg__ChannelMarkingType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_type_vec(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelMarkingType__Sequence * member =
    (const deva_map_msgs__msg__ChannelMarkingType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_type_vec(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelMarkingType__Sequence * member =
    (deva_map_msgs__msg__ChannelMarkingType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_type_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelMarkingType * item =
    ((const deva_map_msgs__msg__ChannelMarkingType *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_type_vec(untyped_member, index));
  deva_map_msgs__msg__ChannelMarkingType * value =
    (deva_map_msgs__msg__ChannelMarkingType *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_type_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelMarkingType * item =
    ((deva_map_msgs__msg__ChannelMarkingType *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_type_vec(untyped_member, index));
  const deva_map_msgs__msg__ChannelMarkingType * value =
    (const deva_map_msgs__msg__ChannelMarkingType *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_type_vec(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelMarkingType__Sequence * member =
    (deva_map_msgs__msg__ChannelMarkingType__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelMarkingType__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelMarkingType__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_point_vec(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_point_vec(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_point_vec(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_point_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_point_vec(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_point_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_point_vec(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_point_vec(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_member_array[5] = {
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneMarking, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perception_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneMarking, perception_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marking_equation_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneMarking, marking_equation_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_equation_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_equation_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_equation_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_equation_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_equation_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_equation_vec  // resize(index) function pointer
  },
  {
    "marking_type_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneMarking, marking_type_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_type_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_type_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_type_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_type_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_type_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_type_vec  // resize(index) function pointer
  },
  {
    "marking_point_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneMarking, marking_point_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__size_function__ChannelLaneMarking__marking_point_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneMarking__marking_point_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__get_function__ChannelLaneMarking__marking_point_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneMarking__marking_point_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__assign_function__ChannelLaneMarking__marking_point_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__resize_function__ChannelLaneMarking__marking_point_vec  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "ChannelLaneMarking",  // message name
  5,  // number of fields
  sizeof(deva_map_msgs__msg__ChannelLaneMarking),
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_member_array,  // message members
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneMarking)() {
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelMarkingType)();
  deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  if (!deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__ChannelLaneMarking__rosidl_typesupport_introspection_c__ChannelLaneMarking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
