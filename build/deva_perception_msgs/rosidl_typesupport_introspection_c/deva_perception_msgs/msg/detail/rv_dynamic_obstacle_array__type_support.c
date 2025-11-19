// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/RVDynamicObstacleArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle_array__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle_array__functions.h"
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle_array__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `obstacles`
#include "deva_perception_msgs/msg/rv_dynamic_obstacle.h"
// Member `obstacles`
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__RVDynamicObstacleArray__init(message_memory);
}

void deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__RVDynamicObstacleArray__fini(message_memory);
}

size_t deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__size_function__RVDynamicObstacleArray__obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__RVDynamicObstacle__Sequence * member =
    (const deva_perception_msgs__msg__RVDynamicObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_const_function__RVDynamicObstacleArray__obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__RVDynamicObstacle__Sequence * member =
    (const deva_perception_msgs__msg__RVDynamicObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_function__RVDynamicObstacleArray__obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence * member =
    (deva_perception_msgs__msg__RVDynamicObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__fetch_function__RVDynamicObstacleArray__obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__RVDynamicObstacle * item =
    ((const deva_perception_msgs__msg__RVDynamicObstacle *)
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_const_function__RVDynamicObstacleArray__obstacles(untyped_member, index));
  deva_perception_msgs__msg__RVDynamicObstacle * value =
    (deva_perception_msgs__msg__RVDynamicObstacle *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__assign_function__RVDynamicObstacleArray__obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__RVDynamicObstacle * item =
    ((deva_perception_msgs__msg__RVDynamicObstacle *)
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_function__RVDynamicObstacleArray__obstacles(untyped_member, index));
  const deva_perception_msgs__msg__RVDynamicObstacle * value =
    (const deva_perception_msgs__msg__RVDynamicObstacle *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__resize_function__RVDynamicObstacleArray__obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence * member =
    (deva_perception_msgs__msg__RVDynamicObstacle__Sequence *)(untyped_member);
  deva_perception_msgs__msg__RVDynamicObstacle__Sequence__fini(member);
  return deva_perception_msgs__msg__RVDynamicObstacle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVDynamicObstacleArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cipv_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVDynamicObstacleArray, cipv_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVDynamicObstacleArray, num_obstacles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVDynamicObstacleArray, obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__size_function__RVDynamicObstacleArray__obstacles,  // size() function pointer
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_const_function__RVDynamicObstacleArray__obstacles,  // get_const(index) function pointer
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__get_function__RVDynamicObstacleArray__obstacles,  // get(index) function pointer
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__fetch_function__RVDynamicObstacleArray__obstacles,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__assign_function__RVDynamicObstacleArray__obstacles,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__resize_function__RVDynamicObstacleArray__obstacles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "RVDynamicObstacleArray",  // message name
  4,  // number of fields
  sizeof(deva_perception_msgs__msg__RVDynamicObstacleArray),
  deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_member_array,  // message members
  deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RVDynamicObstacleArray)() {
  deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RVDynamicObstacle)();
  if (!deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__RVDynamicObstacleArray__rosidl_typesupport_introspection_c__RVDynamicObstacleArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
