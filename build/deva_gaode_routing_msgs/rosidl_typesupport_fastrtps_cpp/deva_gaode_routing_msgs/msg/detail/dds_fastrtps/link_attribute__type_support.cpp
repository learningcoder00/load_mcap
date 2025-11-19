// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.hpp"

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
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::LinkIDType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::LinkIDType &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::LinkIDType &,
  size_t current_alignment);
size_t
max_serialized_size_LinkIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::LinkAttribute & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: link_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.link_id,
    cdr);
  // Member: length
  cdr << ros_message.length;
  // Member: link_direction
  cdr << ros_message.link_direction;
  // Member: lane_num_sum
  cdr << ros_message.lane_num_sum;
  // Member: lane_num_s2e
  cdr << ros_message.lane_num_s2e;
  // Member: lane_num_e2s
  cdr << ros_message.lane_num_e2s;
  // Member: speed_limit_s2e
  cdr << ros_message.speed_limit_s2e;
  // Member: speed_limit_e2s
  cdr << ros_message.speed_limit_e2s;
  // Member: road_class
  cdr << ros_message.road_class;
  // Member: toll_type
  cdr << ros_message.toll_type;
  // Member: road_kinds
  {
    cdr << ros_message.road_kinds;
  }
  // Member: coverage_status
  cdr << ros_message.coverage_status;
  // Member: function_class
  cdr << ros_message.function_class;
  // Member: construction_type
  cdr << ros_message.construction_type;
  // Member: condition_type
  cdr << ros_message.condition_type;
  // Member: speed_class
  cdr << ros_message.speed_class;
  // Member: admin_code
  cdr << ros_message.admin_code;
  // Member: vehicle_types
  {
    cdr << ros_message.vehicle_types;
  }
  // Member: compacity
  cdr << ros_message.compacity;
  // Member: is_special
  cdr << (ros_message.is_special ? true : false);
  // Member: is_in_city
  cdr << (ros_message.is_in_city ? true : false);
  // Member: is_cross_tile
  cdr << (ros_message.is_cross_tile ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::LinkAttribute & ros_message)
{
  // Member: link_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.link_id);

  // Member: length
  cdr >> ros_message.length;

  // Member: link_direction
  cdr >> ros_message.link_direction;

  // Member: lane_num_sum
  cdr >> ros_message.lane_num_sum;

  // Member: lane_num_s2e
  cdr >> ros_message.lane_num_s2e;

  // Member: lane_num_e2s
  cdr >> ros_message.lane_num_e2s;

  // Member: speed_limit_s2e
  cdr >> ros_message.speed_limit_s2e;

  // Member: speed_limit_e2s
  cdr >> ros_message.speed_limit_e2s;

  // Member: road_class
  cdr >> ros_message.road_class;

  // Member: toll_type
  cdr >> ros_message.toll_type;

  // Member: road_kinds
  {
    cdr >> ros_message.road_kinds;
  }

  // Member: coverage_status
  cdr >> ros_message.coverage_status;

  // Member: function_class
  cdr >> ros_message.function_class;

  // Member: construction_type
  cdr >> ros_message.construction_type;

  // Member: condition_type
  cdr >> ros_message.condition_type;

  // Member: speed_class
  cdr >> ros_message.speed_class;

  // Member: admin_code
  cdr >> ros_message.admin_code;

  // Member: vehicle_types
  {
    cdr >> ros_message.vehicle_types;
  }

  // Member: compacity
  cdr >> ros_message.compacity;

  // Member: is_special
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_special = tmp ? true : false;
  }

  // Member: is_in_city
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_in_city = tmp ? true : false;
  }

  // Member: is_cross_tile
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_cross_tile = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::LinkAttribute & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: link_id

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.link_id, current_alignment);
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_direction
  {
    size_t item_size = sizeof(ros_message.link_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_sum
  {
    size_t item_size = sizeof(ros_message.lane_num_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_s2e
  {
    size_t item_size = sizeof(ros_message.lane_num_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_e2s
  {
    size_t item_size = sizeof(ros_message.lane_num_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_s2e
  {
    size_t item_size = sizeof(ros_message.speed_limit_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_e2s
  {
    size_t item_size = sizeof(ros_message.speed_limit_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_class
  {
    size_t item_size = sizeof(ros_message.road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: toll_type
  {
    size_t item_size = sizeof(ros_message.toll_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_kinds
  {
    size_t array_size = ros_message.road_kinds.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.road_kinds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coverage_status
  {
    size_t item_size = sizeof(ros_message.coverage_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: function_class
  {
    size_t item_size = sizeof(ros_message.function_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: construction_type
  {
    size_t item_size = sizeof(ros_message.construction_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_type
  {
    size_t item_size = sizeof(ros_message.condition_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_class
  {
    size_t item_size = sizeof(ros_message.speed_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: admin_code
  {
    size_t item_size = sizeof(ros_message.admin_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_types
  {
    size_t array_size = ros_message.vehicle_types.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.vehicle_types[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compacity
  {
    size_t item_size = sizeof(ros_message.compacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_special
  {
    size_t item_size = sizeof(ros_message.is_special);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_in_city
  {
    size_t item_size = sizeof(ros_message.is_in_city);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_cross_tile
  {
    size_t item_size = sizeof(ros_message.is_cross_tile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_LinkAttribute(
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


  // Member: link_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LinkIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_limit_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_limit_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: toll_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: road_kinds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: coverage_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: function_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: construction_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: admin_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vehicle_types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: compacity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_special
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_in_city
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_cross_tile
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
    using DataType = deva_gaode_routing_msgs::msg::LinkAttribute;
    is_plain =
      (
      offsetof(DataType, is_cross_tile) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LinkAttribute__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::LinkAttribute *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LinkAttribute__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::LinkAttribute *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LinkAttribute__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::LinkAttribute *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LinkAttribute__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LinkAttribute(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LinkAttribute__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "LinkAttribute",
  _LinkAttribute__cdr_serialize,
  _LinkAttribute__cdr_deserialize,
  _LinkAttribute__get_serialized_size,
  _LinkAttribute__max_serialized_size
};

static rosidl_message_type_support_t _LinkAttribute__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LinkAttribute__callbacks,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkAttribute>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_LinkAttribute__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, LinkAttribute)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_LinkAttribute__handle;
}

#ifdef __cplusplus
}
#endif
