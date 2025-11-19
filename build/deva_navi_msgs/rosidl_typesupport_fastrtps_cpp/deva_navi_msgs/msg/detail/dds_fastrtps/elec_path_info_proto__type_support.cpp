// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.hpp"

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
namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::ViaPointInfoProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::ViaPointInfoProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::ViaPointInfoProto &,
  size_t current_alignment);
size_t
max_serialized_size_ViaPointInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs

namespace deva_navi_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_navi_msgs::msg::EnergyConsumeProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::EnergyConsumeProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::EnergyConsumeProto &,
  size_t current_alignment);
size_t
max_serialized_size_EnergyConsumeProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_navi_msgs


namespace deva_navi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_serialize(
  const deva_navi_msgs::msg::ElecPathInfoProto & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m_is_elec_route
  cdr << (ros_message.m_is_elec_route ? true : false);
  // Member: m_link_consume_size_word
  cdr << (ros_message.m_link_consume_size_word ? true : false);
  // Member: m_traffic_info
  cdr << ros_message.m_traffic_info;
  // Member: m_energy_unit
  cdr << ros_message.m_energy_unit;
  // Member: m_path_flag
  cdr << ros_message.m_path_flag;
  // Member: m_energy_sum
  cdr << ros_message.m_energy_sum;
  // Member: m_link_num
  cdr << ros_message.m_link_num;
  // Member: m_link_consume
  {
    cdr << ros_message.m_link_consume;
  }
  // Member: m_link_distance
  {
    cdr << ros_message.m_link_distance;
  }
  // Member: m_via_info
  {
    size_t size = ros_message.m_via_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.m_via_info[i],
        cdr);
    }
  }
  // Member: m_energy_consume
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.m_energy_consume,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_navi_msgs::msg::ElecPathInfoProto & ros_message)
{
  // Member: m_is_elec_route
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.m_is_elec_route = tmp ? true : false;
  }

  // Member: m_link_consume_size_word
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.m_link_consume_size_word = tmp ? true : false;
  }

  // Member: m_traffic_info
  cdr >> ros_message.m_traffic_info;

  // Member: m_energy_unit
  cdr >> ros_message.m_energy_unit;

  // Member: m_path_flag
  cdr >> ros_message.m_path_flag;

  // Member: m_energy_sum
  cdr >> ros_message.m_energy_sum;

  // Member: m_link_num
  cdr >> ros_message.m_link_num;

  // Member: m_link_consume
  {
    cdr >> ros_message.m_link_consume;
  }

  // Member: m_link_distance
  {
    cdr >> ros_message.m_link_distance;
  }

  // Member: m_via_info
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

    ros_message.m_via_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.m_via_info[i]);
    }
  }

  // Member: m_energy_consume
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.m_energy_consume);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
get_serialized_size(
  const deva_navi_msgs::msg::ElecPathInfoProto & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m_is_elec_route
  {
    size_t item_size = sizeof(ros_message.m_is_elec_route);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_link_consume_size_word
  {
    size_t item_size = sizeof(ros_message.m_link_consume_size_word);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_traffic_info
  {
    size_t item_size = sizeof(ros_message.m_traffic_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_energy_unit
  {
    size_t item_size = sizeof(ros_message.m_energy_unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_path_flag
  {
    size_t item_size = sizeof(ros_message.m_path_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_energy_sum
  {
    size_t item_size = sizeof(ros_message.m_energy_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_link_num
  {
    size_t item_size = sizeof(ros_message.m_link_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_link_consume
  {
    size_t array_size = ros_message.m_link_consume.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.m_link_consume[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_link_distance
  {
    size_t array_size = ros_message.m_link_distance.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.m_link_distance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_via_info
  {
    size_t array_size = ros_message.m_via_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.m_via_info[index], current_alignment);
    }
  }
  // Member: m_energy_consume

  current_alignment +=
    deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.m_energy_consume, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
max_serialized_size_ElecPathInfoProto(
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


  // Member: m_is_elec_route
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: m_link_consume_size_word
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: m_traffic_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m_energy_unit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m_path_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m_energy_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m_link_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: m_link_consume
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

  // Member: m_link_distance
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

  // Member: m_via_info
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
      size_t inner_size =
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ViaPointInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: m_energy_consume
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EnergyConsumeProto(
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
    using DataType = deva_navi_msgs::msg::ElecPathInfoProto;
    is_plain =
      (
      offsetof(DataType, m_energy_consume) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ElecPathInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::ElecPathInfoProto *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ElecPathInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_navi_msgs::msg::ElecPathInfoProto *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ElecPathInfoProto__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::ElecPathInfoProto *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ElecPathInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ElecPathInfoProto(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ElecPathInfoProto__callbacks = {
  "deva_navi_msgs::msg",
  "ElecPathInfoProto",
  _ElecPathInfoProto__cdr_serialize,
  _ElecPathInfoProto__cdr_deserialize,
  _ElecPathInfoProto__get_serialized_size,
  _ElecPathInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _ElecPathInfoProto__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ElecPathInfoProto__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_navi_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::ElecPathInfoProto>()
{
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_ElecPathInfoProto__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_navi_msgs, msg, ElecPathInfoProto)() {
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_ElecPathInfoProto__handle;
}

#ifdef __cplusplus
}
#endif
