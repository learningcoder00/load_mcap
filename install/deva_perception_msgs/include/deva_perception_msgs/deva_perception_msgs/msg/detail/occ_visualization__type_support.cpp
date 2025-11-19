// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/occ_visualization__struct.hpp"
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

void OCCVisualization_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::OCCVisualization(_init);
}

void OCCVisualization_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::OCCVisualization *>(message_memory);
  typed_message->~OCCVisualization();
}

size_t size_function__OCCVisualization__points_type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OCCVisualization__points_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__OCCVisualization__points_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__OCCVisualization__points_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__OCCVisualization__points_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__OCCVisualization__points_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__OCCVisualization__points_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__OCCVisualization__points_type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OCCVisualization__voxel_pc_params(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OCCVisualization__voxel_pc_params(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OCCVisualization__voxel_pc_params(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__OCCVisualization__voxel_pc_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__OCCVisualization__voxel_pc_params(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__OCCVisualization__voxel_pc_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__OCCVisualization__voxel_pc_params(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__OCCVisualization__image_points_contours(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OCCVisualization__image_points_contours(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__OCCVisualization__image_points_contours(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__OCCVisualization__image_points_contours(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OCCVisualization__image_points_contours(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OCCVisualization__image_points_contours(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OCCVisualization__image_points_contours(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__OCCVisualization__image_points_contours(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__OCCVisualization__rfu_pixel_matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__OCCVisualization__rfu_pixel_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__OCCVisualization__rfu_pixel_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__OCCVisualization__rfu_pixel_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OCCVisualization__rfu_pixel_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OCCVisualization__rfu_pixel_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OCCVisualization__rfu_pixel_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__OCCVisualization__rfu_utm_matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__OCCVisualization__rfu_utm_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__OCCVisualization__rfu_utm_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__OCCVisualization__rfu_utm_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__OCCVisualization__rfu_utm_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__OCCVisualization__rfu_utm_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__OCCVisualization__rfu_utm_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OCCVisualization_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lidar_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, lidar_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, points_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__OCCVisualization__points_type,  // size() function pointer
    get_const_function__OCCVisualization__points_type,  // get_const(index) function pointer
    get_function__OCCVisualization__points_type,  // get(index) function pointer
    fetch_function__OCCVisualization__points_type,  // fetch(index, &value) function pointer
    assign_function__OCCVisualization__points_type,  // assign(index, value) function pointer
    resize_function__OCCVisualization__points_type  // resize(index) function pointer
  },
  {
    "voxel_pc_params",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, voxel_pc_params),  // bytes offset in struct
    nullptr,  // default value
    size_function__OCCVisualization__voxel_pc_params,  // size() function pointer
    get_const_function__OCCVisualization__voxel_pc_params,  // get_const(index) function pointer
    get_function__OCCVisualization__voxel_pc_params,  // get(index) function pointer
    fetch_function__OCCVisualization__voxel_pc_params,  // fetch(index, &value) function pointer
    assign_function__OCCVisualization__voxel_pc_params,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_points_contours",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, image_points_contours),  // bytes offset in struct
    nullptr,  // default value
    size_function__OCCVisualization__image_points_contours,  // size() function pointer
    get_const_function__OCCVisualization__image_points_contours,  // get_const(index) function pointer
    get_function__OCCVisualization__image_points_contours,  // get(index) function pointer
    fetch_function__OCCVisualization__image_points_contours,  // fetch(index, &value) function pointer
    assign_function__OCCVisualization__image_points_contours,  // assign(index, value) function pointer
    resize_function__OCCVisualization__image_points_contours  // resize(index) function pointer
  },
  {
    "rfu_pixel_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, rfu_pixel_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__OCCVisualization__rfu_pixel_matrix,  // size() function pointer
    get_const_function__OCCVisualization__rfu_pixel_matrix,  // get_const(index) function pointer
    get_function__OCCVisualization__rfu_pixel_matrix,  // get(index) function pointer
    fetch_function__OCCVisualization__rfu_pixel_matrix,  // fetch(index, &value) function pointer
    assign_function__OCCVisualization__rfu_pixel_matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu_utm_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::OCCVisualization, rfu_utm_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__OCCVisualization__rfu_utm_matrix,  // size() function pointer
    get_const_function__OCCVisualization__rfu_utm_matrix,  // get_const(index) function pointer
    get_function__OCCVisualization__rfu_utm_matrix,  // get(index) function pointer
    fetch_function__OCCVisualization__rfu_utm_matrix,  // fetch(index, &value) function pointer
    assign_function__OCCVisualization__rfu_utm_matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OCCVisualization_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "OCCVisualization",  // message name
  7,  // number of fields
  sizeof(deva_perception_msgs::msg::OCCVisualization),
  OCCVisualization_message_member_array,  // message members
  OCCVisualization_init_function,  // function to initialize message memory (memory has to be allocated)
  OCCVisualization_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OCCVisualization_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OCCVisualization_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::OCCVisualization>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::OCCVisualization_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, OCCVisualization)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::OCCVisualization_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
