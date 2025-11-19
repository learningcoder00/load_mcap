// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/reference_lines__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/reference_lines__functions.h"
#include "deva_planning_msgs2/msg/detail/reference_lines__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reference_lines`
#include "deva_planning_msgs2/msg/reference_line.h"
// Member `reference_lines`
#include "deva_planning_msgs2/msg/detail/reference_line__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__ReferenceLines__init(message_memory);
}

void deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__ReferenceLines__fini(message_memory);
}

size_t deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__size_function__ReferenceLines__reference_lines(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__ReferenceLine__Sequence * member =
    (const deva_planning_msgs2__msg__ReferenceLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_const_function__ReferenceLines__reference_lines(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__ReferenceLine__Sequence * member =
    (const deva_planning_msgs2__msg__ReferenceLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_function__ReferenceLines__reference_lines(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__ReferenceLine__Sequence * member =
    (deva_planning_msgs2__msg__ReferenceLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__fetch_function__ReferenceLines__reference_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__ReferenceLine * item =
    ((const deva_planning_msgs2__msg__ReferenceLine *)
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_const_function__ReferenceLines__reference_lines(untyped_member, index));
  deva_planning_msgs2__msg__ReferenceLine * value =
    (deva_planning_msgs2__msg__ReferenceLine *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__assign_function__ReferenceLines__reference_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__ReferenceLine * item =
    ((deva_planning_msgs2__msg__ReferenceLine *)
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_function__ReferenceLines__reference_lines(untyped_member, index));
  const deva_planning_msgs2__msg__ReferenceLine * value =
    (const deva_planning_msgs2__msg__ReferenceLine *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__resize_function__ReferenceLines__reference_lines(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__ReferenceLine__Sequence * member =
    (deva_planning_msgs2__msg__ReferenceLine__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__ReferenceLine__Sequence__fini(member);
  return deva_planning_msgs2__msg__ReferenceLine__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, reference_lines),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__size_function__ReferenceLines__reference_lines,  // size() function pointer
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_const_function__ReferenceLines__reference_lines,  // get_const(index) function pointer
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__get_function__ReferenceLines__reference_lines,  // get(index) function pointer
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__fetch_function__ReferenceLines__reference_lines,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__assign_function__ReferenceLines__reference_lines,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__resize_function__ReferenceLines__reference_lines  // resize(index) function pointer
  },
  {
    "curr_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, curr_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tar_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, tar_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curr_model_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, curr_model_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curr_line_virtual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, curr_line_virtual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curr_left_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, curr_left_nums),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curr_right_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__ReferenceLines, curr_right_nums),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "ReferenceLines",  // message name
  8,  // number of fields
  sizeof(deva_planning_msgs2__msg__ReferenceLines),
  deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_member_array,  // message members
  deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, ReferenceLines)() {
  deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, ReferenceLine)();
  if (!deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__ReferenceLines__rosidl_typesupport_introspection_c__ReferenceLines_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
