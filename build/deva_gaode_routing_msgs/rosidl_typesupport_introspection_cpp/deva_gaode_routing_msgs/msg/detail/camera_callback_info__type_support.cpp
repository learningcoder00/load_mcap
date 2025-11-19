// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/CameraCallbackInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraCallbackInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::CameraCallbackInfo(_init);
}

void CameraCallbackInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::CameraCallbackInfo *>(message_memory);
  typed_message->~CameraCallbackInfo();
}

size_t size_function__CameraCallbackInfo__camera_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CameraInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CameraCallbackInfo__camera_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraCallbackInfo__camera_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CameraInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraCallbackInfo__camera_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CameraInfo *>(
    get_const_function__CameraCallbackInfo__camera_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::CameraInfo *>(untyped_value);
  value = item;
}

void assign_function__CameraCallbackInfo__camera_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::CameraInfo *>(
    get_function__CameraCallbackInfo__camera_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::CameraInfo *>(untyped_value);
  item = value;
}

void resize_function__CameraCallbackInfo__camera_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::CameraInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraCallbackInfo_message_member_array[2] = {
  {
    "inter_remain_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::CameraCallbackInfo, inter_remain_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::CameraInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::CameraCallbackInfo, camera_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraCallbackInfo__camera_info,  // size() function pointer
    get_const_function__CameraCallbackInfo__camera_info,  // get_const(index) function pointer
    get_function__CameraCallbackInfo__camera_info,  // get(index) function pointer
    fetch_function__CameraCallbackInfo__camera_info,  // fetch(index, &value) function pointer
    assign_function__CameraCallbackInfo__camera_info,  // assign(index, value) function pointer
    resize_function__CameraCallbackInfo__camera_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraCallbackInfo_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "CameraCallbackInfo",  // message name
  2,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::CameraCallbackInfo),
  CameraCallbackInfo_message_member_array,  // message members
  CameraCallbackInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraCallbackInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraCallbackInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraCallbackInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::CameraCallbackInfo>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::CameraCallbackInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, CameraCallbackInfo)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::CameraCallbackInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
