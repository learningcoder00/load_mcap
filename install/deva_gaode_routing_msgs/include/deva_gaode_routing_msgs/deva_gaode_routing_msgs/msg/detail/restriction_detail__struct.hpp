// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RestrictionDetail __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RestrictionDetail __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionDetail_
{
  using Type = RestrictionDetail_<ContainerAllocator>;

  explicit RestrictionDetail_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->direction = 0l;
      this->vehicle_limit = 0ul;
      this->period_approx = 0l;
      this->valid_period = "";
      this->time_type = 0ul;
    }
  }

  explicit RestrictionDetail_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : valid_period(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->direction = 0l;
      this->vehicle_limit = 0ul;
      this->period_approx = 0l;
      this->valid_period = "";
      this->time_type = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _direction_type =
    int32_t;
  _direction_type direction;
  using _vehicle_limit_type =
    uint32_t;
  _vehicle_limit_type vehicle_limit;
  using _period_approx_type =
    int32_t;
  _period_approx_type period_approx;
  using _valid_period_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _valid_period_type valid_period;
  using _time_type_type =
    uint32_t;
  _time_type_type time_type;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__direction(
    const int32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__vehicle_limit(
    const uint32_t & _arg)
  {
    this->vehicle_limit = _arg;
    return *this;
  }
  Type & set__period_approx(
    const int32_t & _arg)
  {
    this->period_approx = _arg;
    return *this;
  }
  Type & set__valid_period(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->valid_period = _arg;
    return *this;
  }
  Type & set__time_type(
    const uint32_t & _arg)
  {
    this->time_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RestrictionDetail
    std::shared_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RestrictionDetail
    std::shared_ptr<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionDetail_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->vehicle_limit != other.vehicle_limit) {
      return false;
    }
    if (this->period_approx != other.period_approx) {
      return false;
    }
    if (this->valid_period != other.valid_period) {
      return false;
    }
    if (this->time_type != other.time_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionDetail_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionDetail_

// alias to use template instance with default allocator
using RestrictionDetail =
  deva_gaode_routing_msgs::msg::RestrictionDetail_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__STRUCT_HPP_
