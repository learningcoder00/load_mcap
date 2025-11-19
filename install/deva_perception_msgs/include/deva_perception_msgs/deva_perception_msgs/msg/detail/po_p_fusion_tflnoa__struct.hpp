// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/PoPFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__PoPFusionTFLNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__PoPFusionTFLNOA __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoPFusionTFLNOA_
{
  using Type = PoPFusionTFLNOA_<ContainerAllocator>;

  explicit PoPFusionTFLNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->type = 0;
      this->flashstatus = 0;
    }
  }

  explicit PoPFusionTFLNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->type = 0;
      this->flashstatus = 0;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _type_type =
    uint8_t;
  _type_type type;
  using _flashstatus_type =
    uint8_t;
  _flashstatus_type flashstatus;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__flashstatus(
    const uint8_t & _arg)
  {
    this->flashstatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__PoPFusionTFLNOA
    std::shared_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__PoPFusionTFLNOA
    std::shared_ptr<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoPFusionTFLNOA_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->flashstatus != other.flashstatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoPFusionTFLNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoPFusionTFLNOA_

// alias to use template instance with default allocator
using PoPFusionTFLNOA =
  deva_perception_msgs::msg::PoPFusionTFLNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__STRUCT_HPP_
