// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_object__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_object__functions.h"
#include "environment_model_msgs/msg/detail/env_object__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygen`
#include "environment_model_msgs/msg/vec3d.h"
// Member `polygen`
#include "environment_model_msgs/msg/detail/vec3d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvObject__init(message_memory);
}

void environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvObject__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__size_function__EnvObject__polygen(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec3d__Sequence * member =
    (const environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_const_function__EnvObject__polygen(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec3d__Sequence * member =
    (const environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_function__EnvObject__polygen(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec3d__Sequence * member =
    (environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__fetch_function__EnvObject__polygen(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec3d * item =
    ((const environment_model_msgs__msg__Vec3d *)
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_const_function__EnvObject__polygen(untyped_member, index));
  environment_model_msgs__msg__Vec3d * value =
    (environment_model_msgs__msg__Vec3d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__assign_function__EnvObject__polygen(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec3d * item =
    ((environment_model_msgs__msg__Vec3d *)
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_function__EnvObject__polygen(untyped_member, index));
  const environment_model_msgs__msg__Vec3d * value =
    (const environment_model_msgs__msg__Vec3d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__resize_function__EnvObject__polygen(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec3d__Sequence * member =
    (environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec3d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec3d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enum_object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvObject, enum_object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvObject, polygen),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__size_function__EnvObject__polygen,  // size() function pointer
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_const_function__EnvObject__polygen,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__get_function__EnvObject__polygen,  // get(index) function pointer
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__fetch_function__EnvObject__polygen,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__assign_function__EnvObject__polygen,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__resize_function__EnvObject__polygen  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvObject",  // message name
  3,  // number of fields
  sizeof(environment_model_msgs__msg__EnvObject),
  environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_member_array,  // message members
  environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvObject)() {
  environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec3d)();
  if (!environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvObject__rosidl_typesupport_introspection_c__EnvObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
