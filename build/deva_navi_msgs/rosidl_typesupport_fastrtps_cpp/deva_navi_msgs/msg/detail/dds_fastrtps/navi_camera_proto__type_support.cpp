// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/navi_camera_proto__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.hpp"

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
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::Coord3DDoubleProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::Coord3DDoubleProto &,
  size_t current_alignment);
size_t
max_serialized_size_Coord3DDoubleProto(
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
  const deva_navi_msgs::msg::NaviSubCameraProto &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_navi_msgs::msg::NaviSubCameraProto &);
size_t get_serialized_size(
  const deva_navi_msgs::msg::NaviSubCameraProto &,
  size_t current_alignment);
size_t
max_serialized_size_NaviSubCameraProto(
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
  const deva_navi_msgs::msg::NaviCameraProto & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: coord_3d
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.coord_3d,
    cdr);
  // Member: type
  cdr << ros_message.type;
  // Member: distance
  cdr << ros_message.distance;
  // Member: speed
  {
    cdr << ros_message.speed;
  }
  // Member: road_class
  cdr << ros_message.road_class;
  // Member: segment_index
  cdr << ros_message.segment_index;
  // Member: link_index
  cdr << ros_message.link_index;
  // Member: distance_to_end
  cdr << ros_message.distance_to_end;
  // Member: sub_cameras
  {
    size_t size = ros_message.sub_cameras.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.sub_cameras[i],
        cdr);
    }
  }
  // Member: penalty
  cdr << ros_message.penalty;
  // Member: id
  cdr << ros_message.id;
  // Member: is_new
  cdr << (ros_message.is_new ? true : false);
  // Member: is_hidden
  cdr << (ros_message.is_hidden ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_navi_msgs::msg::NaviCameraProto & ros_message)
{
  // Member: coord_3d
  deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.coord_3d);

  // Member: type
  cdr >> ros_message.type;

  // Member: distance
  cdr >> ros_message.distance;

  // Member: speed
  {
    cdr >> ros_message.speed;
  }

  // Member: road_class
  cdr >> ros_message.road_class;

  // Member: segment_index
  cdr >> ros_message.segment_index;

  // Member: link_index
  cdr >> ros_message.link_index;

  // Member: distance_to_end
  cdr >> ros_message.distance_to_end;

  // Member: sub_cameras
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

    ros_message.sub_cameras.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_navi_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.sub_cameras[i]);
    }
  }

  // Member: penalty
  cdr >> ros_message.penalty;

  // Member: id
  cdr >> ros_message.id;

  // Member: is_new
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_new = tmp ? true : false;
  }

  // Member: is_hidden
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_hidden = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
get_serialized_size(
  const deva_navi_msgs::msg::NaviCameraProto & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: coord_3d

  current_alignment +=
    deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.coord_3d, current_alignment);
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t array_size = ros_message.speed.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_class
  {
    size_t item_size = sizeof(ros_message.road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: segment_index
  {
    size_t item_size = sizeof(ros_message.segment_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_index
  {
    size_t item_size = sizeof(ros_message.link_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_end
  {
    size_t item_size = sizeof(ros_message.distance_to_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sub_cameras
  {
    size_t array_size = ros_message.sub_cameras.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.sub_cameras[index], current_alignment);
    }
  }
  // Member: penalty
  {
    size_t item_size = sizeof(ros_message.penalty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_new
  {
    size_t item_size = sizeof(ros_message.is_new);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_hidden
  {
    size_t item_size = sizeof(ros_message.is_hidden);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_navi_msgs
max_serialized_size_NaviCameraProto(
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


  // Member: coord_3d
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
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

  // Member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: segment_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance_to_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sub_cameras
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
        deva_navi_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NaviSubCameraProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: penalty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_new
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_hidden
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
    using DataType = deva_navi_msgs::msg::NaviCameraProto;
    is_plain =
      (
      offsetof(DataType, is_hidden) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NaviCameraProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::NaviCameraProto *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NaviCameraProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_navi_msgs::msg::NaviCameraProto *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NaviCameraProto__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_navi_msgs::msg::NaviCameraProto *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NaviCameraProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NaviCameraProto(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NaviCameraProto__callbacks = {
  "deva_navi_msgs::msg",
  "NaviCameraProto",
  _NaviCameraProto__cdr_serialize,
  _NaviCameraProto__cdr_deserialize,
  _NaviCameraProto__get_serialized_size,
  _NaviCameraProto__max_serialized_size
};

static rosidl_message_type_support_t _NaviCameraProto__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NaviCameraProto__callbacks,
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
get_message_type_support_handle<deva_navi_msgs::msg::NaviCameraProto>()
{
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_NaviCameraProto__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_navi_msgs, msg, NaviCameraProto)() {
  return &deva_navi_msgs::msg::typesupport_fastrtps_cpp::_NaviCameraProto__handle;
}

#ifdef __cplusplus
}
#endif
