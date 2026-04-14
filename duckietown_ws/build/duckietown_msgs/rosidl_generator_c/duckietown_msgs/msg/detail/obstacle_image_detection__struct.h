// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/ObstacleImageDetection.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bounding_box'
#include "duckietown_msgs/msg/detail/rect__struct.h"
// Member 'type'
#include "duckietown_msgs/msg/detail/obstacle_type__struct.h"

/// Struct defined in msg/ObstacleImageDetection in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__ObstacleImageDetection
{
  duckietown_msgs__msg__Rect bounding_box;
  duckietown_msgs__msg__ObstacleType type;
} duckietown_msgs__msg__ObstacleImageDetection;

// Struct for a sequence of duckietown_msgs__msg__ObstacleImageDetection.
typedef struct duckietown_msgs__msg__ObstacleImageDetection__Sequence
{
  duckietown_msgs__msg__ObstacleImageDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__ObstacleImageDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_IMAGE_DETECTION__STRUCT_H_
