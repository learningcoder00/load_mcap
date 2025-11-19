// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__PlanningLog __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__PlanningLog __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningLog_
{
  using Type = PlanningLog_<ContainerAllocator>;

  explicit PlanningLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drving_state = 0ul;
      this->auto_function = 0ul;
      this->drive_action = 0ul;
      this->env_info_index = 0ul;
    }
  }

  explicit PlanningLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drving_state = 0ul;
      this->auto_function = 0ul;
      this->drive_action = 0ul;
      this->env_info_index = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _localization_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _localization_type localization;
  using _chassis_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _chassis_type chassis;
  using _pad_message_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _pad_message_type pad_message;
  using _pull_over_msg_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _pull_over_msg_type pull_over_msg;
  using _traffic_poles_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _traffic_poles_type traffic_poles;
  using _apollo_decision_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _apollo_decision_type apollo_decision;
  using _prediction_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _prediction_type prediction;
  using _megmap_proto_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _megmap_proto_type megmap_proto;
  using _state_context_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _state_context_type state_context;
  using _target_trajectory_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _target_trajectory_type target_trajectory;
  using _speed_solver_debug_sequence_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _speed_solver_debug_sequence_type speed_solver_debug_sequence;
  using _trajectory_solver_debug_sequence_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _trajectory_solver_debug_sequence_type trajectory_solver_debug_sequence;
  using _planning_log_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _planning_log_type planning_log;
  using _navigator_routing_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _navigator_routing_type navigator_routing;
  using _drving_state_type =
    uint32_t;
  _drving_state_type drving_state;
  using _auto_function_type =
    uint32_t;
  _auto_function_type auto_function;
  using _drive_action_type =
    uint32_t;
  _drive_action_type drive_action;
  using _env_info_index_type =
    uint32_t;
  _env_info_index_type env_info_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__localization(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->localization = _arg;
    return *this;
  }
  Type & set__chassis(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->chassis = _arg;
    return *this;
  }
  Type & set__pad_message(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->pad_message = _arg;
    return *this;
  }
  Type & set__pull_over_msg(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->pull_over_msg = _arg;
    return *this;
  }
  Type & set__traffic_poles(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->traffic_poles = _arg;
    return *this;
  }
  Type & set__apollo_decision(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->apollo_decision = _arg;
    return *this;
  }
  Type & set__prediction(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->prediction = _arg;
    return *this;
  }
  Type & set__megmap_proto(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->megmap_proto = _arg;
    return *this;
  }
  Type & set__state_context(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->state_context = _arg;
    return *this;
  }
  Type & set__target_trajectory(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->target_trajectory = _arg;
    return *this;
  }
  Type & set__speed_solver_debug_sequence(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->speed_solver_debug_sequence = _arg;
    return *this;
  }
  Type & set__trajectory_solver_debug_sequence(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->trajectory_solver_debug_sequence = _arg;
    return *this;
  }
  Type & set__planning_log(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->planning_log = _arg;
    return *this;
  }
  Type & set__navigator_routing(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->navigator_routing = _arg;
    return *this;
  }
  Type & set__drving_state(
    const uint32_t & _arg)
  {
    this->drving_state = _arg;
    return *this;
  }
  Type & set__auto_function(
    const uint32_t & _arg)
  {
    this->auto_function = _arg;
    return *this;
  }
  Type & set__drive_action(
    const uint32_t & _arg)
  {
    this->drive_action = _arg;
    return *this;
  }
  Type & set__env_info_index(
    const uint32_t & _arg)
  {
    this->env_info_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningLog
    std::shared_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningLog
    std::shared_ptr<deva_planning_msgs::msg::PlanningLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningLog_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->localization != other.localization) {
      return false;
    }
    if (this->chassis != other.chassis) {
      return false;
    }
    if (this->pad_message != other.pad_message) {
      return false;
    }
    if (this->pull_over_msg != other.pull_over_msg) {
      return false;
    }
    if (this->traffic_poles != other.traffic_poles) {
      return false;
    }
    if (this->apollo_decision != other.apollo_decision) {
      return false;
    }
    if (this->prediction != other.prediction) {
      return false;
    }
    if (this->megmap_proto != other.megmap_proto) {
      return false;
    }
    if (this->state_context != other.state_context) {
      return false;
    }
    if (this->target_trajectory != other.target_trajectory) {
      return false;
    }
    if (this->speed_solver_debug_sequence != other.speed_solver_debug_sequence) {
      return false;
    }
    if (this->trajectory_solver_debug_sequence != other.trajectory_solver_debug_sequence) {
      return false;
    }
    if (this->planning_log != other.planning_log) {
      return false;
    }
    if (this->navigator_routing != other.navigator_routing) {
      return false;
    }
    if (this->drving_state != other.drving_state) {
      return false;
    }
    if (this->auto_function != other.auto_function) {
      return false;
    }
    if (this->drive_action != other.drive_action) {
      return false;
    }
    if (this->env_info_index != other.env_info_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningLog_

// alias to use template instance with default allocator
using PlanningLog =
  deva_planning_msgs::msg::PlanningLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_LOG__STRUCT_HPP_
