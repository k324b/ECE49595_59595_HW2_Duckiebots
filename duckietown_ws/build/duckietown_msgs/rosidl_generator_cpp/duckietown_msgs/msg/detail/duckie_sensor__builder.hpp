// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckietown_msgs:msg/DuckieSensor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__BUILDER_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckietown_msgs/msg/detail/duckie_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckietown_msgs
{

namespace msg
{

namespace builder
{

class Init_DuckieSensor_name
{
public:
  explicit Init_DuckieSensor_name(::duckietown_msgs::msg::DuckieSensor & msg)
  : msg_(msg)
  {}
  ::duckietown_msgs::msg::DuckieSensor name(::duckietown_msgs::msg::DuckieSensor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckietown_msgs::msg::DuckieSensor msg_;
};

class Init_DuckieSensor_is_analog
{
public:
  explicit Init_DuckieSensor_is_analog(::duckietown_msgs::msg::DuckieSensor & msg)
  : msg_(msg)
  {}
  Init_DuckieSensor_name is_analog(::duckietown_msgs::msg::DuckieSensor::_is_analog_type arg)
  {
    msg_.is_analog = std::move(arg);
    return Init_DuckieSensor_name(msg_);
  }

private:
  ::duckietown_msgs::msg::DuckieSensor msg_;
};

class Init_DuckieSensor_fvalue
{
public:
  explicit Init_DuckieSensor_fvalue(::duckietown_msgs::msg::DuckieSensor & msg)
  : msg_(msg)
  {}
  Init_DuckieSensor_is_analog fvalue(::duckietown_msgs::msg::DuckieSensor::_fvalue_type arg)
  {
    msg_.fvalue = std::move(arg);
    return Init_DuckieSensor_is_analog(msg_);
  }

private:
  ::duckietown_msgs::msg::DuckieSensor msg_;
};

class Init_DuckieSensor_value
{
public:
  Init_DuckieSensor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DuckieSensor_fvalue value(::duckietown_msgs::msg::DuckieSensor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_DuckieSensor_fvalue(msg_);
  }

private:
  ::duckietown_msgs::msg::DuckieSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckietown_msgs::msg::DuckieSensor>()
{
  return duckietown_msgs::msg::builder::Init_DuckieSensor_value();
}

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__BUILDER_HPP_
