// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fault_diagnosis/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fault_diagnosis/msg/detail/odd_status_array__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace fault_diagnosis
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fault_diagnosis
cdr_serialize(
  const fault_diagnosis::msg::ODDStatusArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fault_diagnosis
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fault_diagnosis::msg::ODDStatusArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fault_diagnosis
get_serialized_size(
  const fault_diagnosis::msg::ODDStatusArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fault_diagnosis
max_serialized_size_ODDStatusArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fault_diagnosis

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fault_diagnosis
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fault_diagnosis, msg, ODDStatusArray)();

#ifdef __cplusplus
}
#endif

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
