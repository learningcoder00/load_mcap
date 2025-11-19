// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__VirtualCamInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__VirtualCamInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualCamInfo_
{
  using Type = VirtualCamInfo_<ContainerAllocator>;

  explicit VirtualCamInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cam_name = "";
      this->distort_model = "";
    }
  }

  explicit VirtualCamInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cam_name(_alloc),
    distort_model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cam_name = "";
      this->distort_model = "";
    }
  }

  // field types and members
  using _cam_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cam_name_type cam_name;
  using _resolution_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _resolution_type resolution;
  using _distort_model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _distort_model_type distort_model;
  using _ori_intrinsic_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ori_intrinsic_type ori_intrinsic;
  using _vir_intrinsic_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vir_intrinsic_type vir_intrinsic;
  using _ori_extrinsic_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ori_extrinsic_type ori_extrinsic;
  using _vir_extrinsic_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _vir_extrinsic_type vir_extrinsic;
  using _mapx_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mapx_type mapx;
  using _mapy_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mapy_type mapy;
  using _pinhole_intrinsic_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _pinhole_intrinsic_type pinhole_intrinsic;
  using _crops_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _crops_type crops;
  using _input_size_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _input_size_type input_size;

  // setters for named parameter idiom
  Type & set__cam_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cam_name = _arg;
    return *this;
  }
  Type & set__resolution(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__distort_model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->distort_model = _arg;
    return *this;
  }
  Type & set__ori_intrinsic(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ori_intrinsic = _arg;
    return *this;
  }
  Type & set__vir_intrinsic(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vir_intrinsic = _arg;
    return *this;
  }
  Type & set__ori_extrinsic(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ori_extrinsic = _arg;
    return *this;
  }
  Type & set__vir_extrinsic(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->vir_extrinsic = _arg;
    return *this;
  }
  Type & set__mapx(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mapx = _arg;
    return *this;
  }
  Type & set__mapy(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mapy = _arg;
    return *this;
  }
  Type & set__pinhole_intrinsic(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->pinhole_intrinsic = _arg;
    return *this;
  }
  Type & set__crops(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->crops = _arg;
    return *this;
  }
  Type & set__input_size(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->input_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__VirtualCamInfo
    std::shared_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__VirtualCamInfo
    std::shared_ptr<deva_perception_msgs::msg::VirtualCamInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualCamInfo_ & other) const
  {
    if (this->cam_name != other.cam_name) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->distort_model != other.distort_model) {
      return false;
    }
    if (this->ori_intrinsic != other.ori_intrinsic) {
      return false;
    }
    if (this->vir_intrinsic != other.vir_intrinsic) {
      return false;
    }
    if (this->ori_extrinsic != other.ori_extrinsic) {
      return false;
    }
    if (this->vir_extrinsic != other.vir_extrinsic) {
      return false;
    }
    if (this->mapx != other.mapx) {
      return false;
    }
    if (this->mapy != other.mapy) {
      return false;
    }
    if (this->pinhole_intrinsic != other.pinhole_intrinsic) {
      return false;
    }
    if (this->crops != other.crops) {
      return false;
    }
    if (this->input_size != other.input_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualCamInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualCamInfo_

// alias to use template instance with default allocator
using VirtualCamInfo =
  deva_perception_msgs::msg::VirtualCamInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__STRUCT_HPP_
