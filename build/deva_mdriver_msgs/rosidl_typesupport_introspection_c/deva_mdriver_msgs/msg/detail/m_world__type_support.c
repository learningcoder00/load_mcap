// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_mdriver_msgs/msg/detail/m_world__rosidl_typesupport_introspection_c.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_mdriver_msgs/msg/detail/m_world__functions.h"
#include "deva_mdriver_msgs/msg/detail/m_world__struct.h"


// Include directives for member types
// Member `all_obstacles`
#include "deva_mdriver_msgs/msg/m_prediction_obstacle.h"
// Member `all_obstacles`
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__rosidl_typesupport_introspection_c.h"
// Member `nudge_buffer`
#include "deva_mdriver_msgs/msg/nudge_buffer.h"
// Member `nudge_buffer`
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__rosidl_typesupport_introspection_c.h"
// Member `ego_ref_v`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mdriver_meta_actions`
#include "deva_mdriver_msgs/msg/mdriver_meta_action.h"
// Member `mdriver_meta_actions`
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__rosidl_typesupport_introspection_c.h"
// Member `refline_points`
#include "geometry_msgs/msg/point.h"
// Member `refline_points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_mdriver_msgs__msg__MWorld__init(message_memory);
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_fini_function(void * message_memory)
{
  deva_mdriver_msgs__msg__MWorld__fini(message_memory);
}

size_t deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__all_obstacles(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * member =
    (const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__all_obstacles(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * member =
    (const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__all_obstacles(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * member =
    (deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__all_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__MPredictionObstacle * item =
    ((const deva_mdriver_msgs__msg__MPredictionObstacle *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__all_obstacles(untyped_member, index));
  deva_mdriver_msgs__msg__MPredictionObstacle * value =
    (deva_mdriver_msgs__msg__MPredictionObstacle *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__all_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__MPredictionObstacle * item =
    ((deva_mdriver_msgs__msg__MPredictionObstacle *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__all_obstacles(untyped_member, index));
  const deva_mdriver_msgs__msg__MPredictionObstacle * value =
    (const deva_mdriver_msgs__msg__MPredictionObstacle *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__all_obstacles(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * member =
    (deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__fini(member);
  return deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__ego_ref_v(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__ego_ref_v(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__ego_ref_v(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__ego_ref_v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__ego_ref_v(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__ego_ref_v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__ego_ref_v(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__ego_ref_v(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__mdriver_meta_actions(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__MdriverMetaAction__Sequence * member =
    (const deva_mdriver_msgs__msg__MdriverMetaAction__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__mdriver_meta_actions(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__MdriverMetaAction__Sequence * member =
    (const deva_mdriver_msgs__msg__MdriverMetaAction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__mdriver_meta_actions(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__MdriverMetaAction__Sequence * member =
    (deva_mdriver_msgs__msg__MdriverMetaAction__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__mdriver_meta_actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__MdriverMetaAction * item =
    ((const deva_mdriver_msgs__msg__MdriverMetaAction *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__mdriver_meta_actions(untyped_member, index));
  deva_mdriver_msgs__msg__MdriverMetaAction * value =
    (deva_mdriver_msgs__msg__MdriverMetaAction *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__mdriver_meta_actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__MdriverMetaAction * item =
    ((deva_mdriver_msgs__msg__MdriverMetaAction *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__mdriver_meta_actions(untyped_member, index));
  const deva_mdriver_msgs__msg__MdriverMetaAction * value =
    (const deva_mdriver_msgs__msg__MdriverMetaAction *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__mdriver_meta_actions(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__MdriverMetaAction__Sequence * member =
    (deva_mdriver_msgs__msg__MdriverMetaAction__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__fini(member);
  return deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__refline_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__refline_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point * member =
    (const geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void * deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__refline_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point * member =
    (geometry_msgs__msg__Point *)(untyped_member);
  return &member[index];
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__refline_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__refline_points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__refline_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__refline_points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array[8] = {
  {
    "world_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, world_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "meta_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, meta_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "all_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, all_obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__all_obstacles,  // size() function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__all_obstacles,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__all_obstacles,  // get(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__all_obstacles,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__all_obstacles,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__all_obstacles  // resize(index) function pointer
  },
  {
    "nudge_buffer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, nudge_buffer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_ref_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, ego_ref_v),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__ego_ref_v,  // size() function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__ego_ref_v,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__ego_ref_v,  // get(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__ego_ref_v,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__ego_ref_v,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__ego_ref_v  // resize(index) function pointer
  },
  {
    "mdriver_meta_actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, mdriver_meta_actions),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__mdriver_meta_actions,  // size() function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__mdriver_meta_actions,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__mdriver_meta_actions,  // get(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__mdriver_meta_actions,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__mdriver_meta_actions,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__resize_function__MWorld__mdriver_meta_actions  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "refline_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MWorld, refline_points),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__size_function__MWorld__refline_points,  // size() function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_const_function__MWorld__refline_points,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__get_function__MWorld__refline_points,  // get(index) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__fetch_function__MWorld__refline_points,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__assign_function__MWorld__refline_points,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_members = {
  "deva_mdriver_msgs__msg",  // message namespace
  "MWorld",  // message name
  8,  // number of fields
  sizeof(deva_mdriver_msgs__msg__MWorld),
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array,  // message members
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_type_support_handle = {
  0,
  &deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MWorld)() {
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MPredictionObstacle)();
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, NudgeBuffer)();
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MdriverMetaAction)();
  deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_type_support_handle.typesupport_identifier) {
    deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_mdriver_msgs__msg__MWorld__rosidl_typesupport_introspection_c__MWorld_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
