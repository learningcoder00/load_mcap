// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacleArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacleArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVDynamicObstacleArray_
{
  using Type = RVDynamicObstacleArray_<ContainerAllocator>;

  explicit RVDynamicObstacleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cipv_id = 0l;
      this->num_obstacles = 0l;
    }
  }

  explicit RVDynamicObstacleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cipv_id = 0l;
      this->num_obstacles = 0l;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cipv_id_type =
    int32_t;
  _cipv_id_type cipv_id;
  using _num_obstacles_type =
    int32_t;
  _num_obstacles_type num_obstacles;
  using _obstacles_type =
    std::vector<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>>;
  _obstacles_type obstacles;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cipv_id(
    const int32_t & _arg)
  {
    this->cipv_id = _arg;
    return *this;
  }
  Type & set__num_obstacles(
    const int32_t & _arg)
  {
    this->num_obstacles = _arg;
    return *this;
  }
  Type & set__obstacles(
    const std::vector<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>> & _arg)
  {
    this->obstacles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacleArray
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacleArray
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVDynamicObstacleArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cipv_id != other.cipv_id) {
      return false;
    }
    if (this->num_obstacles != other.num_obstacles) {
      return false;
    }
    if (this->obstacles != other.obstacles) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVDynamicObstacleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVDynamicObstacleArray_

// alias to use template instance with default allocator
using RVDynamicObstacleArray =
  deva_perception_msgs::msg::RVDynamicObstacleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE_ARRAY__STRUCT_HPP_
