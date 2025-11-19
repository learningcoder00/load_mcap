// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/RoadStructType.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__RoadStructType __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__RoadStructType __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadStructType_
{
  using Type = RoadStructType_<ContainerAllocator>;

  explicit RoadStructType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_road_struct_type = 0;
      this->confidence = 0.0;
    }
  }

  explicit RoadStructType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_road_struct_type = 0;
      this->confidence = 0.0;
    }
  }

  // field types and members
  using _enum_road_struct_type_type =
    uint8_t;
  _enum_road_struct_type_type enum_road_struct_type;
  using _confidence_type =
    double;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__enum_road_struct_type(
    const uint8_t & _arg)
  {
    this->enum_road_struct_type = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::RoadStructType_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::RoadStructType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::RoadStructType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::RoadStructType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__RoadStructType
    std::shared_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__RoadStructType
    std::shared_ptr<environment_model_msgs::msg::RoadStructType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadStructType_ & other) const
  {
    if (this->enum_road_struct_type != other.enum_road_struct_type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadStructType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadStructType_

// alias to use template instance with default allocator
using RoadStructType =
  environment_model_msgs::msg::RoadStructType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_HPP_
