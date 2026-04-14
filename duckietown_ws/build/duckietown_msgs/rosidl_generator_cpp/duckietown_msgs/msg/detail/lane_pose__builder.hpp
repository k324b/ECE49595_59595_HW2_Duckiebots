// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duckietown_msgs:msg/LanePose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__BUILDER_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duckietown_msgs/msg/detail/lane_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duckietown_msgs
{

namespace msg
{

namespace builder
{

class Init_LanePose_in_lane
{
public:
  explicit Init_LanePose_in_lane(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  ::duckietown_msgs::msg::LanePose in_lane(::duckietown_msgs::msg::LanePose::_in_lane_type arg)
  {
    msg_.in_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_status
{
public:
  explicit Init_LanePose_status(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_in_lane status(::duckietown_msgs::msg::LanePose::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LanePose_in_lane(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_v_ref
{
public:
  explicit Init_LanePose_v_ref(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_status v_ref(::duckietown_msgs::msg::LanePose::_v_ref_type arg)
  {
    msg_.v_ref = std::move(arg);
    return Init_LanePose_status(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_curvature_ref
{
public:
  explicit Init_LanePose_curvature_ref(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_v_ref curvature_ref(::duckietown_msgs::msg::LanePose::_curvature_ref_type arg)
  {
    msg_.curvature_ref = std::move(arg);
    return Init_LanePose_v_ref(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_curvature
{
public:
  explicit Init_LanePose_curvature(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_curvature_ref curvature(::duckietown_msgs::msg::LanePose::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_LanePose_curvature_ref(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_sigma_phi
{
public:
  explicit Init_LanePose_sigma_phi(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_curvature sigma_phi(::duckietown_msgs::msg::LanePose::_sigma_phi_type arg)
  {
    msg_.sigma_phi = std::move(arg);
    return Init_LanePose_curvature(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_phi_ref
{
public:
  explicit Init_LanePose_phi_ref(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_sigma_phi phi_ref(::duckietown_msgs::msg::LanePose::_phi_ref_type arg)
  {
    msg_.phi_ref = std::move(arg);
    return Init_LanePose_sigma_phi(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_phi
{
public:
  explicit Init_LanePose_phi(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_phi_ref phi(::duckietown_msgs::msg::LanePose::_phi_type arg)
  {
    msg_.phi = std::move(arg);
    return Init_LanePose_phi_ref(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_sigma_d
{
public:
  explicit Init_LanePose_sigma_d(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_phi sigma_d(::duckietown_msgs::msg::LanePose::_sigma_d_type arg)
  {
    msg_.sigma_d = std::move(arg);
    return Init_LanePose_phi(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_d_ref
{
public:
  explicit Init_LanePose_d_ref(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_sigma_d d_ref(::duckietown_msgs::msg::LanePose::_d_ref_type arg)
  {
    msg_.d_ref = std::move(arg);
    return Init_LanePose_sigma_d(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_d
{
public:
  explicit Init_LanePose_d(::duckietown_msgs::msg::LanePose & msg)
  : msg_(msg)
  {}
  Init_LanePose_d_ref d(::duckietown_msgs::msg::LanePose::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_LanePose_d_ref(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

class Init_LanePose_header
{
public:
  Init_LanePose_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LanePose_d header(::duckietown_msgs::msg::LanePose::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LanePose_d(msg_);
  }

private:
  ::duckietown_msgs::msg::LanePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duckietown_msgs::msg::LanePose>()
{
  return duckietown_msgs::msg::builder::Init_LanePose_header();
}

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__BUILDER_HPP_
