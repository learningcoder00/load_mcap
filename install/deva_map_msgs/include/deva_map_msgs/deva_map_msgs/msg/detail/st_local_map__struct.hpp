// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'channels'
#include "deva_map_msgs/msg/detail/channel__struct.hpp"
// Member 'reference_channals'
#include "deva_map_msgs/msg/detail/reference_channal__struct.hpp"
// Member 'obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"
// Member 'signals'
#include "deva_perception_msgs/msg/detail/signal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__STLocalMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__STLocalMap __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct STLocalMap_
{
  using Type = STLocalMap_<ContainerAllocator>;

  explicit STLocalMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit STLocalMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _channels_type =
    std::vector<deva_map_msgs::msg::Channel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::Channel_<ContainerAllocator>>>;
  _channels_type channels;
  using _reference_channals_type =
    std::vector<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>>;
  _reference_channals_type reference_channals;
  using _obstacles_type =
    std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>>;
  _obstacles_type obstacles;
  using _signals_type =
    std::vector<deva_perception_msgs::msg::Signal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Signal_<ContainerAllocator>>>;
  _signals_type signals;

  // setters for named parameter idiom
  Type & set__channels(
    const std::vector<deva_map_msgs::msg::Channel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::Channel_<ContainerAllocator>>> & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__reference_channals(
    const std::vector<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>> & _arg)
  {
    this->reference_channals = _arg;
    return *this;
  }
  Type & set__obstacles(
    const std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>> & _arg)
  {
    this->obstacles = _arg;
    return *this;
  }
  Type & set__signals(
    const std::vector<deva_perception_msgs::msg::Signal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Signal_<ContainerAllocator>>> & _arg)
  {
    this->signals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::STLocalMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::STLocalMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::STLocalMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::STLocalMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__STLocalMap
    std::shared_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__STLocalMap
    std::shared_ptr<deva_map_msgs::msg::STLocalMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const STLocalMap_ & other) const
  {
    if (this->channels != other.channels) {
      return false;
    }
    if (this->reference_channals != other.reference_channals) {
      return false;
    }
    if (this->obstacles != other.obstacles) {
      return false;
    }
    if (this->signals != other.signals) {
      return false;
    }
    return true;
  }
  bool operator!=(const STLocalMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct STLocalMap_

// alias to use template instance with default allocator
using STLocalMap =
  deva_map_msgs::msg::STLocalMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__ST_LOCAL_MAP__STRUCT_HPP_
