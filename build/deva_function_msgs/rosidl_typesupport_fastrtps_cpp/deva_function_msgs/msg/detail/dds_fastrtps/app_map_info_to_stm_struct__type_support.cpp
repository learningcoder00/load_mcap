// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.hpp"

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

namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::AppMapInfoToStmStruct & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: route_id
  cdr << ros_message.route_id;
  // Member: aut_valt_prkg_map_upload_use_map_type2
  cdr << ros_message.aut_valt_prkg_map_upload_use_map_type2;
  // Member: aut_valt_prkg_map_upload_use_map_list1
  cdr << ros_message.aut_valt_prkg_map_upload_use_map_list1;
  // Member: aut_valt_prkg_map_upload_use_map_list2
  cdr << ros_message.aut_valt_prkg_map_upload_use_map_list2;
  // Member: aut_valt_prkg_map_upload_use_map_list3
  cdr << ros_message.aut_valt_prkg_map_upload_use_map_list3;
  // Member: aut_valt_prkg_map_upload_use_map_list4
  cdr << ros_message.aut_valt_prkg_map_upload_use_map_list4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::AppMapInfoToStmStruct & ros_message)
{
  // Member: route_id
  cdr >> ros_message.route_id;

  // Member: aut_valt_prkg_map_upload_use_map_type2
  cdr >> ros_message.aut_valt_prkg_map_upload_use_map_type2;

  // Member: aut_valt_prkg_map_upload_use_map_list1
  cdr >> ros_message.aut_valt_prkg_map_upload_use_map_list1;

  // Member: aut_valt_prkg_map_upload_use_map_list2
  cdr >> ros_message.aut_valt_prkg_map_upload_use_map_list2;

  // Member: aut_valt_prkg_map_upload_use_map_list3
  cdr >> ros_message.aut_valt_prkg_map_upload_use_map_list3;

  // Member: aut_valt_prkg_map_upload_use_map_list4
  cdr >> ros_message.aut_valt_prkg_map_upload_use_map_list4;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::AppMapInfoToStmStruct & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: route_id
  {
    size_t item_size = sizeof(ros_message.route_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_upload_use_map_type2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_upload_use_map_type2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_upload_use_map_list1
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_upload_use_map_list1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_upload_use_map_list2
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_upload_use_map_list2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_upload_use_map_list3
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_upload_use_map_list3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aut_valt_prkg_map_upload_use_map_list4
  {
    size_t item_size = sizeof(ros_message.aut_valt_prkg_map_upload_use_map_list4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_AppMapInfoToStmStruct(
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


  // Member: route_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_upload_use_map_type2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aut_valt_prkg_map_upload_use_map_list1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_upload_use_map_list2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_upload_use_map_list3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aut_valt_prkg_map_upload_use_map_list4
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
    using DataType = deva_function_msgs::msg::AppMapInfoToStmStruct;
    is_plain =
      (
      offsetof(DataType, aut_valt_prkg_map_upload_use_map_list4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AppMapInfoToStmStruct__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::AppMapInfoToStmStruct *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AppMapInfoToStmStruct__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::AppMapInfoToStmStruct *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AppMapInfoToStmStruct__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::AppMapInfoToStmStruct *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AppMapInfoToStmStruct__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AppMapInfoToStmStruct(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AppMapInfoToStmStruct__callbacks = {
  "deva_function_msgs::msg",
  "AppMapInfoToStmStruct",
  _AppMapInfoToStmStruct__cdr_serialize,
  _AppMapInfoToStmStruct__cdr_deserialize,
  _AppMapInfoToStmStruct__get_serialized_size,
  _AppMapInfoToStmStruct__max_serialized_size
};

static rosidl_message_type_support_t _AppMapInfoToStmStruct__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AppMapInfoToStmStruct__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::AppMapInfoToStmStruct>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_AppMapInfoToStmStruct__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, AppMapInfoToStmStruct)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_AppMapInfoToStmStruct__handle;
}

#ifdef __cplusplus
}
#endif
