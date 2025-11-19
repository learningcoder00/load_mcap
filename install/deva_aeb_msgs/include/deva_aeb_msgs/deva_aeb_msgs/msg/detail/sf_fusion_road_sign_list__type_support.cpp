// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_aeb_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SFFusionRoadSignList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_aeb_msgs::msg::SFFusionRoadSignList(_init);
}

void SFFusionRoadSignList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_aeb_msgs::msg::SFFusionRoadSignList *>(message_memory);
  typed_message->~SFFusionRoadSignList();
}

size_t size_function__SFFusionRoadSignList__sllist(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__SFFusionRoadSignList__sllist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_aeb_msgs::msg::SFStopline, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionRoadSignList__sllist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_aeb_msgs::msg::SFStopline, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionRoadSignList__sllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_aeb_msgs::msg::SFStopline *>(
    get_const_function__SFFusionRoadSignList__sllist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_aeb_msgs::msg::SFStopline *>(untyped_value);
  value = item;
}

void assign_function__SFFusionRoadSignList__sllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_aeb_msgs::msg::SFStopline *>(
    get_function__SFFusionRoadSignList__sllist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_aeb_msgs::msg::SFStopline *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionRoadSignList__cwlist(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SFFusionRoadSignList__cwlist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_aeb_msgs::msg::SFCrosswalk, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionRoadSignList__cwlist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_aeb_msgs::msg::SFCrosswalk, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionRoadSignList__cwlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_aeb_msgs::msg::SFCrosswalk *>(
    get_const_function__SFFusionRoadSignList__cwlist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_aeb_msgs::msg::SFCrosswalk *>(untyped_value);
  value = item;
}

void assign_function__SFFusionRoadSignList__cwlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_aeb_msgs::msg::SFCrosswalk *>(
    get_function__SFFusionRoadSignList__cwlist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_aeb_msgs::msg::SFCrosswalk *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionRoadSignList__ralist(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__SFFusionRoadSignList__ralist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_aeb_msgs::msg::SFRoadArrow, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionRoadSignList__ralist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_aeb_msgs::msg::SFRoadArrow, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionRoadSignList__ralist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_aeb_msgs::msg::SFRoadArrow *>(
    get_const_function__SFFusionRoadSignList__ralist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_aeb_msgs::msg::SFRoadArrow *>(untyped_value);
  value = item;
}

void assign_function__SFFusionRoadSignList__ralist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_aeb_msgs::msg::SFRoadArrow *>(
    get_function__SFFusionRoadSignList__ralist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_aeb_msgs::msg::SFRoadArrow *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionRoadSignList__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SFFusionRoadSignList__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionRoadSignList__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionRoadSignList__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFFusionRoadSignList__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFFusionRoadSignList__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFFusionRoadSignList__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SFFusionRoadSignList_message_member_array[11] = {
  {
    "sllist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_aeb_msgs::msg::SFStopline>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, sllist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionRoadSignList__sllist,  // size() function pointer
    get_const_function__SFFusionRoadSignList__sllist,  // get_const(index) function pointer
    get_function__SFFusionRoadSignList__sllist,  // get(index) function pointer
    fetch_function__SFFusionRoadSignList__sllist,  // fetch(index, &value) function pointer
    assign_function__SFFusionRoadSignList__sllist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cwlist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_aeb_msgs::msg::SFCrosswalk>(),  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, cwlist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionRoadSignList__cwlist,  // size() function pointer
    get_const_function__SFFusionRoadSignList__cwlist,  // get_const(index) function pointer
    get_function__SFFusionRoadSignList__cwlist,  // get(index) function pointer
    fetch_function__SFFusionRoadSignList__cwlist,  // fetch(index, &value) function pointer
    assign_function__SFFusionRoadSignList__cwlist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ralist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_aeb_msgs::msg::SFRoadArrow>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, ralist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionRoadSignList__ralist,  // size() function pointer
    get_const_function__SFFusionRoadSignList__ralist,  // get_const(index) function pointer
    get_function__SFFusionRoadSignList__ralist,  // get(index) function pointer
    fetch_function__SFFusionRoadSignList__ralist,  // fetch(index, &value) function pointer
    assign_function__SFFusionRoadSignList__ralist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "framenum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cwcount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, cwcount),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "racount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, racount),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "slvalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, slvalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cwvalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, cwvalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ravalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, ravalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionRoadSignList, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionRoadSignList__reserved,  // size() function pointer
    get_const_function__SFFusionRoadSignList__reserved,  // get_const(index) function pointer
    get_function__SFFusionRoadSignList__reserved,  // get(index) function pointer
    fetch_function__SFFusionRoadSignList__reserved,  // fetch(index, &value) function pointer
    assign_function__SFFusionRoadSignList__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SFFusionRoadSignList_message_members = {
  "deva_aeb_msgs::msg",  // message namespace
  "SFFusionRoadSignList",  // message name
  11,  // number of fields
  sizeof(deva_aeb_msgs::msg::SFFusionRoadSignList),
  SFFusionRoadSignList_message_member_array,  // message members
  SFFusionRoadSignList_init_function,  // function to initialize message memory (memory has to be allocated)
  SFFusionRoadSignList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SFFusionRoadSignList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SFFusionRoadSignList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionRoadSignList>()
{
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionRoadSignList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_aeb_msgs, msg, SFFusionRoadSignList)() {
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionRoadSignList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
