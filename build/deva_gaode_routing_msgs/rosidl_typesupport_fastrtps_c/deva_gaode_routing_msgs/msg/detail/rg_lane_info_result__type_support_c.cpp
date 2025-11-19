// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__functions.h"  // additional_lane_info
#include "deva_gaode_routing_msgs/msg/detail/route_pos__functions.h"  // pos
#include "rosidl_runtime_c/primitives_sequence.h"  // arrow, flag, lane_info_raw_link_ids, recommend, rg_lane_result_property
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // arrow, flag, lane_info_raw_link_ids, recommend, rg_lane_result_property
#include "rosidl_runtime_c/string.h"  // active_time
#include "rosidl_runtime_c/string_functions.h"  // active_time

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__RoutePos(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__RoutePos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RoutePos)();


using _RGLaneInfoResult__ros_msg_type = deva_gaode_routing_msgs__msg__RGLaneInfoResult;

static bool _RGLaneInfoResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RGLaneInfoResult__ros_msg_type * ros_message = static_cast<const _RGLaneInfoResult__ros_msg_type *>(untyped_ros_message);
  // Field name: raw_link_id
  {
    cdr << ros_message->raw_link_id;
  }

  // Field name: arrow
  {
    size_t size = ros_message->arrow.size;
    auto array_ptr = ros_message->arrow.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flag
  {
    size_t size = ros_message->flag.size;
    auto array_ptr = ros_message->flag.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rg_lane_result_property
  {
    size_t size = ros_message->rg_lane_result_property.size;
    auto array_ptr = ros_message->rg_lane_result_property.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: recommend
  {
    size_t size = ros_message->recommend.size;
    auto array_ptr = ros_message->recommend.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: active_time
  {
    const rosidl_runtime_c__String * str = &ros_message->active_time;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: additional_lane_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo
      )()->data);
    size_t size = ros_message->additional_lane_info.size;
    auto array_ptr = ros_message->additional_lane_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lane_info_raw_link_ids
  {
    size_t size = ros_message->lane_info_raw_link_ids.size;
    auto array_ptr = ros_message->lane_info_raw_link_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RoutePos
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pos, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RGLaneInfoResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RGLaneInfoResult__ros_msg_type * ros_message = static_cast<_RGLaneInfoResult__ros_msg_type *>(untyped_ros_message);
  // Field name: raw_link_id
  {
    cdr >> ros_message->raw_link_id;
  }

  // Field name: arrow
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

    if (ros_message->arrow.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->arrow);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->arrow, size)) {
      fprintf(stderr, "failed to create array for field 'arrow'");
      return false;
    }
    auto array_ptr = ros_message->arrow.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flag
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

    if (ros_message->flag.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->flag);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->flag, size)) {
      fprintf(stderr, "failed to create array for field 'flag'");
      return false;
    }
    auto array_ptr = ros_message->flag.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rg_lane_result_property
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

    if (ros_message->rg_lane_result_property.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->rg_lane_result_property);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->rg_lane_result_property, size)) {
      fprintf(stderr, "failed to create array for field 'rg_lane_result_property'");
      return false;
    }
    auto array_ptr = ros_message->rg_lane_result_property.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: recommend
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

    if (ros_message->recommend.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->recommend);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->recommend, size)) {
      fprintf(stderr, "failed to create array for field 'recommend'");
      return false;
    }
    auto array_ptr = ros_message->recommend.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: active_time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->active_time.data) {
      rosidl_runtime_c__String__init(&ros_message->active_time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->active_time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'active_time'\n");
      return false;
    }
  }

  // Field name: additional_lane_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo
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

    if (ros_message->additional_lane_info.data) {
      deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__fini(&ros_message->additional_lane_info);
    }
    if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__init(&ros_message->additional_lane_info, size)) {
      fprintf(stderr, "failed to create array for field 'additional_lane_info'");
      return false;
    }
    auto array_ptr = ros_message->additional_lane_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lane_info_raw_link_ids
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

    if (ros_message->lane_info_raw_link_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->lane_info_raw_link_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->lane_info_raw_link_ids, size)) {
      fprintf(stderr, "failed to create array for field 'lane_info_raw_link_ids'");
      return false;
    }
    auto array_ptr = ros_message->lane_info_raw_link_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RoutePos
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pos))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__RGLaneInfoResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RGLaneInfoResult__ros_msg_type * ros_message = static_cast<const _RGLaneInfoResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name raw_link_id
  {
    size_t item_size = sizeof(ros_message->raw_link_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arrow
  {
    size_t array_size = ros_message->arrow.size;
    auto array_ptr = ros_message->arrow.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag
  {
    size_t array_size = ros_message->flag.size;
    auto array_ptr = ros_message->flag.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rg_lane_result_property
  {
    size_t array_size = ros_message->rg_lane_result_property.size;
    auto array_ptr = ros_message->rg_lane_result_property.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recommend
  {
    size_t array_size = ros_message->recommend.size;
    auto array_ptr = ros_message->recommend.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->active_time.size + 1);
  // field.name additional_lane_info
  {
    size_t array_size = ros_message->additional_lane_info.size;
    auto array_ptr = ros_message->additional_lane_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lane_info_raw_link_ids
  {
    size_t array_size = ros_message->lane_info_raw_link_ids.size;
    auto array_ptr = ros_message->lane_info_raw_link_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__RoutePos(
    &(ros_message->pos), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RGLaneInfoResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__RGLaneInfoResult(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__RGLaneInfoResult(
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

  // member: raw_link_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: arrow
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rg_lane_result_property
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: recommend
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: active_time
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: additional_lane_info
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
        max_serialized_size_deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_info_raw_link_ids
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
  // member: pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__RoutePos(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__RGLaneInfoResult;
    is_plain =
      (
      offsetof(DataType, pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RGLaneInfoResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__RGLaneInfoResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RGLaneInfoResult = {
  "deva_gaode_routing_msgs::msg",
  "RGLaneInfoResult",
  _RGLaneInfoResult__cdr_serialize,
  _RGLaneInfoResult__cdr_deserialize,
  _RGLaneInfoResult__get_serialized_size,
  _RGLaneInfoResult__max_serialized_size
};

static rosidl_message_type_support_t _RGLaneInfoResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RGLaneInfoResult,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RGLaneInfoResult)() {
  return &_RGLaneInfoResult__type_support;
}

#if defined(__cplusplus)
}
#endif
