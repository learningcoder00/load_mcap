// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkIDType __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkIDType __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkIDType_
{
  using Type = LinkIDType_<ContainerAllocator>;

  explicit LinkIDType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tile_id = 0ul;
      this->link_id = 0ull;
      this->raw_id = 0ull;
    }
  }

  explicit LinkIDType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tile_id = 0ul;
      this->link_id = 0ull;
      this->raw_id = 0ull;
    }
  }

  // field types and members
  using _tile_id_type =
    uint32_t;
  _tile_id_type tile_id;
  using _link_id_type =
    uint64_t;
  _link_id_type link_id;
  using _raw_id_type =
    uint64_t;
  _raw_id_type raw_id;

  // setters for named parameter idiom
  Type & set__tile_id(
    const uint32_t & _arg)
  {
    this->tile_id = _arg;
    return *this;
  }
  Type & set__link_id(
    const uint64_t & _arg)
  {
    this->link_id = _arg;
    return *this;
  }
  Type & set__raw_id(
    const uint64_t & _arg)
  {
    this->raw_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkIDType
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkIDType
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkIDType_ & other) const
  {
    if (this->tile_id != other.tile_id) {
      return false;
    }
    if (this->link_id != other.link_id) {
      return false;
    }
    if (this->raw_id != other.raw_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkIDType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkIDType_

// alias to use template instance with default allocator
using LinkIDType =
  deva_gaode_routing_msgs::msg::LinkIDType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ID_TYPE__STRUCT_HPP_
