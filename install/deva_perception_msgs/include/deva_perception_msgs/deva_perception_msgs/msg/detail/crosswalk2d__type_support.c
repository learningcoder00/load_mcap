// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/Crosswalk2d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/crosswalk2d__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/crosswalk2d__functions.h"
#include "deva_perception_msgs/msg/detail/crosswalk2d__struct.h"


// Include directives for member types
// Member `pixel_points`
#include "deva_common_msgs/msg/point2d.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__Crosswalk2d__init(message_memory);
}

void deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__Crosswalk2d__fini(message_memory);
}

size_t deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__size_function__Crosswalk2d__pixel_points(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_const_function__Crosswalk2d__pixel_points(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_function__Crosswalk2d__pixel_points(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__fetch_function__Crosswalk2d__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_const_function__Crosswalk2d__pixel_points(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__assign_function__Crosswalk2d__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_function__Crosswalk2d__pixel_points(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__resize_function__Crosswalk2d__pixel_points(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_member_array[11] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lu_point_pos_lgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, lu_point_pos_lgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lu_point_pos_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, lu_point_pos_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ru_point_pos_lgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, ru_point_pos_lgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ru_point_pos_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, ru_point_pos_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rd_point_pos_lgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, rd_point_pos_lgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rd_point_pos_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, rd_point_pos_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ld_point_pos_lgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, ld_point_pos_lgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ld_point_pos_lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, ld_point_pos_lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Crosswalk2d, pixel_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__size_function__Crosswalk2d__pixel_points,  // size() function pointer
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_const_function__Crosswalk2d__pixel_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__get_function__Crosswalk2d__pixel_points,  // get(index) function pointer
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__fetch_function__Crosswalk2d__pixel_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__assign_function__Crosswalk2d__pixel_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__resize_function__Crosswalk2d__pixel_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "Crosswalk2d",  // message name
  11,  // number of fields
  sizeof(deva_perception_msgs__msg__Crosswalk2d),
  deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_member_array,  // message members
  deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Crosswalk2d)() {
  deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  if (!deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__Crosswalk2d__rosidl_typesupport_introspection_c__Crosswalk2d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
