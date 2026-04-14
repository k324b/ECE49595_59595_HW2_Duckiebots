// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/LEDDetectionDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_DEBUG_INFO__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_DEBUG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'variance_map'
#include "sensor_msgs/msg/detail/compressed_image__struct.h"
// Member 'candidates'
#include "duckietown_msgs/msg/detail/vector2_d__struct.h"
// Member 'led_all_unfiltered'
#include "duckietown_msgs/msg/detail/led_detection_array__struct.h"

/// Struct defined in msg/LEDDetectionDebugInfo in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__LEDDetectionDebugInfo
{
  /// 0: idle, 1: capturing, 2: processing
  uint8_t state;
  float capture_progress;
  uint32_t cell_size[2];
  float crop_rect_norm[4];
  sensor_msgs__msg__CompressedImage variance_map;
  duckietown_msgs__msg__Vector2D__Sequence candidates;
  duckietown_msgs__msg__LEDDetectionArray led_all_unfiltered;
} duckietown_msgs__msg__LEDDetectionDebugInfo;

// Struct for a sequence of duckietown_msgs__msg__LEDDetectionDebugInfo.
typedef struct duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence
{
  duckietown_msgs__msg__LEDDetectionDebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__LEDDetectionDebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__LED_DETECTION_DEBUG_INFO__STRUCT_H_
