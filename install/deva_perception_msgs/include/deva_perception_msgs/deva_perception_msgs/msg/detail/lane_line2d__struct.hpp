// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"
// Member 'curve_line_coeffs'
#include "deva_perception_msgs/msg/detail/curve_coef__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LaneLine2d __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LaneLine2d __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneLine2d_
{
  using Type = LaneLine2d_<ContainerAllocator>;

  explicit LaneLine2d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->confidence = 0.0f;
      this->num_points = 0ul;
      this->lane_type = 0;
      this->lane_color = 0;
      this->lane_property = 0;
    }
  }

  explicit LaneLine2d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->confidence = 0.0f;
      this->num_points = 0ul;
      this->lane_type = 0;
      this->lane_color = 0;
      this->lane_property = 0;
    }
  }

  // field types and members
  using _lane_id_type =
    uint32_t;
  _lane_id_type lane_id;
  using _left_lane_id_type =
    uint32_t;
  _left_lane_id_type left_lane_id;
  using _right_lane_id_type =
    uint32_t;
  _right_lane_id_type right_lane_id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _num_points_type =
    uint32_t;
  _num_points_type num_points;
  using _lane_type_type =
    uint8_t;
  _lane_type_type lane_type;
  using _lane_color_type =
    uint8_t;
  _lane_color_type lane_color;
  using _lane_property_type =
    uint8_t;
  _lane_property_type lane_property;
  using _pixel_points_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _pixel_points_type pixel_points;
  using _curve_line_coeffs_type =
    std::vector<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>>;
  _curve_line_coeffs_type curve_line_coeffs;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__left_lane_id(
    const uint32_t & _arg)
  {
    this->left_lane_id = _arg;
    return *this;
  }
  Type & set__right_lane_id(
    const uint32_t & _arg)
  {
    this->right_lane_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__num_points(
    const uint32_t & _arg)
  {
    this->num_points = _arg;
    return *this;
  }
  Type & set__lane_type(
    const uint8_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_color(
    const uint8_t & _arg)
  {
    this->lane_color = _arg;
    return *this;
  }
  Type & set__lane_property(
    const uint8_t & _arg)
  {
    this->lane_property = _arg;
    return *this;
  }
  Type & set__pixel_points(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->pixel_points = _arg;
    return *this;
  }
  Type & set__curve_line_coeffs(
    const std::vector<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::CurveCoef_<ContainerAllocator>>> & _arg)
  {
    this->curve_line_coeffs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LaneLine2d
    std::shared_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LaneLine2d
    std::shared_ptr<deva_perception_msgs::msg::LaneLine2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneLine2d_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->left_lane_id != other.left_lane_id) {
      return false;
    }
    if (this->right_lane_id != other.right_lane_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->num_points != other.num_points) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_color != other.lane_color) {
      return false;
    }
    if (this->lane_property != other.lane_property) {
      return false;
    }
    if (this->pixel_points != other.pixel_points) {
      return false;
    }
    if (this->curve_line_coeffs != other.curve_line_coeffs) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneLine2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneLine2d_

// alias to use template instance with default allocator
using LaneLine2d =
  deva_perception_msgs::msg::LaneLine2d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_LINE2D__STRUCT_HPP_
