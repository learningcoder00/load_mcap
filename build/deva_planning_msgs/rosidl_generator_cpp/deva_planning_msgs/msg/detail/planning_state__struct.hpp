// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/PlanningState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'fail_reason'
#include "deva_planning_msgs/msg/detail/planning_fail__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__PlanningState __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__PlanningState __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningState_
{
  using Type = PlanningState_<ContainerAllocator>;

  explicit PlanningState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pilot_planning_state = "";
      this->navi_state = "";
    }
  }

  explicit PlanningState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pilot_planning_state(_alloc),
    navi_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pilot_planning_state = "";
      this->navi_state = "";
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pilot_planning_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pilot_planning_state_type pilot_planning_state;
  using _navi_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navi_state_type navi_state;
  using _fail_reason_type =
    std::vector<deva_planning_msgs::msg::PlanningFail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::PlanningFail_<ContainerAllocator>>>;
  _fail_reason_type fail_reason;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pilot_planning_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pilot_planning_state = _arg;
    return *this;
  }
  Type & set__navi_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->navi_state = _arg;
    return *this;
  }
  Type & set__fail_reason(
    const std::vector<deva_planning_msgs::msg::PlanningFail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::PlanningFail_<ContainerAllocator>>> & _arg)
  {
    this->fail_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::PlanningState_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::PlanningState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningState
    std::shared_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningState
    std::shared_ptr<deva_planning_msgs::msg::PlanningState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pilot_planning_state != other.pilot_planning_state) {
      return false;
    }
    if (this->navi_state != other.navi_state) {
      return false;
    }
    if (this->fail_reason != other.fail_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningState_

// alias to use template instance with default allocator
using PlanningState =
  deva_planning_msgs::msg::PlanningState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_STATE__STRUCT_HPP_
