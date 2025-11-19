// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebNotAvoidInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coord_2d'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebNotAvoidInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebNotAvoidInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebNotAvoidInfo_
{
  using Type = WebNotAvoidInfo_<ContainerAllocator>;

  explicit WebNotAvoidInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coord_2d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_to_car = 0l;
      this->forbid_type = 0l;
      this->type = 0l;
      this->valid = false;
    }
  }

  explicit WebNotAvoidInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coord_2d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_to_car = 0l;
      this->forbid_type = 0l;
      this->type = 0l;
      this->valid = false;
    }
  }

  // field types and members
  using _coord_2d_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _coord_2d_type coord_2d;
  using _dist_to_car_type =
    int32_t;
  _dist_to_car_type dist_to_car;
  using _forbid_type_type =
    int32_t;
  _forbid_type_type forbid_type;
  using _type_type =
    int32_t;
  _type_type type;
  using _valid_type =
    bool;
  _valid_type valid;

  // setters for named parameter idiom
  Type & set__coord_2d(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->coord_2d = _arg;
    return *this;
  }
  Type & set__dist_to_car(
    const int32_t & _arg)
  {
    this->dist_to_car = _arg;
    return *this;
  }
  Type & set__forbid_type(
    const int32_t & _arg)
  {
    this->forbid_type = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebNotAvoidInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebNotAvoidInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebNotAvoidInfo_ & other) const
  {
    if (this->coord_2d != other.coord_2d) {
      return false;
    }
    if (this->dist_to_car != other.dist_to_car) {
      return false;
    }
    if (this->forbid_type != other.forbid_type) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebNotAvoidInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebNotAvoidInfo_

// alias to use template instance with default allocator
using WebNotAvoidInfo =
  deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_NOT_AVOID_INFO__STRUCT_HPP_
