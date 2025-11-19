// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__PlanningObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__PlanningObstacle __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningObstacle_
{
  using Type = PlanningObstacle_<ContainerAllocator>;

  explicit PlanningObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->cutin_time = 0.0;
      this->cutout_time = 0.0;
      this->distance = 0.0;
      this->ttc = 0.0;
      this->priority = 0;
    }
  }

  explicit PlanningObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->cutin_time = 0.0;
      this->cutout_time = 0.0;
      this->distance = 0.0;
      this->ttc = 0.0;
      this->priority = 0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _current_line_id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _current_line_id_type current_line_id;
  using _target_line_id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _target_line_id_type target_line_id;
  using _decision_tag_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _decision_tag_type decision_tag;
  using _scene_understanding_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scene_understanding_type scene_understanding;
  using _cutin_time_type =
    double;
  _cutin_time_type cutin_time;
  using _cutout_time_type =
    double;
  _cutout_time_type cutout_time;
  using _distance_type =
    double;
  _distance_type distance;
  using _ttc_type =
    double;
  _ttc_type ttc;
  using _priority_type =
    uint8_t;
  _priority_type priority;
  using _scalable_flags_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scalable_flags_type scalable_flags;
  using _scalable_multimap_type =
    std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>>;
  _scalable_multimap_type scalable_multimap;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__current_line_id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->current_line_id = _arg;
    return *this;
  }
  Type & set__target_line_id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->target_line_id = _arg;
    return *this;
  }
  Type & set__decision_tag(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->decision_tag = _arg;
    return *this;
  }
  Type & set__scene_understanding(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->scene_understanding = _arg;
    return *this;
  }
  Type & set__cutin_time(
    const double & _arg)
  {
    this->cutin_time = _arg;
    return *this;
  }
  Type & set__cutout_time(
    const double & _arg)
  {
    this->cutout_time = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__ttc(
    const double & _arg)
  {
    this->ttc = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
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
  static constexpr uint8_t TAG_UNKNOWN =
    0u;
  static constexpr uint8_t TAG_FOLLOW =
    1u;
  static constexpr uint8_t TAG_OVERTAKE =
    2u;
  static constexpr uint8_t TAG_LEFT_PASS =
    3u;
  static constexpr uint8_t TAG_RIGHT_PASS =
    4u;
  static constexpr uint8_t TAG_PRE_DECELERATE =
    5u;
  static constexpr uint8_t TAG_PRE_OVERTAKE_LEFT =
    6u;
  static constexpr uint8_t TAG_PRE_OVERTAKE_RIGHT =
    7u;
  static constexpr uint8_t SCENE_CUTIN =
    1u;
  static constexpr uint8_t SCENE_CUTOUT =
    2u;
  static constexpr uint8_t SCENE_CROSS =
    3u;
  static constexpr uint8_t SCENE_ONCOMING =
    4u;
  static constexpr uint8_t SCENE_DEAD_CAR =
    5u;
  static constexpr uint8_t SCENE_BLOCK =
    6u;
  static constexpr uint8_t PRIORITY_LOW =
    1u;
  static constexpr uint8_t PRIORITY_EQUAL =
    2u;
  static constexpr uint8_t PRIORITY_HIGH =
    3u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningObstacle
    std::shared_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningObstacle
    std::shared_ptr<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->current_line_id != other.current_line_id) {
      return false;
    }
    if (this->target_line_id != other.target_line_id) {
      return false;
    }
    if (this->decision_tag != other.decision_tag) {
      return false;
    }
    if (this->scene_understanding != other.scene_understanding) {
      return false;
    }
    if (this->cutin_time != other.cutin_time) {
      return false;
    }
    if (this->cutout_time != other.cutout_time) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->ttc != other.ttc) {
      return false;
    }
    if (this->priority != other.priority) {
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
  bool operator!=(const PlanningObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningObstacle_

// alias to use template instance with default allocator
using PlanningObstacle =
  deva_planning_msgs2::msg::PlanningObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_OVERTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_LEFT_PASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_RIGHT_PASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_PRE_DECELERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_PRE_OVERTAKE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::TAG_PRE_OVERTAKE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_CUTIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_CUTOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_CROSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_ONCOMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_DEAD_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::SCENE_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::PRIORITY_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::PRIORITY_EQUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningObstacle_<ContainerAllocator>::PRIORITY_HIGH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__STRUCT_HPP_
