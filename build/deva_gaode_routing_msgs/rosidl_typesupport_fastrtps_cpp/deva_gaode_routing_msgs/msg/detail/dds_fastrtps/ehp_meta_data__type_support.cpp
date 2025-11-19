// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::EhpMetaData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: meta_country_code
  cdr << ros_message.meta_country_code;
  // Member: meta_map_provider
  cdr << ros_message.meta_map_provider;
  // Member: meta_msg_type
  cdr << ros_message.meta_msg_type;
  // Member: meta_hw_ver
  cdr << ros_message.meta_hw_ver;
  // Member: meta_prot_ver_minor_sub
  cdr << ros_message.meta_prot_ver_minor_sub;
  // Member: meta_prot_ver_major
  cdr << ros_message.meta_prot_ver_major;
  // Member: meta_cyc_cnt
  cdr << ros_message.meta_cyc_cnt;
  // Member: meta_region_code
  cdr << ros_message.meta_region_code;
  // Member: meta_drv_side
  cdr << ros_message.meta_drv_side;
  // Member: meta_map_ver_year
  cdr << ros_message.meta_map_ver_year;
  // Member: meta_map_ver_qtr
  cdr << ros_message.meta_map_ver_qtr;
  // Member: meta_prot_ver_minor
  cdr << ros_message.meta_prot_ver_minor;
  // Member: meta_spd_units
  cdr << ros_message.meta_spd_units;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::EhpMetaData & ros_message)
{
  // Member: meta_country_code
  cdr >> ros_message.meta_country_code;

  // Member: meta_map_provider
  cdr >> ros_message.meta_map_provider;

  // Member: meta_msg_type
  cdr >> ros_message.meta_msg_type;

  // Member: meta_hw_ver
  cdr >> ros_message.meta_hw_ver;

  // Member: meta_prot_ver_minor_sub
  cdr >> ros_message.meta_prot_ver_minor_sub;

  // Member: meta_prot_ver_major
  cdr >> ros_message.meta_prot_ver_major;

  // Member: meta_cyc_cnt
  cdr >> ros_message.meta_cyc_cnt;

  // Member: meta_region_code
  cdr >> ros_message.meta_region_code;

  // Member: meta_drv_side
  cdr >> ros_message.meta_drv_side;

  // Member: meta_map_ver_year
  cdr >> ros_message.meta_map_ver_year;

  // Member: meta_map_ver_qtr
  cdr >> ros_message.meta_map_ver_qtr;

  // Member: meta_prot_ver_minor
  cdr >> ros_message.meta_prot_ver_minor;

  // Member: meta_spd_units
  cdr >> ros_message.meta_spd_units;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::EhpMetaData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: meta_country_code
  {
    size_t item_size = sizeof(ros_message.meta_country_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_map_provider
  {
    size_t item_size = sizeof(ros_message.meta_map_provider);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_msg_type
  {
    size_t item_size = sizeof(ros_message.meta_msg_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_hw_ver
  {
    size_t item_size = sizeof(ros_message.meta_hw_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_prot_ver_minor_sub
  {
    size_t item_size = sizeof(ros_message.meta_prot_ver_minor_sub);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_prot_ver_major
  {
    size_t item_size = sizeof(ros_message.meta_prot_ver_major);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_cyc_cnt
  {
    size_t item_size = sizeof(ros_message.meta_cyc_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_region_code
  {
    size_t item_size = sizeof(ros_message.meta_region_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_drv_side
  {
    size_t item_size = sizeof(ros_message.meta_drv_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_map_ver_year
  {
    size_t item_size = sizeof(ros_message.meta_map_ver_year);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_map_ver_qtr
  {
    size_t item_size = sizeof(ros_message.meta_map_ver_qtr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_prot_ver_minor
  {
    size_t item_size = sizeof(ros_message.meta_prot_ver_minor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: meta_spd_units
  {
    size_t item_size = sizeof(ros_message.meta_spd_units);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_EhpMetaData(
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


  // Member: meta_country_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: meta_map_provider
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_msg_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_hw_ver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: meta_prot_ver_minor_sub
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_prot_ver_major
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_cyc_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_region_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: meta_drv_side
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_map_ver_year
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_map_ver_qtr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_prot_ver_minor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: meta_spd_units
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
    using DataType = deva_gaode_routing_msgs::msg::EhpMetaData;
    is_plain =
      (
      offsetof(DataType, meta_spd_units) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EhpMetaData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpMetaData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EhpMetaData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::EhpMetaData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EhpMetaData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::EhpMetaData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EhpMetaData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EhpMetaData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EhpMetaData__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "EhpMetaData",
  _EhpMetaData__cdr_serialize,
  _EhpMetaData__cdr_deserialize,
  _EhpMetaData__get_serialized_size,
  _EhpMetaData__max_serialized_size
};

static rosidl_message_type_support_t _EhpMetaData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EhpMetaData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpMetaData>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpMetaData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, EhpMetaData)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_EhpMetaData__handle;
}

#ifdef __cplusplus
}
#endif
