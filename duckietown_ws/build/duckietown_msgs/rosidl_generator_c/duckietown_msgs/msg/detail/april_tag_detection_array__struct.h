// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "duckietown_msgs/msg/detail/april_tag_detection__struct.h"

/// Struct defined in msg/AprilTagDetectionArray in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__AprilTagDetectionArray
{
  duckietown_msgs__msg__AprilTagDetection__Sequence detections;
} duckietown_msgs__msg__AprilTagDetectionArray;

// Struct for a sequence of duckietown_msgs__msg__AprilTagDetectionArray.
typedef struct duckietown_msgs__msg__AprilTagDetectionArray__Sequence
{
  duckietown_msgs__msg__AprilTagDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__AprilTagDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_
