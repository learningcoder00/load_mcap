// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/center_line__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/center_line__functions.h"
#include "deva_perception_msgs/msg/detail/center_line__struct.h"


// Include directives for member types
// Member `lane_equalization`
#include "deva_common_msgs/msg/equation_curve.h"
// Member `lane_equalization`
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__CenterLine__init(message_memory);
}

void deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__CenterLine__fini(message_memory);
}

size_t deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__lane_equalization(
  const void * untyped_member)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__lane_equalization(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__lane_equalization(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__lane_equalization(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__EquationCurve * item =
    ((const deva_common_msgs__msg__EquationCurve *)
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__lane_equalization(untyped_member, index));
  deva_common_msgs__msg__EquationCurve * value =
    (deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__lane_equalization(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__EquationCurve * item =
    ((deva_common_msgs__msg__EquationCurve *)
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__lane_equalization(untyped_member, index));
  const deva_common_msgs__msg__EquationCurve * value =
    (const deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__lane_equalization(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  deva_common_msgs__msg__EquationCurve__Sequence__fini(member);
  return deva_common_msgs__msg__EquationCurve__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array[6] = {
  {
    "center_line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, center_line_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, left_lane_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, right_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_equalization",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, lane_equalization),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__lane_equalization,  // size() function pointer
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__lane_equalization,  // get_const(index) function pointer
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__lane_equalization,  // get(index) function pointer
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__lane_equalization,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__lane_equalization,  // assign(index, value) function pointer
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__lane_equalization  // resize(index) function pointer
  },
  {
    "is_current_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, is_current_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_virtual_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__CenterLine, is_virtual_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "CenterLine",  // message name
  6,  // number of fields
  sizeof(deva_perception_msgs__msg__CenterLine),
  deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array,  // message members
  deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, CenterLine)() {
  deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  if (!deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
