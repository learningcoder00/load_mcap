// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.hpp"
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

void SdProMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::SdProMap(_init);
}

void SdProMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::SdProMap *>(message_memory);
  typed_message->~SdProMap();
}

size_t size_function__SdProMap__paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProMap__paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPath> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProMap__paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPath> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProMap__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPath *>(
    get_const_function__SdProMap__paths(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPath *>(untyped_value);
  value = item;
}

void assign_function__SdProMap__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPath *>(
    get_function__SdProMap__paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPath *>(untyped_value);
  item = value;
}

void resize_function__SdProMap__paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPath> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProMap__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLink> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProMap__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProLink> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProMap__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLink> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProMap__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLink *>(
    get_const_function__SdProMap__links(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLink *>(untyped_value);
  value = item;
}

void assign_function__SdProMap__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProLink *>(
    get_function__SdProMap__links(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProLink *>(untyped_value);
  item = value;
}

void resize_function__SdProMap__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProLink> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProMap__path_splits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProMap__path_splits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProMap__path_splits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProMap__path_splits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPathSplit *>(
    get_const_function__SdProMap__path_splits(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPathSplit *>(untyped_value);
  value = item;
}

void assign_function__SdProMap__path_splits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPathSplit *>(
    get_function__SdProMap__path_splits(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPathSplit *>(untyped_value);
  item = value;
}

void resize_function__SdProMap__path_splits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPathSplit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProMap__path_merges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProMap__path_merges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProMap__path_merges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProMap__path_merges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPathMerge *>(
    get_const_function__SdProMap__path_merges(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPathMerge *>(untyped_value);
  value = item;
}

void assign_function__SdProMap__path_merges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SdProPathMerge *>(
    get_function__SdProMap__path_merges(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SdProPathMerge *>(untyped_value);
  item = value;
}

void resize_function__SdProMap__path_merges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SdProPathMerge> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SdProMap__sd_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SDNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SdProMap__sd_nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::SDNode> *>(untyped_member);
  return &member[index];
}

void * get_function__SdProMap__sd_nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SDNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__SdProMap__sd_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SDNode *>(
    get_const_function__SdProMap__sd_nodes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::SDNode *>(untyped_value);
  value = item;
}

void assign_function__SdProMap__sd_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::SDNode *>(
    get_function__SdProMap__sd_nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::SDNode *>(untyped_value);
  item = value;
}

void resize_function__SdProMap__sd_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::SDNode> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SdProMap_message_member_array[8] = {
  {
    "version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "city_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, city_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "navi_route",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::NavRoute>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, navi_route),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProPath>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProMap__paths,  // size() function pointer
    get_const_function__SdProMap__paths,  // get_const(index) function pointer
    get_function__SdProMap__paths,  // get(index) function pointer
    fetch_function__SdProMap__paths,  // fetch(index, &value) function pointer
    assign_function__SdProMap__paths,  // assign(index, value) function pointer
    resize_function__SdProMap__paths  // resize(index) function pointer
  },
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProLink>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProMap__links,  // size() function pointer
    get_const_function__SdProMap__links,  // get_const(index) function pointer
    get_function__SdProMap__links,  // get(index) function pointer
    fetch_function__SdProMap__links,  // fetch(index, &value) function pointer
    assign_function__SdProMap__links,  // assign(index, value) function pointer
    resize_function__SdProMap__links  // resize(index) function pointer
  },
  {
    "path_splits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProPathSplit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, path_splits),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProMap__path_splits,  // size() function pointer
    get_const_function__SdProMap__path_splits,  // get_const(index) function pointer
    get_function__SdProMap__path_splits,  // get(index) function pointer
    fetch_function__SdProMap__path_splits,  // fetch(index, &value) function pointer
    assign_function__SdProMap__path_splits,  // assign(index, value) function pointer
    resize_function__SdProMap__path_splits  // resize(index) function pointer
  },
  {
    "path_merges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProPathMerge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, path_merges),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProMap__path_merges,  // size() function pointer
    get_const_function__SdProMap__path_merges,  // get_const(index) function pointer
    get_function__SdProMap__path_merges,  // get(index) function pointer
    fetch_function__SdProMap__path_merges,  // fetch(index, &value) function pointer
    assign_function__SdProMap__path_merges,  // assign(index, value) function pointer
    resize_function__SdProMap__path_merges  // resize(index) function pointer
  },
  {
    "sd_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::SDNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProMap, sd_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SdProMap__sd_nodes,  // size() function pointer
    get_const_function__SdProMap__sd_nodes,  // get_const(index) function pointer
    get_function__SdProMap__sd_nodes,  // get(index) function pointer
    fetch_function__SdProMap__sd_nodes,  // fetch(index, &value) function pointer
    assign_function__SdProMap__sd_nodes,  // assign(index, value) function pointer
    resize_function__SdProMap__sd_nodes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SdProMap_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "SdProMap",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::SdProMap),
  SdProMap_message_member_array,  // message members
  SdProMap_init_function,  // function to initialize message memory (memory has to be allocated)
  SdProMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SdProMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SdProMap_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProMap>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, SdProMap)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
