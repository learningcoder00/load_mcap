// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk2dArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'crosswalk_2ds'
#include "deva_perception_msgs/msg/detail/crosswalk2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Crosswalk2dArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Crosswalk2dArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Crosswalk2dArray_
{
  using Type = Crosswalk2dArray_<ContainerAllocator>;

  explicit Crosswalk2dArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit Crosswalk2dArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _crosswalk_2ds_type =
    std::vector<deva_perception_msgs::msg::Crosswalk2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk2d_<ContainerAllocator>>>;
  _crosswalk_2ds_type crosswalk_2ds;
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__crosswalk_2ds(
    const std::vector<deva_perception_msgs::msg::Crosswalk2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk2d_<ContainerAllocator>>> & _arg)
  {
    this->crosswalk_2ds = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FOV120 =
    0u;
  static constexpr uint8_t FOV30 =
    1u;
  static constexpr uint8_t BACK =
    2u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Crosswalk2dArray
    std::shared_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Crosswalk2dArray
    std::shared_ptr<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Crosswalk2dArray_ & other) const
  {
    if (this->crosswalk_2ds != other.crosswalk_2ds) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const Crosswalk2dArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Crosswalk2dArray_

// alias to use template instance with default allocator
using Crosswalk2dArray =
  deva_perception_msgs::msg::Crosswalk2dArray_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Crosswalk2dArray_<ContainerAllocator>::FOV120;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Crosswalk2dArray_<ContainerAllocator>::FOV30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Crosswalk2dArray_<ContainerAllocator>::BACK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__STRUCT_HPP_
