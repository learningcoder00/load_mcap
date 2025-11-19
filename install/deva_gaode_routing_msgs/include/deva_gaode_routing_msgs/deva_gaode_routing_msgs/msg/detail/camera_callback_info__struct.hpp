// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraCallbackInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_info'
#include "deva_gaode_routing_msgs/msg/detail/camera_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__CameraCallbackInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__CameraCallbackInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraCallbackInfo_
{
  using Type = CameraCallbackInfo_<ContainerAllocator>;

  explicit CameraCallbackInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inter_remain_distance = 0l;
    }
  }

  explicit CameraCallbackInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inter_remain_distance = 0l;
    }
  }

  // field types and members
  using _inter_remain_distance_type =
    int32_t;
  _inter_remain_distance_type inter_remain_distance;
  using _camera_info_type =
    std::vector<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>>;
  _camera_info_type camera_info;

  // setters for named parameter idiom
  Type & set__inter_remain_distance(
    const int32_t & _arg)
  {
    this->inter_remain_distance = _arg;
    return *this;
  }
  Type & set__camera_info(
    const std::vector<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CameraInfo_<ContainerAllocator>>> & _arg)
  {
    this->camera_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CameraCallbackInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CameraCallbackInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraCallbackInfo_ & other) const
  {
    if (this->inter_remain_distance != other.inter_remain_distance) {
      return false;
    }
    if (this->camera_info != other.camera_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraCallbackInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraCallbackInfo_

// alias to use template instance with default allocator
using CameraCallbackInfo =
  deva_gaode_routing_msgs::msg::CameraCallbackInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__STRUCT_HPP_
