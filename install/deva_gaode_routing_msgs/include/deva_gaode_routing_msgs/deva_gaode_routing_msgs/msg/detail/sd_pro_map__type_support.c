// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.h"


// Include directives for member types
// Member `navi_route`
#include "deva_gaode_routing_msgs/msg/nav_route.h"
// Member `navi_route`
#include "deva_gaode_routing_msgs/msg/detail/nav_route__rosidl_typesupport_introspection_c.h"
// Member `paths`
#include "deva_gaode_routing_msgs/msg/sd_pro_path.h"
// Member `paths`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "deva_gaode_routing_msgs/msg/sd_pro_link.h"
// Member `links`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__rosidl_typesupport_introspection_c.h"
// Member `path_splits`
#include "deva_gaode_routing_msgs/msg/sd_pro_path_split.h"
// Member `path_splits`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__rosidl_typesupport_introspection_c.h"
// Member `path_merges`
#include "deva_gaode_routing_msgs/msg/sd_pro_path_merge.h"
// Member `path_merges`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__rosidl_typesupport_introspection_c.h"
// Member `sd_nodes`
#include "deva_gaode_routing_msgs/msg/sd_node.h"
// Member `sd_nodes`
#include "deva_gaode_routing_msgs/msg/detail/sd_node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SdProMap__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SdProMap__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__paths(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProPath__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPath__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__paths(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProPath__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__paths(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProPath__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProPath * item =
    ((const deva_gaode_routing_msgs__msg__SdProPath *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__paths(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProPath * value =
    (deva_gaode_routing_msgs__msg__SdProPath *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProPath * item =
    ((deva_gaode_routing_msgs__msg__SdProPath *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__paths(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProPath * value =
    (const deva_gaode_routing_msgs__msg__SdProPath *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__paths(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProPath__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPath__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProPath__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProPath__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__links(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProLink__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLink__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__links(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProLink__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__links(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProLink__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProLink * item =
    ((const deva_gaode_routing_msgs__msg__SdProLink *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__links(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProLink * value =
    (deva_gaode_routing_msgs__msg__SdProLink *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProLink * item =
    ((deva_gaode_routing_msgs__msg__SdProLink *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__links(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProLink * value =
    (const deva_gaode_routing_msgs__msg__SdProLink *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__links(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProLink__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLink__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProLink__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProLink__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__path_splits(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_splits(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_splits(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__path_splits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProPathSplit * item =
    ((const deva_gaode_routing_msgs__msg__SdProPathSplit *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_splits(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProPathSplit * value =
    (deva_gaode_routing_msgs__msg__SdProPathSplit *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__path_splits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProPathSplit * item =
    ((deva_gaode_routing_msgs__msg__SdProPathSplit *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_splits(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProPathSplit * value =
    (const deva_gaode_routing_msgs__msg__SdProPathSplit *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__path_splits(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__path_merges(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_merges(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_merges(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__path_merges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProPathMerge * item =
    ((const deva_gaode_routing_msgs__msg__SdProPathMerge *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_merges(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProPathMerge * value =
    (deva_gaode_routing_msgs__msg__SdProPathMerge *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__path_merges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProPathMerge * item =
    ((deva_gaode_routing_msgs__msg__SdProPathMerge *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_merges(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProPathMerge * value =
    (const deva_gaode_routing_msgs__msg__SdProPathMerge *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__path_merges(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__sd_nodes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SDNode__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SDNode__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__sd_nodes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SDNode__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SDNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__sd_nodes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SDNode__Sequence * member =
    (deva_gaode_routing_msgs__msg__SDNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__sd_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SDNode * item =
    ((const deva_gaode_routing_msgs__msg__SDNode *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__sd_nodes(untyped_member, index));
  deva_gaode_routing_msgs__msg__SDNode * value =
    (deva_gaode_routing_msgs__msg__SDNode *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__sd_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SDNode * item =
    ((deva_gaode_routing_msgs__msg__SDNode *)
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__sd_nodes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SDNode * value =
    (const deva_gaode_routing_msgs__msg__SDNode *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__sd_nodes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SDNode__Sequence * member =
    (deva_gaode_routing_msgs__msg__SDNode__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SDNode__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SDNode__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[8] = {
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "city_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, city_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navi_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, navi_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, paths),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__paths,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__paths,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__paths,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__paths,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__paths,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__paths  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, links),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__links,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__links,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__links,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__links,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__links,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__links  // resize(index) function pointer
  },
  {
    "path_splits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, path_splits),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__path_splits,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_splits,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_splits,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__path_splits,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__path_splits,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__path_splits  // resize(index) function pointer
  },
  {
    "path_merges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, path_merges),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__path_merges,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__path_merges,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__path_merges,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__path_merges,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__path_merges,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__path_merges  // resize(index) function pointer
  },
  {
    "sd_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProMap, sd_nodes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__size_function__SdProMap__sd_nodes,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_const_function__SdProMap__sd_nodes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__get_function__SdProMap__sd_nodes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__fetch_function__SdProMap__sd_nodes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__assign_function__SdProMap__sd_nodes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__resize_function__SdProMap__sd_nodes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SdProMap",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SdProMap),
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProMap)() {
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NavRoute)();
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProPath)();
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLink)();
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProPathSplit)();
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProPathMerge)();
  deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SDNode)();
  if (!deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SdProMap__rosidl_typesupport_introspection_c__SdProMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
