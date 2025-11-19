// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__CameraInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__CameraInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraInfo_
{
  using Type = CameraInfo_<ContainerAllocator>;

  explicit CameraInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_type = 0l;
      this->limit_speed = 0l;
      this->camera_distance = 0l;
    }
  }

  explicit CameraInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_type = 0l;
      this->limit_speed = 0l;
      this->camera_distance = 0l;
    }
  }

  // field types and members
  using _camera_type_type =
    int32_t;
  _camera_type_type camera_type;
  using _limit_speed_type =
    int32_t;
  _limit_speed_type limit_speed;
  using _camera_distance_type =
    int32_t;
  _camera_distance_type camera_distance;

  // setters for named parameter idiom
  Type & set__camera_type(
    const int32_t & _arg)
  {
    this->camera_type = _arg;
    return *this;
  }
  Type & set__limit_speed(
    const int32_t & _arg)
  {
    this->limit_speed = _arg;
    return *this;
  }
  Type & set__camera_distance(
    const int32_t & _arg)
  {
    this->camera_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CameraInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CameraInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraInfo_ & other) const
  {
    if (this->camera_type != other.camera_type) {
      return false;
    }
    if (this->limit_speed != other.limit_speed) {
      return false;
    }
    if (this->camera_distance != other.camera_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraInfo_

// alias to use template instance with default allocator
using CameraInfo =
  deva_gaode_routing_msgs::msg::CameraInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__STRUCT_HPP_
