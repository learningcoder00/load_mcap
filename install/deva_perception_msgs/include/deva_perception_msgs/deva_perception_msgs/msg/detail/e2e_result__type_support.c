// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/e2e_result__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/e2e_result__functions.h"
#include "deva_perception_msgs/msg/detail/e2e_result__struct.h"


// Include directives for member types
// Member `broadcategory`
#include "deva_perception_msgs/msg/e2e_decode_broad_result.h"
// Member `broadcategory`
#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__rosidl_typesupport_introspection_c.h"
// Member `turn_around`
// Member `left`
// Member `straight`
// Member `right`
#include "deva_perception_msgs/msg/e2e_decode_result.h"
// Member `turn_around`
// Member `left`
// Member `straight`
// Member `right`
#include "deva_perception_msgs/msg/detail/e2e_decode_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__E2eResult__init(message_memory);
}

void deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__E2eResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[5] = {
  {
    "broadcategory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eResult, broadcategory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_around",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eResult, turn_around),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eResult, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "straight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eResult, straight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eResult, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "E2eResult",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs__msg__E2eResult),
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array,  // message members
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eResult)() {
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eDecodeBroadResult)();
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eDecodeResult)();
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eDecodeResult)();
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eDecodeResult)();
  deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eDecodeResult)();
  if (!deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__E2eResult__rosidl_typesupport_introspection_c__E2eResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
