// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/StitchData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__STITCH_DATA__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__STITCH_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__StitchData __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__StitchData __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StitchData_
{
  using Type = StitchData_<ContainerAllocator>;

  explicit StitchData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stitch_mode = 0;
      this->planner_mode = 0;
      this->actual_planner_mode = 0;
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->stitch_s = 0.0;
      this->stitch_l = 0.0;
      this->stitch_x = 0.0;
      this->stitch_y = 0.0;
      this->stitch_z = 0.0;
      this->stitch_heading = 0.0;
      this->stitch_alpha = 0.0;
      this->stitch_v = 0.0;
      this->stitch_steer = 0.0;
    }
  }

  explicit StitchData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stitch_mode = 0;
      this->planner_mode = 0;
      this->actual_planner_mode = 0;
      this->current_x = 0.0;
      this->current_y = 0.0;
      this->stitch_s = 0.0;
      this->stitch_l = 0.0;
      this->stitch_x = 0.0;
      this->stitch_y = 0.0;
      this->stitch_z = 0.0;
      this->stitch_heading = 0.0;
      this->stitch_alpha = 0.0;
      this->stitch_v = 0.0;
      this->stitch_steer = 0.0;
    }
  }

  // field types and members
  using _stitch_mode_type =
    uint8_t;
  _stitch_mode_type stitch_mode;
  using _planner_mode_type =
    uint8_t;
  _planner_mode_type planner_mode;
  using _actual_planner_mode_type =
    uint8_t;
  _actual_planner_mode_type actual_planner_mode;
  using _current_x_type =
    double;
  _current_x_type current_x;
  using _current_y_type =
    double;
  _current_y_type current_y;
  using _stitch_s_type =
    double;
  _stitch_s_type stitch_s;
  using _stitch_l_type =
    double;
  _stitch_l_type stitch_l;
  using _stitch_x_type =
    double;
  _stitch_x_type stitch_x;
  using _stitch_y_type =
    double;
  _stitch_y_type stitch_y;
  using _stitch_z_type =
    double;
  _stitch_z_type stitch_z;
  using _stitch_heading_type =
    double;
  _stitch_heading_type stitch_heading;
  using _stitch_alpha_type =
    double;
  _stitch_alpha_type stitch_alpha;
  using _stitch_v_type =
    double;
  _stitch_v_type stitch_v;
  using _stitch_steer_type =
    double;
  _stitch_steer_type stitch_steer;

  // setters for named parameter idiom
  Type & set__stitch_mode(
    const uint8_t & _arg)
  {
    this->stitch_mode = _arg;
    return *this;
  }
  Type & set__planner_mode(
    const uint8_t & _arg)
  {
    this->planner_mode = _arg;
    return *this;
  }
  Type & set__actual_planner_mode(
    const uint8_t & _arg)
  {
    this->actual_planner_mode = _arg;
    return *this;
  }
  Type & set__current_x(
    const double & _arg)
  {
    this->current_x = _arg;
    return *this;
  }
  Type & set__current_y(
    const double & _arg)
  {
    this->current_y = _arg;
    return *this;
  }
  Type & set__stitch_s(
    const double & _arg)
  {
    this->stitch_s = _arg;
    return *this;
  }
  Type & set__stitch_l(
    const double & _arg)
  {
    this->stitch_l = _arg;
    return *this;
  }
  Type & set__stitch_x(
    const double & _arg)
  {
    this->stitch_x = _arg;
    return *this;
  }
  Type & set__stitch_y(
    const double & _arg)
  {
    this->stitch_y = _arg;
    return *this;
  }
  Type & set__stitch_z(
    const double & _arg)
  {
    this->stitch_z = _arg;
    return *this;
  }
  Type & set__stitch_heading(
    const double & _arg)
  {
    this->stitch_heading = _arg;
    return *this;
  }
  Type & set__stitch_alpha(
    const double & _arg)
  {
    this->stitch_alpha = _arg;
    return *this;
  }
  Type & set__stitch_v(
    const double & _arg)
  {
    this->stitch_v = _arg;
    return *this;
  }
  Type & set__stitch_steer(
    const double & _arg)
  {
    this->stitch_steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::StitchData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::StitchData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::StitchData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::StitchData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__StitchData
    std::shared_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__StitchData
    std::shared_ptr<deva_planning_msgs::msg::StitchData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StitchData_ & other) const
  {
    if (this->stitch_mode != other.stitch_mode) {
      return false;
    }
    if (this->planner_mode != other.planner_mode) {
      return false;
    }
    if (this->actual_planner_mode != other.actual_planner_mode) {
      return false;
    }
    if (this->current_x != other.current_x) {
      return false;
    }
    if (this->current_y != other.current_y) {
      return false;
    }
    if (this->stitch_s != other.stitch_s) {
      return false;
    }
    if (this->stitch_l != other.stitch_l) {
      return false;
    }
    if (this->stitch_x != other.stitch_x) {
      return false;
    }
    if (this->stitch_y != other.stitch_y) {
      return false;
    }
    if (this->stitch_z != other.stitch_z) {
      return false;
    }
    if (this->stitch_heading != other.stitch_heading) {
      return false;
    }
    if (this->stitch_alpha != other.stitch_alpha) {
      return false;
    }
    if (this->stitch_v != other.stitch_v) {
      return false;
    }
    if (this->stitch_steer != other.stitch_steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const StitchData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StitchData_

// alias to use template instance with default allocator
using StitchData =
  deva_planning_msgs::msg::StitchData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__STITCH_DATA__STRUCT_HPP_
