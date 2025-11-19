// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_info__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_info__functions.h"
#include "environment_model_msgs/msg/detail/env_info__struct.h"


// Include directives for member types
// Member `header`
// Member `env_start_header`
// Member `map_header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
// Member `env_start_header`
// Member `map_header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `env_lines`
#include "environment_model_msgs/msg/env_line.h"
// Member `env_lines`
#include "environment_model_msgs/msg/detail/env_line__rosidl_typesupport_introspection_c.h"
// Member `env_objects`
#include "environment_model_msgs/msg/env_object.h"
// Member `env_objects`
#include "environment_model_msgs/msg/detail/env_object__rosidl_typesupport_introspection_c.h"
// Member `env_signals`
#include "environment_model_msgs/msg/env_signal.h"
// Member `env_signals`
#include "environment_model_msgs/msg/detail/env_signal__rosidl_typesupport_introspection_c.h"
// Member `junction_box`
// Member `roadline_final`
// Member `roadline`
#include "environment_model_msgs/msg/vec2d.h"
// Member `junction_box`
// Member `roadline_final`
// Member `roadline`
#include "environment_model_msgs/msg/detail/vec2d__rosidl_typesupport_introspection_c.h"
// Member `passable_space`
// Member `law_space`
// Member `law_space_merged`
// Member `hdair_driveline`
#include "environment_model_msgs/msg/vec2d_array.h"
// Member `passable_space`
// Member `law_space`
// Member `law_space_merged`
// Member `hdair_driveline`
#include "environment_model_msgs/msg/detail/vec2d_array__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "environment_model_msgs/msg/env_link.h"
// Member `links`
#include "environment_model_msgs/msg/detail/env_link__rosidl_typesupport_introspection_c.h"
// Member `road_boundaries`
#include "environment_model_msgs/msg/road_boundary.h"
// Member `road_boundaries`
#include "environment_model_msgs/msg/detail/road_boundary__rosidl_typesupport_introspection_c.h"
// Member `scenario_info`
#include "environment_model_msgs/msg/scenario_info.h"
// Member `scenario_info`
#include "environment_model_msgs/msg/detail/scenario_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvInfo__init(message_memory);
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvInfo__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_lines(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvLine__Sequence * member =
    (const environment_model_msgs__msg__EnvLine__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_lines(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvLine__Sequence * member =
    (const environment_model_msgs__msg__EnvLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_lines(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvLine__Sequence * member =
    (environment_model_msgs__msg__EnvLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvLine * item =
    ((const environment_model_msgs__msg__EnvLine *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_lines(untyped_member, index));
  environment_model_msgs__msg__EnvLine * value =
    (environment_model_msgs__msg__EnvLine *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvLine * item =
    ((environment_model_msgs__msg__EnvLine *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_lines(untyped_member, index));
  const environment_model_msgs__msg__EnvLine * value =
    (const environment_model_msgs__msg__EnvLine *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_lines(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvLine__Sequence * member =
    (environment_model_msgs__msg__EnvLine__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvLine__Sequence__fini(member);
  return environment_model_msgs__msg__EnvLine__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_objects(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvObject__Sequence * member =
    (const environment_model_msgs__msg__EnvObject__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_objects(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvObject__Sequence * member =
    (const environment_model_msgs__msg__EnvObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_objects(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvObject__Sequence * member =
    (environment_model_msgs__msg__EnvObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvObject * item =
    ((const environment_model_msgs__msg__EnvObject *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_objects(untyped_member, index));
  environment_model_msgs__msg__EnvObject * value =
    (environment_model_msgs__msg__EnvObject *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvObject * item =
    ((environment_model_msgs__msg__EnvObject *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_objects(untyped_member, index));
  const environment_model_msgs__msg__EnvObject * value =
    (const environment_model_msgs__msg__EnvObject *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_objects(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvObject__Sequence * member =
    (environment_model_msgs__msg__EnvObject__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvObject__Sequence__fini(member);
  return environment_model_msgs__msg__EnvObject__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_signals(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvSignal__Sequence * member =
    (const environment_model_msgs__msg__EnvSignal__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_signals(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvSignal__Sequence * member =
    (const environment_model_msgs__msg__EnvSignal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_signals(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvSignal__Sequence * member =
    (environment_model_msgs__msg__EnvSignal__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_signals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvSignal * item =
    ((const environment_model_msgs__msg__EnvSignal *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_signals(untyped_member, index));
  environment_model_msgs__msg__EnvSignal * value =
    (environment_model_msgs__msg__EnvSignal *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_signals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvSignal * item =
    ((environment_model_msgs__msg__EnvSignal *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_signals(untyped_member, index));
  const environment_model_msgs__msg__EnvSignal * value =
    (const environment_model_msgs__msg__EnvSignal *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_signals(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvSignal__Sequence * member =
    (environment_model_msgs__msg__EnvSignal__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvSignal__Sequence__fini(member);
  return environment_model_msgs__msg__EnvSignal__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__junction_box(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__junction_box(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__junction_box(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__junction_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__junction_box(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__junction_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__junction_box(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__junction_box(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__passable_space(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__passable_space(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__passable_space(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__passable_space(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2dArray * item =
    ((const environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__passable_space(untyped_member, index));
  environment_model_msgs__msg__Vec2dArray * value =
    (environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__passable_space(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2dArray * item =
    ((environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__passable_space(untyped_member, index));
  const environment_model_msgs__msg__Vec2dArray * value =
    (const environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__passable_space(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2dArray__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__law_space(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__law_space(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2dArray * item =
    ((const environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space(untyped_member, index));
  environment_model_msgs__msg__Vec2dArray * value =
    (environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__law_space(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2dArray * item =
    ((environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space(untyped_member, index));
  const environment_model_msgs__msg__Vec2dArray * value =
    (const environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__law_space(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2dArray__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__roadline_final(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline_final(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline_final(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__roadline_final(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline_final(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__roadline_final(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline_final(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__roadline_final(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__roadline(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__roadline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__roadline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__roadline(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__law_space_merged(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space_merged(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space_merged(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__law_space_merged(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2dArray * item =
    ((const environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space_merged(untyped_member, index));
  environment_model_msgs__msg__Vec2dArray * value =
    (environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__law_space_merged(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2dArray * item =
    ((environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space_merged(untyped_member, index));
  const environment_model_msgs__msg__Vec2dArray * value =
    (const environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__law_space_merged(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2dArray__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__hdair_driveline(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__hdair_driveline(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (const environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__hdair_driveline(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__hdair_driveline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2dArray * item =
    ((const environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__hdair_driveline(untyped_member, index));
  environment_model_msgs__msg__Vec2dArray * value =
    (environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__hdair_driveline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2dArray * item =
    ((environment_model_msgs__msg__Vec2dArray *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__hdair_driveline(untyped_member, index));
  const environment_model_msgs__msg__Vec2dArray * value =
    (const environment_model_msgs__msg__Vec2dArray *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__hdair_driveline(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2dArray__Sequence * member =
    (environment_model_msgs__msg__Vec2dArray__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2dArray__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__links(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvLink__Sequence * member =
    (const environment_model_msgs__msg__EnvLink__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__links(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvLink__Sequence * member =
    (const environment_model_msgs__msg__EnvLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__links(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvLink__Sequence * member =
    (environment_model_msgs__msg__EnvLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvLink * item =
    ((const environment_model_msgs__msg__EnvLink *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__links(untyped_member, index));
  environment_model_msgs__msg__EnvLink * value =
    (environment_model_msgs__msg__EnvLink *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvLink * item =
    ((environment_model_msgs__msg__EnvLink *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__links(untyped_member, index));
  const environment_model_msgs__msg__EnvLink * value =
    (const environment_model_msgs__msg__EnvLink *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__links(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvLink__Sequence * member =
    (environment_model_msgs__msg__EnvLink__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvLink__Sequence__fini(member);
  return environment_model_msgs__msg__EnvLink__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__road_boundaries(
  const void * untyped_member)
{
  const environment_model_msgs__msg__RoadBoundary__Sequence * member =
    (const environment_model_msgs__msg__RoadBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__road_boundaries(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__RoadBoundary__Sequence * member =
    (const environment_model_msgs__msg__RoadBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__road_boundaries(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__RoadBoundary__Sequence * member =
    (environment_model_msgs__msg__RoadBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__road_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__RoadBoundary * item =
    ((const environment_model_msgs__msg__RoadBoundary *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__road_boundaries(untyped_member, index));
  environment_model_msgs__msg__RoadBoundary * value =
    (environment_model_msgs__msg__RoadBoundary *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__road_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__RoadBoundary * item =
    ((environment_model_msgs__msg__RoadBoundary *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__road_boundaries(untyped_member, index));
  const environment_model_msgs__msg__RoadBoundary * value =
    (const environment_model_msgs__msg__RoadBoundary *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__road_boundaries(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__RoadBoundary__Sequence * member =
    (environment_model_msgs__msg__RoadBoundary__Sequence *)(untyped_member);
  environment_model_msgs__msg__RoadBoundary__Sequence__fini(member);
  return environment_model_msgs__msg__RoadBoundary__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__scenario_info(
  const void * untyped_member)
{
  const environment_model_msgs__msg__ScenarioInfo__Sequence * member =
    (const environment_model_msgs__msg__ScenarioInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__scenario_info(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__ScenarioInfo__Sequence * member =
    (const environment_model_msgs__msg__ScenarioInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__scenario_info(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__ScenarioInfo__Sequence * member =
    (environment_model_msgs__msg__ScenarioInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__scenario_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__ScenarioInfo * item =
    ((const environment_model_msgs__msg__ScenarioInfo *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__scenario_info(untyped_member, index));
  environment_model_msgs__msg__ScenarioInfo * value =
    (environment_model_msgs__msg__ScenarioInfo *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__scenario_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__ScenarioInfo * item =
    ((environment_model_msgs__msg__ScenarioInfo *)
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__scenario_info(untyped_member, index));
  const environment_model_msgs__msg__ScenarioInfo * value =
    (const environment_model_msgs__msg__ScenarioInfo *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__scenario_info(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__ScenarioInfo__Sequence * member =
    (environment_model_msgs__msg__ScenarioInfo__Sequence *)(untyped_member);
  environment_model_msgs__msg__ScenarioInfo__Sequence__fini(member);
  return environment_model_msgs__msg__ScenarioInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[26] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "env_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, env_lines),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_lines,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_lines,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_lines,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_lines,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_lines,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_lines  // resize(index) function pointer
  },
  {
    "env_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, env_objects),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_objects,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_objects,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_objects,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_objects,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_objects,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_objects  // resize(index) function pointer
  },
  {
    "env_signals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, env_signals),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__env_signals,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__env_signals,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__env_signals,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__env_signals,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__env_signals,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__env_signals  // resize(index) function pointer
  },
  {
    "junction_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, junction_box),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__junction_box,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__junction_box,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__junction_box,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__junction_box,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__junction_box,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__junction_box  // resize(index) function pointer
  },
  {
    "env_start_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, env_start_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, map_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, map_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "routing_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, routing_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navi_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, navi_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, has_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "passable_space",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, passable_space),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__passable_space,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__passable_space,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__passable_space,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__passable_space,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__passable_space,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__passable_space  // resize(index) function pointer
  },
  {
    "law_space",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, law_space),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__law_space,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__law_space,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__law_space,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__law_space  // resize(index) function pointer
  },
  {
    "roadline_final",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, roadline_final),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__roadline_final,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline_final,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline_final,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__roadline_final,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__roadline_final,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__roadline_final  // resize(index) function pointer
  },
  {
    "roadline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, roadline),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__roadline,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__roadline,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__roadline,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__roadline,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__roadline,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__roadline  // resize(index) function pointer
  },
  {
    "law_space_merged",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, law_space_merged),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__law_space_merged,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__law_space_merged,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__law_space_merged,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__law_space_merged,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__law_space_merged,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__law_space_merged  // resize(index) function pointer
  },
  {
    "meg_map_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, meg_map_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, channel_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dist_sd_junction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, dist_sd_junction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hdair_driveline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, hdair_driveline),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__hdair_driveline,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__hdair_driveline,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__hdair_driveline,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__hdair_driveline,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__hdair_driveline,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__hdair_driveline  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, links),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__links,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__links,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__links,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__links,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__links,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__links  // resize(index) function pointer
  },
  {
    "ownership",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, ownership),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_boundaries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, road_boundaries),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__road_boundaries,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__road_boundaries,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__road_boundaries,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__road_boundaries,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__road_boundaries,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__road_boundaries  // resize(index) function pointer
  },
  {
    "scenario_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, scenario_info),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__size_function__EnvInfo__scenario_info,  // size() function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_const_function__EnvInfo__scenario_info,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__get_function__EnvInfo__scenario_info,  // get(index) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__fetch_function__EnvInfo__scenario_info,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__assign_function__EnvInfo__scenario_info,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__resize_function__EnvInfo__scenario_info  // resize(index) function pointer
  },
  {
    "highway_scene",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvInfo, highway_scene),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvInfo",  // message name
  26,  // number of fields
  sizeof(environment_model_msgs__msg__EnvInfo),
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array,  // message members
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvInfo)() {
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLine)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvObject)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvSignal)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2dArray)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2dArray)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2dArray)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2dArray)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLink)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, RoadBoundary)();
  environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, ScenarioInfo)();
  if (!environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvInfo__rosidl_typesupport_introspection_c__EnvInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
