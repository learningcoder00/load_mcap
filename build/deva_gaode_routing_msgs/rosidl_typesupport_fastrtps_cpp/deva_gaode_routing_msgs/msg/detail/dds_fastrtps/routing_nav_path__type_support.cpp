// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__struct.hpp"

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

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::WebPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::WebPoint &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::WebPoint &,
  size_t current_alignment);
size_t
max_serialized_size_WebPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

// functions for deva_gaode_routing_msgs::msg::WebPoint already declared above

// functions for deva_gaode_routing_msgs::msg::WebPoint already declared above


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_serialize(
  const deva_gaode_routing_msgs::msg::RoutingNavPath & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: version
  cdr << ros_message.version;
  // Member: status
  cdr << (ros_message.status ? true : false);
  // Member: md5
  cdr << ros_message.md5;
  // Member: index
  cdr << ros_message.index;
  // Member: start_point
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.start_point,
    cdr);
  // Member: way_points
  {
    size_t size = ros_message.way_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.way_points[i],
        cdr);
    }
  }
  // Member: end_point
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.end_point,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_gaode_routing_msgs::msg::RoutingNavPath & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: version
  cdr >> ros_message.version;

  // Member: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status = tmp ? true : false;
  }

  // Member: md5
  cdr >> ros_message.md5;

  // Member: index
  cdr >> ros_message.index;

  // Member: start_point
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.start_point);

  // Member: way_points
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

    ros_message.way_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.way_points[i]);
    }
  }

  // Member: end_point
  deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.end_point);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
get_serialized_size(
  const deva_gaode_routing_msgs::msg::RoutingNavPath & ros_message,
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
  // Member: version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.version.size() + 1);
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: md5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.md5.size() + 1);
  // Member: index
  {
    size_t item_size = sizeof(ros_message.index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_point

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.start_point, current_alignment);
  // Member: way_points
  {
    size_t array_size = ros_message.way_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.way_points[index], current_alignment);
    }
  }
  // Member: end_point

  current_alignment +=
    deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.end_point, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_gaode_routing_msgs
max_serialized_size_RoutingNavPath(
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

  // Member: version
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

  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: md5
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

  // Member: index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WebPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: way_points
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
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WebPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: end_point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WebPoint(
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
    using DataType = deva_gaode_routing_msgs::msg::RoutingNavPath;
    is_plain =
      (
      offsetof(DataType, end_point) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RoutingNavPath__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::RoutingNavPath *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoutingNavPath__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_gaode_routing_msgs::msg::RoutingNavPath *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoutingNavPath__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_gaode_routing_msgs::msg::RoutingNavPath *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoutingNavPath__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RoutingNavPath(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RoutingNavPath__callbacks = {
  "deva_gaode_routing_msgs::msg",
  "RoutingNavPath",
  _RoutingNavPath__cdr_serialize,
  _RoutingNavPath__cdr_deserialize,
  _RoutingNavPath__get_serialized_size,
  _RoutingNavPath__max_serialized_size
};

static rosidl_message_type_support_t _RoutingNavPath__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoutingNavPath__callbacks,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::RoutingNavPath>()
{
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_RoutingNavPath__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_gaode_routing_msgs, msg, RoutingNavPath)() {
  return &deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::_RoutingNavPath__handle;
}

#ifdef __cplusplus
}
#endif
