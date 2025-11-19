// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpStub & msg,
  std::ostream & out)
{
  out << "{";
  // member: stub_offset
  {
    out << "stub_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_offset, out);
    out << ", ";
  }

  // member: stub_msg_type
  {
    out << "stub_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_msg_type, out);
    out << ", ";
  }

  // member: stub_path_idx
  {
    out << "stub_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_path_idx, out);
    out << ", ";
  }

  // member: stub_cyc_cnt
  {
    out << "stub_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_cyc_cnt, out);
    out << ", ";
  }

  // member: stub_update
  {
    out << "stub_update: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_update, out);
    out << ", ";
  }

  // member: stub_retr
  {
    out << "stub_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_retr, out);
    out << ", ";
  }

  // member: stub_stub_path_idx
  {
    out << "stub_stub_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_stub_path_idx, out);
    out << ", ";
  }

  // member: stub_func_road_class
  {
    out << "stub_func_road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_func_road_class, out);
    out << ", ";
  }

  // member: stub_rel_probb
  {
    out << "stub_rel_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_rel_probb, out);
    out << ", ";
  }

  // member: stub_form_of_way
  {
    out << "stub_form_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_form_of_way, out);
    out << ", ";
  }

  // member: stub_cmplx_insct
  {
    out << "stub_cmplx_insct: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_cmplx_insct, out);
    out << ", ";
  }

  // member: stub_part_of_calc_route
  {
    out << "stub_part_of_calc_route: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_part_of_calc_route, out);
    out << ", ";
  }

  // member: stub_turn_angl
  {
    out << "stub_turn_angl: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_turn_angl, out);
    out << ", ";
  }

  // member: stub_num_of_lane_drv_dir
  {
    out << "stub_num_of_lane_drv_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_num_of_lane_drv_dir, out);
    out << ", ";
  }

  // member: stub_num_of_lane_opp_dir
  {
    out << "stub_num_of_lane_opp_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_num_of_lane_opp_dir, out);
    out << ", ";
  }

  // member: stub_rt_of_way
  {
    out << "stub_rt_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_rt_of_way, out);
    out << ", ";
  }

  // member: stub_last_stub
  {
    out << "stub_last_stub: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_last_stub, out);
    out << ", ";
  }

  // member: stub_relative_offset
  {
    out << "stub_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_relative_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpStub & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stub_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_offset, out);
    out << "\n";
  }

  // member: stub_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_msg_type, out);
    out << "\n";
  }

  // member: stub_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_path_idx, out);
    out << "\n";
  }

  // member: stub_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_cyc_cnt, out);
    out << "\n";
  }

  // member: stub_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_update: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_update, out);
    out << "\n";
  }

  // member: stub_retr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_retr, out);
    out << "\n";
  }

  // member: stub_stub_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_stub_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_stub_path_idx, out);
    out << "\n";
  }

  // member: stub_func_road_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_func_road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_func_road_class, out);
    out << "\n";
  }

  // member: stub_rel_probb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_rel_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_rel_probb, out);
    out << "\n";
  }

  // member: stub_form_of_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_form_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_form_of_way, out);
    out << "\n";
  }

  // member: stub_cmplx_insct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_cmplx_insct: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_cmplx_insct, out);
    out << "\n";
  }

  // member: stub_part_of_calc_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_part_of_calc_route: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_part_of_calc_route, out);
    out << "\n";
  }

  // member: stub_turn_angl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_turn_angl: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_turn_angl, out);
    out << "\n";
  }

  // member: stub_num_of_lane_drv_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_num_of_lane_drv_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_num_of_lane_drv_dir, out);
    out << "\n";
  }

  // member: stub_num_of_lane_opp_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_num_of_lane_opp_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_num_of_lane_opp_dir, out);
    out << "\n";
  }

  // member: stub_rt_of_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_rt_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_rt_of_way, out);
    out << "\n";
  }

  // member: stub_last_stub
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_last_stub: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_last_stub, out);
    out << "\n";
  }

  // member: stub_relative_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stub_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.stub_relative_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpStub & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::EhpStub & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpStub & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpStub>()
{
  return "deva_gaode_routing_msgs::msg::EhpStub";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpStub>()
{
  return "deva_gaode_routing_msgs/msg/EhpStub";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpStub>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpStub>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpStub>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__TRAITS_HPP_
