// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/st_boundary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_STBoundary_global_track_id
{
public:
  explicit Init_STBoundary_global_track_id(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::STBoundary global_track_id(::deva_perception_msgs::msg::STBoundary::_global_track_id_type arg)
  {
    msg_.global_track_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_reserve
{
public:
  explicit Init_STBoundary_reserve(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_global_track_id reserve(::deva_perception_msgs::msg::STBoundary::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_STBoundary_global_track_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_confidence
{
public:
  explicit Init_STBoundary_confidence(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_reserve confidence(::deva_perception_msgs::msg::STBoundary::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_STBoundary_reserve(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_right_id
{
public:
  explicit Init_STBoundary_right_id(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_confidence right_id(::deva_perception_msgs::msg::STBoundary::_right_id_type arg)
  {
    msg_.right_id = std::move(arg);
    return Init_STBoundary_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_left_id
{
public:
  explicit Init_STBoundary_left_id(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_right_id left_id(::deva_perception_msgs::msg::STBoundary::_left_id_type arg)
  {
    msg_.left_id = std::move(arg);
    return Init_STBoundary_right_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_id
{
public:
  explicit Init_STBoundary_id(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_left_id id(::deva_perception_msgs::msg::STBoundary::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_STBoundary_left_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_position
{
public:
  explicit Init_STBoundary_position(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_id position(::deva_perception_msgs::msg::STBoundary::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_STBoundary_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_lane_type
{
public:
  explicit Init_STBoundary_lane_type(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_position lane_type(::deva_perception_msgs::msg::STBoundary::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_STBoundary_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_extend_disperse_curve
{
public:
  explicit Init_STBoundary_extend_disperse_curve(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_lane_type extend_disperse_curve(::deva_perception_msgs::msg::STBoundary::_extend_disperse_curve_type arg)
  {
    msg_.extend_disperse_curve = std::move(arg);
    return Init_STBoundary_lane_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_has_extend_disperse
{
public:
  explicit Init_STBoundary_has_extend_disperse(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_extend_disperse_curve has_extend_disperse(::deva_perception_msgs::msg::STBoundary::_has_extend_disperse_type arg)
  {
    msg_.has_extend_disperse = std::move(arg);
    return Init_STBoundary_extend_disperse_curve(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_extend_equation_curve
{
public:
  explicit Init_STBoundary_extend_equation_curve(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_has_extend_disperse extend_equation_curve(::deva_perception_msgs::msg::STBoundary::_extend_equation_curve_type arg)
  {
    msg_.extend_equation_curve = std::move(arg);
    return Init_STBoundary_has_extend_disperse(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_has_extend_equation
{
public:
  explicit Init_STBoundary_has_extend_equation(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_extend_equation_curve has_extend_equation(::deva_perception_msgs::msg::STBoundary::_has_extend_equation_type arg)
  {
    msg_.has_extend_equation = std::move(arg);
    return Init_STBoundary_extend_equation_curve(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_disperse_curve
{
public:
  explicit Init_STBoundary_disperse_curve(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_has_extend_equation disperse_curve(::deva_perception_msgs::msg::STBoundary::_disperse_curve_type arg)
  {
    msg_.disperse_curve = std::move(arg);
    return Init_STBoundary_has_extend_equation(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_has_disperse
{
public:
  explicit Init_STBoundary_has_disperse(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_disperse_curve has_disperse(::deva_perception_msgs::msg::STBoundary::_has_disperse_type arg)
  {
    msg_.has_disperse = std::move(arg);
    return Init_STBoundary_disperse_curve(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_equation_curves
{
public:
  explicit Init_STBoundary_equation_curves(::deva_perception_msgs::msg::STBoundary & msg)
  : msg_(msg)
  {}
  Init_STBoundary_has_disperse equation_curves(::deva_perception_msgs::msg::STBoundary::_equation_curves_type arg)
  {
    msg_.equation_curves = std::move(arg);
    return Init_STBoundary_has_disperse(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

class Init_STBoundary_has_equation
{
public:
  Init_STBoundary_has_equation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_STBoundary_equation_curves has_equation(::deva_perception_msgs::msg::STBoundary::_has_equation_type arg)
  {
    msg_.has_equation = std::move(arg);
    return Init_STBoundary_equation_curves(msg_);
  }

private:
  ::deva_perception_msgs::msg::STBoundary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::STBoundary>()
{
  return deva_perception_msgs::msg::builder::Init_STBoundary_has_equation();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__BUILDER_HPP_
