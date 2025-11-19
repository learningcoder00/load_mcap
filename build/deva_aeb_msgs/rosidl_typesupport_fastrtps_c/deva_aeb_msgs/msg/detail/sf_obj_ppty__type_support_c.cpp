// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SFObjPpty__ros_msg_type = deva_aeb_msgs__msg__SFObjPpty;

static bool _SFObjPpty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SFObjPpty__ros_msg_type * ros_message = static_cast<const _SFObjPpty__ros_msg_type *>(untyped_ros_message);
  // Field name: idn
  {
    cdr << ros_message->idn;
  }

  // Field name: sts
  {
    cdr << ros_message->sts;
  }

  // Field name: mdlofmtn
  {
    cdr << ros_message->mdlofmtn;
  }

  // Field name: trfcsceno
  {
    cdr << ros_message->trfcsceno;
  }

  // Field name: cllsnmtgtnbybrkgprimqly
  {
    cdr << ros_message->cllsnmtgtnbybrkgprimqly;
  }

  // Field name: cllsnmtgtnbybrkgsecqly
  {
    cdr << ros_message->cllsnmtgtnbybrkgsecqly;
  }

  // Field name: cllsnwarnfwdqly
  {
    cdr << ros_message->cllsnwarnfwdqly;
  }

  // Field name: trfcjamassiqly
  {
    cdr << ros_message->trfcjamassiqly;
  }

  // Field name: dstlatfrommidoflaneselfqly
  {
    cdr << ros_message->dstlatfrommidoflaneselfqly;
  }

  // Field name: emgylanekeepaidposnqly
  {
    cdr << ros_message->emgylanekeepaidposnqly;
  }

  // Field name: fusnsrc
  {
    cdr << ros_message->fusnsrc;
  }

  // Field name: posnlgtstdde
  {
    cdr << ros_message->posnlgtstdde;
  }

  // Field name: posnlatstdde
  {
    cdr << ros_message->posnlatstdde;
  }

  // Field name: agdirstdde
  {
    cdr << ros_message->agdirstdde;
  }

  // Field name: spdstdde
  {
    cdr << ros_message->spdstdde;
  }

  // Field name: astdde
  {
    cdr << ros_message->astdde;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: visnid
  {
    cdr << ros_message->visnid;
  }

  return true;
}

static bool _SFObjPpty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SFObjPpty__ros_msg_type * ros_message = static_cast<_SFObjPpty__ros_msg_type *>(untyped_ros_message);
  // Field name: idn
  {
    cdr >> ros_message->idn;
  }

  // Field name: sts
  {
    cdr >> ros_message->sts;
  }

  // Field name: mdlofmtn
  {
    cdr >> ros_message->mdlofmtn;
  }

  // Field name: trfcsceno
  {
    cdr >> ros_message->trfcsceno;
  }

  // Field name: cllsnmtgtnbybrkgprimqly
  {
    cdr >> ros_message->cllsnmtgtnbybrkgprimqly;
  }

  // Field name: cllsnmtgtnbybrkgsecqly
  {
    cdr >> ros_message->cllsnmtgtnbybrkgsecqly;
  }

  // Field name: cllsnwarnfwdqly
  {
    cdr >> ros_message->cllsnwarnfwdqly;
  }

  // Field name: trfcjamassiqly
  {
    cdr >> ros_message->trfcjamassiqly;
  }

  // Field name: dstlatfrommidoflaneselfqly
  {
    cdr >> ros_message->dstlatfrommidoflaneselfqly;
  }

  // Field name: emgylanekeepaidposnqly
  {
    cdr >> ros_message->emgylanekeepaidposnqly;
  }

  // Field name: fusnsrc
  {
    cdr >> ros_message->fusnsrc;
  }

  // Field name: posnlgtstdde
  {
    cdr >> ros_message->posnlgtstdde;
  }

  // Field name: posnlatstdde
  {
    cdr >> ros_message->posnlatstdde;
  }

  // Field name: agdirstdde
  {
    cdr >> ros_message->agdirstdde;
  }

  // Field name: spdstdde
  {
    cdr >> ros_message->spdstdde;
  }

  // Field name: astdde
  {
    cdr >> ros_message->astdde;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: visnid
  {
    cdr >> ros_message->visnid;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t get_serialized_size_deva_aeb_msgs__msg__SFObjPpty(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SFObjPpty__ros_msg_type * ros_message = static_cast<const _SFObjPpty__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name idn
  {
    size_t item_size = sizeof(ros_message->idn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sts
  {
    size_t item_size = sizeof(ros_message->sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mdlofmtn
  {
    size_t item_size = sizeof(ros_message->mdlofmtn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trfcsceno
  {
    size_t item_size = sizeof(ros_message->trfcsceno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cllsnmtgtnbybrkgprimqly
  {
    size_t item_size = sizeof(ros_message->cllsnmtgtnbybrkgprimqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cllsnmtgtnbybrkgsecqly
  {
    size_t item_size = sizeof(ros_message->cllsnmtgtnbybrkgsecqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cllsnwarnfwdqly
  {
    size_t item_size = sizeof(ros_message->cllsnwarnfwdqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trfcjamassiqly
  {
    size_t item_size = sizeof(ros_message->trfcjamassiqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dstlatfrommidoflaneselfqly
  {
    size_t item_size = sizeof(ros_message->dstlatfrommidoflaneselfqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emgylanekeepaidposnqly
  {
    size_t item_size = sizeof(ros_message->emgylanekeepaidposnqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusnsrc
  {
    size_t item_size = sizeof(ros_message->fusnsrc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posnlgtstdde
  {
    size_t item_size = sizeof(ros_message->posnlgtstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posnlatstdde
  {
    size_t item_size = sizeof(ros_message->posnlatstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agdirstdde
  {
    size_t item_size = sizeof(ros_message->agdirstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spdstdde
  {
    size_t item_size = sizeof(ros_message->spdstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name astdde
  {
    size_t item_size = sizeof(ros_message->astdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visnid
  {
    size_t item_size = sizeof(ros_message->visnid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SFObjPpty__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_aeb_msgs__msg__SFObjPpty(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_aeb_msgs
size_t max_serialized_size_deva_aeb_msgs__msg__SFObjPpty(
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

  // member: idn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mdlofmtn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trfcsceno
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cllsnmtgtnbybrkgprimqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cllsnmtgtnbybrkgsecqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cllsnwarnfwdqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trfcjamassiqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dstlatfrommidoflaneselfqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emgylanekeepaidposnqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fusnsrc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: posnlgtstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: posnlatstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agdirstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: spdstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: astdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: visnid
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
    using DataType = deva_aeb_msgs__msg__SFObjPpty;
    is_plain =
      (
      offsetof(DataType, visnid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SFObjPpty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_aeb_msgs__msg__SFObjPpty(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SFObjPpty = {
  "deva_aeb_msgs::msg",
  "SFObjPpty",
  _SFObjPpty__cdr_serialize,
  _SFObjPpty__cdr_deserialize,
  _SFObjPpty__get_serialized_size,
  _SFObjPpty__max_serialized_size
};

static rosidl_message_type_support_t _SFObjPpty__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SFObjPpty,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_aeb_msgs, msg, SFObjPpty)() {
  return &_SFObjPpty__type_support;
}

#if defined(__cplusplus)
}
#endif
