// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__struct.h"


// Include directives for member types
// Member `light_states`
#include "deva_gaode_routing_msgs/msg/web_light_state.h"
// Member `light_states`
#include "deva_gaode_routing_msgs/msg/detail/web_light_state__rosidl_typesupport_introspection_c.h"
// Member `desc`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebLightInfo__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebLightInfo__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__size_function__WebLightInfo__light_states(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebLightState__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebLightState__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_const_function__WebLightInfo__light_states(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebLightState__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebLightState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_function__WebLightInfo__light_states(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebLightState__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebLightState__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__fetch_function__WebLightInfo__light_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebLightState * item =
    ((const deva_gaode_routing_msgs__msg__WebLightState *)
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_const_function__WebLightInfo__light_states(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebLightState * value =
    (deva_gaode_routing_msgs__msg__WebLightState *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__assign_function__WebLightInfo__light_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebLightState * item =
    ((deva_gaode_routing_msgs__msg__WebLightState *)
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_function__WebLightInfo__light_states(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebLightState * value =
    (const deva_gaode_routing_msgs__msg__WebLightState *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__resize_function__WebLightInfo__light_states(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebLightState__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebLightState__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebLightState__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebLightState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_member_array[4] = {
  {
    "dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLightInfo, dir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLightInfo, wait_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLightInfo, light_states),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__size_function__WebLightInfo__light_states,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_const_function__WebLightInfo__light_states,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__get_function__WebLightInfo__light_states,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__fetch_function__WebLightInfo__light_states,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__assign_function__WebLightInfo__light_states,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__resize_function__WebLightInfo__light_states  // resize(index) function pointer
  },
  {
    "desc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLightInfo, desc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebLightInfo",  // message name
  4,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebLightInfo),
  deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLightInfo)() {
  deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLightState)();
  if (!deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebLightInfo__rosidl_typesupport_introspection_c__WebLightInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
