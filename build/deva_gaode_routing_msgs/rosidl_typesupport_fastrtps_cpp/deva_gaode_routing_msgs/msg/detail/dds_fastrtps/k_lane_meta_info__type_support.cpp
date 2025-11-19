// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.hpp"

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
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::NodeIDType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::NodeIDType &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::NodeIDType &,
  size_t current_alignment);
size_t
max_serialized_size_NodeIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

// functions for deva_gaode_routing_msgs::msg::LinkIDType already declared above

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::LaneTrafficInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::LaneTrafficInfo &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::LaneTrafficInfo &,
  size_t current_alignment);
size_t
max_serialized_size_LaneTrafficInfo(
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
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::LaneTopo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::LaneTopo &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::LaneTopo &,
  size_t current_alignment);
size_t
max_serialized_size_LaneTopo(
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
  const deva_gaode_routing_msgs::msg::KLaneMetaInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: in_link_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.in_link_id,
    cdr);
  // Member: node_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.node_id,
    cdr);
  // Member: pass_link_id_s
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pass_link_id_s,
    cdr);
  // Member: lane_num
  cdr << ros_message.lane_num;
  // Member: lane_num_left
  cdr << ros_message.lane_num_left;
  // Member: lane_num_right
  cdr << ros_message.lane_num_right;
  // Member: lane_infos
  {
    size_t size = ros_message.lane_infos.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lane_infos[i],
        cdr);
    }
  }
  // Member: lane_topos
  {
    size_t size = ros_message.lane_topos.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.lane_topos[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::KLaneMetaInfo & ros_message)
{
  // Member: in_link_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.in_link_id);

  // Member: node_id
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.node_id);

  // Member: pass_link_id_s
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pass_link_id_s);

  // Member: lane_num
  cdr >> ros_message.lane_num;

  // Member: lane_num_left
  cdr >> ros_message.lane_num_left;

  // Member: lane_num_right
  cdr >> ros_message.lane_num_right;

  // Member: lane_infos
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

    ros_message.lane_infos.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lane_infos[i]);
    }
  }

  // Member: lane_topos
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

    ros_message.lane_topos.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.lane_topos[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::KLaneMetaInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: in_link_id

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.in_link_id, current_alignment);
  // Member: node_id

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.node_id, current_alignment);
  // Member: pass_link_id_s

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pass_link_id_s, current_alignment);
  // Member: lane_num
  {
    size_t item_size = sizeof(ros_message.lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_left
  {
    size_t item_size = sizeof(ros_message.lane_num_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_right
  {
    size_t item_size = sizeof(ros_message.lane_num_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_infos
  {
    size_t array_size = ros_message.lane_infos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lane_infos[index], current_alignment);
    }
  }
  // Member: lane_topos
  {
    size_t array_size = ros_message.lane_topos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.lane_topos[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_KLaneMetaInfo(
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


  // Member: in_link_id
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

  // Member: node_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NodeIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pass_link_id_s
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

  // Member: lane_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_num_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_infos
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneTrafficInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lane_topos
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneTopo(
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
    using DataType = deva_gaode_routing_msgs::msg::KLaneMetaInfo;
    is_plain =
      (
      offsetof(DataType, lane_topos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KLaneMetaInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::KLaneMetaInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KLaneMetaInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::KLaneMetaInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KLaneMetaInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::KLaneMetaInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KLaneMetaInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KLaneMetaInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KLaneMetaInfo__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "KLaneMetaInfo",
  _KLaneMetaInfo__cdr_serialize,
  _KLaneMetaInfo__cdr_deserialize,
  _KLaneMetaInfo__get_serialized_size,
  _KLaneMetaInfo__max_serialized_size
};

static rosidl_message_type_support_t _KLaneMetaInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KLaneMetaInfo__callbacks,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::KLaneMetaInfo>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_KLaneMetaInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, KLaneMetaInfo)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_KLaneMetaInfo__handle;
}

#ifdef __cplusplus
}
#endif
