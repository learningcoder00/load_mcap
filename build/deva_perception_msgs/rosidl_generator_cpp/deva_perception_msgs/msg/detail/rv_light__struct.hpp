// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_HPP_

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
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVLight __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVLight __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVLight_
{
  using Type = RVLight_<ContainerAllocator>;

  explicit RVLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_type = 0;
      this->heading_type = 0;
      this->depth = 0.0f;
      this->sign_occ_type = 0;
      this->sign_trun_type = 0;
    }
  }

  explicit RVLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_type = 0;
      this->heading_type = 0;
      this->depth = 0.0f;
      this->sign_occ_type = 0;
      this->sign_trun_type = 0;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _light_type_type =
    uint8_t;
  _light_type_type light_type;
  using _heading_type_type =
    uint8_t;
  _heading_type_type heading_type;
  using _depth_type =
    float;
  _depth_type depth;
  using _sign_occ_type_type =
    uint8_t;
  _sign_occ_type_type sign_occ_type;
  using _sign_trun_type_type =
    uint8_t;
  _sign_trun_type_type sign_trun_type;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__light_type(
    const uint8_t & _arg)
  {
    this->light_type = _arg;
    return *this;
  }
  Type & set__heading_type(
    const uint8_t & _arg)
  {
    this->heading_type = _arg;
    return *this;
  }
  Type & set__depth(
    const float & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__sign_occ_type(
    const uint8_t & _arg)
  {
    this->sign_occ_type = _arg;
    return *this;
  }
  Type & set__sign_trun_type(
    const uint8_t & _arg)
  {
    this->sign_trun_type = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CAR_LIGHT =
    1u;
  static constexpr uint8_t VAN_LIGHT =
    2u;
  static constexpr uint8_t MOTOR_LIGHT =
    3u;
  static constexpr uint8_t TRAFFIC_SIGN =
    4u;
  static constexpr uint8_t HEAD =
    100u;
  static constexpr uint8_t TAIL =
    101u;
  static constexpr uint8_t NO_OCC =
    151u;
  static constexpr uint8_t MINOR_OCC =
    152u;
  static constexpr uint8_t PARTIAL_OCC =
    153u;
  static constexpr uint8_t SEVERE_OCC =
    154u;
  static constexpr uint8_t NO_TRUN =
    201u;
  static constexpr uint8_t MINOR_TRUN =
    202u;
  static constexpr uint8_t PARTIAL_TRUN =
    203u;
  static constexpr uint8_t SEVERE_TRUN =
    204u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVLight
    std::shared_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVLight
    std::shared_ptr<deva_perception_msgs::msg::RVLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVLight_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->light_type != other.light_type) {
      return false;
    }
    if (this->heading_type != other.heading_type) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->sign_occ_type != other.sign_occ_type) {
      return false;
    }
    if (this->sign_trun_type != other.sign_trun_type) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVLight_

// alias to use template instance with default allocator
using RVLight =
  deva_perception_msgs::msg::RVLight_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::CAR_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::VAN_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::MOTOR_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::TRAFFIC_SIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::HEAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::TAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::NO_OCC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::MINOR_OCC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::PARTIAL_OCC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::SEVERE_OCC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::NO_TRUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::MINOR_TRUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::PARTIAL_TRUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVLight_<ContainerAllocator>::SEVERE_TRUN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LIGHT__STRUCT_HPP_
