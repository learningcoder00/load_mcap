// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProPath.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProPath __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProPath __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProPath_
{
  using Type = SdProPath_<ContainerAllocator>;

  explicit SdProPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_id = 0ul;
      this->parent_id = 0ul;
      this->offset = 0.0;
    }
  }

  explicit SdProPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_id = 0ul;
      this->parent_id = 0ul;
      this->offset = 0.0;
    }
  }

  // field types and members
  using _path_id_type =
    uint32_t;
  _path_id_type path_id;
  using _parent_id_type =
    uint32_t;
  _parent_id_type parent_id;
  using _offset_type =
    double;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__path_id(
    const uint32_t & _arg)
  {
    this->path_id = _arg;
    return *this;
  }
  Type & set__parent_id(
    const uint32_t & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProPath
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProPath
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProPath_ & other) const
  {
    if (this->path_id != other.path_id) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProPath_

// alias to use template instance with default allocator
using SdProPath =
  deva_gaode_routing_msgs::msg::SdProPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_PATH__STRUCT_HPP_
