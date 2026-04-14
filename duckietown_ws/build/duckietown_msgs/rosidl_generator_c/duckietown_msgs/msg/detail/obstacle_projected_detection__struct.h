// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/ObstacleProjectedDetection.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'type'
#include "duckietown_msgs/msg/detail/obstacle_type__struct.h"

/// Struct defined in msg/ObstacleProjectedDetection in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__ObstacleProjectedDetection
{
  geometry_msgs__msg__Point location;
  duckietown_msgs__msg__ObstacleType type;
  float distance;
} duckietown_msgs__msg__ObstacleProjectedDetection;

// Struct for a sequence of duckietown_msgs__msg__ObstacleProjectedDetection.
typedef struct duckietown_msgs__msg__ObstacleProjectedDetection__Sequence
{
  duckietown_msgs__msg__ObstacleProjectedDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__ObstacleProjectedDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__OBSTACLE_PROJECTED_DETECTION__STRUCT_H_
