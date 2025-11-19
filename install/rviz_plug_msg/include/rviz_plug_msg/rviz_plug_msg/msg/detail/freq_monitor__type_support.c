// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_plug_msg/msg/detail/freq_monitor__rosidl_typesupport_introspection_c.h"
#include "rviz_plug_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_plug_msg/msg/detail/freq_monitor__functions.h"
#include "rviz_plug_msg/msg/detail/freq_monitor__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `topic_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `freqs`
// Member `min_thresholds`
// Member `max_thresholds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_plug_msg__msg__FreqMonitor__init(message_memory);
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_fini_function(void * message_memory)
{
  rviz_plug_msg__msg__FreqMonitor__fini(message_memory);
}

size_t rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__topic_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__topic_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__topic_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__topic_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__topic_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__topic_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__topic_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__topic_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__freqs(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__freqs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__freqs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__freqs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__freqs(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__freqs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__freqs(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__freqs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__min_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__min_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__min_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__min_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__min_thresholds(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__min_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__min_thresholds(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__min_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__max_thresholds(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__max_thresholds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__max_thresholds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__max_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__max_thresholds(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__max_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__max_thresholds(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__max_thresholds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, valid_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, topic_names),  // bytes offset in struct
    NULL,  // default value
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__topic_names,  // size() function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__topic_names,  // get_const(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__topic_names,  // get(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__topic_names,  // fetch(index, &value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__topic_names,  // assign(index, value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__topic_names  // resize(index) function pointer
  },
  {
    "freqs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, freqs),  // bytes offset in struct
    NULL,  // default value
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__freqs,  // size() function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__freqs,  // get_const(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__freqs,  // get(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__freqs,  // fetch(index, &value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__freqs,  // assign(index, value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__freqs  // resize(index) function pointer
  },
  {
    "min_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, min_thresholds),  // bytes offset in struct
    NULL,  // default value
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__min_thresholds,  // size() function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__min_thresholds,  // get_const(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__min_thresholds,  // get(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__min_thresholds,  // fetch(index, &value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__min_thresholds,  // assign(index, value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__min_thresholds  // resize(index) function pointer
  },
  {
    "max_thresholds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__FreqMonitor, max_thresholds),  // bytes offset in struct
    NULL,  // default value
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__size_function__FreqMonitor__max_thresholds,  // size() function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_const_function__FreqMonitor__max_thresholds,  // get_const(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__get_function__FreqMonitor__max_thresholds,  // get(index) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__fetch_function__FreqMonitor__max_thresholds,  // fetch(index, &value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__assign_function__FreqMonitor__max_thresholds,  // assign(index, value) function pointer
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__resize_function__FreqMonitor__max_thresholds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_members = {
  "rviz_plug_msg__msg",  // message namespace
  "FreqMonitor",  // message name
  6,  // number of fields
  sizeof(rviz_plug_msg__msg__FreqMonitor),
  rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_member_array,  // message members
  rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_type_support_handle = {
  0,
  &rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_plug_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_plug_msg, msg, FreqMonitor)() {
  rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_type_support_handle.typesupport_identifier) {
    rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_plug_msg__msg__FreqMonitor__rosidl_typesupport_introspection_c__FreqMonitor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
