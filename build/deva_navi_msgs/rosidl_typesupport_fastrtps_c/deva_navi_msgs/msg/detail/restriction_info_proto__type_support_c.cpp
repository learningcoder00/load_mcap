// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/restriction_info_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/restriction_info_proto__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // rule_ids, tail_nums
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // rule_ids, tail_nums
#include "rosidl_runtime_c/string.h"  // desc, tipc, title
#include "rosidl_runtime_c/string_functions.h"  // desc, tipc, title

// forward declare type support functions


using _RestrictionInfoProto__ros_msg_type = deva_navi_msgs__msg__RestrictionInfoProto;

static bool _RestrictionInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RestrictionInfoProto__ros_msg_type * ros_message = static_cast<const _RestrictionInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: title
  {
    const rosidl_runtime_c__String * str = &ros_message->title;
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

  // Field name: desc
  {
    const rosidl_runtime_c__String * str = &ros_message->desc;
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

  // Field name: tipc
  {
    const rosidl_runtime_c__String * str = &ros_message->tipc;
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

  // Field name: city_code
  {
    cdr << ros_message->city_code;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: title_type
  {
    cdr << ros_message->title_type;
  }

  // Field name: rule_ids
  {
    size_t size = ros_message->rule_ids.size;
    auto array_ptr = ros_message->rule_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tail_nums
  {
    size_t size = ros_message->tail_nums.size;
    auto array_ptr = ros_message->tail_nums.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RestrictionInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RestrictionInfoProto__ros_msg_type * ros_message = static_cast<_RestrictionInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: title
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->title.data) {
      rosidl_runtime_c__String__init(&ros_message->title);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->title,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'title'\n");
      return false;
    }
  }

  // Field name: desc
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->desc.data) {
      rosidl_runtime_c__String__init(&ros_message->desc);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->desc,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'desc'\n");
      return false;
    }
  }

  // Field name: tipc
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tipc.data) {
      rosidl_runtime_c__String__init(&ros_message->tipc);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tipc,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tipc'\n");
      return false;
    }
  }

  // Field name: city_code
  {
    cdr >> ros_message->city_code;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: title_type
  {
    cdr >> ros_message->title_type;
  }

  // Field name: rule_ids
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

    if (ros_message->rule_ids.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->rule_ids);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->rule_ids, size)) {
      fprintf(stderr, "failed to create array for field 'rule_ids'");
      return false;
    }
    auto array_ptr = ros_message->rule_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tail_nums
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

    if (ros_message->tail_nums.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->tail_nums);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->tail_nums, size)) {
      fprintf(stderr, "failed to create array for field 'tail_nums'");
      return false;
    }
    auto array_ptr = ros_message->tail_nums.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RestrictionInfoProto__ros_msg_type * ros_message = static_cast<const _RestrictionInfoProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name title
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->title.size + 1);
  // field.name desc
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->desc.size + 1);
  // field.name tipc
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tipc.size + 1);
  // field.name city_code
  {
    size_t item_size = sizeof(ros_message->city_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name title_type
  {
    size_t item_size = sizeof(ros_message->title_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rule_ids
  {
    size_t array_size = ros_message->rule_ids.size;
    auto array_ptr = ros_message->rule_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tail_nums
  {
    size_t array_size = ros_message->tail_nums.size;
    auto array_ptr = ros_message->tail_nums.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RestrictionInfoProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
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

  // member: title
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
  // member: desc
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
  // member: tipc
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
  // member: city_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: title_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rule_ids
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
  // member: tail_nums
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__RestrictionInfoProto;
    is_plain =
      (
      offsetof(DataType, tail_nums) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RestrictionInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RestrictionInfoProto = {
  "deva_navi_msgs::msg",
  "RestrictionInfoProto",
  _RestrictionInfoProto__cdr_serialize,
  _RestrictionInfoProto__cdr_deserialize,
  _RestrictionInfoProto__get_serialized_size,
  _RestrictionInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _RestrictionInfoProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RestrictionInfoProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RestrictionInfoProto)() {
  return &_RestrictionInfoProto__type_support;
}

#if defined(__cplusplus)
}
#endif
