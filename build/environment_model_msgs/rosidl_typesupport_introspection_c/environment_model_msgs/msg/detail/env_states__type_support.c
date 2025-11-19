// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_states__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_states__functions.h"
#include "environment_model_msgs/msg/detail/env_states__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `states`
#include "environment_model_msgs/msg/env_state.h"
// Member `states`
#include "environment_model_msgs/msg/detail/env_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvStates__init(message_memory);
}

void environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvStates__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__size_function__EnvStates__states(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvState__Sequence * member =
    (const environment_model_msgs__msg__EnvState__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_const_function__EnvStates__states(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvState__Sequence * member =
    (const environment_model_msgs__msg__EnvState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_function__EnvStates__states(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvState__Sequence * member =
    (environment_model_msgs__msg__EnvState__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__fetch_function__EnvStates__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvState * item =
    ((const environment_model_msgs__msg__EnvState *)
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_const_function__EnvStates__states(untyped_member, index));
  environment_model_msgs__msg__EnvState * value =
    (environment_model_msgs__msg__EnvState *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__assign_function__EnvStates__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvState * item =
    ((environment_model_msgs__msg__EnvState *)
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_function__EnvStates__states(untyped_member, index));
  const environment_model_msgs__msg__EnvState * value =
    (const environment_model_msgs__msg__EnvState *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__resize_function__EnvStates__states(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvState__Sequence * member =
    (environment_model_msgs__msg__EnvState__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvState__Sequence__fini(member);
  return environment_model_msgs__msg__EnvState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvStates, states),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__size_function__EnvStates__states,  // size() function pointer
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_const_function__EnvStates__states,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__get_function__EnvStates__states,  // get(index) function pointer
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__fetch_function__EnvStates__states,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__assign_function__EnvStates__states,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__resize_function__EnvStates__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvStates",  // message name
  2,  // number of fields
  sizeof(environment_model_msgs__msg__EnvStates),
  environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_member_array,  // message members
  environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvStates)() {
  environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvState)();
  if (!environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvStates__rosidl_typesupport_introspection_c__EnvStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
