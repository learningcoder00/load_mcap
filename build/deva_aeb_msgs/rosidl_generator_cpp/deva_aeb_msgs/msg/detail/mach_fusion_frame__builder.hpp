// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_MachFusionFrame_reserve7
{
public:
  explicit Init_MachFusionFrame_reserve7(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::MachFusionFrame reserve7(::deva_aeb_msgs::msg::MachFusionFrame::_reserve7_type arg)
  {
    msg_.reserve7 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve6
{
public:
  explicit Init_MachFusionFrame_reserve6(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve7 reserve6(::deva_aeb_msgs::msg::MachFusionFrame::_reserve6_type arg)
  {
    msg_.reserve6 = std::move(arg);
    return Init_MachFusionFrame_reserve7(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve5
{
public:
  explicit Init_MachFusionFrame_reserve5(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve6 reserve5(::deva_aeb_msgs::msg::MachFusionFrame::_reserve5_type arg)
  {
    msg_.reserve5 = std::move(arg);
    return Init_MachFusionFrame_reserve6(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve4
{
public:
  explicit Init_MachFusionFrame_reserve4(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve5 reserve4(::deva_aeb_msgs::msg::MachFusionFrame::_reserve4_type arg)
  {
    msg_.reserve4 = std::move(arg);
    return Init_MachFusionFrame_reserve5(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve3
{
public:
  explicit Init_MachFusionFrame_reserve3(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve4 reserve3(::deva_aeb_msgs::msg::MachFusionFrame::_reserve3_type arg)
  {
    msg_.reserve3 = std::move(arg);
    return Init_MachFusionFrame_reserve4(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve2
{
public:
  explicit Init_MachFusionFrame_reserve2(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve3 reserve2(::deva_aeb_msgs::msg::MachFusionFrame::_reserve2_type arg)
  {
    msg_.reserve2 = std::move(arg);
    return Init_MachFusionFrame_reserve3(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_reserve1
{
public:
  explicit Init_MachFusionFrame_reserve1(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve2 reserve1(::deva_aeb_msgs::msg::MachFusionFrame::_reserve1_type arg)
  {
    msg_.reserve1 = std::move(arg);
    return Init_MachFusionFrame_reserve2(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_vehile_report_time
{
public:
  explicit Init_MachFusionFrame_vehile_report_time(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_reserve1 vehile_report_time(::deva_aeb_msgs::msg::MachFusionFrame::_vehile_report_time_type arg)
  {
    msg_.vehile_report_time = std::move(arg);
    return Init_MachFusionFrame_reserve1(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_back_right
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_back_right(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_vehile_report_time rfu2camera_pose_back_right(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_back_right_type arg)
  {
    msg_.rfu2camera_pose_back_right = std::move(arg);
    return Init_MachFusionFrame_vehile_report_time(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_back_left
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_back_left(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_back_right rfu2camera_pose_back_left(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_back_left_type arg)
  {
    msg_.rfu2camera_pose_back_left = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_back_right(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_back
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_back(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_back_left rfu2camera_pose_back(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_back_type arg)
  {
    msg_.rfu2camera_pose_back = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_back_left(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_front_right
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_front_right(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_back rfu2camera_pose_front_right(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_front_right_type arg)
  {
    msg_.rfu2camera_pose_front_right = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_back(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_front_left
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_front_left(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_front_right rfu2camera_pose_front_left(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_front_left_type arg)
  {
    msg_.rfu2camera_pose_front_left = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_front_right(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose_front
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose_front(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_front_left rfu2camera_pose_front(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_front_type arg)
  {
    msg_.rfu2camera_pose_front = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_front_left(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_imu_world_rotation
{
public:
  explicit Init_MachFusionFrame_imu_world_rotation(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose_front imu_world_rotation(::deva_aeb_msgs::msg::MachFusionFrame::_imu_world_rotation_type arg)
  {
    msg_.imu_world_rotation = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose_front(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_imu_world_translation
{
public:
  explicit Init_MachFusionFrame_imu_world_translation(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_imu_world_rotation imu_world_translation(::deva_aeb_msgs::msg::MachFusionFrame::_imu_world_translation_type arg)
  {
    msg_.imu_world_translation = std::move(arg);
    return Init_MachFusionFrame_imu_world_rotation(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_camera_k_matrix
{
public:
  explicit Init_MachFusionFrame_camera_k_matrix(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_imu_world_translation camera_k_matrix(::deva_aeb_msgs::msg::MachFusionFrame::_camera_k_matrix_type arg)
  {
    msg_.camera_k_matrix = std::move(arg);
    return Init_MachFusionFrame_imu_world_translation(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_ego_world_pose_matirx
{
public:
  explicit Init_MachFusionFrame_ego_world_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_camera_k_matrix ego_world_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame::_ego_world_pose_matirx_type arg)
  {
    msg_.ego_world_pose_matirx = std::move(arg);
    return Init_MachFusionFrame_camera_k_matrix(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu_imu_pose_matirx
{
public:
  explicit Init_MachFusionFrame_rfu_imu_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_ego_world_pose_matirx rfu_imu_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame::_rfu_imu_pose_matirx_type arg)
  {
    msg_.rfu_imu_pose_matirx = std::move(arg);
    return Init_MachFusionFrame_ego_world_pose_matirx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu_ego_pose_matirx
{
public:
  explicit Init_MachFusionFrame_rfu_ego_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu_imu_pose_matirx rfu_ego_pose_matirx(::deva_aeb_msgs::msg::MachFusionFrame::_rfu_ego_pose_matirx_type arg)
  {
    msg_.rfu_ego_pose_matirx = std::move(arg);
    return Init_MachFusionFrame_rfu_imu_pose_matirx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_ego2camera_pose
{
public:
  explicit Init_MachFusionFrame_ego2camera_pose(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu_ego_pose_matirx ego2camera_pose(::deva_aeb_msgs::msg::MachFusionFrame::_ego2camera_pose_type arg)
  {
    msg_.ego2camera_pose = std::move(arg);
    return Init_MachFusionFrame_rfu_ego_pose_matirx(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rfu2camera_pose
{
public:
  explicit Init_MachFusionFrame_rfu2camera_pose(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_ego2camera_pose rfu2camera_pose(::deva_aeb_msgs::msg::MachFusionFrame::_rfu2camera_pose_type arg)
  {
    msg_.rfu2camera_pose = std::move(arg);
    return Init_MachFusionFrame_ego2camera_pose(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_ins_timestamp
{
public:
  explicit Init_MachFusionFrame_ins_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rfu2camera_pose ins_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_ins_timestamp_type arg)
  {
    msg_.ins_timestamp = std::move(arg);
    return Init_MachFusionFrame_rfu2camera_pose(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_lidar_timestamp
{
public:
  explicit Init_MachFusionFrame_lidar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_ins_timestamp lidar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_lidar_timestamp_type arg)
  {
    msg_.lidar_timestamp = std::move(arg);
    return Init_MachFusionFrame_ins_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_back_right_radar_timestamp
{
public:
  explicit Init_MachFusionFrame_back_right_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_lidar_timestamp back_right_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_back_right_radar_timestamp_type arg)
  {
    msg_.back_right_radar_timestamp = std::move(arg);
    return Init_MachFusionFrame_lidar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_back_left_radar_timestamp
{
public:
  explicit Init_MachFusionFrame_back_left_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_back_right_radar_timestamp back_left_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_back_left_radar_timestamp_type arg)
  {
    msg_.back_left_radar_timestamp = std::move(arg);
    return Init_MachFusionFrame_back_right_radar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_front_left_radar_timestamp
{
public:
  explicit Init_MachFusionFrame_front_left_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_back_left_radar_timestamp front_left_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_front_left_radar_timestamp_type arg)
  {
    msg_.front_left_radar_timestamp = std::move(arg);
    return Init_MachFusionFrame_back_left_radar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_front_right_radar_timestamp
{
public:
  explicit Init_MachFusionFrame_front_right_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_front_left_radar_timestamp front_right_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_front_right_radar_timestamp_type arg)
  {
    msg_.front_right_radar_timestamp = std::move(arg);
    return Init_MachFusionFrame_front_left_radar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_front_radar_timestamp
{
public:
  explicit Init_MachFusionFrame_front_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_front_right_radar_timestamp front_radar_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_front_radar_timestamp_type arg)
  {
    msg_.front_radar_timestamp = std::move(arg);
    return Init_MachFusionFrame_front_right_radar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_bev_timestamp
{
public:
  explicit Init_MachFusionFrame_bev_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_front_radar_timestamp bev_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_bev_timestamp_type arg)
  {
    msg_.bev_timestamp = std::move(arg);
    return Init_MachFusionFrame_front_radar_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_rv_timestamp
{
public:
  explicit Init_MachFusionFrame_rv_timestamp(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_bev_timestamp rv_timestamp(::deva_aeb_msgs::msg::MachFusionFrame::_rv_timestamp_type arg)
  {
    msg_.rv_timestamp = std::move(arg);
    return Init_MachFusionFrame_bev_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_frame_id
{
public:
  explicit Init_MachFusionFrame_frame_id(::deva_aeb_msgs::msg::MachFusionFrame & msg)
  : msg_(msg)
  {}
  Init_MachFusionFrame_rv_timestamp frame_id(::deva_aeb_msgs::msg::MachFusionFrame::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_MachFusionFrame_rv_timestamp(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

class Init_MachFusionFrame_header
{
public:
  Init_MachFusionFrame_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachFusionFrame_frame_id header(::deva_aeb_msgs::msg::MachFusionFrame::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachFusionFrame_frame_id(msg_);
  }

private:
  ::deva_aeb_msgs::msg::MachFusionFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::MachFusionFrame>()
{
  return deva_aeb_msgs::msg::builder::Init_MachFusionFrame_header();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__MACH_FUSION_FRAME__BUILDER_HPP_
