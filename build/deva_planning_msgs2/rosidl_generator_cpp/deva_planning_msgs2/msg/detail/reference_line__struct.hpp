// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/ReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'reference_line'
// Member 'original_merge_point'
// Member 'merge_point'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__ReferenceLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__ReferenceLine __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferenceLine_
{
  using Type = ReferenceLine_<ContainerAllocator>;

  explicit ReferenceLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_line(_init),
    original_merge_point(_init),
    merge_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->line_id = 0l;
      this->reference_line_type = 0l;
      this->line_is_model = false;
      this->line_is_virtual = false;
      this->left_line_nums = 0l;
      this->right_line_nums = 0l;
      this->navi_score = 0.0;
      this->effic_score = 0.0;
      this->turn_scenario = 0l;
    }
  }

  explicit ReferenceLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_line(_alloc, _init),
    original_merge_point(_alloc, _init),
    merge_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->line_id = 0l;
      this->reference_line_type = 0l;
      this->line_is_model = false;
      this->line_is_virtual = false;
      this->left_line_nums = 0l;
      this->right_line_nums = 0l;
      this->navi_score = 0.0;
      this->effic_score = 0.0;
      this->turn_scenario = 0l;
    }
  }

  // field types and members
  using _reference_line_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _reference_line_type reference_line;
  using _line_id_type =
    int32_t;
  _line_id_type line_id;
  using _original_merge_point_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _original_merge_point_type original_merge_point;
  using _merge_point_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _merge_point_type merge_point;
  using _reference_line_type_type =
    int32_t;
  _reference_line_type_type reference_line_type;
  using _line_is_model_type =
    bool;
  _line_is_model_type line_is_model;
  using _line_is_virtual_type =
    bool;
  _line_is_virtual_type line_is_virtual;
  using _left_line_nums_type =
    int32_t;
  _left_line_nums_type left_line_nums;
  using _right_line_nums_type =
    int32_t;
  _right_line_nums_type right_line_nums;
  using _cipv_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _cipv_ids_type cipv_ids;
  using _cutin_cipv_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _cutin_cipv_ids_type cutin_cipv_ids;
  using _nearest_cipv_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _nearest_cipv_ids_type nearest_cipv_ids;
  using _navi_score_type =
    double;
  _navi_score_type navi_score;
  using _effic_score_type =
    double;
  _effic_score_type effic_score;
  using _turn_scenario_type =
    int32_t;
  _turn_scenario_type turn_scenario;

  // setters for named parameter idiom
  Type & set__reference_line(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->reference_line = _arg;
    return *this;
  }
  Type & set__line_id(
    const int32_t & _arg)
  {
    this->line_id = _arg;
    return *this;
  }
  Type & set__original_merge_point(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->original_merge_point = _arg;
    return *this;
  }
  Type & set__merge_point(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->merge_point = _arg;
    return *this;
  }
  Type & set__reference_line_type(
    const int32_t & _arg)
  {
    this->reference_line_type = _arg;
    return *this;
  }
  Type & set__line_is_model(
    const bool & _arg)
  {
    this->line_is_model = _arg;
    return *this;
  }
  Type & set__line_is_virtual(
    const bool & _arg)
  {
    this->line_is_virtual = _arg;
    return *this;
  }
  Type & set__left_line_nums(
    const int32_t & _arg)
  {
    this->left_line_nums = _arg;
    return *this;
  }
  Type & set__right_line_nums(
    const int32_t & _arg)
  {
    this->right_line_nums = _arg;
    return *this;
  }
  Type & set__cipv_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->cipv_ids = _arg;
    return *this;
  }
  Type & set__cutin_cipv_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->cutin_cipv_ids = _arg;
    return *this;
  }
  Type & set__nearest_cipv_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->nearest_cipv_ids = _arg;
    return *this;
  }
  Type & set__navi_score(
    const double & _arg)
  {
    this->navi_score = _arg;
    return *this;
  }
  Type & set__effic_score(
    const double & _arg)
  {
    this->effic_score = _arg;
    return *this;
  }
  Type & set__turn_scenario(
    const int32_t & _arg)
  {
    this->turn_scenario = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t IS_REVERSE =
    1;
  static constexpr int32_t IS_NOT_CURRENT_ROAD =
    2;
  static constexpr int32_t IS_UNREACHABLE =
    4;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__ReferenceLine
    std::shared_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__ReferenceLine
    std::shared_ptr<deva_planning_msgs2::msg::ReferenceLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferenceLine_ & other) const
  {
    if (this->reference_line != other.reference_line) {
      return false;
    }
    if (this->line_id != other.line_id) {
      return false;
    }
    if (this->original_merge_point != other.original_merge_point) {
      return false;
    }
    if (this->merge_point != other.merge_point) {
      return false;
    }
    if (this->reference_line_type != other.reference_line_type) {
      return false;
    }
    if (this->line_is_model != other.line_is_model) {
      return false;
    }
    if (this->line_is_virtual != other.line_is_virtual) {
      return false;
    }
    if (this->left_line_nums != other.left_line_nums) {
      return false;
    }
    if (this->right_line_nums != other.right_line_nums) {
      return false;
    }
    if (this->cipv_ids != other.cipv_ids) {
      return false;
    }
    if (this->cutin_cipv_ids != other.cutin_cipv_ids) {
      return false;
    }
    if (this->nearest_cipv_ids != other.nearest_cipv_ids) {
      return false;
    }
    if (this->navi_score != other.navi_score) {
      return false;
    }
    if (this->effic_score != other.effic_score) {
      return false;
    }
    if (this->turn_scenario != other.turn_scenario) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferenceLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferenceLine_

// alias to use template instance with default allocator
using ReferenceLine =
  deva_planning_msgs2::msg::ReferenceLine_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ReferenceLine_<ContainerAllocator>::IS_REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ReferenceLine_<ContainerAllocator>::IS_NOT_CURRENT_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t ReferenceLine_<ContainerAllocator>::IS_UNREACHABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REFERENCE_LINE__STRUCT_HPP_
