// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_HPP_

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
// Member 'pose'
// Member 'global_pose'
#include "deva_localization_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__LocalizationEstimate __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__LocalizationEstimate __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizationEstimate_
{
  using Type = LocalizationEstimate_<ContainerAllocator>;

  explicit LocalizationEstimate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    global_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_time = 0.0;
      this->state_message = "";
      this->global_pose_state_message = "";
    }
  }

  explicit LocalizationEstimate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    global_pose(_alloc, _init),
    state_message(_alloc),
    global_pose_state_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_time = 0.0;
      this->state_message = "";
      this->global_pose_state_message = "";
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _global_pose_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _global_pose_type global_pose;
  using _measurement_time_type =
    double;
  _measurement_time_type measurement_time;
  using _state_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_message_type state_message;
  using _global_pose_state_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _global_pose_state_message_type global_pose_state_message;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__global_pose(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->global_pose = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const double & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__state_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_message = _arg;
    return *this;
  }
  Type & set__global_pose_state_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->global_pose_state_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__LocalizationEstimate
    std::shared_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__LocalizationEstimate
    std::shared_ptr<deva_localization_msgs::msg::LocalizationEstimate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizationEstimate_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->global_pose != other.global_pose) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->state_message != other.state_message) {
      return false;
    }
    if (this->global_pose_state_message != other.global_pose_state_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizationEstimate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizationEstimate_

// alias to use template instance with default allocator
using LocalizationEstimate =
  deva_localization_msgs::msg::LocalizationEstimate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_ESTIMATE__STRUCT_HPP_
