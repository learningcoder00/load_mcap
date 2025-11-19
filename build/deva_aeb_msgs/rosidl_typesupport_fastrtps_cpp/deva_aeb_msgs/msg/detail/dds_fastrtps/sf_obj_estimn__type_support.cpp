// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_serialize(
  const deva_aeb_msgs::msg::SFObjEstimn & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: posnlgt
  cdr << ros_message.posnlgt;
  // Member: posnlat
  cdr << ros_message.posnlat;
  // Member: spd
  cdr << ros_message.spd;
  // Member: vlgt
  cdr << ros_message.vlgt;
  // Member: vlat
  cdr << ros_message.vlat;
  // Member: a
  cdr << ros_message.a;
  // Member: algt
  cdr << ros_message.algt;
  // Member: alat
  cdr << ros_message.alat;
  // Member: agdir
  cdr << ros_message.agdir;
  // Member: crvt
  cdr << ros_message.crvt;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFObjEstimn & ros_message)
{
  // Member: posnlgt
  cdr >> ros_message.posnlgt;

  // Member: posnlat
  cdr >> ros_message.posnlat;

  // Member: spd
  cdr >> ros_message.spd;

  // Member: vlgt
  cdr >> ros_message.vlgt;

  // Member: vlat
  cdr >> ros_message.vlat;

  // Member: a
  cdr >> ros_message.a;

  // Member: algt
  cdr >> ros_message.algt;

  // Member: alat
  cdr >> ros_message.alat;

  // Member: agdir
  cdr >> ros_message.agdir;

  // Member: crvt
  cdr >> ros_message.crvt;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFObjEstimn & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: posnlgt
  {
    size_t item_size = sizeof(ros_message.posnlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posnlat
  {
    size_t item_size = sizeof(ros_message.posnlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spd
  {
    size_t item_size = sizeof(ros_message.spd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vlgt
  {
    size_t item_size = sizeof(ros_message.vlgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vlat
  {
    size_t item_size = sizeof(ros_message.vlat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algt
  {
    size_t item_size = sizeof(ros_message.algt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alat
  {
    size_t item_size = sizeof(ros_message.alat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agdir
  {
    size_t item_size = sizeof(ros_message.agdir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crvt
  {
    size_t item_size = sizeof(ros_message.crvt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFObjEstimn(
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


  // Member: posnlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: posnlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: spd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vlgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vlat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agdir
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crvt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_aeb_msgs::msg::SFObjEstimn;
    is_plain =
      (
      offsetof(DataType, crvt) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFObjEstimn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjEstimn *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFObjEstimn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFObjEstimn *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFObjEstimn__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjEstimn *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFObjEstimn__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFObjEstimn(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFObjEstimn__callbacks = {
  "deva_aeb_msgs::msg",
  "SFObjEstimn",
  _SFObjEstimn__cdr_serialize,
  _SFObjEstimn__cdr_deserialize,
  _SFObjEstimn__get_serialized_size,
  _SFObjEstimn__max_serialized_size
};

static rosidl_message_type_support_t _SFObjEstimn__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFObjEstimn__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFObjEstimn>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjEstimn__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFObjEstimn)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjEstimn__handle;
}

#ifdef __cplusplus
}
#endif
