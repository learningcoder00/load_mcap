// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_lane_array__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_lane_array__functions.h"
#include "environment_model_msgs/msg/detail/env_lane_array__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `env_lane`
#include "environment_model_msgs/msg/env_lane.h"
// Member `env_lane`
#include "environment_model_msgs/msg/detail/env_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvLaneArray__init(message_memory);
}

void environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvLaneArray__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__size_function__EnvLaneArray__env_lane(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvLane__Sequence * member =
    (const environment_model_msgs__msg__EnvLane__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_const_function__EnvLaneArray__env_lane(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvLane__Sequence * member =
    (const environment_model_msgs__msg__EnvLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_function__EnvLaneArray__env_lane(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvLane__Sequence * member =
    (environment_model_msgs__msg__EnvLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__fetch_function__EnvLaneArray__env_lane(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvLane * item =
    ((const environment_model_msgs__msg__EnvLane *)
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_const_function__EnvLaneArray__env_lane(untyped_member, index));
  environment_model_msgs__msg__EnvLane * value =
    (environment_model_msgs__msg__EnvLane *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__assign_function__EnvLaneArray__env_lane(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvLane * item =
    ((environment_model_msgs__msg__EnvLane *)
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_function__EnvLaneArray__env_lane(untyped_member, index));
  const environment_model_msgs__msg__EnvLane * value =
    (const environment_model_msgs__msg__EnvLane *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__resize_function__EnvLaneArray__env_lane(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvLane__Sequence * member =
    (environment_model_msgs__msg__EnvLane__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvLane__Sequence__fini(member);
  return environment_model_msgs__msg__EnvLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLaneArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "env_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLaneArray, env_lane),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__size_function__EnvLaneArray__env_lane,  // size() function pointer
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_const_function__EnvLaneArray__env_lane,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__get_function__EnvLaneArray__env_lane,  // get(index) function pointer
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__fetch_function__EnvLaneArray__env_lane,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__assign_function__EnvLaneArray__env_lane,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__resize_function__EnvLaneArray__env_lane  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvLaneArray",  // message name
  2,  // number of fields
  sizeof(environment_model_msgs__msg__EnvLaneArray),
  environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_member_array,  // message members
  environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLaneArray)() {
  environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLane)();
  if (!environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvLaneArray__rosidl_typesupport_introspection_c__EnvLaneArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
