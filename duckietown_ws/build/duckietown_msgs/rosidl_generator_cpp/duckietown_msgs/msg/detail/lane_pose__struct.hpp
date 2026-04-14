// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duckietown_msgs:msg/LanePose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_HPP_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_HPP_

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
# define DEPRECATED__duckietown_msgs__msg__LanePose __attribute__((deprecated))
#else
# define DEPRECATED__duckietown_msgs__msg__LanePose __declspec(deprecated)
#endif

namespace duckietown_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LanePose_
{
  using Type = LanePose_<ContainerAllocator>;

  explicit LanePose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->d = 0.0f;
      this->d_ref = 0.0f;
      this->sigma_d = 0.0f;
      this->phi = 0.0f;
      this->phi_ref = 0.0f;
      this->sigma_phi = 0.0f;
      this->curvature = 0.0f;
      this->curvature_ref = 0.0f;
      this->v_ref = 0.0f;
      this->status = 0l;
      this->in_lane = false;
    }
  }

  explicit LanePose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->d = 0.0f;
      this->d_ref = 0.0f;
      this->sigma_d = 0.0f;
      this->phi = 0.0f;
      this->phi_ref = 0.0f;
      this->sigma_phi = 0.0f;
      this->curvature = 0.0f;
      this->curvature_ref = 0.0f;
      this->v_ref = 0.0f;
      this->status = 0l;
      this->in_lane = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _d_type =
    float;
  _d_type d;
  using _d_ref_type =
    float;
  _d_ref_type d_ref;
  using _sigma_d_type =
    float;
  _sigma_d_type sigma_d;
  using _phi_type =
    float;
  _phi_type phi;
  using _phi_ref_type =
    float;
  _phi_ref_type phi_ref;
  using _sigma_phi_type =
    float;
  _sigma_phi_type sigma_phi;
  using _curvature_type =
    float;
  _curvature_type curvature;
  using _curvature_ref_type =
    float;
  _curvature_ref_type curvature_ref;
  using _v_ref_type =
    float;
  _v_ref_type v_ref;
  using _status_type =
    int32_t;
  _status_type status;
  using _in_lane_type =
    bool;
  _in_lane_type in_lane;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__d(
    const float & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__d_ref(
    const float & _arg)
  {
    this->d_ref = _arg;
    return *this;
  }
  Type & set__sigma_d(
    const float & _arg)
  {
    this->sigma_d = _arg;
    return *this;
  }
  Type & set__phi(
    const float & _arg)
  {
    this->phi = _arg;
    return *this;
  }
  Type & set__phi_ref(
    const float & _arg)
  {
    this->phi_ref = _arg;
    return *this;
  }
  Type & set__sigma_phi(
    const float & _arg)
  {
    this->sigma_phi = _arg;
    return *this;
  }
  Type & set__curvature(
    const float & _arg)
  {
    this->curvature = _arg;
    return *this;
  }
  Type & set__curvature_ref(
    const float & _arg)
  {
    this->curvature_ref = _arg;
    return *this;
  }
  Type & set__v_ref(
    const float & _arg)
  {
    this->v_ref = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__in_lane(
    const bool & _arg)
  {
    this->in_lane = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t NORMAL =
    0;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr int32_t ERROR =
    1;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    duckietown_msgs::msg::LanePose_<ContainerAllocator> *;
  using ConstRawPtr =
    const duckietown_msgs::msg::LanePose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::LanePose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duckietown_msgs::msg::LanePose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duckietown_msgs__msg__LanePose
    std::shared_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duckietown_msgs__msg__LanePose
    std::shared_ptr<duckietown_msgs::msg::LanePose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LanePose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->d_ref != other.d_ref) {
      return false;
    }
    if (this->sigma_d != other.sigma_d) {
      return false;
    }
    if (this->phi != other.phi) {
      return false;
    }
    if (this->phi_ref != other.phi_ref) {
      return false;
    }
    if (this->sigma_phi != other.sigma_phi) {
      return false;
    }
    if (this->curvature != other.curvature) {
      return false;
    }
    if (this->curvature_ref != other.curvature_ref) {
      return false;
    }
    if (this->v_ref != other.v_ref) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->in_lane != other.in_lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const LanePose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LanePose_

// alias to use template instance with default allocator
using LanePose =
  duckietown_msgs::msg::LanePose_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LanePose_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t LanePose_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace duckietown_msgs

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_HPP_
