// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkCurvature.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkCurvature __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkCurvature __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkCurvature_
{
  using Type = LinkCurvature_<ContainerAllocator>;

  explicit LinkCurvature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
      this->curvature = 0l;
    }
  }

  explicit LinkCurvature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
      this->curvature = 0l;
    }
  }

  // field types and members
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _curvature_type =
    int32_t;
  _curvature_type curvature;

  // setters for named parameter idiom
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__curvature(
    const int32_t & _arg)
  {
    this->curvature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkCurvature
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkCurvature
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkCurvature_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkCurvature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkCurvature_

// alias to use template instance with default allocator
using LinkCurvature =
  deva_gaode_routing_msgs::msg::LinkCurvature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_HPP_
