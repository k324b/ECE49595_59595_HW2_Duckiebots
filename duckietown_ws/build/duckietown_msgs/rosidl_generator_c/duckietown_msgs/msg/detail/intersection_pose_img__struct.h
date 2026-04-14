// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/IntersectionPoseImg.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE_IMG__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE_IMG__STRUCT_H_

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
// Member 'img'
#include "sensor_msgs/msg/detail/compressed_image__struct.h"

/// Struct defined in msg/IntersectionPoseImg in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__IntersectionPoseImg
{
  std_msgs__msg__Header header;
  float x;
  float y;
  float theta;
  uint8_t type;
  float likelihood;
  sensor_msgs__msg__CompressedImage img;
} duckietown_msgs__msg__IntersectionPoseImg;

// Struct for a sequence of duckietown_msgs__msg__IntersectionPoseImg.
typedef struct duckietown_msgs__msg__IntersectionPoseImg__Sequence
{
  duckietown_msgs__msg__IntersectionPoseImg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__IntersectionPoseImg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__INTERSECTION_POSE_IMG__STRUCT_H_
