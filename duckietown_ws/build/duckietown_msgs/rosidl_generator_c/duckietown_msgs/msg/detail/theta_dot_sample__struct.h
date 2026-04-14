// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/ThetaDotSample.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ThetaDotSample in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__ThetaDotSample
{
  float dl;
  float dr;
  float dt;
  float theta_angle_pose_delta;
} duckietown_msgs__msg__ThetaDotSample;

// Struct for a sequence of duckietown_msgs__msg__ThetaDotSample.
typedef struct duckietown_msgs__msg__ThetaDotSample__Sequence
{
  duckietown_msgs__msg__ThetaDotSample * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__ThetaDotSample__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__THETA_DOT_SAMPLE__STRUCT_H_
