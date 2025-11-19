// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'all_obstacles'
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.hpp"
// Member 'nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__struct.hpp"
// Member 'mdriver_meta_actions'
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__struct.hpp"
// Member 'refline_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MWorld __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MWorld __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MWorld_
{
  using Type = MWorld_<ContainerAllocator>;

  explicit MWorld_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nudge_buffer(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_id = 0l;
      this->meta_action = 0;
      this->score = 0.0f;
      this->refline_points.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_init});
    }
  }

  explicit MWorld_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nudge_buffer(_alloc, _init),
    refline_points(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->world_id = 0l;
      this->meta_action = 0;
      this->score = 0.0f;
      this->refline_points.fill(geometry_msgs::msg::Point_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _world_id_type =
    int32_t;
  _world_id_type world_id;
  using _meta_action_type =
    uint8_t;
  _meta_action_type meta_action;
  using _all_obstacles_type =
    std::vector<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>>;
  _all_obstacles_type all_obstacles;
  using _nudge_buffer_type =
    deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>;
  _nudge_buffer_type nudge_buffer;
  using _ego_ref_v_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ego_ref_v_type ego_ref_v;
  using _mdriver_meta_actions_type =
    std::vector<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>>;
  _mdriver_meta_actions_type mdriver_meta_actions;
  using _score_type =
    float;
  _score_type score;
  using _refline_points_type =
    std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 17>;
  _refline_points_type refline_points;

  // setters for named parameter idiom
  Type & set__world_id(
    const int32_t & _arg)
  {
    this->world_id = _arg;
    return *this;
  }
  Type & set__meta_action(
    const uint8_t & _arg)
  {
    this->meta_action = _arg;
    return *this;
  }
  Type & set__all_obstacles(
    const std::vector<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>> & _arg)
  {
    this->all_obstacles = _arg;
    return *this;
  }
  Type & set__nudge_buffer(
    const deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> & _arg)
  {
    this->nudge_buffer = _arg;
    return *this;
  }
  Type & set__ego_ref_v(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ego_ref_v = _arg;
    return *this;
  }
  Type & set__mdriver_meta_actions(
    const std::vector<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MdriverMetaAction_<ContainerAllocator>>> & _arg)
  {
    this->mdriver_meta_actions = _arg;
    return *this;
  }
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__refline_points(
    const std::array<geometry_msgs::msg::Point_<ContainerAllocator>, 17> & _arg)
  {
    this->refline_points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t WAIT =
    1u;
  static constexpr uint8_t SPEED_UP =
    2u;
  static constexpr uint8_t SLOW_DOWN =
    3u;
  static constexpr uint8_t SLOW_DOWN_RAPIDLY =
    4u;
  static constexpr uint8_t GO_STRAIGHT_SLOWLY =
    5u;
  static constexpr uint8_t GO_STRAIGHT_AT_A_CONSTANT_SPEED =
    6u;
  static constexpr uint8_t REVERSE =
    7u;
  static constexpr uint8_t TURN_LEFT =
    8u;
  static constexpr uint8_t TURN_RIGHT =
    9u;
  static constexpr uint8_t STOP =
    10u;
  static constexpr uint8_t CHANGE_LANE_TO_THE_LEFT =
    11u;
  static constexpr uint8_t CHANGE_LANE_TO_THE_RIGHT =
    12u;
  static constexpr uint8_t SHIFT_SLIGHTLY_TO_THE_LEFT =
    13u;
  static constexpr uint8_t SHIFT_SLIGHTLY_TO_THE_RIGHT =
    14u;
  static constexpr uint8_t AROUND_LEFT =
    15u;
  static constexpr uint8_t AROUND_RIGHT =
    16u;
  static constexpr uint8_t SPLIT_LEFT =
    17u;
  static constexpr uint8_t SPLIT_RIGHT =
    18u;

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MWorld
    std::shared_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MWorld
    std::shared_ptr<deva_mdriver_msgs::msg::MWorld_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MWorld_ & other) const
  {
    if (this->world_id != other.world_id) {
      return false;
    }
    if (this->meta_action != other.meta_action) {
      return false;
    }
    if (this->all_obstacles != other.all_obstacles) {
      return false;
    }
    if (this->nudge_buffer != other.nudge_buffer) {
      return false;
    }
    if (this->ego_ref_v != other.ego_ref_v) {
      return false;
    }
    if (this->mdriver_meta_actions != other.mdriver_meta_actions) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->refline_points != other.refline_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const MWorld_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MWorld_

// alias to use template instance with default allocator
using MWorld =
  deva_mdriver_msgs::msg::MWorld_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SPEED_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SLOW_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SLOW_DOWN_RAPIDLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::GO_STRAIGHT_SLOWLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::GO_STRAIGHT_AT_A_CONSTANT_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::CHANGE_LANE_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::CHANGE_LANE_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::AROUND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::AROUND_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SPLIT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MWorld_<ContainerAllocator>::SPLIT_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__STRUCT_HPP_
