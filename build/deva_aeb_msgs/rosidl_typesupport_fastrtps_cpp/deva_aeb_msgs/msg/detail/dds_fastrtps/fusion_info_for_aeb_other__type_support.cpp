// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__struct.hpp"

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
  const deva_aeb_msgs::msg::SFRoadPpty &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFRoadPpty &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFRoadPpty &,
  size_t current_alignment);
size_t
max_serialized_size_SFRoadPpty(
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
  const deva_aeb_msgs::msg::SFVehSelf &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFVehSelf &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFVehSelf &,
  size_t current_alignment);
size_t
max_serialized_size_SFVehSelf(
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
  const deva_aeb_msgs::msg::SFFusionTSList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFFusionTSList &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionTSList &,
  size_t current_alignment);
size_t
max_serialized_size_SFFusionTSList(
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
  const deva_aeb_msgs::msg::SFFusionTFLList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFFusionTFLList &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionTFLList &,
  size_t current_alignment);
size_t
max_serialized_size_SFFusionTFLList(
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
  const deva_aeb_msgs::msg::SFFusionRoadSignList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFFusionRoadSignList &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFFusionRoadSignList &,
  size_t current_alignment);
size_t
max_serialized_size_SFFusionRoadSignList(
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
  const deva_aeb_msgs::msg::SFDiagList &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_aeb_msgs::msg::SFDiagList &);
size_t get_serialized_size(
  const deva_aeb_msgs::msg::SFDiagList &,
  size_t current_alignment);
size_t
max_serialized_size_SFDiagList(
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
  const deva_aeb_msgs::msg::FusionInfoForAEBOther & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: roadppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.roadppty,
    cdr);
  // Member: vehself
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.vehself,
    cdr);
  // Member: fusiontslist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fusiontslist,
    cdr);
  // Member: fusiontfllist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fusiontfllist,
    cdr);
  // Member: fusionroadsignlist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fusionroadsignlist,
    cdr);
  // Member: fusiondiaglist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.fusiondiaglist,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::FusionInfoForAEBOther & ros_message)
{
  // Member: roadppty
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.roadppty);

  // Member: vehself
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.vehself);

  // Member: fusiontslist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fusiontslist);

  // Member: fusiontfllist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fusiontfllist);

  // Member: fusionroadsignlist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fusionroadsignlist);

  // Member: fusiondiaglist
  deva_aeb_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.fusiondiaglist);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::FusionInfoForAEBOther & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: roadppty

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.roadppty, current_alignment);
  // Member: vehself

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.vehself, current_alignment);
  // Member: fusiontslist

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fusiontslist, current_alignment);
  // Member: fusiontfllist

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fusiontfllist, current_alignment);
  // Member: fusionroadsignlist

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fusionroadsignlist, current_alignment);
  // Member: fusiondiaglist

  current_alignment +=
    deva_aeb_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.fusiondiaglist, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_FusionInfoForAEBOther(
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


  // Member: roadppty
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFRoadPpty(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: vehself
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFVehSelf(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fusiontslist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFFusionTSList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fusiontfllist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFFusionTFLList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fusionroadsignlist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFFusionRoadSignList(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: fusiondiaglist
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_aeb_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SFDiagList(
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
    using DataType = deva_aeb_msgs::msg::FusionInfoForAEBOther;
    is_plain =
      (
      offsetof(DataType, fusiondiaglist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FusionInfoForAEBOther__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::FusionInfoForAEBOther *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FusionInfoForAEBOther__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::FusionInfoForAEBOther *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FusionInfoForAEBOther__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::FusionInfoForAEBOther *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FusionInfoForAEBOther__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FusionInfoForAEBOther(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FusionInfoForAEBOther__callbacks = {
  "deva_aeb_msgs::msg",
  "FusionInfoForAEBOther",
  _FusionInfoForAEBOther__cdr_serialize,
  _FusionInfoForAEBOther__cdr_deserialize,
  _FusionInfoForAEBOther__get_serialized_size,
  _FusionInfoForAEBOther__max_serialized_size
};

static rosidl_message_type_support_t _FusionInfoForAEBOther__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FusionInfoForAEBOther__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::FusionInfoForAEBOther>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_FusionInfoForAEBOther__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, FusionInfoForAEBOther)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_FusionInfoForAEBOther__handle;
}

#ifdef __cplusplus
}
#endif
