// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__ObstacleTimestamp __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__ObstacleTimestamp __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleTimestamp_
{
  using Type = ObstacleTimestamp_<ContainerAllocator>;

  explicit ObstacleTimestamp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_timestamp = "";
      this->loc_timestamp = "";
    }
  }

  explicit ObstacleTimestamp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lidar_timestamp(_alloc),
    loc_timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_timestamp = "";
      this->loc_timestamp = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _radar_timestamps_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _radar_timestamps_type radar_timestamps;
  using _camera_timestamps_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _camera_timestamps_type camera_timestamps;
  using _lidar_timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_timestamp_type lidar_timestamp;
  using _loc_timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _loc_timestamp_type loc_timestamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__radar_timestamps(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->radar_timestamps = _arg;
    return *this;
  }
  Type & set__camera_timestamps(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->camera_timestamps = _arg;
    return *this;
  }
  Type & set__lidar_timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_timestamp = _arg;
    return *this;
  }
  Type & set__loc_timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->loc_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__ObstacleTimestamp
    std::shared_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__ObstacleTimestamp
    std::shared_ptr<deva_perception_msgs::msg::ObstacleTimestamp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleTimestamp_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->radar_timestamps != other.radar_timestamps) {
      return false;
    }
    if (this->camera_timestamps != other.camera_timestamps) {
      return false;
    }
    if (this->lidar_timestamp != other.lidar_timestamp) {
      return false;
    }
    if (this->loc_timestamp != other.loc_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleTimestamp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleTimestamp_

// alias to use template instance with default allocator
using ObstacleTimestamp =
  deva_perception_msgs::msg::ObstacleTimestamp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_TIMESTAMP__STRUCT_HPP_
