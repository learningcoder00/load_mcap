// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/static_obstacle__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/static_obstacle__functions.h"
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"


// Include directives for member types
// Member `obstacle`
#include "deva_perception_msgs/msg/obstacle_common.h"
// Member `obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__StaticObstacle__init(message_memory);
}

void deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__StaticObstacle__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_member_array[4] = {
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StaticObstacle, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StaticObstacle, object_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_obstacle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StaticObstacle, static_obstacle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slot_lock_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StaticObstacle, slot_lock_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "StaticObstacle",  // message name
  4,  // number of fields
  sizeof(deva_perception_msgs__msg__StaticObstacle),
  deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_member_array,  // message members
  deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, StaticObstacle)() {
  deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ObstacleCommon)();
  if (!deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__StaticObstacle__rosidl_typesupport_introspection_c__StaticObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
