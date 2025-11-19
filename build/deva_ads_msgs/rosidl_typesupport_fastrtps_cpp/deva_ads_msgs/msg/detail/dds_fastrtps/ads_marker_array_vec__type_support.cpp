// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice
#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_ads_msgs/msg/detail/ads_marker_array_vec__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace deva_ads_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_ads_msgs::msg::AdsMarkerArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_ads_msgs::msg::AdsMarkerArray &);
size_t get_serialized_size(
  const deva_ads_msgs::msg::AdsMarkerArray &,
  size_t current_alignment);
size_t
max_serialized_size_AdsMarkerArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_ads_msgs


namespace deva_ads_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_ads_msgs
cdr_serialize(
  const deva_ads_msgs::msg::AdsMarkerArrayVec & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: stream
  cdr << ros_message.stream;
  // Member: marker_type
  cdr << ros_message.marker_type;
  // Member: ads_marker_arrays
  {
    size_t size = ros_message.ads_marker_arrays.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_ads_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ads_marker_arrays[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_ads_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_ads_msgs::msg::AdsMarkerArrayVec & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: stream
  cdr >> ros_message.stream;

  // Member: marker_type
  cdr >> ros_message.marker_type;

  // Member: ads_marker_arrays
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

    ros_message.ads_marker_arrays.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_ads_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ads_marker_arrays[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_ads_msgs
get_serialized_size(
  const deva_ads_msgs::msg::AdsMarkerArrayVec & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: stream
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.stream.size() + 1);
  // Member: marker_type
  {
    size_t item_size = sizeof(ros_message.marker_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ads_marker_arrays
  {
    size_t array_size = ros_message.ads_marker_arrays.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_ads_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ads_marker_arrays[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_ads_msgs
max_serialized_size_AdsMarkerArrayVec(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stream
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: marker_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ads_marker_arrays
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
        deva_ads_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AdsMarkerArray(
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
    using DataType = deva_ads_msgs::msg::AdsMarkerArrayVec;
    is_plain =
      (
      offsetof(DataType, ads_marker_arrays) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AdsMarkerArrayVec__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_ads_msgs::msg::AdsMarkerArrayVec *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AdsMarkerArrayVec__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_ads_msgs::msg::AdsMarkerArrayVec *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AdsMarkerArrayVec__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_ads_msgs::msg::AdsMarkerArrayVec *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AdsMarkerArrayVec__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AdsMarkerArrayVec(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AdsMarkerArrayVec__callbacks = {
  "deva_ads_msgs::msg",
  "AdsMarkerArrayVec",
  _AdsMarkerArrayVec__cdr_serialize,
  _AdsMarkerArrayVec__cdr_deserialize,
  _AdsMarkerArrayVec__get_serialized_size,
  _AdsMarkerArrayVec__max_serialized_size
};

static rosidl_message_type_support_t _AdsMarkerArrayVec__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AdsMarkerArrayVec__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_ads_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_ads_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_ads_msgs::msg::AdsMarkerArrayVec>()
{
  return &deva_ads_msgs::msg::typesupport_fastrtps_cpp::_AdsMarkerArrayVec__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_ads_msgs, msg, AdsMarkerArrayVec)() {
  return &deva_ads_msgs::msg::typesupport_fastrtps_cpp::_AdsMarkerArrayVec__handle;
}

#ifdef __cplusplus
}
#endif
