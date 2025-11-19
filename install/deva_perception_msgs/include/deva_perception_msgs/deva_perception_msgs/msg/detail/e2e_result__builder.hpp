// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eResult_right
{
public:
  explicit Init_E2eResult_right(::deva_perception_msgs::msg::E2eResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eResult right(::deva_perception_msgs::msg::E2eResult::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eResult msg_;
};

class Init_E2eResult_straight
{
public:
  explicit Init_E2eResult_straight(::deva_perception_msgs::msg::E2eResult & msg)
  : msg_(msg)
  {}
  Init_E2eResult_right straight(::deva_perception_msgs::msg::E2eResult::_straight_type arg)
  {
    msg_.straight = std::move(arg);
    return Init_E2eResult_right(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eResult msg_;
};

class Init_E2eResult_left
{
public:
  explicit Init_E2eResult_left(::deva_perception_msgs::msg::E2eResult & msg)
  : msg_(msg)
  {}
  Init_E2eResult_straight left(::deva_perception_msgs::msg::E2eResult::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_E2eResult_straight(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eResult msg_;
};

class Init_E2eResult_turn_around
{
public:
  explicit Init_E2eResult_turn_around(::deva_perception_msgs::msg::E2eResult & msg)
  : msg_(msg)
  {}
  Init_E2eResult_left turn_around(::deva_perception_msgs::msg::E2eResult::_turn_around_type arg)
  {
    msg_.turn_around = std::move(arg);
    return Init_E2eResult_left(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eResult msg_;
};

class Init_E2eResult_broadcategory
{
public:
  Init_E2eResult_broadcategory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eResult_turn_around broadcategory(::deva_perception_msgs::msg::E2eResult::_broadcategory_type arg)
  {
    msg_.broadcategory = std::move(arg);
    return Init_E2eResult_turn_around(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eResult>()
{
  return deva_perception_msgs::msg::builder::Init_E2eResult_broadcategory();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__BUILDER_HPP_
