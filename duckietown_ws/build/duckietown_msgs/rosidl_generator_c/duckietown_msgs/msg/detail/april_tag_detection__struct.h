// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/AprilTagDetection in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__AprilTagDetection
{
  int32_t id;
  double size;
  geometry_msgs__msg__PoseStamped pose;
} duckietown_msgs__msg__AprilTagDetection;

// Struct for a sequence of duckietown_msgs__msg__AprilTagDetection.
typedef struct duckietown_msgs__msg__AprilTagDetection__Sequence
{
  duckietown_msgs__msg__AprilTagDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__AprilTagDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
