// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckietown_msgs:msg/IntersectionPose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__BUILDER_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckietown_msgs/msg/detail/intersection_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckietown_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionPose_likelihood
{
public:
  explicit Init_IntersectionPose_likelihood(::duckietown_msgs::msg::IntersectionPose & msg)
  : msg_(msg)
  {}
  ::duckietown_msgs::msg::IntersectionPose likelihood(::duckietown_msgs::msg::IntersectionPose::_likelihood_type arg)
  {
    msg_.likelihood = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

class Init_IntersectionPose_type
{
public:
  explicit Init_IntersectionPose_type(::duckietown_msgs::msg::IntersectionPose & msg)
  : msg_(msg)
  {}
  Init_IntersectionPose_likelihood type(::duckietown_msgs::msg::IntersectionPose::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_IntersectionPose_likelihood(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

class Init_IntersectionPose_theta
{
public:
  explicit Init_IntersectionPose_theta(::duckietown_msgs::msg::IntersectionPose & msg)
  : msg_(msg)
  {}
  Init_IntersectionPose_type theta(::duckietown_msgs::msg::IntersectionPose::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_IntersectionPose_type(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

class Init_IntersectionPose_y
{
public:
  explicit Init_IntersectionPose_y(::duckietown_msgs::msg::IntersectionPose & msg)
  : msg_(msg)
  {}
  Init_IntersectionPose_theta y(::duckietown_msgs::msg::IntersectionPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_IntersectionPose_theta(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

class Init_IntersectionPose_x
{
public:
  explicit Init_IntersectionPose_x(::duckietown_msgs::msg::IntersectionPose & msg)
  : msg_(msg)
  {}
  Init_IntersectionPose_y x(::duckietown_msgs::msg::IntersectionPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_IntersectionPose_y(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

class Init_IntersectionPose_header
{
public:
  Init_IntersectionPose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionPose_x header(::duckietown_msgs::msg::IntersectionPose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntersectionPose_x(msg_);
  }

private:
  ::duckietown_msgs::msg::IntersectionPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckietown_msgs::msg::IntersectionPose>()
{
  return duckietown_msgs::msg::builder::Init_IntersectionPose_header();
}

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__BUILDER_HPP_
