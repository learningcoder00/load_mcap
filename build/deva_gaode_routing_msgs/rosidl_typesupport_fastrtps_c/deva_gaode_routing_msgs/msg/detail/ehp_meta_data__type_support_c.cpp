// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__functions.h"
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


// forward declare type support functions


using _EhpMetaData__ros_msg_type = deva_gaode_routing_msgs__msg__EhpMetaData;

static bool _EhpMetaData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EhpMetaData__ros_msg_type * ros_message = static_cast<const _EhpMetaData__ros_msg_type *>(untyped_ros_message);
  // Field name: meta_country_code
  {
    cdr << ros_message->meta_country_code;
  }

  // Field name: meta_map_provider
  {
    cdr << ros_message->meta_map_provider;
  }

  // Field name: meta_msg_type
  {
    cdr << ros_message->meta_msg_type;
  }

  // Field name: meta_hw_ver
  {
    cdr << ros_message->meta_hw_ver;
  }

  // Field name: meta_prot_ver_minor_sub
  {
    cdr << ros_message->meta_prot_ver_minor_sub;
  }

  // Field name: meta_prot_ver_major
  {
    cdr << ros_message->meta_prot_ver_major;
  }

  // Field name: meta_cyc_cnt
  {
    cdr << ros_message->meta_cyc_cnt;
  }

  // Field name: meta_region_code
  {
    cdr << ros_message->meta_region_code;
  }

  // Field name: meta_drv_side
  {
    cdr << ros_message->meta_drv_side;
  }

  // Field name: meta_map_ver_year
  {
    cdr << ros_message->meta_map_ver_year;
  }

  // Field name: meta_map_ver_qtr
  {
    cdr << ros_message->meta_map_ver_qtr;
  }

  // Field name: meta_prot_ver_minor
  {
    cdr << ros_message->meta_prot_ver_minor;
  }

  // Field name: meta_spd_units
  {
    cdr << ros_message->meta_spd_units;
  }

  return true;
}

static bool _EhpMetaData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EhpMetaData__ros_msg_type * ros_message = static_cast<_EhpMetaData__ros_msg_type *>(untyped_ros_message);
  // Field name: meta_country_code
  {
    cdr >> ros_message->meta_country_code;
  }

  // Field name: meta_map_provider
  {
    cdr >> ros_message->meta_map_provider;
  }

  // Field name: meta_msg_type
  {
    cdr >> ros_message->meta_msg_type;
  }

  // Field name: meta_hw_ver
  {
    cdr >> ros_message->meta_hw_ver;
  }

  // Field name: meta_prot_ver_minor_sub
  {
    cdr >> ros_message->meta_prot_ver_minor_sub;
  }

  // Field name: meta_prot_ver_major
  {
    cdr >> ros_message->meta_prot_ver_major;
  }

  // Field name: meta_cyc_cnt
  {
    cdr >> ros_message->meta_cyc_cnt;
  }

  // Field name: meta_region_code
  {
    cdr >> ros_message->meta_region_code;
  }

  // Field name: meta_drv_side
  {
    cdr >> ros_message->meta_drv_side;
  }

  // Field name: meta_map_ver_year
  {
    cdr >> ros_message->meta_map_ver_year;
  }

  // Field name: meta_map_ver_qtr
  {
    cdr >> ros_message->meta_map_ver_qtr;
  }

  // Field name: meta_prot_ver_minor
  {
    cdr >> ros_message->meta_prot_ver_minor;
  }

  // Field name: meta_spd_units
  {
    cdr >> ros_message->meta_spd_units;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EhpMetaData__ros_msg_type * ros_message = static_cast<const _EhpMetaData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name meta_country_code
  {
    size_t item_size = sizeof(ros_message->meta_country_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_map_provider
  {
    size_t item_size = sizeof(ros_message->meta_map_provider);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_msg_type
  {
    size_t item_size = sizeof(ros_message->meta_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_hw_ver
  {
    size_t item_size = sizeof(ros_message->meta_hw_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_prot_ver_minor_sub
  {
    size_t item_size = sizeof(ros_message->meta_prot_ver_minor_sub);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_prot_ver_major
  {
    size_t item_size = sizeof(ros_message->meta_prot_ver_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_cyc_cnt
  {
    size_t item_size = sizeof(ros_message->meta_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_region_code
  {
    size_t item_size = sizeof(ros_message->meta_region_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_drv_side
  {
    size_t item_size = sizeof(ros_message->meta_drv_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_map_ver_year
  {
    size_t item_size = sizeof(ros_message->meta_map_ver_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_map_ver_qtr
  {
    size_t item_size = sizeof(ros_message->meta_map_ver_qtr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_prot_ver_minor
  {
    size_t item_size = sizeof(ros_message->meta_prot_ver_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name meta_spd_units
  {
    size_t item_size = sizeof(ros_message->meta_spd_units);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EhpMetaData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
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

  // member: meta_country_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: meta_map_provider
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_hw_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: meta_prot_ver_minor_sub
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_prot_ver_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_region_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: meta_drv_side
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_map_ver_year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_map_ver_qtr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_prot_ver_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: meta_spd_units
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
    using DataType = deva_gaode_routing_msgs__msg__EhpMetaData;
    is_plain =
      (
      offsetof(DataType, meta_spd_units) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EhpMetaData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EhpMetaData = {
  "deva_gaode_routing_msgs::msg",
  "EhpMetaData",
  _EhpMetaData__cdr_serialize,
  _EhpMetaData__cdr_deserialize,
  _EhpMetaData__get_serialized_size,
  _EhpMetaData__max_serialized_size
};

static rosidl_message_type_support_t _EhpMetaData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EhpMetaData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpMetaData)() {
  return &_EhpMetaData__type_support;
}

#if defined(__cplusplus)
}
#endif
