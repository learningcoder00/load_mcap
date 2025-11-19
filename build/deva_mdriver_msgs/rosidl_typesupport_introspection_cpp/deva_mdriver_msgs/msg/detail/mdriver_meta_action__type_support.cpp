// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_mdriver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MdriverMetaAction_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_mdriver_msgs::msg::MdriverMetaAction(_init);
}

void MdriverMetaAction_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_mdriver_msgs::msg::MdriverMetaAction *>(message_memory);
  typed_message->~MdriverMetaAction();
}

size_t size_function__MdriverMetaAction__logits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MdriverMetaAction__logits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MdriverMetaAction__logits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MdriverMetaAction__logits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MdriverMetaAction__logits(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MdriverMetaAction__logits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MdriverMetaAction__logits(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MdriverMetaAction__logits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MdriverMetaAction_message_member_array[3] = {
  {
    "best_mdriver_meta_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MdriverMetaAction, best_mdriver_meta_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MdriverMetaAction, score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "logits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MdriverMetaAction, logits),  // bytes offset in struct
    nullptr,  // default value
    size_function__MdriverMetaAction__logits,  // size() function pointer
    get_const_function__MdriverMetaAction__logits,  // get_const(index) function pointer
    get_function__MdriverMetaAction__logits,  // get(index) function pointer
    fetch_function__MdriverMetaAction__logits,  // fetch(index, &value) function pointer
    assign_function__MdriverMetaAction__logits,  // assign(index, value) function pointer
    resize_function__MdriverMetaAction__logits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MdriverMetaAction_message_members = {
  "deva_mdriver_msgs::msg",  // message namespace
  "MdriverMetaAction",  // message name
  3,  // number of fields
  sizeof(deva_mdriver_msgs::msg::MdriverMetaAction),
  MdriverMetaAction_message_member_array,  // message members
  MdriverMetaAction_init_function,  // function to initialize message memory (memory has to be allocated)
  MdriverMetaAction_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MdriverMetaAction_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MdriverMetaAction_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_mdriver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_mdriver_msgs::msg::MdriverMetaAction>()
{
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MdriverMetaAction_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_mdriver_msgs, msg, MdriverMetaAction)() {
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MdriverMetaAction_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
