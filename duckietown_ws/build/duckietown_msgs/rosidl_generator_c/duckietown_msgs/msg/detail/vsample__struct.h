// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/Vsample.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__VSAMPLE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__VSAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vsample in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__Vsample
{
  float dl;
  float dr;
  float dt;
  float theta_angle_pose_delta;
  float x_axis_pose_delta;
  float y_axis_pose_delta;
} duckietown_msgs__msg__Vsample;

// Struct for a sequence of duckietown_msgs__msg__Vsample.
typedef struct duckietown_msgs__msg__Vsample__Sequence
{
  duckietown_msgs__msg__Vsample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__Vsample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__VSAMPLE__STRUCT_H_
