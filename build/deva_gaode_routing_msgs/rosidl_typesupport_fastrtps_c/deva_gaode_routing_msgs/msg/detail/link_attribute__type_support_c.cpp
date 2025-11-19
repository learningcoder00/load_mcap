// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__functions.h"
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

#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"  // link_id
#include "rosidl_runtime_c/primitives_sequence.h"  // road_kinds, vehicle_types
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // road_kinds, vehicle_types

// forward declare type support functions
size_t get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType)();


using _LinkAttribute__ros_msg_type = deva_gaode_routing_msgs__msg__LinkAttribute;

static bool _LinkAttribute__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LinkAttribute__ros_msg_type * ros_message = static_cast<const _LinkAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: link_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->link_id, cdr))
    {
      return false;
    }
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: link_direction
  {
    cdr << ros_message->link_direction;
  }

  // Field name: lane_num_sum
  {
    cdr << ros_message->lane_num_sum;
  }

  // Field name: lane_num_s2e
  {
    cdr << ros_message->lane_num_s2e;
  }

  // Field name: lane_num_e2s
  {
    cdr << ros_message->lane_num_e2s;
  }

  // Field name: speed_limit_s2e
  {
    cdr << ros_message->speed_limit_s2e;
  }

  // Field name: speed_limit_e2s
  {
    cdr << ros_message->speed_limit_e2s;
  }

  // Field name: road_class
  {
    cdr << ros_message->road_class;
  }

  // Field name: toll_type
  {
    cdr << ros_message->toll_type;
  }

  // Field name: road_kinds
  {
    size_t size = ros_message->road_kinds.size;
    auto array_ptr = ros_message->road_kinds.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: coverage_status
  {
    cdr << ros_message->coverage_status;
  }

  // Field name: function_class
  {
    cdr << ros_message->function_class;
  }

  // Field name: construction_type
  {
    cdr << ros_message->construction_type;
  }

  // Field name: condition_type
  {
    cdr << ros_message->condition_type;
  }

  // Field name: speed_class
  {
    cdr << ros_message->speed_class;
  }

  // Field name: admin_code
  {
    cdr << ros_message->admin_code;
  }

  // Field name: vehicle_types
  {
    size_t size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: compacity
  {
    cdr << ros_message->compacity;
  }

  // Field name: is_special
  {
    cdr << (ros_message->is_special ? true : false);
  }

  // Field name: is_in_city
  {
    cdr << (ros_message->is_in_city ? true : false);
  }

  // Field name: is_cross_tile
  {
    cdr << (ros_message->is_cross_tile ? true : false);
  }

  return true;
}

static bool _LinkAttribute__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LinkAttribute__ros_msg_type * ros_message = static_cast<_LinkAttribute__ros_msg_type *>(untyped_ros_message);
  // Field name: link_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkIDType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->link_id))
    {
      return false;
    }
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: link_direction
  {
    cdr >> ros_message->link_direction;
  }

  // Field name: lane_num_sum
  {
    cdr >> ros_message->lane_num_sum;
  }

  // Field name: lane_num_s2e
  {
    cdr >> ros_message->lane_num_s2e;
  }

  // Field name: lane_num_e2s
  {
    cdr >> ros_message->lane_num_e2s;
  }

  // Field name: speed_limit_s2e
  {
    cdr >> ros_message->speed_limit_s2e;
  }

  // Field name: speed_limit_e2s
  {
    cdr >> ros_message->speed_limit_e2s;
  }

  // Field name: road_class
  {
    cdr >> ros_message->road_class;
  }

  // Field name: toll_type
  {
    cdr >> ros_message->toll_type;
  }

  // Field name: road_kinds
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

    if (ros_message->road_kinds.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->road_kinds);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->road_kinds, size)) {
      fprintf(stderr, "failed to create array for field 'road_kinds'");
      return false;
    }
    auto array_ptr = ros_message->road_kinds.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: coverage_status
  {
    cdr >> ros_message->coverage_status;
  }

  // Field name: function_class
  {
    cdr >> ros_message->function_class;
  }

  // Field name: construction_type
  {
    cdr >> ros_message->construction_type;
  }

  // Field name: condition_type
  {
    cdr >> ros_message->condition_type;
  }

  // Field name: speed_class
  {
    cdr >> ros_message->speed_class;
  }

  // Field name: admin_code
  {
    cdr >> ros_message->admin_code;
  }

  // Field name: vehicle_types
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

    if (ros_message->vehicle_types.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->vehicle_types);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->vehicle_types, size)) {
      fprintf(stderr, "failed to create array for field 'vehicle_types'");
      return false;
    }
    auto array_ptr = ros_message->vehicle_types.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: compacity
  {
    cdr >> ros_message->compacity;
  }

  // Field name: is_special
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_special = tmp ? true : false;
  }

  // Field name: is_in_city
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_in_city = tmp ? true : false;
  }

  // Field name: is_cross_tile
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_cross_tile = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__LinkAttribute(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LinkAttribute__ros_msg_type * ros_message = static_cast<const _LinkAttribute__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link_id

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
    &(ros_message->link_id), current_alignment);
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_direction
  {
    size_t item_size = sizeof(ros_message->link_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_num_sum
  {
    size_t item_size = sizeof(ros_message->lane_num_sum);
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
  // field.name road_class
  {
    size_t item_size = sizeof(ros_message->road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name toll_type
  {
    size_t item_size = sizeof(ros_message->toll_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_kinds
  {
    size_t array_size = ros_message->road_kinds.size;
    auto array_ptr = ros_message->road_kinds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coverage_status
  {
    size_t item_size = sizeof(ros_message->coverage_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name function_class
  {
    size_t item_size = sizeof(ros_message->function_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name construction_type
  {
    size_t item_size = sizeof(ros_message->construction_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_type
  {
    size_t item_size = sizeof(ros_message->condition_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_class
  {
    size_t item_size = sizeof(ros_message->speed_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name admin_code
  {
    size_t item_size = sizeof(ros_message->admin_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_types
  {
    size_t array_size = ros_message->vehicle_types.size;
    auto array_ptr = ros_message->vehicle_types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compacity
  {
    size_t item_size = sizeof(ros_message->compacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_special
  {
    size_t item_size = sizeof(ros_message->is_special);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_in_city
  {
    size_t item_size = sizeof(ros_message->is_in_city);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_cross_tile
  {
    size_t item_size = sizeof(ros_message->is_cross_tile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LinkAttribute__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__LinkAttribute(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__LinkAttribute(
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

  // member: link_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_num_sum
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
  // member: speed_limit_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_limit_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: toll_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_kinds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coverage_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: function_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: construction_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: admin_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: compacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_special
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_in_city
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_cross_tile
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__LinkAttribute;
    is_plain =
      (
      offsetof(DataType, is_cross_tile) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LinkAttribute__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__LinkAttribute(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LinkAttribute = {
  "deva_gaode_routing_msgs::msg",
  "LinkAttribute",
  _LinkAttribute__cdr_serialize,
  _LinkAttribute__cdr_deserialize,
  _LinkAttribute__get_serialized_size,
  _LinkAttribute__max_serialized_size
};

static rosidl_message_type_support_t _LinkAttribute__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LinkAttribute,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LinkAttribute)() {
  return &_LinkAttribute__type_support;
}

#if defined(__cplusplus)
}
#endif
