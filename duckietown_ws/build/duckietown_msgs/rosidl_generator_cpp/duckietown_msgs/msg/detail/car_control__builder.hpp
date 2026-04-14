// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckietown_msgs:msg/CarControl.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__BUILDER_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckietown_msgs/msg/detail/car_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckietown_msgs
{

namespace msg
{

namespace builder
{

class Init_CarControl_need_steering
{
public:
  explicit Init_CarControl_need_steering(::duckietown_msgs::msg::CarControl & msg)
  : msg_(msg)
  {}
  ::duckietown_msgs::msg::CarControl need_steering(::duckietown_msgs::msg::CarControl::_need_steering_type arg)
  {
    msg_.need_steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckietown_msgs::msg::CarControl msg_;
};

class Init_CarControl_steering
{
public:
  explicit Init_CarControl_steering(::duckietown_msgs::msg::CarControl & msg)
  : msg_(msg)
  {}
  Init_CarControl_need_steering steering(::duckietown_msgs::msg::CarControl::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_CarControl_need_steering(msg_);
  }

private:
  ::duckietown_msgs::msg::CarControl msg_;
};

class Init_CarControl_speed
{
public:
  explicit Init_CarControl_speed(::duckietown_msgs::msg::CarControl & msg)
  : msg_(msg)
  {}
  Init_CarControl_steering speed(::duckietown_msgs::msg::CarControl::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_CarControl_steering(msg_);
  }

private:
  ::duckietown_msgs::msg::CarControl msg_;
};

class Init_CarControl_header
{
public:
  Init_CarControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarControl_speed header(::duckietown_msgs::msg::CarControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarControl_speed(msg_);
  }

private:
  ::duckietown_msgs::msg::CarControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckietown_msgs::msg::CarControl>()
{
  return duckietown_msgs::msg::builder::Init_CarControl_header();
}

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__BUILDER_HPP_
