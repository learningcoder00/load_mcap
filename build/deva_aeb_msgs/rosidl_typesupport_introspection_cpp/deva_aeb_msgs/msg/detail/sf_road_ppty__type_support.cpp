// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.hpp"
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

void SFRoadPpty_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_aeb_msgs::msg::SFRoadPpty(_init);
}

void SFRoadPpty_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_aeb_msgs::msg::SFRoadPpty *>(message_memory);
  typed_message->~SFRoadPpty();
}

size_t size_function__SFRoadPpty__crvtrate(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SFRoadPpty__crvtrate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SFRoadPpty__crvtrate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFRoadPpty__crvtrate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SFRoadPpty__crvtrate(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SFRoadPpty__crvtrate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SFRoadPpty__crvtrate(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SFRoadPpty__seglen(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SFRoadPpty__seglen(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SFRoadPpty__seglen(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFRoadPpty__seglen(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SFRoadPpty__seglen(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SFRoadPpty__seglen(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SFRoadPpty__seglen(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SFRoadPpty__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__SFRoadPpty__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__SFRoadPpty__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFRoadPpty__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFRoadPpty__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFRoadPpty__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFRoadPpty__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SFRoadPpty__titohiqly(const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * get_const_function__SFRoadPpty__titohiqly(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 32> *>(untyped_member);
  return &member[index];
}

void * get_function__SFRoadPpty__titohiqly(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 32> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFRoadPpty__titohiqly(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SFRoadPpty__titohiqly(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SFRoadPpty__titohiqly(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SFRoadPpty__titohiqly(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SFRoadPpty__objidtitohiqly(const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * get_const_function__SFRoadPpty__objidtitohiqly(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 32> *>(untyped_member);
  return &member[index];
}

void * get_function__SFRoadPpty__objidtitohiqly(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 32> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFRoadPpty__objidtitohiqly(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFRoadPpty__objidtitohiqly(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFRoadPpty__objidtitohiqly(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFRoadPpty__objidtitohiqly(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SFRoadPpty_message_member_array[19] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, timestamp),  // bytes offset in struct
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
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanewidth",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, lanewidth),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offslat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, offslat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "agdir",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, agdir),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crvt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, crvt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crvtrate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, crvtrate),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFRoadPpty__crvtrate,  // size() function pointer
    get_const_function__SFRoadPpty__crvtrate,  // get_const(index) function pointer
    get_function__SFRoadPpty__crvtrate,  // get(index) function pointer
    fetch_function__SFRoadPpty__crvtrate,  // fetch(index, &value) function pointer
    assign_function__SFRoadPpty__crvtrate,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crvtratevalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, crvtratevalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seglen",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, seglen),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFRoadPpty__seglen,  // size() function pointer
    get_const_function__SFRoadPpty__seglen,  // get_const(index) function pointer
    get_function__SFRoadPpty__seglen,  // get(index) function pointer
    fetch_function__SFRoadPpty__seglen,  // fetch(index, &value) function pointer
    assign_function__SFRoadPpty__seglen,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seglenvalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, seglenvalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "strtd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, strtd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vld",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, vld),  // bytes offset in struct
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
    2,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFRoadPpty__reserved,  // size() function pointer
    get_const_function__SFRoadPpty__reserved,  // get_const(index) function pointer
    get_function__SFRoadPpty__reserved,  // get(index) function pointer
    fetch_function__SFRoadPpty__reserved,  // fetch(index, &value) function pointer
    assign_function__SFRoadPpty__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "titohiqly",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, titohiqly),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFRoadPpty__titohiqly,  // size() function pointer
    get_const_function__SFRoadPpty__titohiqly,  // get_const(index) function pointer
    get_function__SFRoadPpty__titohiqly,  // get(index) function pointer
    fetch_function__SFRoadPpty__titohiqly,  // fetch(index, &value) function pointer
    assign_function__SFRoadPpty__titohiqly,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "titohiqlyvalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, titohiqlyvalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objidtitohiqly",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, objidtitohiqly),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFRoadPpty__objidtitohiqly,  // size() function pointer
    get_const_function__SFRoadPpty__objidtitohiqly,  // get_const(index) function pointer
    get_function__SFRoadPpty__objidtitohiqly,  // get(index) function pointer
    fetch_function__SFRoadPpty__objidtitohiqly,  // fetch(index, &value) function pointer
    assign_function__SFRoadPpty__objidtitohiqly,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objidtitohiqlyvalidsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, objidtitohiqlyvalidsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distancewithlowconfidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, distancewithlowconfidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distancewithhiahconfidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFRoadPpty, distancewithhiahconfidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SFRoadPpty_message_members = {
  "deva_aeb_msgs::msg",  // message namespace
  "SFRoadPpty",  // message name
  19,  // number of fields
  sizeof(deva_aeb_msgs::msg::SFRoadPpty),
  SFRoadPpty_message_member_array,  // message members
  SFRoadPpty_init_function,  // function to initialize message memory (memory has to be allocated)
  SFRoadPpty_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SFRoadPpty_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SFRoadPpty_message_members,
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
get_message_type_support_handle<deva_aeb_msgs::msg::SFRoadPpty>()
{
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFRoadPpty_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_aeb_msgs, msg, SFRoadPpty)() {
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFRoadPpty_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
