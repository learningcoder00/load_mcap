// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/BindResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/bind_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_BindResult_right_lane_distance
{
public:
  explicit Init_BindResult_right_lane_distance(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::BindResult right_lane_distance(::deva_perception_msgs::msg::BindResult::_right_lane_distance_type arg)
  {
    msg_.right_lane_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_left_lane_distance
{
public:
  explicit Init_BindResult_left_lane_distance(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_right_lane_distance left_lane_distance(::deva_perception_msgs::msg::BindResult::_left_lane_distance_type arg)
  {
    msg_.left_lane_distance = std::move(arg);
    return Init_BindResult_right_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_right_lane_id
{
public:
  explicit Init_BindResult_right_lane_id(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_left_lane_distance right_lane_id(::deva_perception_msgs::msg::BindResult::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_BindResult_left_lane_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_left_lane_id
{
public:
  explicit Init_BindResult_left_lane_id(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_right_lane_id left_lane_id(::deva_perception_msgs::msg::BindResult::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_BindResult_right_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_vertical_distance
{
public:
  explicit Init_BindResult_vertical_distance(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_left_lane_id vertical_distance(::deva_perception_msgs::msg::BindResult::_vertical_distance_type arg)
  {
    msg_.vertical_distance = std::move(arg);
    return Init_BindResult_left_lane_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_score
{
public:
  explicit Init_BindResult_score(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_vertical_distance score(::deva_perception_msgs::msg::BindResult::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_BindResult_vertical_distance(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_bind_type
{
public:
  explicit Init_BindResult_bind_type(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_score bind_type(::deva_perception_msgs::msg::BindResult::_bind_type_type arg)
  {
    msg_.bind_type = std::move(arg);
    return Init_BindResult_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_dimensions
{
public:
  explicit Init_BindResult_dimensions(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_bind_type dimensions(::deva_perception_msgs::msg::BindResult::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_BindResult_bind_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_pose
{
public:
  explicit Init_BindResult_pose(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_dimensions pose(::deva_perception_msgs::msg::BindResult::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_BindResult_dimensions(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_with_bev_info
{
public:
  explicit Init_BindResult_with_bev_info(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_pose with_bev_info(::deva_perception_msgs::msg::BindResult::_with_bev_info_type arg)
  {
    msg_.with_bev_info = std::move(arg);
    return Init_BindResult_pose(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_id
{
public:
  explicit Init_BindResult_id(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_with_bev_info id(::deva_perception_msgs::msg::BindResult::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BindResult_with_bev_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_result
{
public:
  explicit Init_BindResult_result(::deva_perception_msgs::msg::BindResult & msg)
  : msg_(msg)
  {}
  Init_BindResult_id result(::deva_perception_msgs::msg::BindResult::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_BindResult_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

class Init_BindResult_header
{
public:
  Init_BindResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BindResult_result header(::deva_perception_msgs::msg::BindResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BindResult_result(msg_);
  }

private:
  ::deva_perception_msgs::msg::BindResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::BindResult>()
{
  return deva_perception_msgs::msg::builder::Init_BindResult_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__BUILDER_HPP_
