// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Pose2DStamped.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Pose2DStamped in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Pose2DStamped
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double theta;
} duckietown_msgs__msg__Pose2DStamped;

// Struct for a sequence of duckietown_msgs__msg__Pose2DStamped.
typedef struct duckietown_msgs__msg__Pose2DStamped__Sequence
{
  duckietown_msgs__msg__Pose2DStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Pose2DStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__POSE2_D_STAMPED__STRUCT_H_
