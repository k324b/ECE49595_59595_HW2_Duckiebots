// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/LanePose.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
/**
  * Enum for status
 */
enum
{
  duckietown_msgs__msg__LanePose__NORMAL = 0l
};

/// Constant 'ERROR'.
enum
{
  duckietown_msgs__msg__LanePose__ERROR = 1l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LanePose in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__LanePose
{
  std_msgs__msg__Header header;
  /// lateral offset
  float d;
  /// lateral offset reference
  float d_ref;
  float sigma_d;
  /// heading error
  float phi;
  /// heading error reference
  float phi_ref;
  float sigma_phi;
  float curvature;
  /// Refernece Curvature
  float curvature_ref;
  /// Referenece Velocity
  float v_ref;
  /// Status of duckietbot 0 if normal, 1 if error is encountered
  int32_t status;
  /// Status of duckietbot in lane
  bool in_lane;
} duckietown_msgs__msg__LanePose;

// Struct for a sequence of duckietown_msgs__msg__LanePose.
typedef struct duckietown_msgs__msg__LanePose__Sequence
{
  duckietown_msgs__msg__LanePose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__LanePose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LANE_POSE__STRUCT_H_
