// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/WebLane.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_lane__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"  // callback_point
#include "rosidl_runtime_c/primitives_sequence.h"  // actual_exten_turn, actual_turn, actual_turn_type, exten_turn, navi_turn, navi_turn_type, optimal_turn
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // actual_exten_turn, actual_turn, actual_turn_type, exten_turn, navi_turn, navi_turn_type, optimal_turn
#include "rosidl_runtime_c/string.h"  // md5
#include "rosidl_runtime_c/string_functions.h"  // md5

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebPoint)();


using _WebLane__ros_msg_type = deva_gaode_routing_msgs__msg__WebLane;

static bool _WebLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WebLane__ros_msg_type * ros_message = static_cast<const _WebLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_num
  {
    cdr << ros_message->lane_num;
  }

  // Field name: actual_turn
  {
    size_t size = ros_message->actual_turn.size;
    auto array_ptr = ros_message->actual_turn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: navi_turn
  {
    size_t size = ros_message->navi_turn.size;
    auto array_ptr = ros_message->navi_turn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: optimal_turn
  {
    size_t size = ros_message->optimal_turn.size;
    auto array_ptr = ros_message->optimal_turn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actual_exten_turn
  {
    size_t size = ros_message->actual_exten_turn.size;
    auto array_ptr = ros_message->actual_exten_turn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: exten_turn
  {
    size_t size = ros_message->exten_turn.size;
    auto array_ptr = ros_message->exten_turn.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actual_turn_type
  {
    size_t size = ros_message->actual_turn_type.size;
    auto array_ptr = ros_message->actual_turn_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: navi_turn_type
  {
    size_t size = ros_message->navi_turn_type.size;
    auto array_ptr = ros_message->navi_turn_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: road_idx
  {
    cdr << ros_message->road_idx;
  }

  // Field name: step_idx
  {
    cdr << ros_message->step_idx;
  }

  // Field name: md5
  {
    const rosidl_runtime_c__String * str = &ros_message->md5;
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

  // Field name: callback_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->callback_point, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WebLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WebLane__ros_msg_type * ros_message = static_cast<_WebLane__ros_msg_type *>(untyped_ros_message);
  // Field name: lane_num
  {
    cdr >> ros_message->lane_num;
  }

  // Field name: actual_turn
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

    if (ros_message->actual_turn.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->actual_turn);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->actual_turn, size)) {
      fprintf(stderr, "failed to create array for field 'actual_turn'");
      return false;
    }
    auto array_ptr = ros_message->actual_turn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: navi_turn
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

    if (ros_message->navi_turn.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->navi_turn);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->navi_turn, size)) {
      fprintf(stderr, "failed to create array for field 'navi_turn'");
      return false;
    }
    auto array_ptr = ros_message->navi_turn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: optimal_turn
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

    if (ros_message->optimal_turn.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->optimal_turn);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->optimal_turn, size)) {
      fprintf(stderr, "failed to create array for field 'optimal_turn'");
      return false;
    }
    auto array_ptr = ros_message->optimal_turn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actual_exten_turn
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

    if (ros_message->actual_exten_turn.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->actual_exten_turn);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->actual_exten_turn, size)) {
      fprintf(stderr, "failed to create array for field 'actual_exten_turn'");
      return false;
    }
    auto array_ptr = ros_message->actual_exten_turn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: exten_turn
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

    if (ros_message->exten_turn.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->exten_turn);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->exten_turn, size)) {
      fprintf(stderr, "failed to create array for field 'exten_turn'");
      return false;
    }
    auto array_ptr = ros_message->exten_turn.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actual_turn_type
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

    if (ros_message->actual_turn_type.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->actual_turn_type);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->actual_turn_type, size)) {
      fprintf(stderr, "failed to create array for field 'actual_turn_type'");
      return false;
    }
    auto array_ptr = ros_message->actual_turn_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: navi_turn_type
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

    if (ros_message->navi_turn_type.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->navi_turn_type);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->navi_turn_type, size)) {
      fprintf(stderr, "failed to create array for field 'navi_turn_type'");
      return false;
    }
    auto array_ptr = ros_message->navi_turn_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: road_idx
  {
    cdr >> ros_message->road_idx;
  }

  // Field name: step_idx
  {
    cdr >> ros_message->step_idx;
  }

  // Field name: md5
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->md5.data) {
      rosidl_runtime_c__String__init(&ros_message->md5);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->md5,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'md5'\n");
      return false;
    }
  }

  // Field name: callback_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->callback_point))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WebLane__ros_msg_type * ros_message = static_cast<const _WebLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lane_num
  {
    size_t item_size = sizeof(ros_message->lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_turn
  {
    size_t array_size = ros_message->actual_turn.size;
    auto array_ptr = ros_message->actual_turn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navi_turn
  {
    size_t array_size = ros_message->navi_turn.size;
    auto array_ptr = ros_message->navi_turn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimal_turn
  {
    size_t array_size = ros_message->optimal_turn.size;
    auto array_ptr = ros_message->optimal_turn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_exten_turn
  {
    size_t array_size = ros_message->actual_exten_turn.size;
    auto array_ptr = ros_message->actual_exten_turn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exten_turn
  {
    size_t array_size = ros_message->exten_turn.size;
    auto array_ptr = ros_message->exten_turn.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actual_turn_type
  {
    size_t array_size = ros_message->actual_turn_type.size;
    auto array_ptr = ros_message->actual_turn_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navi_turn_type
  {
    size_t array_size = ros_message->navi_turn_type.size;
    auto array_ptr = ros_message->navi_turn_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_idx
  {
    size_t item_size = sizeof(ros_message->road_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_idx
  {
    size_t item_size = sizeof(ros_message->step_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name md5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->md5.size + 1);
  // field.name callback_point

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__WebPoint(
    &(ros_message->callback_point), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WebLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
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

  // member: lane_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actual_turn
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
  // member: navi_turn
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
  // member: optimal_turn
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
  // member: actual_exten_turn
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
  // member: exten_turn
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
  // member: actual_turn_type
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
  // member: navi_turn_type
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
  // member: road_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: step_idx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: md5
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
  // member: callback_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__WebPoint(
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
    using DataType = deva_gaode_routing_msgs__msg__WebLane;
    is_plain =
      (
      offsetof(DataType, callback_point) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WebLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__WebLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WebLane = {
  "deva_gaode_routing_msgs::msg",
  "WebLane",
  _WebLane__cdr_serialize,
  _WebLane__cdr_deserialize,
  _WebLane__get_serialized_size,
  _WebLane__max_serialized_size
};

static rosidl_message_type_support_t _WebLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WebLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, WebLane)() {
  return &_WebLane__type_support;
}

#if defined(__cplusplus)
}
#endif
