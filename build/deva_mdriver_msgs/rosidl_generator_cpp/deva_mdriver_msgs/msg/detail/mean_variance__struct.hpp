// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MeanVariance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MeanVariance __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MeanVariance __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeanVariance_
{
  using Type = MeanVariance_<ContainerAllocator>;

  explicit MeanVariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->variance = 0.0;
    }
  }

  explicit MeanVariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->variance = 0.0;
    }
  }

  // field types and members
  using _mean_type =
    double;
  _mean_type mean;
  using _variance_type =
    double;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__mean(
    const double & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MeanVariance
    std::shared_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MeanVariance
    std::shared_ptr<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeanVariance_ & other) const
  {
    if (this->mean != other.mean) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeanVariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeanVariance_

// alias to use template instance with default allocator
using MeanVariance =
  deva_mdriver_msgs::msg::MeanVariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__STRUCT_HPP_
