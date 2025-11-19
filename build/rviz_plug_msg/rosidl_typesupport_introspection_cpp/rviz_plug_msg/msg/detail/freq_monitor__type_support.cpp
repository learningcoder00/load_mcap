// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_plug_msg/msg/detail/freq_monitor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rviz_plug_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FreqMonitor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_plug_msg::msg::FreqMonitor(_init);
}

void FreqMonitor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_plug_msg::msg::FreqMonitor *>(message_memory);
  typed_message->~FreqMonitor();
}

size_t size_function__FreqMonitor__topic_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FreqMonitor__topic_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FreqMonitor__topic_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FreqMonitor__topic_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FreqMonitor__topic_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FreqMonitor__topic_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FreqMonitor__topic_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FreqMonitor__topic_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FreqMonitor__freqs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FreqMonitor__freqs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FreqMonitor__freqs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FreqMonitor__freqs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FreqMonitor__freqs(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FreqMonitor__freqs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FreqMonitor__freqs(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FreqMonitor__freqs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FreqMonitor__min_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FreqMonitor__min_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FreqMonitor__min_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FreqMonitor__min_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FreqMonitor__min_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FreqMonitor__min_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FreqMonitor__min_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FreqMonitor__min_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FreqMonitor__max_thresholds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FreqMonitor__max_thresholds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__FreqMonitor__max_thresholds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__FreqMonitor__max_thresholds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__FreqMonitor__max_thresholds(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__FreqMonitor__max_thresholds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__FreqMonitor__max_thresholds(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__FreqMonitor__max_thresholds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FreqMonitor_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valid_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, valid_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topic_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, topic_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__FreqMonitor__topic_names,  // size() function pointer
    get_const_function__FreqMonitor__topic_names,  // get_const(index) function pointer
    get_function__FreqMonitor__topic_names,  // get(index) function pointer
    fetch_function__FreqMonitor__topic_names,  // fetch(index, &value) function pointer
    assign_function__FreqMonitor__topic_names,  // assign(index, value) function pointer
    resize_function__FreqMonitor__topic_names  // resize(index) function pointer
  },
  {
    "freqs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, freqs),  // bytes offset in struct
    nullptr,  // default value
    size_function__FreqMonitor__freqs,  // size() function pointer
    get_const_function__FreqMonitor__freqs,  // get_const(index) function pointer
    get_function__FreqMonitor__freqs,  // get(index) function pointer
    fetch_function__FreqMonitor__freqs,  // fetch(index, &value) function pointer
    assign_function__FreqMonitor__freqs,  // assign(index, value) function pointer
    resize_function__FreqMonitor__freqs  // resize(index) function pointer
  },
  {
    "min_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, min_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__FreqMonitor__min_thresholds,  // size() function pointer
    get_const_function__FreqMonitor__min_thresholds,  // get_const(index) function pointer
    get_function__FreqMonitor__min_thresholds,  // get(index) function pointer
    fetch_function__FreqMonitor__min_thresholds,  // fetch(index, &value) function pointer
    assign_function__FreqMonitor__min_thresholds,  // assign(index, value) function pointer
    resize_function__FreqMonitor__min_thresholds  // resize(index) function pointer
  },
  {
    "max_thresholds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::FreqMonitor, max_thresholds),  // bytes offset in struct
    nullptr,  // default value
    size_function__FreqMonitor__max_thresholds,  // size() function pointer
    get_const_function__FreqMonitor__max_thresholds,  // get_const(index) function pointer
    get_function__FreqMonitor__max_thresholds,  // get(index) function pointer
    fetch_function__FreqMonitor__max_thresholds,  // fetch(index, &value) function pointer
    assign_function__FreqMonitor__max_thresholds,  // assign(index, value) function pointer
    resize_function__FreqMonitor__max_thresholds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FreqMonitor_message_members = {
  "rviz_plug_msg::msg",  // message namespace
  "FreqMonitor",  // message name
  6,  // number of fields
  sizeof(rviz_plug_msg::msg::FreqMonitor),
  FreqMonitor_message_member_array,  // message members
  FreqMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  FreqMonitor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FreqMonitor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FreqMonitor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rviz_plug_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_plug_msg::msg::FreqMonitor>()
{
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::FreqMonitor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_plug_msg, msg, FreqMonitor)() {
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::FreqMonitor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
