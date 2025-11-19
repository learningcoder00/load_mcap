// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_report_belt__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.hpp"

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

namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::VehicleReportBelt & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: drv_belt
  cdr << (ros_message.drv_belt ? true : false);
  // Member: pass_belt
  cdr << (ros_message.pass_belt ? true : false);
  // Member: rl_belt
  cdr << (ros_message.rl_belt ? true : false);
  // Member: rm_belt
  cdr << (ros_message.rm_belt ? true : false);
  // Member: rr_belt
  cdr << (ros_message.rr_belt ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::VehicleReportBelt & ros_message)
{
  // Member: drv_belt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.drv_belt = tmp ? true : false;
  }

  // Member: pass_belt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pass_belt = tmp ? true : false;
  }

  // Member: rl_belt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rl_belt = tmp ? true : false;
  }

  // Member: rm_belt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rm_belt = tmp ? true : false;
  }

  // Member: rr_belt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rr_belt = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::VehicleReportBelt & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: drv_belt
  {
    size_t item_size = sizeof(ros_message.drv_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pass_belt
  {
    size_t item_size = sizeof(ros_message.pass_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rl_belt
  {
    size_t item_size = sizeof(ros_message.rl_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rm_belt
  {
    size_t item_size = sizeof(ros_message.rm_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rr_belt
  {
    size_t item_size = sizeof(ros_message.rr_belt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_VehicleReportBelt(
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


  // Member: drv_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pass_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rl_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rm_belt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rr_belt
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
    using DataType = deva_control_msgs::msg::VehicleReportBelt;
    is_plain =
      (
      offsetof(DataType, rr_belt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleReportBelt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleReportBelt *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleReportBelt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::VehicleReportBelt *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleReportBelt__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::VehicleReportBelt *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleReportBelt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleReportBelt(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleReportBelt__callbacks = {
  "deva_control_msgs::msg",
  "VehicleReportBelt",
  _VehicleReportBelt__cdr_serialize,
  _VehicleReportBelt__cdr_deserialize,
  _VehicleReportBelt__get_serialized_size,
  _VehicleReportBelt__max_serialized_size
};

static rosidl_message_type_support_t _VehicleReportBelt__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleReportBelt__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_control_msgs::msg::VehicleReportBelt>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportBelt__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, VehicleReportBelt)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_VehicleReportBelt__handle;
}

#ifdef __cplusplus
}
#endif
