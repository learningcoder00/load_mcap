// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/MovingObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
// Member 'velocity'
// Member 'velocity_var'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
// Member 'acceleration_var'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__MovingObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__MovingObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovingObstacle_
{
  using Type = MovingObstacle_<ContainerAllocator>;

  explicit MovingObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init),
    velocity(_init),
    acceleration(_init),
    velocity_var(_init),
    acceleration_var(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_obstacle_type = 0;
      this->det_type = "";
      this->is_predict = false;
    }
  }

  explicit MovingObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init),
    det_type(_alloc),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    velocity_var(_alloc, _init),
    acceleration_var(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->moving_obstacle_type = 0;
      this->det_type = "";
      this->is_predict = false;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _moving_obstacle_type_type =
    uint8_t;
  _moving_obstacle_type_type moving_obstacle_type;
  using _det_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _det_type_type det_type;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _velocity_var_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_var_type velocity_var;
  using _acceleration_var_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_var_type acceleration_var;
  using _is_predict_type =
    bool;
  _is_predict_type is_predict;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__moving_obstacle_type(
    const uint8_t & _arg)
  {
    this->moving_obstacle_type = _arg;
    return *this;
  }
  Type & set__det_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->det_type = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__velocity_var(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_var = _arg;
    return *this;
  }
  Type & set__acceleration_var(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration_var = _arg;
    return *this;
  }
  Type & set__is_predict(
    const bool & _arg)
  {
    this->is_predict = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAR =
    0u;
  static constexpr uint8_t TRUCK =
    1u;
  static constexpr uint8_t CONSTRUCTION_VEHICLE =
    2u;
  static constexpr uint8_t BUS =
    3u;
  static constexpr uint8_t MOTORCYCLE =
    4u;
  static constexpr uint8_t BICYCLE =
    5u;
  static constexpr uint8_t TRICYCLE =
    6u;
  static constexpr uint8_t CYCLIST =
    7u;
  static constexpr uint8_t PEDESTRIAN =
    8u;
  static constexpr uint8_t UNKNOWN =
    9u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__MovingObstacle
    std::shared_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__MovingObstacle
    std::shared_ptr<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovingObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->moving_obstacle_type != other.moving_obstacle_type) {
      return false;
    }
    if (this->det_type != other.det_type) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->velocity_var != other.velocity_var) {
      return false;
    }
    if (this->acceleration_var != other.acceleration_var) {
      return false;
    }
    if (this->is_predict != other.is_predict) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovingObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovingObstacle_

// alias to use template instance with default allocator
using MovingObstacle =
  deva_perception_msgs::msg::MovingObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovingObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__STRUCT_HPP_
