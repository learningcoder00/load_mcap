// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/energy_consume_proto__functions.h"  // m_energy_consume
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"  // m_via_info
#include "rosidl_runtime_c/primitives_sequence.h"  // m_link_consume, m_link_distance
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // m_link_consume, m_link_distance

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyConsumeProto)();
size_t get_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto)();


using _ElecPathInfoProto__ros_msg_type = deva_navi_msgs__msg__ElecPathInfoProto;

static bool _ElecPathInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ElecPathInfoProto__ros_msg_type * ros_message = static_cast<const _ElecPathInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: m_is_elec_route
  {
    cdr << (ros_message->m_is_elec_route ? true : false);
  }

  // Field name: m_link_consume_size_word
  {
    cdr << (ros_message->m_link_consume_size_word ? true : false);
  }

  // Field name: m_traffic_info
  {
    cdr << ros_message->m_traffic_info;
  }

  // Field name: m_energy_unit
  {
    cdr << ros_message->m_energy_unit;
  }

  // Field name: m_path_flag
  {
    cdr << ros_message->m_path_flag;
  }

  // Field name: m_energy_sum
  {
    cdr << ros_message->m_energy_sum;
  }

  // Field name: m_link_num
  {
    cdr << ros_message->m_link_num;
  }

  // Field name: m_link_consume
  {
    size_t size = ros_message->m_link_consume.size;
    auto array_ptr = ros_message->m_link_consume.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: m_link_distance
  {
    size_t size = ros_message->m_link_distance.size;
    auto array_ptr = ros_message->m_link_distance.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: m_via_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto
      )()->data);
    size_t size = ros_message->m_via_info.size;
    auto array_ptr = ros_message->m_via_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: m_energy_consume
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyConsumeProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->m_energy_consume, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ElecPathInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ElecPathInfoProto__ros_msg_type * ros_message = static_cast<_ElecPathInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: m_is_elec_route
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->m_is_elec_route = tmp ? true : false;
  }

  // Field name: m_link_consume_size_word
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->m_link_consume_size_word = tmp ? true : false;
  }

  // Field name: m_traffic_info
  {
    cdr >> ros_message->m_traffic_info;
  }

  // Field name: m_energy_unit
  {
    cdr >> ros_message->m_energy_unit;
  }

  // Field name: m_path_flag
  {
    cdr >> ros_message->m_path_flag;
  }

  // Field name: m_energy_sum
  {
    cdr >> ros_message->m_energy_sum;
  }

  // Field name: m_link_num
  {
    cdr >> ros_message->m_link_num;
  }

  // Field name: m_link_consume
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

    if (ros_message->m_link_consume.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->m_link_consume);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->m_link_consume, size)) {
      fprintf(stderr, "failed to create array for field 'm_link_consume'");
      return false;
    }
    auto array_ptr = ros_message->m_link_consume.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: m_link_distance
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

    if (ros_message->m_link_distance.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->m_link_distance);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->m_link_distance, size)) {
      fprintf(stderr, "failed to create array for field 'm_link_distance'");
      return false;
    }
    auto array_ptr = ros_message->m_link_distance.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: m_via_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto
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

    if (ros_message->m_via_info.data) {
      deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(&ros_message->m_via_info);
    }
    if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&ros_message->m_via_info, size)) {
      fprintf(stderr, "failed to create array for field 'm_via_info'");
      return false;
    }
    auto array_ptr = ros_message->m_via_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: m_energy_consume
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, EnergyConsumeProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->m_energy_consume))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ElecPathInfoProto__ros_msg_type * ros_message = static_cast<const _ElecPathInfoProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name m_is_elec_route
  {
    size_t item_size = sizeof(ros_message->m_is_elec_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_link_consume_size_word
  {
    size_t item_size = sizeof(ros_message->m_link_consume_size_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_traffic_info
  {
    size_t item_size = sizeof(ros_message->m_traffic_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_energy_unit
  {
    size_t item_size = sizeof(ros_message->m_energy_unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_path_flag
  {
    size_t item_size = sizeof(ros_message->m_path_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_energy_sum
  {
    size_t item_size = sizeof(ros_message->m_energy_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_link_num
  {
    size_t item_size = sizeof(ros_message->m_link_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_link_consume
  {
    size_t array_size = ros_message->m_link_consume.size;
    auto array_ptr = ros_message->m_link_consume.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_link_distance
  {
    size_t array_size = ros_message->m_link_distance.size;
    auto array_ptr = ros_message->m_link_distance.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name m_via_info
  {
    size_t array_size = ros_message->m_via_info.size;
    auto array_ptr = ros_message->m_via_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name m_energy_consume

  current_alignment += get_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
    &(ros_message->m_energy_consume), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ElecPathInfoProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
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

  // member: m_is_elec_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: m_link_consume_size_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: m_traffic_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m_energy_unit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m_path_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m_energy_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m_link_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: m_link_consume
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
  // member: m_link_distance
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
  // member: m_via_info
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
        max_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: m_energy_consume
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__EnergyConsumeProto(
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
    using DataType = deva_navi_msgs__msg__ElecPathInfoProto;
    is_plain =
      (
      offsetof(DataType, m_energy_consume) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ElecPathInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ElecPathInfoProto = {
  "deva_navi_msgs::msg",
  "ElecPathInfoProto",
  _ElecPathInfoProto__cdr_serialize,
  _ElecPathInfoProto__cdr_deserialize,
  _ElecPathInfoProto__get_serialized_size,
  _ElecPathInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _ElecPathInfoProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ElecPathInfoProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ElecPathInfoProto)() {
  return &_ElecPathInfoProto__type_support;
}

#if defined(__cplusplus)
}
#endif
