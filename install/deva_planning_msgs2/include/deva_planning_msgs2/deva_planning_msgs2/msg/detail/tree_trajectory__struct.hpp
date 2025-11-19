// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_points'
#include "deva_planning_msgs2/msg/detail/trajectory_point__struct.hpp"
// Member 'traj_score'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__TreeTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__TreeTrajectory __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TreeTrajectory_
{
  using Type = TreeTrajectory_<ContainerAllocator>;

  explicit TreeTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = "";
      this->confidence = 0.0;
    }
  }

  explicit TreeTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obs_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = "";
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _obs_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obs_id_type obs_id;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _trajectory_points_type =
    std::vector<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_points_type trajectory_points;
  using _traj_score_type =
    std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>>;
  _traj_score_type traj_score;

  // setters for named parameter idiom
  Type & set__obs_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obs_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__trajectory_points(
    const std::vector<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_points = _arg;
    return *this;
  }
  Type & set__traj_score(
    const std::vector<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::String2Double_<ContainerAllocator>>> & _arg)
  {
    this->traj_score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__TreeTrajectory
    std::shared_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__TreeTrajectory
    std::shared_ptr<deva_planning_msgs2::msg::TreeTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TreeTrajectory_ & other) const
  {
    if (this->obs_id != other.obs_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->trajectory_points != other.trajectory_points) {
      return false;
    }
    if (this->traj_score != other.traj_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const TreeTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TreeTrajectory_

// alias to use template instance with default allocator
using TreeTrajectory =
  deva_planning_msgs2::msg::TreeTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__STRUCT_HPP_
