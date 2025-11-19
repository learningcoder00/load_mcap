// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/st_local_map__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void STLocalMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::STLocalMap(_init);
}

void STLocalMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::STLocalMap *>(message_memory);
  typed_message->~STLocalMap();
}

size_t size_function__STLocalMap__channels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::Channel> *>(untyped_member);
  return member->size();
}

const void * get_const_function__STLocalMap__channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::Channel> *>(untyped_member);
  return &member[index];
}

void * get_function__STLocalMap__channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::Channel> *>(untyped_member);
  return &member[index];
}

void fetch_function__STLocalMap__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::Channel *>(
    get_const_function__STLocalMap__channels(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::Channel *>(untyped_value);
  value = item;
}

void assign_function__STLocalMap__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::Channel *>(
    get_function__STLocalMap__channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::Channel *>(untyped_value);
  item = value;
}

void resize_function__STLocalMap__channels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::Channel> *>(untyped_member);
  member->resize(size);
}

size_t size_function__STLocalMap__reference_channals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ReferenceChannal> *>(untyped_member);
  return member->size();
}

const void * get_const_function__STLocalMap__reference_channals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ReferenceChannal> *>(untyped_member);
  return &member[index];
}

void * get_function__STLocalMap__reference_channals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ReferenceChannal> *>(untyped_member);
  return &member[index];
}

void fetch_function__STLocalMap__reference_channals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ReferenceChannal *>(
    get_const_function__STLocalMap__reference_channals(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ReferenceChannal *>(untyped_value);
  value = item;
}

void assign_function__STLocalMap__reference_channals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ReferenceChannal *>(
    get_function__STLocalMap__reference_channals(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ReferenceChannal *>(untyped_value);
  item = value;
}

void resize_function__STLocalMap__reference_channals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ReferenceChannal> *>(untyped_member);
  member->resize(size);
}

size_t size_function__STLocalMap__obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__STLocalMap__obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__STLocalMap__obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__STLocalMap__obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(
    get_const_function__STLocalMap__obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  value = item;
}

void assign_function__STLocalMap__obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(
    get_function__STLocalMap__obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  item = value;
}

void resize_function__STLocalMap__obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__STLocalMap__signals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Signal> *>(untyped_member);
  return member->size();
}

const void * get_const_function__STLocalMap__signals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Signal> *>(untyped_member);
  return &member[index];
}

void * get_function__STLocalMap__signals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Signal> *>(untyped_member);
  return &member[index];
}

void fetch_function__STLocalMap__signals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Signal *>(
    get_const_function__STLocalMap__signals(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Signal *>(untyped_value);
  value = item;
}

void assign_function__STLocalMap__signals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Signal *>(
    get_function__STLocalMap__signals(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Signal *>(untyped_value);
  item = value;
}

void resize_function__STLocalMap__signals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Signal> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember STLocalMap_message_member_array[4] = {
  {
    "channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::Channel>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::STLocalMap, channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__STLocalMap__channels,  // size() function pointer
    get_const_function__STLocalMap__channels,  // get_const(index) function pointer
    get_function__STLocalMap__channels,  // get(index) function pointer
    fetch_function__STLocalMap__channels,  // fetch(index, &value) function pointer
    assign_function__STLocalMap__channels,  // assign(index, value) function pointer
    resize_function__STLocalMap__channels  // resize(index) function pointer
  },
  {
    "reference_channals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ReferenceChannal>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::STLocalMap, reference_channals),  // bytes offset in struct
    nullptr,  // default value
    size_function__STLocalMap__reference_channals,  // size() function pointer
    get_const_function__STLocalMap__reference_channals,  // get_const(index) function pointer
    get_function__STLocalMap__reference_channals,  // get(index) function pointer
    fetch_function__STLocalMap__reference_channals,  // fetch(index, &value) function pointer
    assign_function__STLocalMap__reference_channals,  // assign(index, value) function pointer
    resize_function__STLocalMap__reference_channals  // resize(index) function pointer
  },
  {
    "obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::StaticObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::STLocalMap, obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__STLocalMap__obstacles,  // size() function pointer
    get_const_function__STLocalMap__obstacles,  // get_const(index) function pointer
    get_function__STLocalMap__obstacles,  // get(index) function pointer
    fetch_function__STLocalMap__obstacles,  // fetch(index, &value) function pointer
    assign_function__STLocalMap__obstacles,  // assign(index, value) function pointer
    resize_function__STLocalMap__obstacles  // resize(index) function pointer
  },
  {
    "signals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Signal>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::STLocalMap, signals),  // bytes offset in struct
    nullptr,  // default value
    size_function__STLocalMap__signals,  // size() function pointer
    get_const_function__STLocalMap__signals,  // get_const(index) function pointer
    get_function__STLocalMap__signals,  // get(index) function pointer
    fetch_function__STLocalMap__signals,  // fetch(index, &value) function pointer
    assign_function__STLocalMap__signals,  // assign(index, value) function pointer
    resize_function__STLocalMap__signals  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers STLocalMap_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "STLocalMap",  // message name
  4,  // number of fields
  sizeof(deva_map_msgs::msg::STLocalMap),
  STLocalMap_message_member_array,  // message members
  STLocalMap_init_function,  // function to initialize message memory (memory has to be allocated)
  STLocalMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t STLocalMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &STLocalMap_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_map_msgs::msg::STLocalMap>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::STLocalMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, STLocalMap)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::STLocalMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
