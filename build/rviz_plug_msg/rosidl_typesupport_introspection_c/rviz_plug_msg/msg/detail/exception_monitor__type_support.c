// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_plug_msg/msg/detail/exception_monitor__rosidl_typesupport_introspection_c.h"
#include "rviz_plug_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_plug_msg/msg/detail/exception_monitor__functions.h"
#include "rviz_plug_msg/msg/detail/exception_monitor__struct.h"


// Include directives for member types
// Member `exception_content`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_plug_msg__msg__ExceptionMonitor__init(message_memory);
}

void rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_fini_function(void * message_memory)
{
  rviz_plug_msg__msg__ExceptionMonitor__fini(message_memory);
}

size_t rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__size_function__ExceptionMonitor__exception_content(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_const_function__ExceptionMonitor__exception_content(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_function__ExceptionMonitor__exception_content(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__fetch_function__ExceptionMonitor__exception_content(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_const_function__ExceptionMonitor__exception_content(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__assign_function__ExceptionMonitor__exception_content(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_function__ExceptionMonitor__exception_content(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__resize_function__ExceptionMonitor__exception_content(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_member_array[1] = {
  {
    "exception_content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__ExceptionMonitor, exception_content),  // bytes offset in struct
    NULL,  // default value
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__size_function__ExceptionMonitor__exception_content,  // size() function pointer
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_const_function__ExceptionMonitor__exception_content,  // get_const(index) function pointer
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__get_function__ExceptionMonitor__exception_content,  // get(index) function pointer
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__fetch_function__ExceptionMonitor__exception_content,  // fetch(index, &value) function pointer
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__assign_function__ExceptionMonitor__exception_content,  // assign(index, value) function pointer
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__resize_function__ExceptionMonitor__exception_content  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_members = {
  "rviz_plug_msg__msg",  // message namespace
  "ExceptionMonitor",  // message name
  1,  // number of fields
  sizeof(rviz_plug_msg__msg__ExceptionMonitor),
  rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_member_array,  // message members
  rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_type_support_handle = {
  0,
  &rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_plug_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_plug_msg, msg, ExceptionMonitor)() {
  if (!rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_type_support_handle.typesupport_identifier) {
    rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_plug_msg__msg__ExceptionMonitor__rosidl_typesupport_introspection_c__ExceptionMonitor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
