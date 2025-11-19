// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionObj.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__struct.hpp"

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
namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFObjEstimn &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFObjEstimn &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFObjEstimn &,
  size_t current_alignment);
size_t
max_serialized_size_SFObjEstimn(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFObjInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFObjInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFObjInfo &,
  size_t current_alignment);
size_t
max_serialized_size_SFObjInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFObjPpty &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFObjPpty &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFObjPpty &,
  size_t current_alignment);
size_t
max_serialized_size_SFObjPpty(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs

namespace deva_aeb_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_aeb_msgs::msg::SFVisionInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFVisionInfo &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFVisionInfo &,
  size_t current_alignment);
size_t
max_serialized_size_SFVisionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_aeb_msgs


namespace deva_aeb_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::SFFusionObj & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: estimn
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.estimn,
    cdr);
  // Member: info
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: ppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ppty,
    cdr);
  // Member: visinfo
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.visinfo,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFFusionObj & ros_message)
{
  // Member: estimn
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.estimn);

  // Member: info
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: ppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ppty);

  // Member: visinfo
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.visinfo);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionObj & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: estimn

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.estimn, current_alignment);
  // Member: info

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: ppty

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ppty, current_alignment);
  // Member: visinfo

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.visinfo, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFFusionObj(
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


  // Member: estimn
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFObjEstimn(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFObjInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ppty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFObjPpty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: visinfo
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFVisionInfo(
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
    using DataType = deva_aeb_msgs::msg::SFFusionObj;
    is_plain =
      (
      offsetof(DataType, visinfo) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFFusionObj__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionObj *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFFusionObj__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFFusionObj *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFFusionObj__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFFusionObj *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFFusionObj__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFFusionObj(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFFusionObj__callbacks = {
  "deva_aeb_msgs::msg",
  "SFFusionObj",
  _SFFusionObj__cdr_serialize,
  _SFFusionObj__cdr_deserialize,
  _SFFusionObj__get_serialized_size,
  _SFFusionObj__max_serialized_size
};

static rosidl_message_type_support_t _SFFusionObj__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFFusionObj__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionObj>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionObj__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFFusionObj)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFFusionObj__handle;
}

#ifdef __cplusplus
}
#endif
