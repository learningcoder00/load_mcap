// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SubclassificationType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SubclassificationType __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SubclassificationType __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubclassificationType_
{
  using Type = SubclassificationType_<ContainerAllocator>;

  explicit SubclassificationType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit SubclassificationType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAR =
    0u;
  static constexpr uint8_t SUV =
    1u;
  static constexpr uint8_t VAN =
    2u;
  static constexpr uint8_t PICKUP =
    3u;
  static constexpr uint8_t POLICE_CAR =
    4u;
  static constexpr uint8_t AMBULANCE =
    5u;
  static constexpr uint8_t WRECKING_CAR =
    6u;
  static constexpr uint8_t FORKLIFT =
    7u;
  static constexpr uint8_t TRAILER =
    8u;
  static constexpr uint8_t BOX_TRUCK =
    9u;
  static constexpr uint8_t FLATBED_TRUCK =
    10u;
  static constexpr uint8_t BUS =
    11u;
  static constexpr uint8_t OTHER_TRUCK =
    12u;
  static constexpr uint8_t TANK_TRUCK =
    13u;
  static constexpr uint8_t FIRE_ENGINE =
    14u;
  static constexpr uint8_t CLEAN_TRUCK =
    15u;
  static constexpr uint8_t PEDESTRIAN =
    16u;
  static constexpr uint8_t CHILD =
    17u;
  static constexpr uint8_t BICYCLE_WITH_HUMAN =
    18u;
  static constexpr uint8_t MOTORBIKE_WITH_HUMAN =
    19u;
  static constexpr uint8_t ANIMAL_SMALL =
    20u;
  static constexpr uint8_t OTHER_ANIMAL =
    21u;
  static constexpr uint8_t BICYCLE =
    22u;
  static constexpr uint8_t MOTORBIKE =
    23u;
  static constexpr uint8_t TRICYCLE =
    24u;
  static constexpr uint8_t FAKE_PED =
    25u;
  static constexpr uint8_t FAKE_CYCLIST =
    26u;
  static constexpr uint8_t FAKE_CAR =
    27u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SubclassificationType
    std::shared_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SubclassificationType
    std::shared_ptr<deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubclassificationType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubclassificationType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubclassificationType_

// alias to use template instance with default allocator
using SubclassificationType =
  deva_perception_msgs::msg::SubclassificationType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::SUV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::VAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::PICKUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::POLICE_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::AMBULANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::WRECKING_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FORKLIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::BOX_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FLATBED_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::OTHER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::TANK_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FIRE_ENGINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::CLEAN_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::CHILD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::BICYCLE_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::MOTORBIKE_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::ANIMAL_SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::OTHER_ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::MOTORBIKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FAKE_PED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FAKE_CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SubclassificationType_<ContainerAllocator>::FAKE_CAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SUBCLASSIFICATION_TYPE__STRUCT_HPP_
