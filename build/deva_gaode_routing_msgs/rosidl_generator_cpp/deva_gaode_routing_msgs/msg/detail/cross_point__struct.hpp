// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/CrossPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'geom'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__CrossPoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__CrossPoint __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CrossPoint_
{
  using Type = CrossPoint_<ContainerAllocator>;

  explicit CrossPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geom(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->type = 0l;
      this->cross_id = 0ull;
    }
  }

  explicit CrossPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geom(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->type = 0l;
      this->cross_id = 0ull;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _geom_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _geom_type geom;
  using _type_type =
    int32_t;
  _type_type type;
  using _cross_id_type =
    uint64_t;
  _cross_id_type cross_id;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__geom(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->geom = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__cross_id(
    const uint64_t & _arg)
  {
    this->cross_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CrossPoint
    std::shared_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__CrossPoint
    std::shared_ptr<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CrossPoint_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->geom != other.geom) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->cross_id != other.cross_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CrossPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CrossPoint_

// alias to use template instance with default allocator
using CrossPoint =
  deva_gaode_routing_msgs::msg::CrossPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CROSS_POINT__STRUCT_HPP_
