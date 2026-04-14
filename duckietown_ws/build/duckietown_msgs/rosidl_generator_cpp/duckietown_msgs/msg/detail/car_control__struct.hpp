// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duckietown_msgs:msg/CarControl.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__STRUCT_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__duckietown_msgs__msg__CarControl __attribute__((deprecated))
#else
# define DEPRECATED__duckietown_msgs__msg__CarControl __declspec(deprecated)
#endif

namespace duckietown_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarControl_
{
  using Type = CarControl_<ContainerAllocator>;

  explicit CarControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steering = 0.0f;
      this->need_steering = false;
    }
  }

  explicit CarControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steering = 0.0f;
      this->need_steering = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _speed_type =
    float;
  _speed_type speed;
  using _steering_type =
    float;
  _steering_type steering;
  using _need_steering_type =
    bool;
  _need_steering_type need_steering;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__need_steering(
    const bool & _arg)
  {
    this->need_steering = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duckietown_msgs::msg::CarControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckietown_msgs::msg::CarControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::CarControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::CarControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckietown_msgs__msg__CarControl
    std::shared_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckietown_msgs__msg__CarControl
    std::shared_ptr<duckietown_msgs::msg::CarControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->need_steering != other.need_steering) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarControl_

// alias to use template instance with default allocator
using CarControl =
  duckietown_msgs::msg::CarControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__CAR_CONTROL__STRUCT_HPP_
