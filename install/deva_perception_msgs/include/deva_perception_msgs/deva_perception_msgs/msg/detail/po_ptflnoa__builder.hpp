// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PoPTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/po_ptflnoa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PoPTFLNOA_flashstatus
{
public:
  explicit Init_PoPTFLNOA_flashstatus(::deva_perception_msgs::msg::PoPTFLNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::PoPTFLNOA flashstatus(::deva_perception_msgs::msg::PoPTFLNOA::_flashstatus_type arg)
  {
    msg_.flashstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPTFLNOA msg_;
};

class Init_PoPTFLNOA_type
{
public:
  explicit Init_PoPTFLNOA_type(::deva_perception_msgs::msg::PoPTFLNOA & msg)
  : msg_(msg)
  {}
  Init_PoPTFLNOA_flashstatus type(::deva_perception_msgs::msg::PoPTFLNOA::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PoPTFLNOA_flashstatus(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPTFLNOA msg_;
};

class Init_PoPTFLNOA_color
{
public:
  Init_PoPTFLNOA_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoPTFLNOA_type color(::deva_perception_msgs::msg::PoPTFLNOA::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_PoPTFLNOA_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPTFLNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PoPTFLNOA>()
{
  return deva_perception_msgs::msg::builder::Init_PoPTFLNOA_color();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_PTFLNOA__BUILDER_HPP_
