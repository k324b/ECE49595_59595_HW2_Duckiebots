// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duckietown_msgs:msg/IntersectionPose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__STRUCT_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duckietown_msgs__msg__IntersectionPose __attribute__((deprecated))
#else
# define DEPRECATED__duckietown_msgs__msg__IntersectionPose __declspec(deprecated)
#endif

namespace duckietown_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionPose_
{
  using Type = IntersectionPose_<ContainerAllocator>;

  explicit IntersectionPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->type = 0;
      this->likelihood = 0.0f;
    }
  }

  explicit IntersectionPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
      this->type = 0;
      this->likelihood = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;
  using _type_type =
    uint8_t;
  _type_type type;
  using _likelihood_type =
    float;
  _likelihood_type likelihood;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__likelihood(
    const float & _arg)
  {
    this->likelihood = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckietown_msgs__msg__IntersectionPose
    std::shared_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckietown_msgs__msg__IntersectionPose
    std::shared_ptr<duckietown_msgs::msg::IntersectionPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->likelihood != other.likelihood) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionPose_

// alias to use template instance with default allocator
using IntersectionPose =
  duckietown_msgs::msg::IntersectionPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE__STRUCT_HPP_
