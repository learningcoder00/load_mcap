// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_

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
// Member 'mcts_trees'
#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.hpp"
// Member 'tagged_obstacle'
#include "deva_planning_msgs2/msg/detail/u_int2_string__struct.hpp"
// Member 'lane_bind_infos'
#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.hpp"
// Member 'ego_sl_on_ref_lines'
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__struct.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.hpp"
// Member 'scalable_stream'
#include "deva_planning_msgs2/msg/detail/string2_u_int__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__StateContext __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__StateContext __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateContext_
{
  using Type = StateContext_<ContainerAllocator>;

  explicit StateContext_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_type = 0;
      this->routing_mode = 0;
      this->current_turn_type = 0;
      this->use_mdriver_ego = 0l;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->lane_change_task = 0;
      this->best_tree_id = 0l;
      this->lane_change_cancel_reason = 0;
    }
  }

  explicit StateContext_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    front_obstacle_id(_alloc),
    rear_obstacle_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_type = 0;
      this->routing_mode = 0;
      this->current_turn_type = 0;
      this->use_mdriver_ego = 0l;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->lane_change_task = 0;
      this->best_tree_id = 0l;
      this->lane_change_cancel_reason = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _behavior_type_type =
    uint8_t;
  _behavior_type_type behavior_type;
  using _routing_mode_type =
    uint8_t;
  _routing_mode_type routing_mode;
  using _current_turn_type_type =
    uint8_t;
  _current_turn_type_type current_turn_type;
  using _use_mdriver_ego_type =
    int32_t;
  _use_mdriver_ego_type use_mdriver_ego;
  using _target_line_id_type =
    int32_t;
  _target_line_id_type target_line_id;
  using _current_line_id_type =
    int32_t;
  _current_line_id_type current_line_id;
  using _front_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _front_obstacle_id_type front_obstacle_id;
  using _rear_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rear_obstacle_id_type rear_obstacle_id;
  using _lane_change_task_type =
    uint8_t;
  _lane_change_task_type lane_change_task;
  using _best_tree_id_type =
    int32_t;
  _best_tree_id_type best_tree_id;
  using _mcts_trees_type =
    std::vector<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>>;
  _mcts_trees_type mcts_trees;
  using _tagged_obstacle_type =
    std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>>;
  _tagged_obstacle_type tagged_obstacle;
  using _lane_bind_infos_type =
    std::vector<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>>;
  _lane_bind_infos_type lane_bind_infos;
  using _ego_sl_on_ref_lines_type =
    std::vector<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>>;
  _ego_sl_on_ref_lines_type ego_sl_on_ref_lines;
  using _lane_change_cancel_reason_type =
    uint8_t;
  _lane_change_cancel_reason_type lane_change_cancel_reason;
  using _scalable_flags_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scalable_flags_type scalable_flags;
  using _scalable_multimap_type =
    std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>>;
  _scalable_multimap_type scalable_multimap;
  using _scalable_stream_type =
    std::vector<deva_planning_msgs2::msg::String2UInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2UInt_<ContainerAllocator>>>;
  _scalable_stream_type scalable_stream;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__behavior_type(
    const uint8_t & _arg)
  {
    this->behavior_type = _arg;
    return *this;
  }
  Type & set__routing_mode(
    const uint8_t & _arg)
  {
    this->routing_mode = _arg;
    return *this;
  }
  Type & set__current_turn_type(
    const uint8_t & _arg)
  {
    this->current_turn_type = _arg;
    return *this;
  }
  Type & set__use_mdriver_ego(
    const int32_t & _arg)
  {
    this->use_mdriver_ego = _arg;
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
  Type & set__lane_change_task(
    const uint8_t & _arg)
  {
    this->lane_change_task = _arg;
    return *this;
  }
  Type & set__best_tree_id(
    const int32_t & _arg)
  {
    this->best_tree_id = _arg;
    return *this;
  }
  Type & set__mcts_trees(
    const std::vector<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PolicyScenario_<ContainerAllocator>>> & _arg)
  {
    this->mcts_trees = _arg;
    return *this;
  }
  Type & set__tagged_obstacle(
    const std::vector<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::UInt2String_<ContainerAllocator>>> & _arg)
  {
    this->tagged_obstacle = _arg;
    return *this;
  }
  Type & set__lane_bind_infos(
    const std::vector<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::LaneBindInfo_<ContainerAllocator>>> & _arg)
  {
    this->lane_bind_infos = _arg;
    return *this;
  }
  Type & set__ego_sl_on_ref_lines(
    const std::vector<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::Ref2SLBoundary_<ContainerAllocator>>> & _arg)
  {
    this->ego_sl_on_ref_lines = _arg;
    return *this;
  }
  Type & set__lane_change_cancel_reason(
    const uint8_t & _arg)
  {
    this->lane_change_cancel_reason = _arg;
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
  Type & set__scalable_stream(
    const std::vector<deva_planning_msgs2::msg::String2UInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2UInt_<ContainerAllocator>>> & _arg)
  {
    this->scalable_stream = _arg;
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
  static constexpr uint8_t TAKE_OVER =
    9u;
  static constexpr uint8_t ROUTING_NULL =
    0u;
  static constexpr uint8_t INCREASED_ROAD =
    1u;
  static constexpr uint8_t LANE =
    2u;
  static constexpr uint8_t OSM =
    3u;
  static constexpr uint8_t ROAD =
    4u;
  static constexpr uint8_t SDK_NAVI =
    5u;
  static constexpr uint8_t SDK_CRUISE =
    6u;
  static constexpr uint8_t WEB =
    7u;
  static constexpr uint8_t U_TURN =
    0u;
  static constexpr uint8_t TURN_LEFT =
    1u;
  static constexpr uint8_t TURN_RIGHT =
    2u;
  static constexpr uint8_t LEFT_TURN_WAITING_AREA =
    3u;
  static constexpr uint8_t RIGHT_TURN_WAITING_AREA =
    4u;
  static constexpr uint8_t STRAIGHT_AHEAD_WAITING_AREA =
    5u;
  static constexpr uint8_t GO_STRAIGHT =
    6u;
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t TURN_LEVER =
    1u;
  static constexpr uint8_t OVERTAKE =
    2u;
  static constexpr uint8_t NAVIGATION =
    3u;
  static constexpr uint8_t OBSTACLE =
    4u;
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

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::StateContext_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::StateContext_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::StateContext_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::StateContext_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__StateContext
    std::shared_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__StateContext
    std::shared_ptr<deva_planning_msgs2::msg::StateContext_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateContext_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->behavior_type != other.behavior_type) {
      return false;
    }
    if (this->routing_mode != other.routing_mode) {
      return false;
    }
    if (this->current_turn_type != other.current_turn_type) {
      return false;
    }
    if (this->use_mdriver_ego != other.use_mdriver_ego) {
      return false;
    }
    if (this->target_line_id != other.target_line_id) {
      return false;
    }
    if (this->current_line_id != other.current_line_id) {
      return false;
    }
    if (this->front_obstacle_id != other.front_obstacle_id) {
      return false;
    }
    if (this->rear_obstacle_id != other.rear_obstacle_id) {
      return false;
    }
    if (this->lane_change_task != other.lane_change_task) {
      return false;
    }
    if (this->best_tree_id != other.best_tree_id) {
      return false;
    }
    if (this->mcts_trees != other.mcts_trees) {
      return false;
    }
    if (this->tagged_obstacle != other.tagged_obstacle) {
      return false;
    }
    if (this->lane_bind_infos != other.lane_bind_infos) {
      return false;
    }
    if (this->ego_sl_on_ref_lines != other.ego_sl_on_ref_lines) {
      return false;
    }
    if (this->lane_change_cancel_reason != other.lane_change_cancel_reason) {
      return false;
    }
    if (this->scalable_flags != other.scalable_flags) {
      return false;
    }
    if (this->scalable_multimap != other.scalable_multimap) {
      return false;
    }
    if (this->scalable_stream != other.scalable_stream) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateContext_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateContext_

// alias to use template instance with default allocator
using StateContext =
  deva_planning_msgs2::msg::StateContext_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LANE_KEEPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::RIGHT_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LEFT_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::HOLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::CANCEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LANE_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::RIGHT_CHANGE_PREPARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LEFT_CHANGE_PREPARE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAKE_OVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::ROUTING_NULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::INCREASED_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::OSM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::SDK_NAVI;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::SDK_CRUISE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::WEB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::U_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::LEFT_TURN_WAITING_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::RIGHT_TURN_WAITING_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::STRAIGHT_AHEAD_WAITING_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::GO_STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TURN_LEVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::OVERTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::NAVIGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_OVERTAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_LEFT_PASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_RIGHT_PASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_PRE_DECELERATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_PRE_OVERTAKE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::TAG_PRE_OVERTAKE_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_
