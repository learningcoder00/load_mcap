// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceParkingSlot __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceParkingSlot __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavOpenspaceParkingSlot_
{
  using Type = NavOpenspaceParkingSlot_<ContainerAllocator>;

  explicit NavOpenspaceParkingSlot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0ul;
      this->is_occupied = false;
      this->is_stable_tracked = false;
      this->occupied_confidence = 0.0;
    }
  }

  explicit NavOpenspaceParkingSlot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0ul;
      this->is_occupied = false;
      this->is_stable_tracked = false;
      this->occupied_confidence = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    uint32_t;
  _type_type type;
  using _xyz_vec_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _xyz_vec_type xyz_vec;
  using _is_occupied_type =
    bool;
  _is_occupied_type is_occupied;
  using _is_stable_tracked_type =
    bool;
  _is_stable_tracked_type is_stable_tracked;
  using _occupied_confidence_type =
    double;
  _occupied_confidence_type occupied_confidence;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__xyz_vec(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->xyz_vec = _arg;
    return *this;
  }
  Type & set__is_occupied(
    const bool & _arg)
  {
    this->is_occupied = _arg;
    return *this;
  }
  Type & set__is_stable_tracked(
    const bool & _arg)
  {
    this->is_stable_tracked = _arg;
    return *this;
  }
  Type & set__occupied_confidence(
    const double & _arg)
  {
    this->occupied_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceParkingSlot
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceParkingSlot
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavOpenspaceParkingSlot_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->xyz_vec != other.xyz_vec) {
      return false;
    }
    if (this->is_occupied != other.is_occupied) {
      return false;
    }
    if (this->is_stable_tracked != other.is_stable_tracked) {
      return false;
    }
    if (this->occupied_confidence != other.occupied_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavOpenspaceParkingSlot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavOpenspaceParkingSlot_

// alias to use template instance with default allocator
using NavOpenspaceParkingSlot =
  deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__STRUCT_HPP_
