// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/ScenarioInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__ScenarioInfo __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__ScenarioInfo __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScenarioInfo_
{
  using Type = ScenarioInfo_<ContainerAllocator>;

  explicit ScenarioInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario = 0ul;
      this->distance = 0.0;
    }
  }

  explicit ScenarioInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scenario = 0ul;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _scenario_type =
    uint32_t;
  _scenario_type scenario;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__scenario(
    const uint32_t & _arg)
  {
    this->scenario = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__ScenarioInfo
    std::shared_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__ScenarioInfo
    std::shared_ptr<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScenarioInfo_ & other) const
  {
    if (this->scenario != other.scenario) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScenarioInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScenarioInfo_

// alias to use template instance with default allocator
using ScenarioInfo =
  environment_model_msgs::msg::ScenarioInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__STRUCT_HPP_
