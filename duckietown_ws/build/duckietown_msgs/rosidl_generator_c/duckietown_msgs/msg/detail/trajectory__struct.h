// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

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
// Member 'pos'
// Member 'vel'
// Member 'acc'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3_stamped__struct.h"

/// Struct defined in msg/Trajectory in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Trajectory
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3Stamped__Sequence pos;
  geometry_msgs__msg__Vector3Stamped__Sequence vel;
  geometry_msgs__msg__Vector3Stamped__Sequence acc;
  geometry_msgs__msg__Vector3Stamped__Sequence jerk;
} duckietown_msgs__msg__Trajectory;

// Struct for a sequence of duckietown_msgs__msg__Trajectory.
typedef struct duckietown_msgs__msg__Trajectory__Sequence
{
  duckietown_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
