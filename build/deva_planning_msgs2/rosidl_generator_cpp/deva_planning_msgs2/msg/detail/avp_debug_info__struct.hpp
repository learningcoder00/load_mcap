// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'origin_ref_line'
#include "deva_planning_msgs2/msg/detail/avp_ref_line__struct.hpp"
// Member 'smooth_line'
// Member 'used_ref_line_tree'
// Member 'driver_path'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__struct.hpp"
// Member 'now_mpc_data'
// Member 'now_path_data'
// Member 'past_path_data'
#include "deva_planning_msgs2/msg/detail/mpc_path_data__struct.hpp"
// Member 'boundary_poses'
// Member 'obstacle_poses'
#include "deva_planning_msgs2/msg/detail/path_point__struct.hpp"
// Member 'stitch_data'
#include "deva_planning_msgs2/msg/detail/stitch_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__AvpDebugInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__AvpDebugInfo __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpDebugInfo_
{
  using Type = AvpDebugInfo_<ContainerAllocator>;

  explicit AvpDebugInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : smooth_line(_init),
    stitch_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solve_num = 0l;
      this->acados_status = 0l;
    }
  }

  explicit AvpDebugInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : smooth_line(_alloc, _init),
    stitch_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solve_num = 0l;
      this->acados_status = 0l;
    }
  }

  // field types and members
  using _solve_num_type =
    int32_t;
  _solve_num_type solve_num;
  using _acados_status_type =
    int32_t;
  _acados_status_type acados_status;
  using _origin_ref_line_type =
    std::vector<deva_planning_msgs2::msg::AvpRefLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLine_<ContainerAllocator>>>;
  _origin_ref_line_type origin_ref_line;
  using _smooth_line_type =
    deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>;
  _smooth_line_type smooth_line;
  using _used_ref_line_tree_type =
    std::vector<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>>;
  _used_ref_line_tree_type used_ref_line_tree;
  using _driver_path_type =
    std::vector<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>>;
  _driver_path_type driver_path;
  using _now_mpc_data_type =
    std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>>;
  _now_mpc_data_type now_mpc_data;
  using _now_path_data_type =
    std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>>;
  _now_path_data_type now_path_data;
  using _past_path_data_type =
    std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>>;
  _past_path_data_type past_path_data;
  using _boundary_poses_type =
    std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>>;
  _boundary_poses_type boundary_poses;
  using _obstacle_poses_type =
    std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>>;
  _obstacle_poses_type obstacle_poses;
  using _stitch_data_type =
    deva_planning_msgs2::msg::StitchData_<ContainerAllocator>;
  _stitch_data_type stitch_data;

  // setters for named parameter idiom
  Type & set__solve_num(
    const int32_t & _arg)
  {
    this->solve_num = _arg;
    return *this;
  }
  Type & set__acados_status(
    const int32_t & _arg)
  {
    this->acados_status = _arg;
    return *this;
  }
  Type & set__origin_ref_line(
    const std::vector<deva_planning_msgs2::msg::AvpRefLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLine_<ContainerAllocator>>> & _arg)
  {
    this->origin_ref_line = _arg;
    return *this;
  }
  Type & set__smooth_line(
    const deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator> & _arg)
  {
    this->smooth_line = _arg;
    return *this;
  }
  Type & set__used_ref_line_tree(
    const std::vector<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>> & _arg)
  {
    this->used_ref_line_tree = _arg;
    return *this;
  }
  Type & set__driver_path(
    const std::vector<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::AvpRefLineTreePointVec_<ContainerAllocator>>> & _arg)
  {
    this->driver_path = _arg;
    return *this;
  }
  Type & set__now_mpc_data(
    const std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>> & _arg)
  {
    this->now_mpc_data = _arg;
    return *this;
  }
  Type & set__now_path_data(
    const std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>> & _arg)
  {
    this->now_path_data = _arg;
    return *this;
  }
  Type & set__past_path_data(
    const std::vector<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::MpcPathData_<ContainerAllocator>>> & _arg)
  {
    this->past_path_data = _arg;
    return *this;
  }
  Type & set__boundary_poses(
    const std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->boundary_poses = _arg;
    return *this;
  }
  Type & set__obstacle_poses(
    const std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_poses = _arg;
    return *this;
  }
  Type & set__stitch_data(
    const deva_planning_msgs2::msg::StitchData_<ContainerAllocator> & _arg)
  {
    this->stitch_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpDebugInfo
    std::shared_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpDebugInfo
    std::shared_ptr<deva_planning_msgs2::msg::AvpDebugInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpDebugInfo_ & other) const
  {
    if (this->solve_num != other.solve_num) {
      return false;
    }
    if (this->acados_status != other.acados_status) {
      return false;
    }
    if (this->origin_ref_line != other.origin_ref_line) {
      return false;
    }
    if (this->smooth_line != other.smooth_line) {
      return false;
    }
    if (this->used_ref_line_tree != other.used_ref_line_tree) {
      return false;
    }
    if (this->driver_path != other.driver_path) {
      return false;
    }
    if (this->now_mpc_data != other.now_mpc_data) {
      return false;
    }
    if (this->now_path_data != other.now_path_data) {
      return false;
    }
    if (this->past_path_data != other.past_path_data) {
      return false;
    }
    if (this->boundary_poses != other.boundary_poses) {
      return false;
    }
    if (this->obstacle_poses != other.obstacle_poses) {
      return false;
    }
    if (this->stitch_data != other.stitch_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpDebugInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpDebugInfo_

// alias to use template instance with default allocator
using AvpDebugInfo =
  deva_planning_msgs2::msg::AvpDebugInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_HPP_
