// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/planning_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_planning_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PlanningResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::PlanningResult(_init);
}

void PlanningResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::PlanningResult *>(message_memory);
  typed_message->~PlanningResult();
}

size_t size_function__PlanningResult__trajectories(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningResult__trajectories(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningResult__trajectories(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningResult__trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningTrajectory *>(
    get_const_function__PlanningResult__trajectories(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::PlanningTrajectory *>(untyped_value);
  value = item;
}

void assign_function__PlanningResult__trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::PlanningTrajectory *>(
    get_function__PlanningResult__trajectories(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningTrajectory *>(untyped_value);
  item = value;
}

void resize_function__PlanningResult__trajectories(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningResult__fail_reason(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningFail> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningResult__fail_reason(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningFail> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningResult__fail_reason(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningFail> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningResult__fail_reason(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningFail *>(
    get_const_function__PlanningResult__fail_reason(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::PlanningFail *>(untyped_value);
  value = item;
}

void assign_function__PlanningResult__fail_reason(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::PlanningFail *>(
    get_function__PlanningResult__fail_reason(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningFail *>(untyped_value);
  item = value;
}

void resize_function__PlanningResult__fail_reason(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningFail> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningResult_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::SensorTime>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, sensor_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::PlanningTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, trajectories),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningResult__trajectories,  // size() function pointer
    get_const_function__PlanningResult__trajectories,  // get_const(index) function pointer
    get_function__PlanningResult__trajectories,  // get(index) function pointer
    fetch_function__PlanningResult__trajectories,  // fetch(index, &value) function pointer
    assign_function__PlanningResult__trajectories,  // assign(index, value) function pointer
    resize_function__PlanningResult__trajectories  // resize(index) function pointer
  },
  {
    "pilot_planning_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, pilot_planning_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "planning_work_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, planning_work_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "function_state_available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, function_state_available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fail_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::PlanningFail>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningResult, fail_reason),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningResult__fail_reason,  // size() function pointer
    get_const_function__PlanningResult__fail_reason,  // get_const(index) function pointer
    get_function__PlanningResult__fail_reason,  // get(index) function pointer
    fetch_function__PlanningResult__fail_reason,  // fetch(index, &value) function pointer
    assign_function__PlanningResult__fail_reason,  // assign(index, value) function pointer
    resize_function__PlanningResult__fail_reason  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningResult_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "PlanningResult",  // message name
  7,  // number of fields
  sizeof(deva_planning_msgs2::msg::PlanningResult),
  PlanningResult_message_member_array,  // message members
  PlanningResult_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningResult_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::PlanningResult>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, PlanningResult)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
