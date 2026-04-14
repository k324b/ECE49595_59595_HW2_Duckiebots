// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duckietown_msgs:msg/CoordinationSignal.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL__STRUCT_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL__STRUCT_HPP_

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
# define DEPRECATED__duckietown_msgs__msg__CoordinationSignal __attribute__((deprecated))
#else
# define DEPRECATED__duckietown_msgs__msg__CoordinationSignal __declspec(deprecated)
#endif

namespace duckietown_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoordinationSignal_
{
  using Type = CoordinationSignal_<ContainerAllocator>;

  explicit CoordinationSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = "";
    }
  }

  explicit CoordinationSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    signal(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _signal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _signal_type signal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__signal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->signal = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OFF;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ON;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_A;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_B;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_C;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_GREEN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_PRIORITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SIGNAL_SACRIFICE_FOR_PRIORITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_GO_ALL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_STOP_ALL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_GO_N;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_GO_S;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_GO_W;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_GO_E;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TL_YIELD;

  // pointer types
  using RawPtr =
    duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckietown_msgs__msg__CoordinationSignal
    std::shared_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckietown_msgs__msg__CoordinationSignal
    std::shared_ptr<duckietown_msgs::msg::CoordinationSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinationSignal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinationSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinationSignal_

// alias to use template instance with default allocator
using CoordinationSignal =
  duckietown_msgs::msg::CoordinationSignal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::OFF = "light_off";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::ON = "traffic_light_go";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_A = "CAR_SIGNAL_A";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_B = "CAR_SIGNAL_B";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_C = "CAR_SIGNAL_C";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_GREEN = "CAR_SIGNAL_GREEN";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_PRIORITY = "CAR_SIGNAL_PRIORITY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::SIGNAL_SACRIFICE_FOR_PRIORITY = "CAR_SIGNAL_SACRIFICE_FOR_PRIORITY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_GO_ALL = "tl_go_all";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_STOP_ALL = "tl_stop_all";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_GO_N = "tl_go_N";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_GO_S = "tl_go_S";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_GO_W = "tl_go_W";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_GO_E = "tl_go_E";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CoordinationSignal_<ContainerAllocator>::TL_YIELD = "tl_yield";

}  // namespace msg

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__COORDINATION_SIGNAL__STRUCT_HPP_
