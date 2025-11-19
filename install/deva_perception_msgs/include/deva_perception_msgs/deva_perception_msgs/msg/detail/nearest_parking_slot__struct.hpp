// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/NearestParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__NearestParkingSlot __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__NearestParkingSlot __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NearestParkingSlot_
{
  using Type = NearestParkingSlot_<ContainerAllocator>;

  explicit NearestParkingSlot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nearest_parking_slot_id = 0ull;
    }
  }

  explicit NearestParkingSlot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nearest_parking_slot_id = 0ull;
    }
  }

  // field types and members
  using _nearest_parking_slot_id_type =
    uint64_t;
  _nearest_parking_slot_id_type nearest_parking_slot_id;

  // setters for named parameter idiom
  Type & set__nearest_parking_slot_id(
    const uint64_t & _arg)
  {
    this->nearest_parking_slot_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__NearestParkingSlot
    std::shared_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__NearestParkingSlot
    std::shared_ptr<deva_perception_msgs::msg::NearestParkingSlot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NearestParkingSlot_ & other) const
  {
    if (this->nearest_parking_slot_id != other.nearest_parking_slot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const NearestParkingSlot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NearestParkingSlot_

// alias to use template instance with default allocator
using NearestParkingSlot =
  deva_perception_msgs::msg::NearestParkingSlot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__STRUCT_HPP_
