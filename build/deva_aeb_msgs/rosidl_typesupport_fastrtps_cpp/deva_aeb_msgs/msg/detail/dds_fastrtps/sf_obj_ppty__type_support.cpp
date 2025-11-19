// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.hpp"

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
  const deva_aeb_msgs::msg::SFObjPpty & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: idn
  cdr << ros_message.idn;
  // Member: sts
  cdr << ros_message.sts;
  // Member: mdlofmtn
  cdr << ros_message.mdlofmtn;
  // Member: trfcsceno
  cdr << ros_message.trfcsceno;
  // Member: cllsnmtgtnbybrkgprimqly
  cdr << ros_message.cllsnmtgtnbybrkgprimqly;
  // Member: cllsnmtgtnbybrkgsecqly
  cdr << ros_message.cllsnmtgtnbybrkgsecqly;
  // Member: cllsnwarnfwdqly
  cdr << ros_message.cllsnwarnfwdqly;
  // Member: trfcjamassiqly
  cdr << ros_message.trfcjamassiqly;
  // Member: dstlatfrommidoflaneselfqly
  cdr << ros_message.dstlatfrommidoflaneselfqly;
  // Member: emgylanekeepaidposnqly
  cdr << ros_message.emgylanekeepaidposnqly;
  // Member: fusnsrc
  cdr << ros_message.fusnsrc;
  // Member: posnlgtstdde
  cdr << ros_message.posnlgtstdde;
  // Member: posnlatstdde
  cdr << ros_message.posnlatstdde;
  // Member: agdirstdde
  cdr << ros_message.agdirstdde;
  // Member: spdstdde
  cdr << ros_message.spdstdde;
  // Member: astdde
  cdr << ros_message.astdde;
  // Member: reserved
  cdr << ros_message.reserved;
  // Member: visnid
  cdr << ros_message.visnid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_aeb_msgs::msg::SFObjPpty & ros_message)
{
  // Member: idn
  cdr >> ros_message.idn;

  // Member: sts
  cdr >> ros_message.sts;

  // Member: mdlofmtn
  cdr >> ros_message.mdlofmtn;

  // Member: trfcsceno
  cdr >> ros_message.trfcsceno;

  // Member: cllsnmtgtnbybrkgprimqly
  cdr >> ros_message.cllsnmtgtnbybrkgprimqly;

  // Member: cllsnmtgtnbybrkgsecqly
  cdr >> ros_message.cllsnmtgtnbybrkgsecqly;

  // Member: cllsnwarnfwdqly
  cdr >> ros_message.cllsnwarnfwdqly;

  // Member: trfcjamassiqly
  cdr >> ros_message.trfcjamassiqly;

  // Member: dstlatfrommidoflaneselfqly
  cdr >> ros_message.dstlatfrommidoflaneselfqly;

  // Member: emgylanekeepaidposnqly
  cdr >> ros_message.emgylanekeepaidposnqly;

  // Member: fusnsrc
  cdr >> ros_message.fusnsrc;

  // Member: posnlgtstdde
  cdr >> ros_message.posnlgtstdde;

  // Member: posnlatstdde
  cdr >> ros_message.posnlatstdde;

  // Member: agdirstdde
  cdr >> ros_message.agdirstdde;

  // Member: spdstdde
  cdr >> ros_message.spdstdde;

  // Member: astdde
  cdr >> ros_message.astdde;

  // Member: reserved
  cdr >> ros_message.reserved;

  // Member: visnid
  cdr >> ros_message.visnid;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
get_serialized_size(
  const deva_aeb_msgs::msg::SFObjPpty & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: idn
  {
    size_t item_size = sizeof(ros_message.idn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sts
  {
    size_t item_size = sizeof(ros_message.sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mdlofmtn
  {
    size_t item_size = sizeof(ros_message.mdlofmtn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trfcsceno
  {
    size_t item_size = sizeof(ros_message.trfcsceno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cllsnmtgtnbybrkgprimqly
  {
    size_t item_size = sizeof(ros_message.cllsnmtgtnbybrkgprimqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cllsnmtgtnbybrkgsecqly
  {
    size_t item_size = sizeof(ros_message.cllsnmtgtnbybrkgsecqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cllsnwarnfwdqly
  {
    size_t item_size = sizeof(ros_message.cllsnwarnfwdqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trfcjamassiqly
  {
    size_t item_size = sizeof(ros_message.trfcjamassiqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dstlatfrommidoflaneselfqly
  {
    size_t item_size = sizeof(ros_message.dstlatfrommidoflaneselfqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emgylanekeepaidposnqly
  {
    size_t item_size = sizeof(ros_message.emgylanekeepaidposnqly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fusnsrc
  {
    size_t item_size = sizeof(ros_message.fusnsrc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posnlgtstdde
  {
    size_t item_size = sizeof(ros_message.posnlgtstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posnlatstdde
  {
    size_t item_size = sizeof(ros_message.posnlatstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agdirstdde
  {
    size_t item_size = sizeof(ros_message.agdirstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spdstdde
  {
    size_t item_size = sizeof(ros_message.spdstdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: astdde
  {
    size_t item_size = sizeof(ros_message.astdde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved
  {
    size_t item_size = sizeof(ros_message.reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: visnid
  {
    size_t item_size = sizeof(ros_message.visnid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_aeb_msgs
max_serialized_size_SFObjPpty(
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


  // Member: idn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mdlofmtn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trfcsceno
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cllsnmtgtnbybrkgprimqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cllsnmtgtnbybrkgsecqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cllsnwarnfwdqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trfcjamassiqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dstlatfrommidoflaneselfqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emgylanekeepaidposnqly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fusnsrc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: posnlgtstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: posnlatstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agdirstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: spdstdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: astdde
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: visnid
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
    using DataType = deva_aeb_msgs::msg::SFObjPpty;
    is_plain =
      (
      offsetof(DataType, visnid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SFObjPpty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjPpty *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SFObjPpty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_aeb_msgs::msg::SFObjPpty *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SFObjPpty__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_aeb_msgs::msg::SFObjPpty *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SFObjPpty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SFObjPpty(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SFObjPpty__callbacks = {
  "deva_aeb_msgs::msg",
  "SFObjPpty",
  _SFObjPpty__cdr_serialize,
  _SFObjPpty__cdr_deserialize,
  _SFObjPpty__get_serialized_size,
  _SFObjPpty__max_serialized_size
};

static rosidl_message_type_support_t _SFObjPpty__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SFObjPpty__callbacks,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFObjPpty>()
{
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjPpty__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_aeb_msgs, msg, SFObjPpty)() {
  return &deva_aeb_msgs::msg::typesupport_fastrtps_cpp::_SFObjPpty__handle;
}

#ifdef __cplusplus
}
#endif
