// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/RVDynObstacleResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle_result__struct.hpp"
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

void RVDynObstacleResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::RVDynObstacleResult(_init);
}

void RVDynObstacleResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::RVDynObstacleResult *>(message_memory);
  typed_message->~RVDynObstacleResult();
}

size_t size_function__RVDynObstacleResult__dynamic_obs_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::RVDynObstacleList> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RVDynObstacleResult__dynamic_obs_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::RVDynObstacleList> *>(untyped_member);
  return &member[index];
}

void * get_function__RVDynObstacleResult__dynamic_obs_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::RVDynObstacleList> *>(untyped_member);
  return &member[index];
}

void fetch_function__RVDynObstacleResult__dynamic_obs_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::RVDynObstacleList *>(
    get_const_function__RVDynObstacleResult__dynamic_obs_list(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::RVDynObstacleList *>(untyped_value);
  value = item;
}

void assign_function__RVDynObstacleResult__dynamic_obs_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::RVDynObstacleList *>(
    get_function__RVDynObstacleResult__dynamic_obs_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::RVDynObstacleList *>(untyped_value);
  item = value;
}

void resize_function__RVDynObstacleResult__dynamic_obs_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::RVDynObstacleList> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RVDynObstacleResult__extra_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RVDynObstacleResult__extra_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__RVDynObstacleResult__extra_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__RVDynObstacleResult__extra_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::ExtraInfo *>(
    get_const_function__RVDynObstacleResult__extra_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::ExtraInfo *>(untyped_value);
  value = item;
}

void assign_function__RVDynObstacleResult__extra_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::ExtraInfo *>(
    get_function__RVDynObstacleResult__extra_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::ExtraInfo *>(untyped_value);
  item = value;
}

void resize_function__RVDynObstacleResult__extra_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RVDynObstacleResult_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RVDynObstacleResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "translation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RVDynObstacleResult, translation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RVDynObstacleResult, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dynamic_obs_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::RVDynObstacleList>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RVDynObstacleResult, dynamic_obs_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__RVDynObstacleResult__dynamic_obs_list,  // size() function pointer
    get_const_function__RVDynObstacleResult__dynamic_obs_list,  // get_const(index) function pointer
    get_function__RVDynObstacleResult__dynamic_obs_list,  // get(index) function pointer
    fetch_function__RVDynObstacleResult__dynamic_obs_list,  // fetch(index, &value) function pointer
    assign_function__RVDynObstacleResult__dynamic_obs_list,  // assign(index, value) function pointer
    resize_function__RVDynObstacleResult__dynamic_obs_list  // resize(index) function pointer
  },
  {
    "extra_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::ExtraInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RVDynObstacleResult, extra_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__RVDynObstacleResult__extra_infos,  // size() function pointer
    get_const_function__RVDynObstacleResult__extra_infos,  // get_const(index) function pointer
    get_function__RVDynObstacleResult__extra_infos,  // get(index) function pointer
    fetch_function__RVDynObstacleResult__extra_infos,  // fetch(index, &value) function pointer
    assign_function__RVDynObstacleResult__extra_infos,  // assign(index, value) function pointer
    resize_function__RVDynObstacleResult__extra_infos  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RVDynObstacleResult_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "RVDynObstacleResult",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs::msg::RVDynObstacleResult),
  RVDynObstacleResult_message_member_array,  // message members
  RVDynObstacleResult_init_function,  // function to initialize message memory (memory has to be allocated)
  RVDynObstacleResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RVDynObstacleResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RVDynObstacleResult_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::RVDynObstacleResult>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RVDynObstacleResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, RVDynObstacleResult)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RVDynObstacleResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
