// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'binded_obs'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.hpp"
// Member 'sl_boundary'
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__struct.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__LaneBindInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__LaneBindInfo __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneBindInfo_
{
  using Type = LaneBindInfo_<ContainerAllocator>;

  explicit LaneBindInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
    }
  }

  explicit LaneBindInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ref_id = 0l;
    }
  }

  // field types and members
  using _ref_id_type =
    int32_t;
  _ref_id_type ref_id;
  using _binded_obs_type =
    std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>>;
  _binded_obs_type binded_obs;
  using _sl_boundary_type =
    std::vector<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>>;
  _sl_boundary_type sl_boundary;
  using _scalable_flags_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scalable_flags_type scalable_flags;
  using _scalable_multimap_type =
    std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>>;
  _scalable_multimap_type scalable_multimap;

  // setters for named parameter idiom
  Type & set__ref_id(
    const int32_t & _arg)
  {
    this->ref_id = _arg;
    return *this;
  }
  Type & set__binded_obs(
    const std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>> & _arg)
  {
    this->binded_obs = _arg;
    return *this;
  }
  Type & set__sl_boundary(
    const std::vector<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2SLBoundary_<ContainerAllocator>>> & _arg)
  {
    this->sl_boundary = _arg;
    return *this;
  }
  Type & set__scalable_flags(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->scalable_flags = _arg;
    return *this;
  }
  Type & set__scalable_multimap(
    const std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>> & _arg)
  {
    this->scalable_multimap = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BIND_ONLANE_BLOCK =
    1u;
  static constexpr uint8_t BIND_ONLANE_NOT_BLOCK =
    2u;
  static constexpr uint8_t BIND_CUTIN =
    3u;
  static constexpr uint8_t BIND_CUTOUT =
    4u;
  static constexpr uint8_t BIND_CROSS =
    5u;
  static constexpr uint8_t BIND_NEAR =
    6u;
  static constexpr uint8_t BIND_NUDGE =
    7u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__LaneBindInfo
    std::shared_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__LaneBindInfo
    std::shared_ptr<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneBindInfo_ & other) const
  {
    if (this->ref_id != other.ref_id) {
      return false;
    }
    if (this->binded_obs != other.binded_obs) {
      return false;
    }
    if (this->sl_boundary != other.sl_boundary) {
      return false;
    }
    if (this->scalable_flags != other.scalable_flags) {
      return false;
    }
    if (this->scalable_multimap != other.scalable_multimap) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneBindInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneBindInfo_

// alias to use template instance with default allocator
using LaneBindInfo =
  deva_planning_msgs2::msg::LaneBindInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_ONLANE_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_ONLANE_NOT_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_CUTIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_CUTOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_CROSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_NEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneBindInfo_<ContainerAllocator>::BIND_NUDGE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__LANE_BIND_INFO__STRUCT_HPP_
