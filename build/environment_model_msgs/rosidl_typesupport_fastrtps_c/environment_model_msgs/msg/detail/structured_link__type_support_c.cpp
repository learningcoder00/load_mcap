// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/structured_link__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "environment_model_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "environment_model_msgs/msg/detail/structured_link__struct.h"
#include "environment_model_msgs/msg/detail/structured_link__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"  // feature_point_ids
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"  // guidances
#include "environment_model_msgs/msg/detail/vec3d__functions.h"  // points
#include "rosidl_runtime_c/primitives_sequence.h"  // link_kinds, prev_ids, succ_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // link_kinds, prev_ids, succ_ids

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__Guidance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__Guidance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_environment_model_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Guidance)();
size_t get_serialized_size_environment_model_msgs__msg__Vec3d(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_environment_model_msgs__msg__Vec3d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec3d)();


using _StructuredLink__ros_msg_type = environment_model_msgs__msg__StructuredLink;

static bool _StructuredLink__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StructuredLink__ros_msg_type * ros_message = static_cast<const _StructuredLink__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: prev_ids
  {
    size_t size = ros_message->prev_ids.size;
    auto array_ptr = ros_message->prev_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: succ_ids
  {
    size_t size = ros_message->succ_ids.size;
    auto array_ptr = ros_message->succ_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: feature_point_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType
      )()->data);
    size_t size = ros_message->feature_point_ids.size;
    auto array_ptr = ros_message->feature_point_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec3d
      )()->data);
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: speed_limit_s2e
  {
    cdr << ros_message->speed_limit_s2e;
  }

  // Field name: speed_limit_e2s
  {
    cdr << ros_message->speed_limit_e2s;
  }

  // Field name: coverage_status
  {
    cdr << ros_message->coverage_status;
  }

  // Field name: lane_num
  {
    cdr << ros_message->lane_num;
  }

  // Field name: lane_num_s2e
  {
    cdr << ros_message->lane_num_s2e;
  }

  // Field name: lane_num_e2s
  {
    cdr << ros_message->lane_num_e2s;
  }

  // Field name: relationship_with_junction
  {
    cdr << ros_message->relationship_with_junction;
  }

  // Field name: guidances
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Guidance
      )()->data);
    size_t size = ros_message->guidances.size;
    auto array_ptr = ros_message->guidances.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_on_routing
  {
    cdr << (ros_message->is_on_routing ? true : false);
  }

  // Field name: need_revert
  {
    cdr << (ros_message->need_revert ? true : false);
  }

  // Field name: link_kinds
  {
    size_t size = ros_message->link_kinds.size;
    auto array_ptr = ros_message->link_kinds.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _StructuredLink__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StructuredLink__ros_msg_type * ros_message = static_cast<_StructuredLink__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: prev_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->prev_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->prev_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->prev_ids, size)) {
      fprintf(stderr, "failed to create array for field 'prev_ids'");
      return false;
    }
    auto array_ptr = ros_message->prev_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: succ_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->succ_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->succ_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->succ_ids, size)) {
      fprintf(stderr, "failed to create array for field 'succ_ids'");
      return false;
    }
    auto array_ptr = ros_message->succ_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: feature_point_ids
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeatureIDType
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->feature_point_ids.data) {
      deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&ros_message->feature_point_ids);
    }
    if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&ros_message->feature_point_ids, size)) {
      fprintf(stderr, "failed to create array for field 'feature_point_ids'");
      return false;
    }
    auto array_ptr = ros_message->feature_point_ids.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, Vec3d
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->points.data) {
      environment_model_msgs__msg__Vec3d__Sequence__fini(&ros_message->points);
    }
    if (!environment_model_msgs__msg__Vec3d__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: speed_limit_s2e
  {
    cdr >> ros_message->speed_limit_s2e;
  }

  // Field name: speed_limit_e2s
  {
    cdr >> ros_message->speed_limit_e2s;
  }

  // Field name: coverage_status
  {
    cdr >> ros_message->coverage_status;
  }

  // Field name: lane_num
  {
    cdr >> ros_message->lane_num;
  }

  // Field name: lane_num_s2e
  {
    cdr >> ros_message->lane_num_s2e;
  }

  // Field name: lane_num_e2s
  {
    cdr >> ros_message->lane_num_e2s;
  }

  // Field name: relationship_with_junction
  {
    cdr >> ros_message->relationship_with_junction;
  }

  // Field name: guidances
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Guidance
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->guidances.data) {
      deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(&ros_message->guidances);
    }
    if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__init(&ros_message->guidances, size)) {
      fprintf(stderr, "failed to create array for field 'guidances'");
      return false;
    }
    auto array_ptr = ros_message->guidances.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_on_routing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_on_routing = tmp ? true : false;
  }

  // Field name: need_revert
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->need_revert = tmp ? true : false;
  }

  // Field name: link_kinds
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->link_kinds.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->link_kinds);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->link_kinds, size)) {
      fprintf(stderr, "failed to create array for field 'link_kinds'");
      return false;
    }
    auto array_ptr = ros_message->link_kinds.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t get_serialized_size_environment_model_msgs__msg__StructuredLink(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StructuredLink__ros_msg_type * ros_message = static_cast<const _StructuredLink__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prev_ids
  {
    size_t array_size = ros_message->prev_ids.size;
    auto array_ptr = ros_message->prev_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name succ_ids
  {
    size_t array_size = ros_message->succ_ids.size;
    auto array_ptr = ros_message->succ_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name feature_point_ids
  {
    size_t array_size = ros_message->feature_point_ids.size;
    auto array_ptr = ros_message->feature_point_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_environment_model_msgs__msg__Vec3d(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit_s2e
  {
    size_t item_size = sizeof(ros_message->speed_limit_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit_e2s
  {
    size_t item_size = sizeof(ros_message->speed_limit_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coverage_status
  {
    size_t item_size = sizeof(ros_message->coverage_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num
  {
    size_t item_size = sizeof(ros_message->lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num_s2e
  {
    size_t item_size = sizeof(ros_message->lane_num_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num_e2s
  {
    size_t item_size = sizeof(ros_message->lane_num_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relationship_with_junction
  {
    size_t item_size = sizeof(ros_message->relationship_with_junction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name guidances
  {
    size_t array_size = ros_message->guidances.size;
    auto array_ptr = ros_message->guidances.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__Guidance(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_on_routing
  {
    size_t item_size = sizeof(ros_message->is_on_routing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name need_revert
  {
    size_t item_size = sizeof(ros_message->need_revert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_kinds
  {
    size_t array_size = ros_message->link_kinds.size;
    auto array_ptr = ros_message->link_kinds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StructuredLink__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_environment_model_msgs__msg__StructuredLink(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_environment_model_msgs
size_t max_serialized_size_environment_model_msgs__msg__StructuredLink(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: prev_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: succ_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: feature_point_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__FeatureIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_environment_model_msgs__msg__Vec3d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: coverage_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lane_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_num_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_num_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relationship_with_junction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: guidances
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__Guidance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_on_routing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: need_revert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: link_kinds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_model_msgs__msg__StructuredLink;
    is_plain =
      (
      offsetof(DataType, link_kinds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StructuredLink__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_environment_model_msgs__msg__StructuredLink(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StructuredLink = {
  "environment_model_msgs::msg",
  "StructuredLink",
  _StructuredLink__cdr_serialize,
  _StructuredLink__cdr_deserialize,
  _StructuredLink__get_serialized_size,
  _StructuredLink__max_serialized_size
};

static rosidl_message_type_support_t _StructuredLink__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StructuredLink,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, environment_model_msgs, msg, StructuredLink)() {
  return &_StructuredLink__type_support;
}

#if defined(__cplusplus)
}
#endif
