// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpSegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: seg_offset
  {
    out << "seg_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_offset, out);
    out << ", ";
  }

  // member: seg_msg_type
  {
    out << "seg_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_msg_type, out);
    out << ", ";
  }

  // member: seg_path_idx
  {
    out << "seg_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_path_idx, out);
    out << ", ";
  }

  // member: seg_cyc_cnt
  {
    out << "seg_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_cyc_cnt, out);
    out << ", ";
  }

  // member: seg_update
  {
    out << "seg_update: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_update, out);
    out << ", ";
  }

  // member: seg_retr
  {
    out << "seg_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_retr, out);
    out << ", ";
  }

  // member: seg_build_up_area
  {
    out << "seg_build_up_area: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_build_up_area, out);
    out << ", ";
  }

  // member: seg_bridge
  {
    out << "seg_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_bridge, out);
    out << ", ";
  }

  // member: seg_tunnel
  {
    out << "seg_tunnel: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_tunnel, out);
    out << ", ";
  }

  // member: seg_func_road_class
  {
    out << "seg_func_road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_func_road_class, out);
    out << ", ";
  }

  // member: seg_rel_probb
  {
    out << "seg_rel_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_rel_probb, out);
    out << ", ";
  }

  // member: seg_form_of_way
  {
    out << "seg_form_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_form_of_way, out);
    out << ", ";
  }

  // member: seg_cmplx_insct
  {
    out << "seg_cmplx_insct: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_cmplx_insct, out);
    out << ", ";
  }

  // member: seg_part_of_calc_route
  {
    out << "seg_part_of_calc_route: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_part_of_calc_route, out);
    out << ", ";
  }

  // member: seg_eff_spd_lmt_type
  {
    out << "seg_eff_spd_lmt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_eff_spd_lmt_type, out);
    out << ", ";
  }

  // member: seg_eff_spd_lmt
  {
    out << "seg_eff_spd_lmt: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_eff_spd_lmt, out);
    out << ", ";
  }

  // member: seg_num_of_lane_drv_dir
  {
    out << "seg_num_of_lane_drv_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_num_of_lane_drv_dir, out);
    out << ", ";
  }

  // member: seg_num_of_lane_opp_dir
  {
    out << "seg_num_of_lane_opp_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_num_of_lane_opp_dir, out);
    out << ", ";
  }

  // member: seg_divide_road
  {
    out << "seg_divide_road: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_divide_road, out);
    out << ", ";
  }

  // member: seg_relative_offset
  {
    out << "seg_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_relative_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seg_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_offset, out);
    out << "\n";
  }

  // member: seg_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_msg_type, out);
    out << "\n";
  }

  // member: seg_path_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_path_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_path_idx, out);
    out << "\n";
  }

  // member: seg_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_cyc_cnt, out);
    out << "\n";
  }

  // member: seg_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_update: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_update, out);
    out << "\n";
  }

  // member: seg_retr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_retr: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_retr, out);
    out << "\n";
  }

  // member: seg_build_up_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_build_up_area: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_build_up_area, out);
    out << "\n";
  }

  // member: seg_bridge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_bridge, out);
    out << "\n";
  }

  // member: seg_tunnel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_tunnel: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_tunnel, out);
    out << "\n";
  }

  // member: seg_func_road_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_func_road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_func_road_class, out);
    out << "\n";
  }

  // member: seg_rel_probb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_rel_probb: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_rel_probb, out);
    out << "\n";
  }

  // member: seg_form_of_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_form_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_form_of_way, out);
    out << "\n";
  }

  // member: seg_cmplx_insct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_cmplx_insct: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_cmplx_insct, out);
    out << "\n";
  }

  // member: seg_part_of_calc_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_part_of_calc_route: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_part_of_calc_route, out);
    out << "\n";
  }

  // member: seg_eff_spd_lmt_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_eff_spd_lmt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_eff_spd_lmt_type, out);
    out << "\n";
  }

  // member: seg_eff_spd_lmt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_eff_spd_lmt: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_eff_spd_lmt, out);
    out << "\n";
  }

  // member: seg_num_of_lane_drv_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_num_of_lane_drv_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_num_of_lane_drv_dir, out);
    out << "\n";
  }

  // member: seg_num_of_lane_opp_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_num_of_lane_opp_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_num_of_lane_opp_dir, out);
    out << "\n";
  }

  // member: seg_divide_road
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_divide_road: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_divide_road, out);
    out << "\n";
  }

  // member: seg_relative_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seg_relative_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.seg_relative_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpSegment & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::EhpSegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpSegment & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpSegment>()
{
  return "deva_gaode_routing_msgs::msg::EhpSegment";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpSegment>()
{
  return "deva_gaode_routing_msgs/msg/EhpSegment";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpSegment>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpSegment>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpSegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__TRAITS_HPP_
