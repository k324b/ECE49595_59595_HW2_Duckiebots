// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duckietown_msgs:msg/LanePose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__TRAITS_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duckietown_msgs/msg/detail/lane_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace duckietown_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LanePose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: d_ref
  {
    out << "d_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.d_ref, out);
    out << ", ";
  }

  // member: sigma_d
  {
    out << "sigma_d: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_d, out);
    out << ", ";
  }

  // member: phi
  {
    out << "phi: ";
    rosidl_generator_traits::value_to_yaml(msg.phi, out);
    out << ", ";
  }

  // member: phi_ref
  {
    out << "phi_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_ref, out);
    out << ", ";
  }

  // member: sigma_phi
  {
    out << "sigma_phi: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_phi, out);
    out << ", ";
  }

  // member: curvature
  {
    out << "curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature, out);
    out << ", ";
  }

  // member: curvature_ref
  {
    out << "curvature_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_ref, out);
    out << ", ";
  }

  // member: v_ref
  {
    out << "v_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.v_ref, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: in_lane
  {
    out << "in_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.in_lane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LanePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: d_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.d_ref, out);
    out << "\n";
  }

  // member: sigma_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_d: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_d, out);
    out << "\n";
  }

  // member: phi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi: ";
    rosidl_generator_traits::value_to_yaml(msg.phi, out);
    out << "\n";
  }

  // member: phi_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.phi_ref, out);
    out << "\n";
  }

  // member: sigma_phi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_phi: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_phi, out);
    out << "\n";
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature, out);
    out << "\n";
  }

  // member: curvature_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_ref, out);
    out << "\n";
  }

  // member: v_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.v_ref, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: in_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.in_lane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LanePose & msg, bool use_flow_style = false)
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

}  // namespace duckietown_msgs

namespace rosidl_generator_traits
{

[[deprecated("use duckietown_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duckietown_msgs::msg::LanePose & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckietown_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckietown_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const duckietown_msgs::msg::LanePose & msg)
{
  return duckietown_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duckietown_msgs::msg::LanePose>()
{
  return "duckietown_msgs::msg::LanePose";
}

template<>
inline const char * name<duckietown_msgs::msg::LanePose>()
{
  return "duckietown_msgs/msg/LanePose";
}

template<>
struct has_fixed_size<duckietown_msgs::msg::LanePose>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<duckietown_msgs::msg::LanePose>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<duckietown_msgs::msg::LanePose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__TRAITS_HPP_
