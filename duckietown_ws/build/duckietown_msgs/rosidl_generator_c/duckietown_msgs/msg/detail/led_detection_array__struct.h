// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/LEDDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_ARRAY__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_ARRAY__STRUCT_H_

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
#include "duckietown_msgs/msg/detail/led_detection__struct.h"

/// Struct defined in msg/LEDDetectionArray in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__LEDDetectionArray
{
  duckietown_msgs__msg__LEDDetection__Sequence detections;
} duckietown_msgs__msg__LEDDetectionArray;

// Struct for a sequence of duckietown_msgs__msg__LEDDetectionArray.
typedef struct duckietown_msgs__msg__LEDDetectionArray__Sequence
{
  duckietown_msgs__msg__LEDDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__LEDDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_ARRAY__STRUCT_H_
