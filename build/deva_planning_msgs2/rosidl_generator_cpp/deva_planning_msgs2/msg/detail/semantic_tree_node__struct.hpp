// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'game_cost'
// Member 'rollout_cost'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.hpp"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__SemanticTreeNode __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__SemanticTreeNode __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SemanticTreeNode_
{
  using Type = SemanticTreeNode_<ContainerAllocator>;

  explicit SemanticTreeNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->rollout_start_time = 0.0;
      this->total_score = 0.0;
      this->game_score = 0.0;
      this->rollout_score = 0.0;
    }
  }

  explicit SemanticTreeNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0l;
      this->rollout_start_time = 0.0;
      this->total_score = 0.0;
      this->game_score = 0.0;
      this->rollout_score = 0.0;
    }
  }

  // field types and members
  using _node_id_type =
    int32_t;
  _node_id_type node_id;
  using _rollout_start_time_type =
    double;
  _rollout_start_time_type rollout_start_time;
  using _total_score_type =
    double;
  _total_score_type total_score;
  using _game_score_type =
    double;
  _game_score_type game_score;
  using _rollout_score_type =
    double;
  _rollout_score_type rollout_score;
  using _game_cost_type =
    std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>>;
  _game_cost_type game_cost;
  using _rollout_cost_type =
    std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>>;
  _rollout_cost_type rollout_cost;
  using _scalable_flags_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _scalable_flags_type scalable_flags;
  using _scalable_multimap_type =
    std::vector<deva_planning_msgs2::msg::String2String_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2String_<ContainerAllocator>>>;
  _scalable_multimap_type scalable_multimap;

  // setters for named parameter idiom
  Type & set__node_id(
    const int32_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__rollout_start_time(
    const double & _arg)
  {
    this->rollout_start_time = _arg;
    return *this;
  }
  Type & set__total_score(
    const double & _arg)
  {
    this->total_score = _arg;
    return *this;
  }
  Type & set__game_score(
    const double & _arg)
  {
    this->game_score = _arg;
    return *this;
  }
  Type & set__rollout_score(
    const double & _arg)
  {
    this->rollout_score = _arg;
    return *this;
  }
  Type & set__game_cost(
    const std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>> & _arg)
  {
    this->game_cost = _arg;
    return *this;
  }
  Type & set__rollout_cost(
    const std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>> & _arg)
  {
    this->rollout_cost = _arg;
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

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__SemanticTreeNode
    std::shared_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__SemanticTreeNode
    std::shared_ptr<deva_planning_msgs2::msg::SemanticTreeNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SemanticTreeNode_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->rollout_start_time != other.rollout_start_time) {
      return false;
    }
    if (this->total_score != other.total_score) {
      return false;
    }
    if (this->game_score != other.game_score) {
      return false;
    }
    if (this->rollout_score != other.rollout_score) {
      return false;
    }
    if (this->game_cost != other.game_cost) {
      return false;
    }
    if (this->rollout_cost != other.rollout_cost) {
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
  bool operator!=(const SemanticTreeNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SemanticTreeNode_

// alias to use template instance with default allocator
using SemanticTreeNode =
  deva_planning_msgs2::msg::SemanticTreeNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_HPP_
