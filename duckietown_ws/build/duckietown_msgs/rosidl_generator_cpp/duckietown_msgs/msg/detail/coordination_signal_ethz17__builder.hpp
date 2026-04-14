// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckietown_msgs:msg/CoordinationSignalETHZ17.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__BUILDER_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckietown_msgs/msg/detail/coordination_signal_ethz17__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckietown_msgs
{

namespace msg
{

namespace builder
{

class Init_CoordinationSignalETHZ17_signal
{
public:
  explicit Init_CoordinationSignalETHZ17_signal(::duckietown_msgs::msg::CoordinationSignalETHZ17 & msg)
  : msg_(msg)
  {}
  ::duckietown_msgs::msg::CoordinationSignalETHZ17 signal(::duckietown_msgs::msg::CoordinationSignalETHZ17::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckietown_msgs::msg::CoordinationSignalETHZ17 msg_;
};

class Init_CoordinationSignalETHZ17_header
{
public:
  Init_CoordinationSignalETHZ17_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinationSignalETHZ17_signal header(::duckietown_msgs::msg::CoordinationSignalETHZ17::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CoordinationSignalETHZ17_signal(msg_);
  }

private:
  ::duckietown_msgs::msg::CoordinationSignalETHZ17 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckietown_msgs::msg::CoordinationSignalETHZ17>()
{
  return duckietown_msgs::msg::builder::Init_CoordinationSignalETHZ17_header();
}

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL_ETHZ17__BUILDER_HPP_
