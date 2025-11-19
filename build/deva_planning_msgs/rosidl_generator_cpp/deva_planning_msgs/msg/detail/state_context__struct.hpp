// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__StateContext __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__StateContext __declspec(deprecated)
#endif

namespace deva_planning_msgs
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
      this->navi_map_mode = 0;
      this->routing_mode = 0;
      this->target_lane_seq_score = 0.0;
      this->state_score = 0.0;
      this->score = 0.0;
      this->use_mdriver_ego = 0l;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->gap_id = 0l;
      this->gap_line_id = 0l;
      this->start_s = 0.0;
      this->end_s = 0.0;
      this->length = 0.0;
      this->future_length = 0.0;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->lane_change_task = 0;
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
      this->navi_map_mode = 0;
      this->routing_mode = 0;
      this->target_lane_seq_score = 0.0;
      this->state_score = 0.0;
      this->score = 0.0;
      this->use_mdriver_ego = 0l;
      this->target_line_id = 0l;
      this->current_line_id = 0l;
      this->gap_id = 0l;
      this->gap_line_id = 0l;
      this->start_s = 0.0;
      this->end_s = 0.0;
      this->length = 0.0;
      this->future_length = 0.0;
      this->front_obstacle_id = "";
      this->rear_obstacle_id = "";
      this->lane_change_task = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _behavior_type_type =
    uint8_t;
  _behavior_type_type behavior_type;
  using _navi_map_mode_type =
    uint8_t;
  _navi_map_mode_type navi_map_mode;
  using _routing_mode_type =
    uint8_t;
  _routing_mode_type routing_mode;
  using _target_lane_seq_score_type =
    double;
  _target_lane_seq_score_type target_lane_seq_score;
  using _state_score_type =
    double;
  _state_score_type state_score;
  using _score_type =
    double;
  _score_type score;
  using _use_mdriver_ego_type =
    int32_t;
  _use_mdriver_ego_type use_mdriver_ego;
  using _target_line_id_type =
    int32_t;
  _target_line_id_type target_line_id;
  using _current_line_id_type =
    int32_t;
  _current_line_id_type current_line_id;
  using _gap_id_type =
    int32_t;
  _gap_id_type gap_id;
  using _gap_line_id_type =
    int32_t;
  _gap_line_id_type gap_line_id;
  using _start_s_type =
    double;
  _start_s_type start_s;
  using _end_s_type =
    double;
  _end_s_type end_s;
  using _length_type =
    double;
  _length_type length;
  using _future_length_type =
    double;
  _future_length_type future_length;
  using _front_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _front_obstacle_id_type front_obstacle_id;
  using _rear_obstacle_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rear_obstacle_id_type rear_obstacle_id;
  using _cipv_obstacle_id_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _cipv_obstacle_id_type cipv_obstacle_id;
  using _nudge_obstacle_id_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _nudge_obstacle_id_type nudge_obstacle_id;
  using _cutin_follow_obstacle_id_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _cutin_follow_obstacle_id_type cutin_follow_obstacle_id;
  using _cutin_overtake_obstacle_id_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _cutin_overtake_obstacle_id_type cutin_overtake_obstacle_id;
  using _lane_change_task_type =
    uint8_t;
  _lane_change_task_type lane_change_task;

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
  Type & set__navi_map_mode(
    const uint8_t & _arg)
  {
    this->navi_map_mode = _arg;
    return *this;
  }
  Type & set__routing_mode(
    const uint8_t & _arg)
  {
    this->routing_mode = _arg;
    return *this;
  }
  Type & set__target_lane_seq_score(
    const double & _arg)
  {
    this->target_lane_seq_score = _arg;
    return *this;
  }
  Type & set__state_score(
    const double & _arg)
  {
    this->state_score = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
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
  Type & set__gap_id(
    const int32_t & _arg)
  {
    this->gap_id = _arg;
    return *this;
  }
  Type & set__gap_line_id(
    const int32_t & _arg)
  {
    this->gap_line_id = _arg;
    return *this;
  }
  Type & set__start_s(
    const double & _arg)
  {
    this->start_s = _arg;
    return *this;
  }
  Type & set__end_s(
    const double & _arg)
  {
    this->end_s = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__future_length(
    const double & _arg)
  {
    this->future_length = _arg;
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
  Type & set__cipv_obstacle_id(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->cipv_obstacle_id = _arg;
    return *this;
  }
  Type & set__nudge_obstacle_id(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->nudge_obstacle_id = _arg;
    return *this;
  }
  Type & set__cutin_follow_obstacle_id(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->cutin_follow_obstacle_id = _arg;
    return *this;
  }
  Type & set__cutin_overtake_obstacle_id(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->cutin_overtake_obstacle_id = _arg;
    return *this;
  }
  Type & set__lane_change_task(
    const uint8_t & _arg)
  {
    this->lane_change_task = _arg;
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
  static constexpr uint8_t MAP_NULL =
    0u;
  static constexpr uint8_t ACC =
    1u;
  static constexpr uint8_t ICC =
    2u;
  static constexpr uint8_t NOA =
    3u;
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

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::StateContext_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::StateContext_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::StateContext_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::StateContext_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__StateContext
    std::shared_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__StateContext
    std::shared_ptr<deva_planning_msgs::msg::StateContext_<ContainerAllocator> const>
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
    if (this->navi_map_mode != other.navi_map_mode) {
      return false;
    }
    if (this->routing_mode != other.routing_mode) {
      return false;
    }
    if (this->target_lane_seq_score != other.target_lane_seq_score) {
      return false;
    }
    if (this->state_score != other.state_score) {
      return false;
    }
    if (this->score != other.score) {
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
    if (this->gap_id != other.gap_id) {
      return false;
    }
    if (this->gap_line_id != other.gap_line_id) {
      return false;
    }
    if (this->start_s != other.start_s) {
      return false;
    }
    if (this->end_s != other.end_s) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->future_length != other.future_length) {
      return false;
    }
    if (this->front_obstacle_id != other.front_obstacle_id) {
      return false;
    }
    if (this->rear_obstacle_id != other.rear_obstacle_id) {
      return false;
    }
    if (this->cipv_obstacle_id != other.cipv_obstacle_id) {
      return false;
    }
    if (this->nudge_obstacle_id != other.nudge_obstacle_id) {
      return false;
    }
    if (this->cutin_follow_obstacle_id != other.cutin_follow_obstacle_id) {
      return false;
    }
    if (this->cutin_overtake_obstacle_id != other.cutin_overtake_obstacle_id) {
      return false;
    }
    if (this->lane_change_task != other.lane_change_task) {
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
  deva_planning_msgs::msg::StateContext_<std::allocator<void>>;

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
constexpr uint8_t StateContext_<ContainerAllocator>::MAP_NULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::ACC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::ICC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StateContext_<ContainerAllocator>::NOA;
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

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STATE_CONTEXT__STRUCT_HPP_
