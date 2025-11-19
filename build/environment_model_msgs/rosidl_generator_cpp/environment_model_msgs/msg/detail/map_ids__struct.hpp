// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/MapIds.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__MapIds __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__MapIds __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapIds_
{
  using Type = MapIds_<ContainerAllocator>;

  explicit MapIds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
      this->value1 = 0.0;
      this->value2 = 0.0;
    }
  }

  explicit MapIds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = 0l;
      this->value1 = 0.0;
      this->value2 = 0.0;
    }
  }

  // field types and members
  using _key_type =
    int32_t;
  _key_type key;
  using _value1_type =
    double;
  _value1_type value1;
  using _value2_type =
    double;
  _value2_type value2;

  // setters for named parameter idiom
  Type & set__key(
    const int32_t & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__value1(
    const double & _arg)
  {
    this->value1 = _arg;
    return *this;
  }
  Type & set__value2(
    const double & _arg)
  {
    this->value2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::MapIds_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::MapIds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::MapIds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::MapIds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__MapIds
    std::shared_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__MapIds
    std::shared_ptr<environment_model_msgs::msg::MapIds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapIds_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->value1 != other.value1) {
      return false;
    }
    if (this->value2 != other.value2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapIds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapIds_

// alias to use template instance with default allocator
using MapIds =
  environment_model_msgs::msg::MapIds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__MAP_IDS__STRUCT_HPP_
