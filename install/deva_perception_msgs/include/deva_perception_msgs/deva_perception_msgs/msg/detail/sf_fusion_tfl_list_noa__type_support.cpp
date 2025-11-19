// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__struct.hpp"
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

void SFFusionTFLListNOA_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::SFFusionTFLListNOA(_init);
}

void SFFusionTFLListNOA_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::SFFusionTFLListNOA *>(message_memory);
  typed_message->~SFFusionTFLListNOA();
}

size_t size_function__SFFusionTFLListNOA__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__SFFusionTFLListNOA__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFFusionTFLListNOA__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFFusionTFLListNOA__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTFLListNOA__tfllist(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__SFFusionTFLListNOA__tfllist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::SFFusionTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__tfllist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::SFFusionTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTFLNOA *>(
    get_const_function__SFFusionTFLListNOA__tfllist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTFLNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTFLNOA *>(
    get_function__SFFusionTFLListNOA__tfllist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTFLNOA *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTFLListNOA__tfllist_all(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::SFFusionTFLNOA> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SFFusionTFLListNOA__tfllist_all(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::SFFusionTFLNOA> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__tfllist_all(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::SFFusionTFLNOA> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__tfllist_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTFLNOA *>(
    get_const_function__SFFusionTFLListNOA__tfllist_all(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTFLNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__tfllist_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTFLNOA *>(
    get_function__SFFusionTFLListNOA__tfllist_all(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTFLNOA *>(untyped_value);
  item = value;
}

void resize_function__SFFusionTFLListNOA__tfllist_all(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::SFFusionTFLNOA> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SFFusionTFLListNOA__pop_tfllist(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__SFFusionTFLListNOA__pop_tfllist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::PoPTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__pop_tfllist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::PoPTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__pop_tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::PoPTFLNOA *>(
    get_const_function__SFFusionTFLListNOA__pop_tfllist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::PoPTFLNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__pop_tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::PoPTFLNOA *>(
    get_function__SFFusionTFLListNOA__pop_tfllist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::PoPTFLNOA *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTFLListNOA__pop_fs_tfllist(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__SFFusionTFLListNOA__pop_fs_tfllist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::PoPFusionTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__pop_fs_tfllist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::PoPFusionTFLNOA, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__pop_fs_tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::PoPFusionTFLNOA *>(
    get_const_function__SFFusionTFLListNOA__pop_fs_tfllist(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::PoPFusionTFLNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__pop_fs_tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::PoPFusionTFLNOA *>(
    get_function__SFFusionTFLListNOA__pop_fs_tfllist(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::PoPFusionTFLNOA *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTFLListNOA__e2e_traffic_det_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eTrafficDetPair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::E2eTrafficDetPair> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__e2e_traffic_det_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eTrafficDetPair> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::E2eTrafficDetPair *>(
    get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::E2eTrafficDetPair *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::E2eTrafficDetPair *>(
    get_function__SFFusionTFLListNOA__e2e_traffic_det_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::E2eTrafficDetPair *>(untyped_value);
  item = value;
}

void resize_function__SFFusionTFLListNOA__e2e_traffic_det_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::E2eTrafficDetPair> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::TrafficE2eStablePair> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::TrafficE2eStablePair> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::TrafficE2eStablePair> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::TrafficE2eStablePair *>(
    get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::TrafficE2eStablePair *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::TrafficE2eStablePair *>(
    get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::TrafficE2eStablePair *>(untyped_value);
  item = value;
}

void resize_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::TrafficE2eStablePair> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SFFusionTFLListNOA_message_member_array[18] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, header),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, timestamp),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tflcount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tflcount),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__reserved,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__reserved,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__reserved,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__reserved,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tfllist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTFLNOA>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tfllist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__tfllist,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__tfllist,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__tfllist,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__tfllist,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__tfllist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "validsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, validsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tfllist_all",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTFLNOA>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tfllist_all),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__tfllist_all,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__tfllist_all,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__tfllist_all,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__tfllist_all,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__tfllist_all,  // assign(index, value) function pointer
    resize_function__SFFusionTFLListNOA__tfllist_all  // resize(index) function pointer
  },
  {
    "all_validsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, all_validsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pop_tfllist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::PoPTFLNOA>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, pop_tfllist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__pop_tfllist,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__pop_tfllist,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__pop_tfllist,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__pop_tfllist,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__pop_tfllist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pop_lightnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, pop_lightnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pop_fs_tfllist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::PoPFusionTFLNOA>(),  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, pop_fs_tfllist),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__pop_fs_tfllist,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__pop_fs_tfllist,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__pop_fs_tfllist,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__pop_fs_tfllist,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__pop_fs_tfllist,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pop_fs_lightnum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, pop_fs_lightnum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "e2e_traffic_det_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::E2eTrafficDetPair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, e2e_traffic_det_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // assign(index, value) function pointer
    resize_function__SFFusionTFLListNOA__e2e_traffic_det_maps  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2e_stable_maps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficE2eStablePair>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tracked_traffic_e2e_stable_maps),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // size() function pointer
    get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // get_const(index) function pointer
    get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // get(index) function pointer
    fetch_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // fetch(index, &value) function pointer
    assign_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // assign(index, value) function pointer
    resize_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2ebc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tracked_traffic_e2ebc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2ebc_stable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, tracked_traffic_e2ebc_stable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rount_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficRount>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTFLListNOA, rount_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SFFusionTFLListNOA_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "SFFusionTFLListNOA",  // message name
  18,  // number of fields
  sizeof(deva_perception_msgs::msg::SFFusionTFLListNOA),
  SFFusionTFLListNOA_message_member_array,  // message members
  SFFusionTFLListNOA_init_function,  // function to initialize message memory (memory has to be allocated)
  SFFusionTFLListNOA_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SFFusionTFLListNOA_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SFFusionTFLListNOA_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTFLListNOA>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionTFLListNOA_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, SFFusionTFLListNOA)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionTFLListNOA_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
