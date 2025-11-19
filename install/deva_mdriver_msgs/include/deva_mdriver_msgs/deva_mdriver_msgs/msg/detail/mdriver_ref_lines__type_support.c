// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_mdriver_msgs:msg/MdriverRefLines.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_lines__rosidl_typesupport_introspection_c.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_lines__functions.h"
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_lines__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ref_lines`
#include "deva_mdriver_msgs/msg/mdriver_ref_line.h"
// Member `ref_lines`
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_line__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_mdriver_msgs__msg__MdriverRefLines__init(message_memory);
}

void deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_fini_function(void * message_memory)
{
  deva_mdriver_msgs__msg__MdriverRefLines__fini(message_memory);
}

size_t deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__size_function__MdriverRefLines__ref_lines(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__MdriverRefLine__Sequence * member =
    (const deva_mdriver_msgs__msg__MdriverRefLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_const_function__MdriverRefLines__ref_lines(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__MdriverRefLine__Sequence * member =
    (const deva_mdriver_msgs__msg__MdriverRefLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_function__MdriverRefLines__ref_lines(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__MdriverRefLine__Sequence * member =
    (deva_mdriver_msgs__msg__MdriverRefLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__fetch_function__MdriverRefLines__ref_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__MdriverRefLine * item =
    ((const deva_mdriver_msgs__msg__MdriverRefLine *)
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_const_function__MdriverRefLines__ref_lines(untyped_member, index));
  deva_mdriver_msgs__msg__MdriverRefLine * value =
    (deva_mdriver_msgs__msg__MdriverRefLine *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__assign_function__MdriverRefLines__ref_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__MdriverRefLine * item =
    ((deva_mdriver_msgs__msg__MdriverRefLine *)
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_function__MdriverRefLines__ref_lines(untyped_member, index));
  const deva_mdriver_msgs__msg__MdriverRefLine * value =
    (const deva_mdriver_msgs__msg__MdriverRefLine *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__resize_function__MdriverRefLines__ref_lines(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__MdriverRefLine__Sequence * member =
    (deva_mdriver_msgs__msg__MdriverRefLine__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__MdriverRefLine__Sequence__fini(member);
  return deva_mdriver_msgs__msg__MdriverRefLine__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MdriverRefLines, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MdriverRefLines, ref_lines),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__size_function__MdriverRefLines__ref_lines,  // size() function pointer
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_const_function__MdriverRefLines__ref_lines,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__get_function__MdriverRefLines__ref_lines,  // get(index) function pointer
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__fetch_function__MdriverRefLines__ref_lines,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__assign_function__MdriverRefLines__ref_lines,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__resize_function__MdriverRefLines__ref_lines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_members = {
  "deva_mdriver_msgs__msg",  // message namespace
  "MdriverRefLines",  // message name
  2,  // number of fields
  sizeof(deva_mdriver_msgs__msg__MdriverRefLines),
  deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_member_array,  // message members
  deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_type_support_handle = {
  0,
  &deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MdriverRefLines)() {
  deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MdriverRefLine)();
  if (!deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_type_support_handle.typesupport_identifier) {
    deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_mdriver_msgs__msg__MdriverRefLines__rosidl_typesupport_introspection_c__MdriverRefLines_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
