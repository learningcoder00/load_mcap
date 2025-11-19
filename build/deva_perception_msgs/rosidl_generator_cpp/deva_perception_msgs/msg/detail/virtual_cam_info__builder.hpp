// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualCamInfo_input_size
{
public:
  explicit Init_VirtualCamInfo_input_size(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::VirtualCamInfo input_size(::deva_perception_msgs::msg::VirtualCamInfo::_input_size_type arg)
  {
    msg_.input_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_crops
{
public:
  explicit Init_VirtualCamInfo_crops(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_input_size crops(::deva_perception_msgs::msg::VirtualCamInfo::_crops_type arg)
  {
    msg_.crops = std::move(arg);
    return Init_VirtualCamInfo_input_size(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_pinhole_intrinsic
{
public:
  explicit Init_VirtualCamInfo_pinhole_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_crops pinhole_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo::_pinhole_intrinsic_type arg)
  {
    msg_.pinhole_intrinsic = std::move(arg);
    return Init_VirtualCamInfo_crops(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_mapy
{
public:
  explicit Init_VirtualCamInfo_mapy(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_pinhole_intrinsic mapy(::deva_perception_msgs::msg::VirtualCamInfo::_mapy_type arg)
  {
    msg_.mapy = std::move(arg);
    return Init_VirtualCamInfo_pinhole_intrinsic(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_mapx
{
public:
  explicit Init_VirtualCamInfo_mapx(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_mapy mapx(::deva_perception_msgs::msg::VirtualCamInfo::_mapx_type arg)
  {
    msg_.mapx = std::move(arg);
    return Init_VirtualCamInfo_mapy(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_vir_extrinsic
{
public:
  explicit Init_VirtualCamInfo_vir_extrinsic(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_mapx vir_extrinsic(::deva_perception_msgs::msg::VirtualCamInfo::_vir_extrinsic_type arg)
  {
    msg_.vir_extrinsic = std::move(arg);
    return Init_VirtualCamInfo_mapx(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_ori_extrinsic
{
public:
  explicit Init_VirtualCamInfo_ori_extrinsic(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_vir_extrinsic ori_extrinsic(::deva_perception_msgs::msg::VirtualCamInfo::_ori_extrinsic_type arg)
  {
    msg_.ori_extrinsic = std::move(arg);
    return Init_VirtualCamInfo_vir_extrinsic(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_vir_intrinsic
{
public:
  explicit Init_VirtualCamInfo_vir_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_ori_extrinsic vir_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo::_vir_intrinsic_type arg)
  {
    msg_.vir_intrinsic = std::move(arg);
    return Init_VirtualCamInfo_ori_extrinsic(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_ori_intrinsic
{
public:
  explicit Init_VirtualCamInfo_ori_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_vir_intrinsic ori_intrinsic(::deva_perception_msgs::msg::VirtualCamInfo::_ori_intrinsic_type arg)
  {
    msg_.ori_intrinsic = std::move(arg);
    return Init_VirtualCamInfo_vir_intrinsic(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_distort_model
{
public:
  explicit Init_VirtualCamInfo_distort_model(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_ori_intrinsic distort_model(::deva_perception_msgs::msg::VirtualCamInfo::_distort_model_type arg)
  {
    msg_.distort_model = std::move(arg);
    return Init_VirtualCamInfo_ori_intrinsic(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_resolution
{
public:
  explicit Init_VirtualCamInfo_resolution(::deva_perception_msgs::msg::VirtualCamInfo & msg)
  : msg_(msg)
  {}
  Init_VirtualCamInfo_distort_model resolution(::deva_perception_msgs::msg::VirtualCamInfo::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_VirtualCamInfo_distort_model(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

class Init_VirtualCamInfo_cam_name
{
public:
  Init_VirtualCamInfo_cam_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualCamInfo_resolution cam_name(::deva_perception_msgs::msg::VirtualCamInfo::_cam_name_type arg)
  {
    msg_.cam_name = std::move(arg);
    return Init_VirtualCamInfo_resolution(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCamInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::VirtualCamInfo>()
{
  return deva_perception_msgs::msg::builder::Init_VirtualCamInfo_cam_name();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAM_INFO__BUILDER_HPP_
