// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/PairDoubleInt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/pair_double_int__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/pair_double_int__functions.h"
#include "environment_model_msgs/msg/detail/pair_double_int__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__PairDoubleInt__init(message_memory);
}

void environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_fini_function(void * message_memory)
{
  environment_model_msgs__msg__PairDoubleInt__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_member_array[2] = {
  {
    "first",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__PairDoubleInt, first),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__PairDoubleInt, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "PairDoubleInt",  // message name
  2,  // number of fields
  sizeof(environment_model_msgs__msg__PairDoubleInt),
  environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_member_array,  // message members
  environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairDoubleInt)() {
  if (!environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__PairDoubleInt__rosidl_typesupport_introspection_c__PairDoubleInt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
