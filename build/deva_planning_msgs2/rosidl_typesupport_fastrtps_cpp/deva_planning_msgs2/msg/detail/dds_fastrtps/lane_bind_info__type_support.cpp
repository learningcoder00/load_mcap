// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/lane_bind_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.hpp"

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
namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::UInt2String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::UInt2String &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::UInt2String &,
  size_t current_alignment);
size_t
max_serialized_size_UInt2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::String2SLBoundary &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::String2SLBoundary &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::String2SLBoundary &,
  size_t current_alignment);
size_t
max_serialized_size_String2SLBoundary(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::String2String &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::String2String &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::String2String &,
  size_t current_alignment);
size_t
max_serialized_size_String2String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2


namespace deva_planning_msgs2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_serialize(
  const deva_planning_msgs2::msg::LaneBindInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ref_id
  cdr << ros_message.ref_id;
  // Member: binded_obs
  {
    size_t size = ros_message.binded_obs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.binded_obs[i],
        cdr);
    }
  }
  // Member: sl_boundary
  {
    size_t size = ros_message.sl_boundary.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sl_boundary[i],
        cdr);
    }
  }
  // Member: scalable_flags
  {
    cdr << ros_message.scalable_flags;
  }
  // Member: scalable_multimap
  {
    size_t size = ros_message.scalable_multimap.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scalable_multimap[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs2::msg::LaneBindInfo & ros_message)
{
  // Member: ref_id
  cdr >> ros_message.ref_id;

  // Member: binded_obs
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

    ros_message.binded_obs.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.binded_obs[i]);
    }
  }

  // Member: sl_boundary
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

    ros_message.sl_boundary.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.sl_boundary[i]);
    }
  }

  // Member: scalable_flags
  {
    cdr >> ros_message.scalable_flags;
  }

  // Member: scalable_multimap
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

    ros_message.scalable_multimap.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scalable_multimap[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
get_serialized_size(
  const deva_planning_msgs2::msg::LaneBindInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ref_id
  {
    size_t item_size = sizeof(ros_message.ref_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: binded_obs
  {
    size_t array_size = ros_message.binded_obs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.binded_obs[index], current_alignment);
    }
  }
  // Member: sl_boundary
  {
    size_t array_size = ros_message.sl_boundary.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sl_boundary[index], current_alignment);
    }
  }
  // Member: scalable_flags
  {
    size_t array_size = ros_message.scalable_flags.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.scalable_flags[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scalable_multimap
  {
    size_t array_size = ros_message.scalable_multimap.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scalable_multimap[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs2
max_serialized_size_LaneBindInfo(
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


  // Member: ref_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: binded_obs
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt2String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sl_boundary
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_String2SLBoundary(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: scalable_flags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scalable_multimap
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
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_String2String(
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
    using DataType = deva_planning_msgs2::msg::LaneBindInfo;
    is_plain =
      (
      offsetof(DataType, scalable_multimap) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaneBindInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::LaneBindInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneBindInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs2::msg::LaneBindInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneBindInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs2::msg::LaneBindInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneBindInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneBindInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneBindInfo__callbacks = {
  "deva_planning_msgs2::msg",
  "LaneBindInfo",
  _LaneBindInfo__cdr_serialize,
  _LaneBindInfo__cdr_deserialize,
  _LaneBindInfo__get_serialized_size,
  _LaneBindInfo__max_serialized_size
};

static rosidl_message_type_support_t _LaneBindInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneBindInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::LaneBindInfo>()
{
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_LaneBindInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs2, msg, LaneBindInfo)() {
  return &deva_planning_msgs2::msg::typesupport_fastrtps_cpp::_LaneBindInfo__handle;
}

#ifdef __cplusplus
}
#endif
