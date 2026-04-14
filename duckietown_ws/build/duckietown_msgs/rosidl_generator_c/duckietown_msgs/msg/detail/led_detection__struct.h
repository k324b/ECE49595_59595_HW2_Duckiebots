// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/LEDDetection.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp1'
// Member 'timestamp2'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'pixels_normalized'
#include "duckietown_msgs/msg/detail/vector2_d__struct.h"
// Member 'color'
#include "rosidl_runtime_c/string.h"
// Member 'signal_ts'
// Member 'signal'
// Member 'fft_fs'
// Member 'fft'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LEDDetection in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__LEDDetection
{
  /// initial timestamp of the camera stream used
  builtin_interfaces__msg__Time timestamp1;
  /// final timestamp of the camera stream used
  builtin_interfaces__msg__Time timestamp2;
  duckietown_msgs__msg__Vector2D pixels_normalized;
  float frequency;
  /// will be r, g or b
  rosidl_runtime_c__String color;
  /// some value of confidence for the detection (TBD)
  float confidence;
  /// for debug/visualization
  rosidl_runtime_c__double__Sequence signal_ts;
  rosidl_runtime_c__float__Sequence signal;
  rosidl_runtime_c__float__Sequence fft_fs;
  rosidl_runtime_c__float__Sequence fft;
} duckietown_msgs__msg__LEDDetection;

// Struct for a sequence of duckietown_msgs__msg__LEDDetection.
typedef struct duckietown_msgs__msg__LEDDetection__Sequence
{
  duckietown_msgs__msg__LEDDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__LEDDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION__STRUCT_H_
