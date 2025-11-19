// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/ReferenceLine.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/reference_line__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/reference_line__struct.h"
#include "deva_planning_msgs2/msg/detail/reference_line__functions.h"
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

#include "nav_msgs/msg/detail/path__functions.h"  // merge_point, original_merge_point, reference_line
#include "rosidl_runtime_c/string.h"  // cipv_ids, cutin_cipv_ids, nearest_cipv_ids
#include "rosidl_runtime_c/string_functions.h"  // cipv_ids, cutin_cipv_ids, nearest_cipv_ids

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
size_t get_serialized_size_nav_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
size_t max_serialized_size_nav_msgs__msg__Path(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path)();


using _ReferenceLine__ros_msg_type = deva_planning_msgs2__msg__ReferenceLine;

static bool _ReferenceLine__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReferenceLine__ros_msg_type * ros_message = static_cast<const _ReferenceLine__ros_msg_type *>(untyped_ros_message);
  // Field name: reference_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reference_line, cdr))
    {
      return false;
    }
  }

  // Field name: line_id
  {
    cdr << ros_message->line_id;
  }

  // Field name: original_merge_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->original_merge_point, cdr))
    {
      return false;
    }
  }

  // Field name: merge_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->merge_point, cdr))
    {
      return false;
    }
  }

  // Field name: reference_line_type
  {
    cdr << ros_message->reference_line_type;
  }

  // Field name: line_is_model
  {
    cdr << (ros_message->line_is_model ? true : false);
  }

  // Field name: line_is_virtual
  {
    cdr << (ros_message->line_is_virtual ? true : false);
  }

  // Field name: left_line_nums
  {
    cdr << ros_message->left_line_nums;
  }

  // Field name: right_line_nums
  {
    cdr << ros_message->right_line_nums;
  }

  // Field name: cipv_ids
  {
    size_t size = ros_message->cipv_ids.size;
    auto array_ptr = ros_message->cipv_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: cutin_cipv_ids
  {
    size_t size = ros_message->cutin_cipv_ids.size;
    auto array_ptr = ros_message->cutin_cipv_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: nearest_cipv_ids
  {
    size_t size = ros_message->nearest_cipv_ids.size;
    auto array_ptr = ros_message->nearest_cipv_ids.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: navi_score
  {
    cdr << ros_message->navi_score;
  }

  // Field name: effic_score
  {
    cdr << ros_message->effic_score;
  }

  // Field name: turn_scenario
  {
    cdr << ros_message->turn_scenario;
  }

  return true;
}

static bool _ReferenceLine__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReferenceLine__ros_msg_type * ros_message = static_cast<_ReferenceLine__ros_msg_type *>(untyped_ros_message);
  // Field name: reference_line
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reference_line))
    {
      return false;
    }
  }

  // Field name: line_id
  {
    cdr >> ros_message->line_id;
  }

  // Field name: original_merge_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->original_merge_point))
    {
      return false;
    }
  }

  // Field name: merge_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Path
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->merge_point))
    {
      return false;
    }
  }

  // Field name: reference_line_type
  {
    cdr >> ros_message->reference_line_type;
  }

  // Field name: line_is_model
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->line_is_model = tmp ? true : false;
  }

  // Field name: line_is_virtual
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->line_is_virtual = tmp ? true : false;
  }

  // Field name: left_line_nums
  {
    cdr >> ros_message->left_line_nums;
  }

  // Field name: right_line_nums
  {
    cdr >> ros_message->right_line_nums;
  }

  // Field name: cipv_ids
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

    if (ros_message->cipv_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->cipv_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->cipv_ids, size)) {
      fprintf(stderr, "failed to create array for field 'cipv_ids'");
      return false;
    }
    auto array_ptr = ros_message->cipv_ids.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'cipv_ids'\n");
        return false;
      }
    }
  }

  // Field name: cutin_cipv_ids
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

    if (ros_message->cutin_cipv_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->cutin_cipv_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->cutin_cipv_ids, size)) {
      fprintf(stderr, "failed to create array for field 'cutin_cipv_ids'");
      return false;
    }
    auto array_ptr = ros_message->cutin_cipv_ids.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'cutin_cipv_ids'\n");
        return false;
      }
    }
  }

  // Field name: nearest_cipv_ids
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

    if (ros_message->nearest_cipv_ids.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->nearest_cipv_ids);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->nearest_cipv_ids, size)) {
      fprintf(stderr, "failed to create array for field 'nearest_cipv_ids'");
      return false;
    }
    auto array_ptr = ros_message->nearest_cipv_ids.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'nearest_cipv_ids'\n");
        return false;
      }
    }
  }

  // Field name: navi_score
  {
    cdr >> ros_message->navi_score;
  }

  // Field name: effic_score
  {
    cdr >> ros_message->effic_score;
  }

  // Field name: turn_scenario
  {
    cdr >> ros_message->turn_scenario;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t get_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReferenceLine__ros_msg_type * ros_message = static_cast<const _ReferenceLine__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reference_line

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->reference_line), current_alignment);
  // field.name line_id
  {
    size_t item_size = sizeof(ros_message->line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name original_merge_point

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->original_merge_point), current_alignment);
  // field.name merge_point

  current_alignment += get_serialized_size_nav_msgs__msg__Path(
    &(ros_message->merge_point), current_alignment);
  // field.name reference_line_type
  {
    size_t item_size = sizeof(ros_message->reference_line_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name line_is_model
  {
    size_t item_size = sizeof(ros_message->line_is_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name line_is_virtual
  {
    size_t item_size = sizeof(ros_message->line_is_virtual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_line_nums
  {
    size_t item_size = sizeof(ros_message->left_line_nums);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_line_nums
  {
    size_t item_size = sizeof(ros_message->right_line_nums);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cipv_ids
  {
    size_t array_size = ros_message->cipv_ids.size;
    auto array_ptr = ros_message->cipv_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name cutin_cipv_ids
  {
    size_t array_size = ros_message->cutin_cipv_ids.size;
    auto array_ptr = ros_message->cutin_cipv_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name nearest_cipv_ids
  {
    size_t array_size = ros_message->nearest_cipv_ids.size;
    auto array_ptr = ros_message->nearest_cipv_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name navi_score
  {
    size_t item_size = sizeof(ros_message->navi_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name effic_score
  {
    size_t item_size = sizeof(ros_message->effic_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_scenario
  {
    size_t item_size = sizeof(ros_message->turn_scenario);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReferenceLine__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
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

  // member: reference_line
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Path(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: line_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: original_merge_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Path(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: merge_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Path(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: reference_line_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: line_is_model
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: line_is_virtual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_line_nums
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_line_nums
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cipv_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: cutin_cipv_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: nearest_cipv_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: navi_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: effic_score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: turn_scenario
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_planning_msgs2__msg__ReferenceLine;
    is_plain =
      (
      offsetof(DataType, turn_scenario) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ReferenceLine__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__ReferenceLine(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReferenceLine = {
  "deva_planning_msgs2::msg",
  "ReferenceLine",
  _ReferenceLine__cdr_serialize,
  _ReferenceLine__cdr_deserialize,
  _ReferenceLine__get_serialized_size,
  _ReferenceLine__max_serialized_size
};

static rosidl_message_type_support_t _ReferenceLine__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReferenceLine,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, ReferenceLine)() {
  return &_ReferenceLine__type_support;
}

#if defined(__cplusplus)
}
#endif
