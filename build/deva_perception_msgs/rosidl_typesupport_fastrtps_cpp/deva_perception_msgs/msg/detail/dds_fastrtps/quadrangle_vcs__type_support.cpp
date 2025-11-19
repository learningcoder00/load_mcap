// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.hpp"

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

namespace deva_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_serialize(
  const deva_perception_msgs::msg::QuadrangleVcs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leftuppointx
  cdr << ros_message.leftuppointx;
  // Member: leftuppointy
  cdr << ros_message.leftuppointy;
  // Member: leftuppointz
  cdr << ros_message.leftuppointz;
  // Member: rightuppointx
  cdr << ros_message.rightuppointx;
  // Member: rightuppointy
  cdr << ros_message.rightuppointy;
  // Member: rightuppointz
  cdr << ros_message.rightuppointz;
  // Member: rightdownpointx
  cdr << ros_message.rightdownpointx;
  // Member: rightdownpointy
  cdr << ros_message.rightdownpointy;
  // Member: rightdownpointz
  cdr << ros_message.rightdownpointz;
  // Member: leftdownpointx
  cdr << ros_message.leftdownpointx;
  // Member: leftdownpointy
  cdr << ros_message.leftdownpointy;
  // Member: leftdownpointz
  cdr << ros_message.leftdownpointz;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_perception_msgs::msg::QuadrangleVcs & ros_message)
{
  // Member: leftuppointx
  cdr >> ros_message.leftuppointx;

  // Member: leftuppointy
  cdr >> ros_message.leftuppointy;

  // Member: leftuppointz
  cdr >> ros_message.leftuppointz;

  // Member: rightuppointx
  cdr >> ros_message.rightuppointx;

  // Member: rightuppointy
  cdr >> ros_message.rightuppointy;

  // Member: rightuppointz
  cdr >> ros_message.rightuppointz;

  // Member: rightdownpointx
  cdr >> ros_message.rightdownpointx;

  // Member: rightdownpointy
  cdr >> ros_message.rightdownpointy;

  // Member: rightdownpointz
  cdr >> ros_message.rightdownpointz;

  // Member: leftdownpointx
  cdr >> ros_message.leftdownpointx;

  // Member: leftdownpointy
  cdr >> ros_message.leftdownpointy;

  // Member: leftdownpointz
  cdr >> ros_message.leftdownpointz;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
get_serialized_size(
  const deva_perception_msgs::msg::QuadrangleVcs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leftuppointx
  {
    size_t item_size = sizeof(ros_message.leftuppointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leftuppointy
  {
    size_t item_size = sizeof(ros_message.leftuppointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leftuppointz
  {
    size_t item_size = sizeof(ros_message.leftuppointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightuppointx
  {
    size_t item_size = sizeof(ros_message.rightuppointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightuppointy
  {
    size_t item_size = sizeof(ros_message.rightuppointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightuppointz
  {
    size_t item_size = sizeof(ros_message.rightuppointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightdownpointx
  {
    size_t item_size = sizeof(ros_message.rightdownpointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightdownpointy
  {
    size_t item_size = sizeof(ros_message.rightdownpointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rightdownpointz
  {
    size_t item_size = sizeof(ros_message.rightdownpointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leftdownpointx
  {
    size_t item_size = sizeof(ros_message.leftdownpointx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leftdownpointy
  {
    size_t item_size = sizeof(ros_message.leftdownpointy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: leftdownpointz
  {
    size_t item_size = sizeof(ros_message.leftdownpointz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_perception_msgs
max_serialized_size_QuadrangleVcs(
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


  // Member: leftuppointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leftuppointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leftuppointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightuppointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightuppointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightuppointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightdownpointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightdownpointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rightdownpointz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leftdownpointx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leftdownpointy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: leftdownpointz
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
    using DataType = deva_perception_msgs::msg::QuadrangleVcs;
    is_plain =
      (
      offsetof(DataType, leftdownpointz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _QuadrangleVcs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::QuadrangleVcs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _QuadrangleVcs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_perception_msgs::msg::QuadrangleVcs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _QuadrangleVcs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_perception_msgs::msg::QuadrangleVcs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _QuadrangleVcs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_QuadrangleVcs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _QuadrangleVcs__callbacks = {
  "deva_perception_msgs::msg",
  "QuadrangleVcs",
  _QuadrangleVcs__cdr_serialize,
  _QuadrangleVcs__cdr_deserialize,
  _QuadrangleVcs__get_serialized_size,
  _QuadrangleVcs__max_serialized_size
};

static rosidl_message_type_support_t _QuadrangleVcs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QuadrangleVcs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::QuadrangleVcs>()
{
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_QuadrangleVcs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_perception_msgs, msg, QuadrangleVcs)() {
  return &deva_perception_msgs::msg::typesupport_fastrtps_cpp::_QuadrangleVcs__handle;
}

#ifdef __cplusplus
}
#endif
