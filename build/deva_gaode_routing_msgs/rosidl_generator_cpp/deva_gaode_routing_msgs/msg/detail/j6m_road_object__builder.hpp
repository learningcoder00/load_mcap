// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_J6mRoadObject_referenced_lane_ids
{
public:
  explicit Init_J6mRoadObject_referenced_lane_ids(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::J6mRoadObject referenced_lane_ids(::deva_gaode_routing_msgs::msg::J6mRoadObject::_referenced_lane_ids_type arg)
  {
    msg_.referenced_lane_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_coordinates
{
public:
  explicit Init_J6mRoadObject_coordinates(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_referenced_lane_ids coordinates(::deva_gaode_routing_msgs::msg::J6mRoadObject::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_J6mRoadObject_referenced_lane_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_offset
{
public:
  explicit Init_J6mRoadObject_offset(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_coordinates offset(::deva_gaode_routing_msgs::msg::J6mRoadObject::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_J6mRoadObject_coordinates(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_confidence
{
public:
  explicit Init_J6mRoadObject_confidence(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_offset confidence(::deva_gaode_routing_msgs::msg::J6mRoadObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_J6mRoadObject_offset(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_attributes
{
public:
  explicit Init_J6mRoadObject_road_attributes(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_confidence road_attributes(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_attributes_type arg)
  {
    msg_.road_attributes = std::move(arg);
    return Init_J6mRoadObject_confidence(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_object_heading
{
public:
  explicit Init_J6mRoadObject_road_object_heading(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_road_attributes road_object_heading(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_object_heading_type arg)
  {
    msg_.road_object_heading = std::move(arg);
    return Init_J6mRoadObject_road_attributes(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_object_center_point
{
public:
  explicit Init_J6mRoadObject_road_object_center_point(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_road_object_heading road_object_center_point(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_object_center_point_type arg)
  {
    msg_.road_object_center_point = std::move(arg);
    return Init_J6mRoadObject_road_object_heading(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_object_subtype
{
public:
  explicit Init_J6mRoadObject_road_object_subtype(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_road_object_center_point road_object_subtype(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_object_subtype_type arg)
  {
    msg_.road_object_subtype = std::move(arg);
    return Init_J6mRoadObject_road_object_center_point(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_object_type
{
public:
  explicit Init_J6mRoadObject_road_object_type(::deva_gaode_routing_msgs::msg::J6mRoadObject & msg)
  : msg_(msg)
  {}
  Init_J6mRoadObject_road_object_subtype road_object_type(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_object_type_type arg)
  {
    msg_.road_object_type = std::move(arg);
    return Init_J6mRoadObject_road_object_subtype(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

class Init_J6mRoadObject_road_object_id
{
public:
  Init_J6mRoadObject_road_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_J6mRoadObject_road_object_type road_object_id(::deva_gaode_routing_msgs::msg::J6mRoadObject::_road_object_id_type arg)
  {
    msg_.road_object_id = std::move(arg);
    return Init_J6mRoadObject_road_object_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::J6mRoadObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::J6mRoadObject>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_J6mRoadObject_road_object_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__BUILDER_HPP_
