// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficDetectData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::TrafficDetectData(_init);
}

void TrafficDetectData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::TrafficDetectData *>(message_memory);
  typed_message->~TrafficDetectData();
}

size_t size_function__TrafficDetectData__f120trafficobjects(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__TrafficDetectData__f120trafficobjects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::TrafficObject, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficDetectData__f120trafficobjects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::TrafficObject, 64> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficDetectData__f120trafficobjects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::TrafficObject *>(
    get_const_function__TrafficDetectData__f120trafficobjects(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::TrafficObject *>(untyped_value);
  value = item;
}

void assign_function__TrafficDetectData__f120trafficobjects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::TrafficObject *>(
    get_function__TrafficDetectData__f120trafficobjects(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::TrafficObject *>(untyped_value);
  item = value;
}

size_t size_function__TrafficDetectData__f30trafficobjects(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__TrafficDetectData__f30trafficobjects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::TrafficObject, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficDetectData__f30trafficobjects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::TrafficObject, 64> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficDetectData__f30trafficobjects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::TrafficObject *>(
    get_const_function__TrafficDetectData__f30trafficobjects(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::TrafficObject *>(untyped_value);
  value = item;
}

void assign_function__TrafficDetectData__f30trafficobjects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::TrafficObject *>(
    get_function__TrafficDetectData__f30trafficobjects(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::TrafficObject *>(untyped_value);
  item = value;
}

size_t size_function__TrafficDetectData__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__TrafficDetectData__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficDetectData__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficDetectData__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__TrafficDetectData__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__TrafficDetectData__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__TrafficDetectData__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficDetectData_message_member_array[14] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, header),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(deva_perception_msgs::msg::TrafficDetectData, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "abs_vel_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, abs_vel_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "abs_acc_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, abs_acc_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, vel_motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc_motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, acc_motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f120_object_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, f120_object_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f30_object_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, f30_object_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f120trafficobjects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficObject>(),  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, f120trafficobjects),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficDetectData__f120trafficobjects,  // size() function pointer
    get_const_function__TrafficDetectData__f120trafficobjects,  // get_const(index) function pointer
    get_function__TrafficDetectData__f120trafficobjects,  // get(index) function pointer
    fetch_function__TrafficDetectData__f120trafficobjects,  // fetch(index, &value) function pointer
    assign_function__TrafficDetectData__f120trafficobjects,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "f30trafficobjects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficObject>(),  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, f30trafficobjects),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficDetectData__f30trafficobjects,  // size() function pointer
    get_const_function__TrafficDetectData__f30trafficobjects,  // get_const(index) function pointer
    get_function__TrafficDetectData__f30trafficobjects,  // get(index) function pointer
    fetch_function__TrafficDetectData__f30trafficobjects,  // fetch(index, &value) function pointer
    assign_function__TrafficDetectData__f30trafficobjects,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "e2eobjects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::E2eResult>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, e2eobjects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_of_day",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficDetectData, time_of_day),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::TrafficDetectData, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficDetectData__reserved,  // size() function pointer
    get_const_function__TrafficDetectData__reserved,  // get_const(index) function pointer
    get_function__TrafficDetectData__reserved,  // get(index) function pointer
    fetch_function__TrafficDetectData__reserved,  // fetch(index, &value) function pointer
    assign_function__TrafficDetectData__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficDetectData_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "TrafficDetectData",  // message name
  14,  // number of fields
  sizeof(deva_perception_msgs::msg::TrafficDetectData),
  TrafficDetectData_message_member_array,  // message members
  TrafficDetectData_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficDetectData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficDetectData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficDetectData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::TrafficDetectData>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficDetectData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, TrafficDetectData)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficDetectData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
