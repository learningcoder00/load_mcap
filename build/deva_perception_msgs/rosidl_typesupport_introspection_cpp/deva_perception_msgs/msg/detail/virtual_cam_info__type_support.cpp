// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.hpp"
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

void VirtualCamInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::VirtualCamInfo(_init);
}

void VirtualCamInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::VirtualCamInfo *>(message_memory);
  typed_message->~VirtualCamInfo();
}

size_t size_function__VirtualCamInfo__resolution(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__resolution(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__resolution(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__VirtualCamInfo__resolution(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__VirtualCamInfo__resolution(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__resolution(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__ori_intrinsic(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__ori_intrinsic(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__ori_intrinsic(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__ori_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__ori_intrinsic(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__ori_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__ori_intrinsic(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__ori_intrinsic(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__vir_intrinsic(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__vir_intrinsic(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__vir_intrinsic(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__vir_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__vir_intrinsic(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__vir_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__vir_intrinsic(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__vir_intrinsic(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__ori_extrinsic(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__ori_extrinsic(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__ori_extrinsic(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__ori_extrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__ori_extrinsic(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__ori_extrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__ori_extrinsic(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__ori_extrinsic(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__vir_extrinsic(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__vir_extrinsic(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__vir_extrinsic(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__vir_extrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__vir_extrinsic(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__vir_extrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__vir_extrinsic(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__vir_extrinsic(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__mapx(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__mapx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__mapx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__mapx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__mapx(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__mapx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__mapx(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__mapx(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__mapy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__mapy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__mapy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__mapy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__mapy(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__mapy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__mapy(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__mapy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__pinhole_intrinsic(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__pinhole_intrinsic(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__pinhole_intrinsic(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__pinhole_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VirtualCamInfo__pinhole_intrinsic(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__pinhole_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VirtualCamInfo__pinhole_intrinsic(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__pinhole_intrinsic(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__crops(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__crops(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__crops(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__crops(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__VirtualCamInfo__crops(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__crops(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__VirtualCamInfo__crops(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__crops(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__VirtualCamInfo__input_size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualCamInfo__input_size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualCamInfo__input_size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualCamInfo__input_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__VirtualCamInfo__input_size(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__VirtualCamInfo__input_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__VirtualCamInfo__input_size(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__VirtualCamInfo__input_size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VirtualCamInfo_message_member_array[12] = {
  {
    "cam_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, cam_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, resolution),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__resolution,  // size() function pointer
    get_const_function__VirtualCamInfo__resolution,  // get_const(index) function pointer
    get_function__VirtualCamInfo__resolution,  // get(index) function pointer
    fetch_function__VirtualCamInfo__resolution,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__resolution,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__resolution  // resize(index) function pointer
  },
  {
    "distort_model",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, distort_model),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ori_intrinsic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, ori_intrinsic),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__ori_intrinsic,  // size() function pointer
    get_const_function__VirtualCamInfo__ori_intrinsic,  // get_const(index) function pointer
    get_function__VirtualCamInfo__ori_intrinsic,  // get(index) function pointer
    fetch_function__VirtualCamInfo__ori_intrinsic,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__ori_intrinsic,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__ori_intrinsic  // resize(index) function pointer
  },
  {
    "vir_intrinsic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, vir_intrinsic),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__vir_intrinsic,  // size() function pointer
    get_const_function__VirtualCamInfo__vir_intrinsic,  // get_const(index) function pointer
    get_function__VirtualCamInfo__vir_intrinsic,  // get(index) function pointer
    fetch_function__VirtualCamInfo__vir_intrinsic,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__vir_intrinsic,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__vir_intrinsic  // resize(index) function pointer
  },
  {
    "ori_extrinsic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, ori_extrinsic),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__ori_extrinsic,  // size() function pointer
    get_const_function__VirtualCamInfo__ori_extrinsic,  // get_const(index) function pointer
    get_function__VirtualCamInfo__ori_extrinsic,  // get(index) function pointer
    fetch_function__VirtualCamInfo__ori_extrinsic,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__ori_extrinsic,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__ori_extrinsic  // resize(index) function pointer
  },
  {
    "vir_extrinsic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, vir_extrinsic),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__vir_extrinsic,  // size() function pointer
    get_const_function__VirtualCamInfo__vir_extrinsic,  // get_const(index) function pointer
    get_function__VirtualCamInfo__vir_extrinsic,  // get(index) function pointer
    fetch_function__VirtualCamInfo__vir_extrinsic,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__vir_extrinsic,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__vir_extrinsic  // resize(index) function pointer
  },
  {
    "mapx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, mapx),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__mapx,  // size() function pointer
    get_const_function__VirtualCamInfo__mapx,  // get_const(index) function pointer
    get_function__VirtualCamInfo__mapx,  // get(index) function pointer
    fetch_function__VirtualCamInfo__mapx,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__mapx,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__mapx  // resize(index) function pointer
  },
  {
    "mapy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, mapy),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__mapy,  // size() function pointer
    get_const_function__VirtualCamInfo__mapy,  // get_const(index) function pointer
    get_function__VirtualCamInfo__mapy,  // get(index) function pointer
    fetch_function__VirtualCamInfo__mapy,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__mapy,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__mapy  // resize(index) function pointer
  },
  {
    "pinhole_intrinsic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, pinhole_intrinsic),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__pinhole_intrinsic,  // size() function pointer
    get_const_function__VirtualCamInfo__pinhole_intrinsic,  // get_const(index) function pointer
    get_function__VirtualCamInfo__pinhole_intrinsic,  // get(index) function pointer
    fetch_function__VirtualCamInfo__pinhole_intrinsic,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__pinhole_intrinsic,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__pinhole_intrinsic  // resize(index) function pointer
  },
  {
    "crops",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, crops),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__crops,  // size() function pointer
    get_const_function__VirtualCamInfo__crops,  // get_const(index) function pointer
    get_function__VirtualCamInfo__crops,  // get(index) function pointer
    fetch_function__VirtualCamInfo__crops,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__crops,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__crops  // resize(index) function pointer
  },
  {
    "input_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::VirtualCamInfo, input_size),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualCamInfo__input_size,  // size() function pointer
    get_const_function__VirtualCamInfo__input_size,  // get_const(index) function pointer
    get_function__VirtualCamInfo__input_size,  // get(index) function pointer
    fetch_function__VirtualCamInfo__input_size,  // fetch(index, &value) function pointer
    assign_function__VirtualCamInfo__input_size,  // assign(index, value) function pointer
    resize_function__VirtualCamInfo__input_size  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VirtualCamInfo_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "VirtualCamInfo",  // message name
  12,  // number of fields
  sizeof(deva_perception_msgs::msg::VirtualCamInfo),
  VirtualCamInfo_message_member_array,  // message members
  VirtualCamInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualCamInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VirtualCamInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VirtualCamInfo_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::VirtualCamInfo>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualCamInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, VirtualCamInfo)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::VirtualCamInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
