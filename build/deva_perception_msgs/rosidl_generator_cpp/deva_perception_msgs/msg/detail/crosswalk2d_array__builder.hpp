// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk2dArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/crosswalk2d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Crosswalk2dArray_source
{
public:
  explicit Init_Crosswalk2dArray_source(::deva_perception_msgs::msg::Crosswalk2dArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Crosswalk2dArray source(::deva_perception_msgs::msg::Crosswalk2dArray::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2dArray msg_;
};

class Init_Crosswalk2dArray_crosswalk_2ds
{
public:
  Init_Crosswalk2dArray_crosswalk_2ds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Crosswalk2dArray_source crosswalk_2ds(::deva_perception_msgs::msg::Crosswalk2dArray::_crosswalk_2ds_type arg)
  {
    msg_.crosswalk_2ds = std::move(arg);
    return Init_Crosswalk2dArray_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::Crosswalk2dArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Crosswalk2dArray>()
{
  return deva_perception_msgs::msg::builder::Init_Crosswalk2dArray_crosswalk_2ds();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK2D_ARRAY__BUILDER_HPP_
