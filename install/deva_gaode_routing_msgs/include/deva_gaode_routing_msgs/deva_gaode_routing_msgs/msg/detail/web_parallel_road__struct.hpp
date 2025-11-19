// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parallel_road_list'
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebParallelRoad __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebParallelRoad __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebParallelRoad_
{
  using Type = WebParallelRoad_<ContainerAllocator>;

  explicit WebParallelRoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->flag = 0l;
      this->hw_flag = 0l;
      this->status = 0l;
    }
  }

  explicit WebParallelRoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->flag = 0l;
      this->hw_flag = 0l;
      this->status = 0l;
    }
  }

  // field types and members
  using _count_type =
    int32_t;
  _count_type count;
  using _flag_type =
    int32_t;
  _flag_type flag;
  using _hw_flag_type =
    int32_t;
  _hw_flag_type hw_flag;
  using _status_type =
    int32_t;
  _status_type status;
  using _parallel_road_list_type =
    std::vector<deva_gaode_routing_msgs::msg::WebLocParallelRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebLocParallelRoad_<ContainerAllocator>>>;
  _parallel_road_list_type parallel_road_list;

  // setters for named parameter idiom
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__flag(
    const int32_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__hw_flag(
    const int32_t & _arg)
  {
    this->hw_flag = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__parallel_road_list(
    const std::vector<deva_gaode_routing_msgs::msg::WebLocParallelRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebLocParallelRoad_<ContainerAllocator>>> & _arg)
  {
    this->parallel_road_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebParallelRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebParallelRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebParallelRoad_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->hw_flag != other.hw_flag) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->parallel_road_list != other.parallel_road_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebParallelRoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebParallelRoad_

// alias to use template instance with default allocator
using WebParallelRoad =
  deva_gaode_routing_msgs::msg::WebParallelRoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_PARALLEL_ROAD__STRUCT_HPP_
