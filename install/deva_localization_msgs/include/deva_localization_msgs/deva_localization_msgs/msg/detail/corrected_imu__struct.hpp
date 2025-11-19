// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/CorrectedImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_HPP_

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
// Member 'imu'
#include "deva_localization_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__CorrectedImu __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__CorrectedImu __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CorrectedImu_
{
  using Type = CorrectedImu_<ContainerAllocator>;

  explicit CorrectedImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu(_init)
  {
    (void)_init;
  }

  explicit CorrectedImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imu_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _imu_type imu;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imu(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->imu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__CorrectedImu
    std::shared_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__CorrectedImu
    std::shared_ptr<deva_localization_msgs::msg::CorrectedImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CorrectedImu_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imu != other.imu) {
      return false;
    }
    return true;
  }
  bool operator!=(const CorrectedImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CorrectedImu_

// alias to use template instance with default allocator
using CorrectedImu =
  deva_localization_msgs::msg::CorrectedImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__STRUCT_HPP_
