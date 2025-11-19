// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'game_obstacles'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.hpp"
// Member 'critical_obstacles'
#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.hpp"
// Member 'tree_score'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.hpp"
// Member 'tree_nodes'
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.hpp"
// Member 'tree_output_trajs'
#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__PolicyScenario __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__PolicyScenario __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PolicyScenario_
{
  using Type = PolicyScenario_<ContainerAllocator>;

  explicit PolicyScenario_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_id = 0l;
      this->behavior_type = 0;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->is_from_mdriver = false;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->rollout_start_time = 0.0;
    }
  }

  explicit PolicyScenario_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : front_obstacle_id(_alloc),
    rear_obstacle_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_id = 0l;
      this->behavior_type = 0;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->is_from_mdriver = false;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->rollout_start_time = 0.0;
    }
  }

  // field types and members
  using _tree_id_type =
    int32_t;
  _tree_id_type tree_id;
  using _behavior_type_type =
    uint8_t;
  _behavior_type_type behavior_type;
  using _target_line_id_type =
    int32_t;
  _target_line_id_type target_line_id;
  using _current_line_id_type =
    int32_t;
  _current_line_id_type current_line_id;
  using _is_from_mdriver_type =
    bool;
  _is_from_mdriver_type is_from_mdriver;
  using _front_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _front_obstacle_id_type front_obstacle_id;
  using _rear_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rear_obstacle_id_type rear_obstacle_id;
  using _game_obstacles_type =
    std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>>;
  _game_obstacles_type game_obstacles;
  using _critical_obstacles_type =
    std::vector<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>>;
  _critical_obstacles_type critical_obstacles;
  using _tree_score_type =
    std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>>;
  _tree_score_type tree_score;
  using _rollout_start_time_type =
    double;
  _rollout_start_time_type rollout_start_time;
  using _tree_nodes_type =
    std::vector<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>>;
  _tree_nodes_type tree_nodes;
  using _tree_output_trajs_type =
    std::vector<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>>;
  _tree_output_trajs_type tree_output_trajs;
  using _scalable_flags_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scalable_flags_type scalable_flags;
  using _scalable_multimap_type =
    std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>>;
  _scalable_multimap_type scalable_multimap;

  // setters for named parameter idiom
  Type & set__tree_id(
    const int32_t & _arg)
  {
    this->tree_id = _arg;
    return *this;
  }
  Type & set__behavior_type(
    const uint8_t & _arg)
  {
    this->behavior_type = _arg;
    return *this;
  }
  Type & set__target_line_id(
    const int32_t & _arg)
  {
    this->target_line_id = _arg;
    return *this;
  }
  Type & set__current_line_id(
    const int32_t & _arg)
  {
    this->current_line_id = _arg;
    return *this;
  }
  Type & set__is_from_mdriver(
    const bool & _arg)
  {
    this->is_from_mdriver = _arg;
    return *this;
  }
  Type & set__front_obstacle_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->front_obstacle_id = _arg;
    return *this;
  }
  Type & set__rear_obstacle_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rear_obstacle_id = _arg;
    return *this;
  }
  Type & set__game_obstacles(
    const std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>> & _arg)
  {
    this->game_obstacles = _arg;
    return *this;
  }
  Type & set__critical_obstacles(
    const std::vector<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningObstacle_<ContainerAllocator>>> & _arg)
  {
    this->critical_obstacles = _arg;
    return *this;
  }
  Type & set__tree_score(
    const std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>> & _arg)
  {
    this->tree_score = _arg;
    return *this;
  }
  Type & set__rollout_start_time(
    const double & _arg)
  {
    this->rollout_start_time = _arg;
    return *this;
  }
  Type & set__tree_nodes(
    const std::vector<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>> & _arg)
  {
    this->tree_nodes = _arg;
    return *this;
  }
  Type & set__tree_output_trajs(
    const std::vector<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->tree_output_trajs = _arg;
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
  static constexpr uint8_t LANE_KEEPING =
    0u;
  static constexpr uint8_t RIGHT_CHANGE =
    1u;
  static constexpr uint8_t LEFT_CHANGE =
    2u;
  static constexpr uint8_t HOLD =
    3u;
  static constexpr uint8_t CANCEL =
    4u;
  static constexpr uint8_t LANE_CHANGE =
    5u;
  static constexpr uint8_t RIGHT_CHANGE_PREPARE =
    6u;
  static constexpr uint8_t LEFT_CHANGE_PREPARE =
    7u;
  static constexpr uint8_t UNKNOWN =
    8u;
  static constexpr uint8_t TREE_NON_GAMING =
    1u;
  static constexpr uint8_t TREE_GAMED =
    2u;
  static constexpr uint8_t TREE_CANDIDATE =
    3u;
  static constexpr uint8_t TREE_LATERAL =
    4u;
  static constexpr uint8_t TREE_PRE_DECELERATE =
    5u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__PolicyScenario
    std::shared_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__PolicyScenario
    std::shared_ptr<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PolicyScenario_ & other) const
  {
    if (this->tree_id != other.tree_id) {
      return false;
    }
    if (this->behavior_type != other.behavior_type) {
      return false;
    }
    if (this->target_line_id != other.target_line_id) {
      return false;
    }
    if (this->current_line_id != other.current_line_id) {
      return false;
    }
    if (this->is_from_mdriver != other.is_from_mdriver) {
      return false;
    }
    if (this->front_obstacle_id != other.front_obstacle_id) {
      return false;
    }
    if (this->rear_obstacle_id != other.rear_obstacle_id) {
      return false;
    }
    if (this->game_obstacles != other.game_obstacles) {
      return false;
    }
    if (this->critical_obstacles != other.critical_obstacles) {
      return false;
    }
    if (this->tree_score != other.tree_score) {
      return false;
    }
    if (this->rollout_start_time != other.rollout_start_time) {
      return false;
    }
    if (this->tree_nodes != other.tree_nodes) {
      return false;
    }
    if (this->tree_output_trajs != other.tree_output_trajs) {
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
  bool operator!=(const PolicyScenario_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PolicyScenario_

// alias to use template instance with default allocator
using PolicyScenario =
  deva_planning_msgs2::msg::PolicyScenario_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::LANE_KEEPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::RIGHT_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::LEFT_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::HOLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::CANCEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::LANE_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::RIGHT_CHANGE_PREPARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::LEFT_CHANGE_PREPARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::TREE_NON_GAMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::TREE_GAMED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::TREE_CANDIDATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::TREE_LATERAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PolicyScenario_<ContainerAllocator>::TREE_PRE_DECELERATE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__POLICY_SCENARIO__STRUCT_HPP_
