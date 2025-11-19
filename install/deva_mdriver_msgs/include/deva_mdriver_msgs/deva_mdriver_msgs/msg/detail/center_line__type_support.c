// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_mdriver_msgs/msg/detail/center_line__rosidl_typesupport_introspection_c.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_mdriver_msgs/msg/detail/center_line__functions.h"
#include "deva_mdriver_msgs/msg/detail/center_line__struct.h"


// Include directives for member types
// Member `pts`
#include "deva_mdriver_msgs/msg/center_line_point.h"
// Member `pts`
#include "deva_mdriver_msgs/msg/detail/center_line_point__rosidl_typesupport_introspection_c.h"
// Member `pre_ids`
// Member `suc_ids`
// Member `traffic_elem_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_mdriver_msgs__msg__CenterLine__init(message_memory);
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_fini_function(void * message_memory)
{
  deva_mdriver_msgs__msg__CenterLine__fini(message_memory);
}

size_t deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__pts(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__CenterLinePoint__Sequence * member =
    (const deva_mdriver_msgs__msg__CenterLinePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pts(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__CenterLinePoint__Sequence * member =
    (const deva_mdriver_msgs__msg__CenterLinePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pts(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence * member =
    (deva_mdriver_msgs__msg__CenterLinePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__pts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__CenterLinePoint * item =
    ((const deva_mdriver_msgs__msg__CenterLinePoint *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pts(untyped_member, index));
  deva_mdriver_msgs__msg__CenterLinePoint * value =
    (deva_mdriver_msgs__msg__CenterLinePoint *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__pts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__CenterLinePoint * item =
    ((deva_mdriver_msgs__msg__CenterLinePoint *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pts(untyped_member, index));
  const deva_mdriver_msgs__msg__CenterLinePoint * value =
    (const deva_mdriver_msgs__msg__CenterLinePoint *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__pts(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence * member =
    (deva_mdriver_msgs__msg__CenterLinePoint__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence__fini(member);
  return deva_mdriver_msgs__msg__CenterLinePoint__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__pre_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pre_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pre_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__pre_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pre_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__pre_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pre_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__pre_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__suc_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__suc_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__suc_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__suc_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__suc_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__suc_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__suc_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__suc_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__traffic_elem_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__traffic_elem_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__traffic_elem_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__traffic_elem_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__traffic_elem_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__traffic_elem_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__traffic_elem_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__traffic_elem_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, pts),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__pts,  // size() function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pts,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pts,  // get(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__pts,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__pts,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__pts  // resize(index) function pointer
  },
  {
    "pre_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, pre_ids),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__pre_ids,  // size() function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__pre_ids,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__pre_ids,  // get(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__pre_ids,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__pre_ids,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__pre_ids  // resize(index) function pointer
  },
  {
    "suc_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, suc_ids),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__suc_ids,  // size() function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__suc_ids,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__suc_ids,  // get(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__suc_ids,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__suc_ids,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__suc_ids  // resize(index) function pointer
  },
  {
    "left_line_attr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, left_line_attr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_line_attr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, right_line_attr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_line_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, left_line_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_line_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, right_line_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_elem_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__CenterLine, traffic_elem_ids),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__size_function__CenterLine__traffic_elem_ids,  // size() function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_const_function__CenterLine__traffic_elem_ids,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__get_function__CenterLine__traffic_elem_ids,  // get(index) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__fetch_function__CenterLine__traffic_elem_ids,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__assign_function__CenterLine__traffic_elem_ids,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__resize_function__CenterLine__traffic_elem_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_members = {
  "deva_mdriver_msgs__msg",  // message namespace
  "CenterLine",  // message name
  9,  // number of fields
  sizeof(deva_mdriver_msgs__msg__CenterLine),
  deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array,  // message members
  deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle = {
  0,
  &deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, CenterLine)() {
  deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, CenterLinePoint)();
  if (!deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle.typesupport_identifier) {
    deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_mdriver_msgs__msg__CenterLine__rosidl_typesupport_introspection_c__CenterLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
