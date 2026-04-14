// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duckietown_msgs:msg/IntersectionPose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__TRAITS_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duckietown_msgs/msg/detail/intersection_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace duckietown_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: likelihood
  {
    out << "likelihood: ";
    rosidl_generator_traits::value_to_yaml(msg.likelihood, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionPose & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: likelihood
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "likelihood: ";
    rosidl_generator_traits::value_to_yaml(msg.likelihood, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionPose & msg, bool use_flow_style = false)
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
  const duckietown_msgs::msg::IntersectionPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckietown_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckietown_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const duckietown_msgs::msg::IntersectionPose & msg)
{
  return duckietown_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duckietown_msgs::msg::IntersectionPose>()
{
  return "duckietown_msgs::msg::IntersectionPose";
}

template<>
inline const char * name<duckietown_msgs::msg::IntersectionPose>()
{
  return "duckietown_msgs/msg/IntersectionPose";
}

template<>
struct has_fixed_size<duckietown_msgs::msg::IntersectionPose>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<duckietown_msgs::msg::IntersectionPose>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<duckietown_msgs::msg::IntersectionPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__TRAITS_HPP_
