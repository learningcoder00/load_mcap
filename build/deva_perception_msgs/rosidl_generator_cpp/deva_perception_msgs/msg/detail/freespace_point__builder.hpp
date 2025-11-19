// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/FreespacePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/freespace_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_FreespacePoint_visible
{
public:
  explicit Init_FreespacePoint_visible(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::FreespacePoint visible(::deva_perception_msgs::msg::FreespacePoint::_visible_type arg)
  {
    msg_.visible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_ins_id
{
public:
  explicit Init_FreespacePoint_ins_id(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_visible ins_id(::deva_perception_msgs::msg::FreespacePoint::_ins_id_type arg)
  {
    msg_.ins_id = std::move(arg);
    return Init_FreespacePoint_visible(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_class_type
{
public:
  explicit Init_FreespacePoint_class_type(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_ins_id class_type(::deva_perception_msgs::msg::FreespacePoint::_class_type_type arg)
  {
    msg_.class_type = std::move(arg);
    return Init_FreespacePoint_ins_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_range
{
public:
  explicit Init_FreespacePoint_range(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_class_type range(::deva_perception_msgs::msg::FreespacePoint::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_FreespacePoint_class_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_azim
{
public:
  explicit Init_FreespacePoint_azim(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_range azim(::deva_perception_msgs::msg::FreespacePoint::_azim_type arg)
  {
    msg_.azim = std::move(arg);
    return Init_FreespacePoint_range(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_rfu_z
{
public:
  explicit Init_FreespacePoint_rfu_z(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_azim rfu_z(::deva_perception_msgs::msg::FreespacePoint::_rfu_z_type arg)
  {
    msg_.rfu_z = std::move(arg);
    return Init_FreespacePoint_azim(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_rfu_y
{
public:
  explicit Init_FreespacePoint_rfu_y(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_rfu_z rfu_y(::deva_perception_msgs::msg::FreespacePoint::_rfu_y_type arg)
  {
    msg_.rfu_y = std::move(arg);
    return Init_FreespacePoint_rfu_z(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_rfu_x
{
public:
  explicit Init_FreespacePoint_rfu_x(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_rfu_y rfu_x(::deva_perception_msgs::msg::FreespacePoint::_rfu_x_type arg)
  {
    msg_.rfu_x = std::move(arg);
    return Init_FreespacePoint_rfu_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_z
{
public:
  explicit Init_FreespacePoint_z(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_rfu_x z(::deva_perception_msgs::msg::FreespacePoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_FreespacePoint_rfu_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_y
{
public:
  explicit Init_FreespacePoint_y(::deva_perception_msgs::msg::FreespacePoint & msg)
  : msg_(msg)
  {}
  Init_FreespacePoint_z y(::deva_perception_msgs::msg::FreespacePoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FreespacePoint_z(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

class Init_FreespacePoint_x
{
public:
  Init_FreespacePoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreespacePoint_y x(::deva_perception_msgs::msg::FreespacePoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FreespacePoint_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::FreespacePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::FreespacePoint>()
{
  return deva_perception_msgs::msg::builder::Init_FreespacePoint_x();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__BUILDER_HPP_
