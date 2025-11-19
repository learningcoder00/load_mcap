// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__MachFusionFrame __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__MachFusionFrame __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachFusionFrame_
{
  using Type = MachFusionFrame_<ContainerAllocator>;

  explicit MachFusionFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ull;
      this->rv_timestamp = 0ull;
      this->bev_timestamp = 0ull;
      this->front_radar_timestamp = 0ull;
      this->front_right_radar_timestamp = 0ull;
      this->front_left_radar_timestamp = 0ull;
      this->back_left_radar_timestamp = 0ull;
      this->back_right_radar_timestamp = 0ull;
      this->lidar_timestamp = 0ull;
      this->ins_timestamp = 0ull;
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose.begin(), this->rfu2camera_pose.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->ego2camera_pose.begin(), this->ego2camera_pose.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_ego_pose_matirx.begin(), this->rfu_ego_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_imu_pose_matirx.begin(), this->rfu_imu_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->ego_world_pose_matirx.begin(), this->ego_world_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->camera_k_matrix.begin(), this->camera_k_matrix.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_world_translation.begin(), this->imu_world_translation.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->imu_world_rotation.begin(), this->imu_world_rotation.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front.begin(), this->rfu2camera_pose_front.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front_left.begin(), this->rfu2camera_pose_front_left.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front_right.begin(), this->rfu2camera_pose_front_right.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back.begin(), this->rfu2camera_pose_back.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back_left.begin(), this->rfu2camera_pose_back_left.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back_right.begin(), this->rfu2camera_pose_back_right.end(), 0.0);
      this->vehile_report_time = 0ull;
      this->reserve1 = 0ll;
      this->reserve2 = 0ll;
      this->reserve3 = 0ll;
      this->reserve4 = 0ll;
      this->reserve5 = 0ll;
      this->reserve6 = 0ll;
      this->reserve7 = 0ll;
    }
  }

  explicit MachFusionFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rfu2camera_pose(_alloc),
    ego2camera_pose(_alloc),
    rfu_ego_pose_matirx(_alloc),
    rfu_imu_pose_matirx(_alloc),
    ego_world_pose_matirx(_alloc),
    camera_k_matrix(_alloc),
    imu_world_translation(_alloc),
    imu_world_rotation(_alloc),
    rfu2camera_pose_front(_alloc),
    rfu2camera_pose_front_left(_alloc),
    rfu2camera_pose_front_right(_alloc),
    rfu2camera_pose_back(_alloc),
    rfu2camera_pose_back_left(_alloc),
    rfu2camera_pose_back_right(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ull;
      this->rv_timestamp = 0ull;
      this->bev_timestamp = 0ull;
      this->front_radar_timestamp = 0ull;
      this->front_right_radar_timestamp = 0ull;
      this->front_left_radar_timestamp = 0ull;
      this->back_left_radar_timestamp = 0ull;
      this->back_right_radar_timestamp = 0ull;
      this->lidar_timestamp = 0ull;
      this->ins_timestamp = 0ull;
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose.begin(), this->rfu2camera_pose.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->ego2camera_pose.begin(), this->ego2camera_pose.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_ego_pose_matirx.begin(), this->rfu_ego_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->rfu_imu_pose_matirx.begin(), this->rfu_imu_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 16>::iterator, double>(this->ego_world_pose_matirx.begin(), this->ego_world_pose_matirx.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->camera_k_matrix.begin(), this->camera_k_matrix.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->imu_world_translation.begin(), this->imu_world_translation.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->imu_world_rotation.begin(), this->imu_world_rotation.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front.begin(), this->rfu2camera_pose_front.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front_left.begin(), this->rfu2camera_pose_front_left.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_front_right.begin(), this->rfu2camera_pose_front_right.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back.begin(), this->rfu2camera_pose_back.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back_left.begin(), this->rfu2camera_pose_back_left.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->rfu2camera_pose_back_right.begin(), this->rfu2camera_pose_back_right.end(), 0.0);
      this->vehile_report_time = 0ull;
      this->reserve1 = 0ll;
      this->reserve2 = 0ll;
      this->reserve3 = 0ll;
      this->reserve4 = 0ll;
      this->reserve5 = 0ll;
      this->reserve6 = 0ll;
      this->reserve7 = 0ll;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_type =
    uint64_t;
  _frame_id_type frame_id;
  using _rv_timestamp_type =
    uint64_t;
  _rv_timestamp_type rv_timestamp;
  using _bev_timestamp_type =
    uint64_t;
  _bev_timestamp_type bev_timestamp;
  using _front_radar_timestamp_type =
    uint64_t;
  _front_radar_timestamp_type front_radar_timestamp;
  using _front_right_radar_timestamp_type =
    uint64_t;
  _front_right_radar_timestamp_type front_right_radar_timestamp;
  using _front_left_radar_timestamp_type =
    uint64_t;
  _front_left_radar_timestamp_type front_left_radar_timestamp;
  using _back_left_radar_timestamp_type =
    uint64_t;
  _back_left_radar_timestamp_type back_left_radar_timestamp;
  using _back_right_radar_timestamp_type =
    uint64_t;
  _back_right_radar_timestamp_type back_right_radar_timestamp;
  using _lidar_timestamp_type =
    uint64_t;
  _lidar_timestamp_type lidar_timestamp;
  using _ins_timestamp_type =
    uint64_t;
  _ins_timestamp_type ins_timestamp;
  using _rfu2camera_pose_type =
    std::array<double, 7>;
  _rfu2camera_pose_type rfu2camera_pose;
  using _ego2camera_pose_type =
    std::array<double, 7>;
  _ego2camera_pose_type ego2camera_pose;
  using _rfu_ego_pose_matirx_type =
    std::array<double, 16>;
  _rfu_ego_pose_matirx_type rfu_ego_pose_matirx;
  using _rfu_imu_pose_matirx_type =
    std::array<double, 16>;
  _rfu_imu_pose_matirx_type rfu_imu_pose_matirx;
  using _ego_world_pose_matirx_type =
    std::array<double, 16>;
  _ego_world_pose_matirx_type ego_world_pose_matirx;
  using _camera_k_matrix_type =
    std::array<double, 9>;
  _camera_k_matrix_type camera_k_matrix;
  using _imu_world_translation_type =
    std::array<double, 3>;
  _imu_world_translation_type imu_world_translation;
  using _imu_world_rotation_type =
    std::array<double, 4>;
  _imu_world_rotation_type imu_world_rotation;
  using _rfu2camera_pose_front_type =
    std::array<double, 7>;
  _rfu2camera_pose_front_type rfu2camera_pose_front;
  using _rfu2camera_pose_front_left_type =
    std::array<double, 7>;
  _rfu2camera_pose_front_left_type rfu2camera_pose_front_left;
  using _rfu2camera_pose_front_right_type =
    std::array<double, 7>;
  _rfu2camera_pose_front_right_type rfu2camera_pose_front_right;
  using _rfu2camera_pose_back_type =
    std::array<double, 7>;
  _rfu2camera_pose_back_type rfu2camera_pose_back;
  using _rfu2camera_pose_back_left_type =
    std::array<double, 7>;
  _rfu2camera_pose_back_left_type rfu2camera_pose_back_left;
  using _rfu2camera_pose_back_right_type =
    std::array<double, 7>;
  _rfu2camera_pose_back_right_type rfu2camera_pose_back_right;
  using _vehile_report_time_type =
    uint64_t;
  _vehile_report_time_type vehile_report_time;
  using _reserve1_type =
    int64_t;
  _reserve1_type reserve1;
  using _reserve2_type =
    int64_t;
  _reserve2_type reserve2;
  using _reserve3_type =
    int64_t;
  _reserve3_type reserve3;
  using _reserve4_type =
    int64_t;
  _reserve4_type reserve4;
  using _reserve5_type =
    int64_t;
  _reserve5_type reserve5;
  using _reserve6_type =
    int64_t;
  _reserve6_type reserve6;
  using _reserve7_type =
    int64_t;
  _reserve7_type reserve7;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frame_id(
    const uint64_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__rv_timestamp(
    const uint64_t & _arg)
  {
    this->rv_timestamp = _arg;
    return *this;
  }
  Type & set__bev_timestamp(
    const uint64_t & _arg)
  {
    this->bev_timestamp = _arg;
    return *this;
  }
  Type & set__front_radar_timestamp(
    const uint64_t & _arg)
  {
    this->front_radar_timestamp = _arg;
    return *this;
  }
  Type & set__front_right_radar_timestamp(
    const uint64_t & _arg)
  {
    this->front_right_radar_timestamp = _arg;
    return *this;
  }
  Type & set__front_left_radar_timestamp(
    const uint64_t & _arg)
  {
    this->front_left_radar_timestamp = _arg;
    return *this;
  }
  Type & set__back_left_radar_timestamp(
    const uint64_t & _arg)
  {
    this->back_left_radar_timestamp = _arg;
    return *this;
  }
  Type & set__back_right_radar_timestamp(
    const uint64_t & _arg)
  {
    this->back_right_radar_timestamp = _arg;
    return *this;
  }
  Type & set__lidar_timestamp(
    const uint64_t & _arg)
  {
    this->lidar_timestamp = _arg;
    return *this;
  }
  Type & set__ins_timestamp(
    const uint64_t & _arg)
  {
    this->ins_timestamp = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose = _arg;
    return *this;
  }
  Type & set__ego2camera_pose(
    const std::array<double, 7> & _arg)
  {
    this->ego2camera_pose = _arg;
    return *this;
  }
  Type & set__rfu_ego_pose_matirx(
    const std::array<double, 16> & _arg)
  {
    this->rfu_ego_pose_matirx = _arg;
    return *this;
  }
  Type & set__rfu_imu_pose_matirx(
    const std::array<double, 16> & _arg)
  {
    this->rfu_imu_pose_matirx = _arg;
    return *this;
  }
  Type & set__ego_world_pose_matirx(
    const std::array<double, 16> & _arg)
  {
    this->ego_world_pose_matirx = _arg;
    return *this;
  }
  Type & set__camera_k_matrix(
    const std::array<double, 9> & _arg)
  {
    this->camera_k_matrix = _arg;
    return *this;
  }
  Type & set__imu_world_translation(
    const std::array<double, 3> & _arg)
  {
    this->imu_world_translation = _arg;
    return *this;
  }
  Type & set__imu_world_rotation(
    const std::array<double, 4> & _arg)
  {
    this->imu_world_rotation = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_front(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_front = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_front_left(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_front_left = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_front_right(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_front_right = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_back(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_back = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_back_left(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_back_left = _arg;
    return *this;
  }
  Type & set__rfu2camera_pose_back_right(
    const std::array<double, 7> & _arg)
  {
    this->rfu2camera_pose_back_right = _arg;
    return *this;
  }
  Type & set__vehile_report_time(
    const uint64_t & _arg)
  {
    this->vehile_report_time = _arg;
    return *this;
  }
  Type & set__reserve1(
    const int64_t & _arg)
  {
    this->reserve1 = _arg;
    return *this;
  }
  Type & set__reserve2(
    const int64_t & _arg)
  {
    this->reserve2 = _arg;
    return *this;
  }
  Type & set__reserve3(
    const int64_t & _arg)
  {
    this->reserve3 = _arg;
    return *this;
  }
  Type & set__reserve4(
    const int64_t & _arg)
  {
    this->reserve4 = _arg;
    return *this;
  }
  Type & set__reserve5(
    const int64_t & _arg)
  {
    this->reserve5 = _arg;
    return *this;
  }
  Type & set__reserve6(
    const int64_t & _arg)
  {
    this->reserve6 = _arg;
    return *this;
  }
  Type & set__reserve7(
    const int64_t & _arg)
  {
    this->reserve7 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__MachFusionFrame
    std::shared_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__MachFusionFrame
    std::shared_ptr<deva_aeb_msgs::msg::MachFusionFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachFusionFrame_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->rv_timestamp != other.rv_timestamp) {
      return false;
    }
    if (this->bev_timestamp != other.bev_timestamp) {
      return false;
    }
    if (this->front_radar_timestamp != other.front_radar_timestamp) {
      return false;
    }
    if (this->front_right_radar_timestamp != other.front_right_radar_timestamp) {
      return false;
    }
    if (this->front_left_radar_timestamp != other.front_left_radar_timestamp) {
      return false;
    }
    if (this->back_left_radar_timestamp != other.back_left_radar_timestamp) {
      return false;
    }
    if (this->back_right_radar_timestamp != other.back_right_radar_timestamp) {
      return false;
    }
    if (this->lidar_timestamp != other.lidar_timestamp) {
      return false;
    }
    if (this->ins_timestamp != other.ins_timestamp) {
      return false;
    }
    if (this->rfu2camera_pose != other.rfu2camera_pose) {
      return false;
    }
    if (this->ego2camera_pose != other.ego2camera_pose) {
      return false;
    }
    if (this->rfu_ego_pose_matirx != other.rfu_ego_pose_matirx) {
      return false;
    }
    if (this->rfu_imu_pose_matirx != other.rfu_imu_pose_matirx) {
      return false;
    }
    if (this->ego_world_pose_matirx != other.ego_world_pose_matirx) {
      return false;
    }
    if (this->camera_k_matrix != other.camera_k_matrix) {
      return false;
    }
    if (this->imu_world_translation != other.imu_world_translation) {
      return false;
    }
    if (this->imu_world_rotation != other.imu_world_rotation) {
      return false;
    }
    if (this->rfu2camera_pose_front != other.rfu2camera_pose_front) {
      return false;
    }
    if (this->rfu2camera_pose_front_left != other.rfu2camera_pose_front_left) {
      return false;
    }
    if (this->rfu2camera_pose_front_right != other.rfu2camera_pose_front_right) {
      return false;
    }
    if (this->rfu2camera_pose_back != other.rfu2camera_pose_back) {
      return false;
    }
    if (this->rfu2camera_pose_back_left != other.rfu2camera_pose_back_left) {
      return false;
    }
    if (this->rfu2camera_pose_back_right != other.rfu2camera_pose_back_right) {
      return false;
    }
    if (this->vehile_report_time != other.vehile_report_time) {
      return false;
    }
    if (this->reserve1 != other.reserve1) {
      return false;
    }
    if (this->reserve2 != other.reserve2) {
      return false;
    }
    if (this->reserve3 != other.reserve3) {
      return false;
    }
    if (this->reserve4 != other.reserve4) {
      return false;
    }
    if (this->reserve5 != other.reserve5) {
      return false;
    }
    if (this->reserve6 != other.reserve6) {
      return false;
    }
    if (this->reserve7 != other.reserve7) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachFusionFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachFusionFrame_

// alias to use template instance with default allocator
using MachFusionFrame =
  deva_aeb_msgs::msg::MachFusionFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__STRUCT_HPP_
