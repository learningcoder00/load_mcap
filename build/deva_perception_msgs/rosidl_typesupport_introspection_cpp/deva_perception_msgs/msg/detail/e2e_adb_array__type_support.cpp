// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.hpp"
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

void E2eAdbArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::E2eAdbArray(_init);
}

void E2eAdbArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::E2eAdbArray *>(message_memory);
  typed_message->~E2eAdbArray();
}

size_t size_function__E2eAdbArray__e2e_adb_veh_obj(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eAdb> *>(untyped_member);
  return member->size();
}

const void * get_const_function__E2eAdbArray__e2e_adb_veh_obj(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eAdb> *>(untyped_member);
  return &member[index];
}

void * get_function__E2eAdbArray__e2e_adb_veh_obj(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eAdb> *>(untyped_member);
  return &member[index];
}

void fetch_function__E2eAdbArray__e2e_adb_veh_obj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::E2eAdb *>(
    get_const_function__E2eAdbArray__e2e_adb_veh_obj(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::E2eAdb *>(untyped_value);
  value = item;
}

void assign_function__E2eAdbArray__e2e_adb_veh_obj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::E2eAdb *>(
    get_function__E2eAdbArray__e2e_adb_veh_obj(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::E2eAdb *>(untyped_value);
  item = value;
}

void resize_function__E2eAdbArray__e2e_adb_veh_obj(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eAdb> *>(untyped_member);
  member->resize(size);
}

size_t size_function__E2eAdbArray__e2e_adb_traffic_sign(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign> *>(untyped_member);
  return member->size();
}

const void * get_const_function__E2eAdbArray__e2e_adb_traffic_sign(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign> *>(untyped_member);
  return &member[index];
}

void * get_function__E2eAdbArray__e2e_adb_traffic_sign(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign> *>(untyped_member);
  return &member[index];
}

void fetch_function__E2eAdbArray__e2e_adb_traffic_sign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::E2eAdbTrafficSign *>(
    get_const_function__E2eAdbArray__e2e_adb_traffic_sign(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::E2eAdbTrafficSign *>(untyped_value);
  value = item;
}

void assign_function__E2eAdbArray__e2e_adb_traffic_sign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::E2eAdbTrafficSign *>(
    get_function__E2eAdbArray__e2e_adb_traffic_sign(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::E2eAdbTrafficSign *>(untyped_value);
  item = value;
}

void resize_function__E2eAdbArray__e2e_adb_traffic_sign(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember E2eAdbArray_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_closing_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, pre_crash_front_data_closing_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_object_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, pre_crash_front_data_object_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_overlap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, pre_crash_front_data_overlap),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_time_to_impact",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, pre_crash_front_data_time_to_impact),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lit_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, lit_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_sts_for_ahbc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, camera_sts_for_ahbc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "too_many_cars",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, too_many_cars),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "e2e_adb_veh_obj",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::E2eAdb>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, e2e_adb_veh_obj),  // bytes offset in struct
    nullptr,  // default value
    size_function__E2eAdbArray__e2e_adb_veh_obj,  // size() function pointer
    get_const_function__E2eAdbArray__e2e_adb_veh_obj,  // get_const(index) function pointer
    get_function__E2eAdbArray__e2e_adb_veh_obj,  // get(index) function pointer
    fetch_function__E2eAdbArray__e2e_adb_veh_obj,  // fetch(index, &value) function pointer
    assign_function__E2eAdbArray__e2e_adb_veh_obj,  // assign(index, value) function pointer
    resize_function__E2eAdbArray__e2e_adb_veh_obj  // resize(index) function pointer
  },
  {
    "e2e_adb_traffic_sign",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::E2eAdbTrafficSign>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::E2eAdbArray, e2e_adb_traffic_sign),  // bytes offset in struct
    nullptr,  // default value
    size_function__E2eAdbArray__e2e_adb_traffic_sign,  // size() function pointer
    get_const_function__E2eAdbArray__e2e_adb_traffic_sign,  // get_const(index) function pointer
    get_function__E2eAdbArray__e2e_adb_traffic_sign,  // get(index) function pointer
    fetch_function__E2eAdbArray__e2e_adb_traffic_sign,  // fetch(index, &value) function pointer
    assign_function__E2eAdbArray__e2e_adb_traffic_sign,  // assign(index, value) function pointer
    resize_function__E2eAdbArray__e2e_adb_traffic_sign  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers E2eAdbArray_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "E2eAdbArray",  // message name
  10,  // number of fields
  sizeof(deva_perception_msgs::msg::E2eAdbArray),
  E2eAdbArray_message_member_array,  // message members
  E2eAdbArray_init_function,  // function to initialize message memory (memory has to be allocated)
  E2eAdbArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t E2eAdbArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &E2eAdbArray_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::E2eAdbArray>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::E2eAdbArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, E2eAdbArray)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::E2eAdbArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
