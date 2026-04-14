// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duckietown_msgs:msg/CarControl.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__TRAITS_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duckietown_msgs/msg/detail/car_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace duckietown_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: need_steering
  {
    out << "need_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.need_steering, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarControl & msg,
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: need_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "need_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.need_steering, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarControl & msg, bool use_flow_style = false)
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
  const duckietown_msgs::msg::CarControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckietown_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckietown_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const duckietown_msgs::msg::CarControl & msg)
{
  return duckietown_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duckietown_msgs::msg::CarControl>()
{
  return "duckietown_msgs::msg::CarControl";
}

template<>
inline const char * name<duckietown_msgs::msg::CarControl>()
{
  return "duckietown_msgs/msg/CarControl";
}

template<>
struct has_fixed_size<duckietown_msgs::msg::CarControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<duckietown_msgs::msg::CarControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<duckietown_msgs::msg::CarControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__TRAITS_HPP_
