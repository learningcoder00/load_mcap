// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverMetaAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverMetaAction __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverMetaAction __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MdriverMetaAction_
{
  using Type = MdriverMetaAction_<ContainerAllocator>;

  explicit MdriverMetaAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_mdriver_meta_action = 0;
      this->score = 0.0;
    }
  }

  explicit MdriverMetaAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->best_mdriver_meta_action = 0;
      this->score = 0.0;
    }
  }

  // field types and members
  using _best_mdriver_meta_action_type =
    uint8_t;
  _best_mdriver_meta_action_type best_mdriver_meta_action;
  using _score_type =
    double;
  _score_type score;
  using _logits_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _logits_type logits;

  // setters for named parameter idiom
  Type & set__best_mdriver_meta_action(
    const uint8_t & _arg)
  {
    this->best_mdriver_meta_action = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__logits(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->logits = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t KEEP_LANE =
    1u;
  static constexpr uint8_t LANE_LEFT =
    2u;
  static constexpr uint8_t LANE_RIGHT =
    3u;

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverMetaAction
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverMetaAction
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MdriverMetaAction_ & other) const
  {
    if (this->best_mdriver_meta_action != other.best_mdriver_meta_action) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->logits != other.logits) {
      return false;
    }
    return true;
  }
  bool operator!=(const MdriverMetaAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MdriverMetaAction_

// alias to use template instance with default allocator
using MdriverMetaAction =
  deva_mdriver_msgs::msg::MdriverMetaAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverMetaAction_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverMetaAction_<ContainerAllocator>::KEEP_LANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverMetaAction_<ContainerAllocator>::LANE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverMetaAction_<ContainerAllocator>::LANE_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_META_ACTION__STRUCT_HPP_
