// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/aeb_obstacle__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/aeb_obstacle__functions.h"
#include "deva_perception_msgs/msg/detail/aeb_obstacle__struct.h"


// Include directives for member types
// Member `obstacle`
#include "deva_perception_msgs/msg/obstacle_common.h"
// Member `obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__rosidl_typesupport_introspection_c.h"
// Member `head_bbox`
// Member `tail_bbox`
#include "deva_common_msgs/msg/bounding_box2d.h"
// Member `head_bbox`
// Member `tail_bbox`
#include "deva_common_msgs/msg/detail/bounding_box2d__rosidl_typesupport_introspection_c.h"
// Member `ground_points`
#include "deva_common_msgs/msg/ground_point.h"
// Member `ground_points`
#include "deva_common_msgs/msg/detail/ground_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__AEBObstacle__init(message_memory);
}

void deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__AEBObstacle__fini(message_memory);
}

size_t deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__size_function__AEBObstacle__ground_points(
  const void * untyped_member)
{
  const deva_common_msgs__msg__GroundPoint__Sequence * member =
    (const deva_common_msgs__msg__GroundPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_const_function__AEBObstacle__ground_points(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__GroundPoint__Sequence * member =
    (const deva_common_msgs__msg__GroundPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_function__AEBObstacle__ground_points(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__GroundPoint__Sequence * member =
    (deva_common_msgs__msg__GroundPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__fetch_function__AEBObstacle__ground_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__GroundPoint * item =
    ((const deva_common_msgs__msg__GroundPoint *)
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_const_function__AEBObstacle__ground_points(untyped_member, index));
  deva_common_msgs__msg__GroundPoint * value =
    (deva_common_msgs__msg__GroundPoint *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__assign_function__AEBObstacle__ground_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__GroundPoint * item =
    ((deva_common_msgs__msg__GroundPoint *)
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_function__AEBObstacle__ground_points(untyped_member, index));
  const deva_common_msgs__msg__GroundPoint * value =
    (const deva_common_msgs__msg__GroundPoint *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__resize_function__AEBObstacle__ground_points(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__GroundPoint__Sequence * member =
    (deva_common_msgs__msg__GroundPoint__Sequence *)(untyped_member);
  deva_common_msgs__msg__GroundPoint__Sequence__fini(member);
  return deva_common_msgs__msg__GroundPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array[11] = {
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, obstacle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, head_bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, tail_bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, ground_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__size_function__AEBObstacle__ground_points,  // size() function pointer
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_const_function__AEBObstacle__ground_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__get_function__AEBObstacle__ground_points,  // get(index) function pointer
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__fetch_function__AEBObstacle__ground_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__assign_function__AEBObstacle__ground_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__resize_function__AEBObstacle__ground_points  // resize(index) function pointer
  },
  {
    "full_occ_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, full_occ_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_occ_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, head_occ_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_occ_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, tail_occ_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "full_trunc_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, full_trunc_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_trunc_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, head_trunc_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_trunc_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__AEBObstacle, tail_trunc_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "AEBObstacle",  // message name
  11,  // number of fields
  sizeof(deva_perception_msgs__msg__AEBObstacle),
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array,  // message members
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, AEBObstacle)() {
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ObstacleCommon)();
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, BoundingBox2d)();
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, BoundingBox2d)();
  deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, GroundPoint)();
  if (!deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__AEBObstacle__rosidl_typesupport_introspection_c__AEBObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
