// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneCond __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneCond __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneCond_
{
  using Type = LaneCond_<ContainerAllocator>;

  explicit LaneCond_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneinfo_cond = 0;
      this->link_direction = 0;
      this->date = "";
    }
  }

  explicit LaneCond_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneinfo_cond = 0;
      this->link_direction = 0;
      this->date = "";
    }
  }

  // field types and members
  using _laneinfo_cond_type =
    uint16_t;
  _laneinfo_cond_type laneinfo_cond;
  using _link_direction_type =
    uint8_t;
  _link_direction_type link_direction;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _vehicles_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _vehicles_type vehicles;
  using _special_times_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _special_times_type special_times;

  // setters for named parameter idiom
  Type & set__laneinfo_cond(
    const uint16_t & _arg)
  {
    this->laneinfo_cond = _arg;
    return *this;
  }
  Type & set__link_direction(
    const uint8_t & _arg)
  {
    this->link_direction = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__vehicles(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }
  Type & set__special_times(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->special_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneCond
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneCond
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneCond_ & other) const
  {
    if (this->laneinfo_cond != other.laneinfo_cond) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    if (this->special_times != other.special_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneCond_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneCond_

// alias to use template instance with default allocator
using LaneCond =
  deva_gaode_routing_msgs::msg::LaneCond_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_COND__STRUCT_HPP_
