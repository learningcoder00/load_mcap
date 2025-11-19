// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
// Member 'lidar_header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__OCCVisualization __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__OCCVisualization __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OCCVisualization_
{
  using Type = OCCVisualization_<ContainerAllocator>;

  explicit OCCVisualization_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lidar_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->voxel_pc_params.begin(), this->voxel_pc_params.end(), 0.0f);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_pixel_matrix.begin(), this->rfu_pixel_matrix.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_utm_matrix.begin(), this->rfu_utm_matrix.end(), 0.0);
    }
  }

  explicit OCCVisualization_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lidar_header(_alloc, _init),
    voxel_pc_params(_alloc),
    rfu_pixel_matrix(_alloc),
    rfu_utm_matrix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->voxel_pc_params.begin(), this->voxel_pc_params.end(), 0.0f);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_pixel_matrix.begin(), this->rfu_pixel_matrix.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_utm_matrix.begin(), this->rfu_utm_matrix.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lidar_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _lidar_header_type lidar_header;
  using _points_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _points_type_type points_type;
  using _voxel_pc_params_type =
    std::array<float, 4>;
  _voxel_pc_params_type voxel_pc_params;
  using _image_points_contours_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _image_points_contours_type image_points_contours;
  using _rfu_pixel_matrix_type =
    std::array<double, 16>;
  _rfu_pixel_matrix_type rfu_pixel_matrix;
  using _rfu_utm_matrix_type =
    std::array<double, 16>;
  _rfu_utm_matrix_type rfu_utm_matrix;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lidar_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->lidar_header = _arg;
    return *this;
  }
  Type & set__points_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->points_type = _arg;
    return *this;
  }
  Type & set__voxel_pc_params(
    const std::array<float, 4> & _arg)
  {
    this->voxel_pc_params = _arg;
    return *this;
  }
  Type & set__image_points_contours(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->image_points_contours = _arg;
    return *this;
  }
  Type & set__rfu_pixel_matrix(
    const std::array<double, 16> & _arg)
  {
    this->rfu_pixel_matrix = _arg;
    return *this;
  }
  Type & set__rfu_utm_matrix(
    const std::array<double, 16> & _arg)
  {
    this->rfu_utm_matrix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__OCCVisualization
    std::shared_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__OCCVisualization
    std::shared_ptr<deva_perception_msgs::msg::OCCVisualization_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OCCVisualization_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lidar_header != other.lidar_header) {
      return false;
    }
    if (this->points_type != other.points_type) {
      return false;
    }
    if (this->voxel_pc_params != other.voxel_pc_params) {
      return false;
    }
    if (this->image_points_contours != other.image_points_contours) {
      return false;
    }
    if (this->rfu_pixel_matrix != other.rfu_pixel_matrix) {
      return false;
    }
    if (this->rfu_utm_matrix != other.rfu_utm_matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const OCCVisualization_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OCCVisualization_

// alias to use template instance with default allocator
using OCCVisualization =
  deva_perception_msgs::msg::OCCVisualization_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OCC_VISUALIZATION__STRUCT_HPP_
