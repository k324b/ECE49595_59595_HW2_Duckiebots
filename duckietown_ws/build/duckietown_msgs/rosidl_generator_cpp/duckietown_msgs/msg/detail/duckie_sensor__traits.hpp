// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duckietown_msgs:msg/DuckieSensor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__TRAITS_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duckietown_msgs/msg/detail/duckie_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace duckietown_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DuckieSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: fvalue
  {
    out << "fvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.fvalue, out);
    out << ", ";
  }

  // member: is_analog
  {
    out << "is_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.is_analog, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DuckieSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: fvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.fvalue, out);
    out << "\n";
  }

  // member: is_analog
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_analog: ";
    rosidl_generator_traits::value_to_yaml(msg.is_analog, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DuckieSensor & msg, bool use_flow_style = false)
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
  const duckietown_msgs::msg::DuckieSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  duckietown_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duckietown_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const duckietown_msgs::msg::DuckieSensor & msg)
{
  return duckietown_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duckietown_msgs::msg::DuckieSensor>()
{
  return "duckietown_msgs::msg::DuckieSensor";
}

template<>
inline const char * name<duckietown_msgs::msg::DuckieSensor>()
{
  return "duckietown_msgs/msg/DuckieSensor";
}

template<>
struct has_fixed_size<duckietown_msgs::msg::DuckieSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<duckietown_msgs::msg::DuckieSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<duckietown_msgs::msg::DuckieSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__TRAITS_HPP_
